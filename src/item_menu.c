#include "types.h"
#include "item_menu.h"
#include "event_object_movement.h"
#include "field_message_box.h"
#include "field_player_avatar.h"
#include "item.h"
#include "item_use.h"
#include "map_name_popup.h"
#include "menu.h"
#include "script.h"
#include "script_menu.h"
#include "sound.h"
#include "string_util.h"
#include "task.h"
#include "text.h"
#include "constants/items.h"
#include "constants/songs.h"

bool8 IsItemRegistered(u16 itemId);
void CompactRegisterItems(void);
void RegisterItem(u16 itemId);
void UnregisterItem(u16 itemId);
void HandleRegisterItem(u16 itemId);

void RedrawSelectIconForRegisteredItems(void);

void Menu_PrintTMHM(u16 taskId, int topItemOffset, int bottomItemOffset, int d)
{
    u8 i;

    for (i = topItemOffset; i <= bottomItemOffset; i++)
    {
        u8 slot;
        u8 y;
        u16 tilemapOffset;
        u8 *text;

        if (PrintCancelOption(i, d))
            break;

        slot = gBagPocketScrollStates[sCurrentBagPocket].scrollTop + i;
        y = i * 2 + 2;
        tilemapOffset = y * 32 + 14;
        text = gStringVar1;
        text = HighlightSelectedOption(taskId, text, i);

        if (gCurrentBagPocketItemSlots[slot].itemId < ITEM_HM01_CUT)
        {
            const u8 *moveName;
            gBGTilemapBuffers[2][tilemapOffset + 0] = 0x59;
            gBGTilemapBuffers[2][tilemapOffset + 1] = 0x4F;
            gBGTilemapBuffers[2][tilemapOffset + 32] = 0x69;
            gBGTilemapBuffers[2][tilemapOffset + 33] = 0x4F;
            moveName = gMoveNames[ItemIdToBattleMoveId(gCurrentBagPocketItemSlots[slot].itemId)];
            text[0] = EXT_CTRL_CODE_BEGIN;
            text[1] = EXT_CTRL_CODE_CLEAR_TO;
            text[2] = 0x8;
            text += 3;
            text = ConvertIntToDecimalStringN(text,
                gCurrentBagPocketItemSlots[slot].itemId - (ITEM_TM01_FOCUS_PUNCH - 1),
                STR_CONV_MODE_LEADING_ZEROS,
                2);
            text[0] = EXT_CTRL_CODE_BEGIN;
            text[1] = EXT_CTRL_CODE_CLEAR_TO;
            text[2] = 0x18;
            text += 3;
            text = AlignStringInMenuWindow(text, moveName, 0x78 - 2 * 6, 0);
        }
        else
        {
            const u8 *moveName;
            gBGTilemapBuffers[2][tilemapOffset + 0] = 0x105D;
            gBGTilemapBuffers[2][tilemapOffset + 1] = 0x105E;
            gBGTilemapBuffers[2][tilemapOffset + 32] = 0x106D;
            gBGTilemapBuffers[2][tilemapOffset + 33] = 0x106E;
            text[0] = EXT_CTRL_CODE_BEGIN;
            text[1] = EXT_CTRL_CODE_CLEAR_TO;
            text[2] = 0x11;
            text += 3;
            text = ConvertIntToDecimalString(text, gCurrentBagPocketItemSlots[slot].itemId - (ITEM_HM01_CUT - 1));
            text[0] = EXT_CTRL_CODE_BEGIN;
            text[1] = EXT_CTRL_CODE_CLEAR_TO;
            text[2] = 0x18;
            text += 3;
            moveName = gMoveNames[ItemIdToBattleMoveId(gCurrentBagPocketItemSlots[slot].itemId)];
            AlignStringInMenuWindow(text, moveName, 0x78, 0);
        }

        Menu_PrintText(gStringVar1, 14, y);
    }
}

extern u8 gUnknown_02038558;

void Menu_PrintKeyItem(u16 taskId, int topItemOffset, int bottomItemOffset, int d)
{
    u8 i;

    for (i = topItemOffset; i <= bottomItemOffset; i++)
    {
        u8 slot;
        u8 top;
        u8 *text;

        if (PrintCancelOption(i, d))
            break;

        slot = gBagPocketScrollStates[sCurrentBagPocket].scrollTop + i;
        top = i * 2 + 2;
        text = gStringVar1;
        text = HighlightSelectedOption(taskId, text, i);
        AlignStringInMenuWindow(text, ItemId_GetName(gCurrentBagPocketItemSlots[slot].itemId), 0x63, 0);
        Menu_PrintText(gStringVar1, 14, top);

        if (IsItemRegistered(gCurrentBagPocketItemSlots[slot].itemId))
            DrawSelectIcon(i);
        else
            EraseSelectIcon(i);
    }
}

void sub_80A7528(u8 a);
void sub_80A41D4(u8 taskId);
void sub_80A37C0(u8 taskId);

void RedrawSelectIconForRegisteredItems(void)
{
    u8 i;

    for (i = 0; i < 8; i++)
    {
        if (!IsItemRegistered(
                gCurrentBagPocketItemSlots[gBagPocketScrollStates[sCurrentBagPocket].scrollTop + i].itemId))
            EraseSelectIcon(i);
        else
            DrawSelectIcon(gBagPocketScrollStates[sCurrentBagPocket].cursorPos);
    }
}

void HandlePopupMenuAction_Register(u8 taskId)
{
    PlaySE(SE_SELECT);
    HandleRegisterItem(gSpecialVar_ItemId);
    RedrawSelectIconForRegisteredItems();
    sub_80A7528(0);
    sub_80A41D4(taskId);
    ItemListMenu_InitMenu();
    sub_80A37C0(taskId);
}

// Multiple Registered Items

bool8 IsItemRegistered(u16 itemId)
{
    u8 i;

    for (i = 0; i < REGISTERED_ITEMS_COUNT; ++i)
    {
        if (gRegisteredItems[i] == itemId)
            return TRUE;
    }

    return FALSE;
}

void CompactRegisterItems(void)
{
    u16 i;
    u16 j;

    for (i = 0; i < REGISTERED_ITEMS_COUNT - 1; i++)
    {
        for (j = i + 1; j <= REGISTERED_ITEMS_COUNT - 1; j++)
        {
            if (gRegisteredItems[i] == ITEM_NONE && gRegisteredItems[j] != ITEM_NONE)
            {
                u16 temp = gRegisteredItems[i];
                gRegisteredItems[i] = gRegisteredItems[j];
                gRegisteredItems[j] = temp;
            }
        }
    }
}

void RegisterItem(u16 itemId)
{
    u8 i;

    for (i = 0; i < REGISTERED_ITEMS_COUNT; ++i)
    {
        if (gRegisteredItems[i] == ITEM_NONE)
        {
            gRegisteredItems[i] = itemId;
            break;
        }
    }
}

void UnregisterItem(u16 itemId)
{
    u8 i;

    for (i = 0; i < REGISTERED_ITEMS_COUNT; ++i)
    {
        if (gRegisteredItems[i] == itemId)
        {
            gRegisteredItems[i] = ITEM_NONE;
            CompactRegisterItems();
            break;
        }
    }
}

void HandleRegisterItem(u16 itemId)
{
    if (IsItemRegistered(itemId))
    {
        UnregisterItem(itemId);
    }
    else
    {
        if (!IsItemRegistered(ITEM_NONE)) // Check for free slots
        {
            gRegisteredItems[0] = ITEM_NONE;
            CompactRegisterItems();
        }

        RegisterItem(itemId);
    }
}

void TryRemoveRegisteredItem(u16 itemId)
{
    UnregisterItem(itemId);
    RedrawSelectIconForRegisteredItems();
}

void EnsureRegisteredItemsInBag(void)
{
    u8 i;

    for (i = 0; i < REGISTERED_ITEMS_COUNT; ++i)
    {
        if (!CheckBagHasItem(gRegisteredItems[i], 1))
        {
            gRegisteredItems[i] = ITEM_NONE;
        }
    }

    CompactRegisterItems();
}

void UseRegisteredKeyItem(u16 item)
{
    u8 taskId;

    ScriptContext2_Enable();
    FreezeObjectEvents();
    PlayerFreeze();
    StopPlayerAvatar();
    gSpecialVar_ItemId = item;
    taskId = CreateTask(ItemId_GetFieldFunc(item), 8);

    if (taskId != 0xff)
        gTasks[taskId].data[2] = 1;
}

bool8 UseRegisteredKeyItemFromField(const u8 *script, const u8 *message)
{
    u8 i, numRegisteredItems;
    bool8 compatItems = FALSE;

    HideMapNamePopup();
    EnsureRegisteredItemsInBag();

    for (i = 0, numRegisteredItems = 0; i < REGISTERED_ITEMS_COUNT; ++i)
    {
        if (gRegisteredItems[i] == ITEM_NONE)
            continue;

        numRegisteredItems++;
    }

    if (numRegisteredItems)
    {
        if (numRegisteredItems == 1)
        {
            UseRegisteredKeyItem(gRegisteredItems[0]);
        }
        else
        {
            ShowFieldMessageInstant(message);
            ScriptContext1_SetupScript(script);
        }
    }
    else
    {
        ScriptContext1_SetupScript(Event_NoRegisteredItem);
    }
    return FALSE;
}

void DrawRegisteredItemsMultichoice(void)
{
    u8 i, numRegisteredItems;
    struct MenuAction actions[REGISTERED_ITEMS_COUNT];

    for (i = 0, numRegisteredItems = 0; i < REGISTERED_ITEMS_COUNT; ++i)
    {
        if (gRegisteredItems[i] == ITEM_NONE)
            continue;

        actions[numRegisteredItems].func = NULL;
        actions[numRegisteredItems].text = ItemId_GetName(gRegisteredItems[i]);
        numRegisteredItems++;
    }

    DrawMultichoiceMenu(0, 0, numRegisteredItems, actions, FALSE, gLastUsedRegisteredItem); // Store the last used index
}

static void Task_UseSelectedRegisteredItem(u8 taskId)
{
    // Make sure UseRegisteredKeyItem isn't called until after EventScript_UseRegisteredItem
    // is finished.
    if (!ScriptContext2_IsEnabled())
    {
        UseRegisteredKeyItem(gRegisteredItems[gSpecialVar_Result]);
        DestroyTask(taskId);
    }
}

void UseSelectedRegisteredItem(void)
{
    if (gSpecialVar_Result == 127)
        return;

    CreateTask(Task_UseSelectedRegisteredItem, 0xFF);
    gLastUsedRegisteredItem = gSpecialVar_Result;
}
