#include "types.h"
#include "script_menu.h"
#include "item.h"
#include "main.h"
#include "menu.h"
#include "palette.h"
#include "sound.h"
#include "script.h"
#include "sprite.h"
#include "task.h"
#include "vars.h"
#include "constants/gba.h"
#include "constants/items.h"
#include "constants/songs.h"
#include "constants/vars.h"

EWRAM_DATA u8 gRepelMenuChoices[3] = { 0 };
static const u16 sRepelItems[3] = { ITEM_REPEL, ITEM_SUPER_REPEL, ITEM_MAX_REPEL };

static void Task_TrainerPicWindow(u8 taskId);
static bool8 (*ScriptMenu_GetTrainerPicboxWaitFunc(void))(void);
static bool8 IsPicboxClosed(void);
static void StartListMenuTask(const struct MenuAction *list, u8 left, u8 top, u8 right, u8 bottom, u8 ignoreBPress, u8 displayCount, u8 totalCount);
static void Task_HandleListMenuInput(u8 taskId);

u16 LONG_CALL GetStringWidthInTilesForScriptMenu(const u8 *str);

void HasRepelItem(void)
{
    for (u8 i = 0; i < 3; i++)
    {
        if (CheckBagHasItem(sRepelItems[i], 1))
        {
            gSpecialVar_Result = TRUE;
            return;
        }
    }

    gSpecialVar_Result = FALSE;
}

void DrawRepelWindow(void)
{
    u8 count = 0;
    struct MenuAction actions[3];

    for (u8 i = 0; i < 3; i++)
    {
        if (CheckBagHasItem(sRepelItems[i], 1))
        {
            actions[count].func = NULL;
            actions[count].text = ItemId_GetName(sRepelItems[i]);
            gRepelMenuChoices[count] = i;
            count++;
        }
    }

    if (count > 1)
        DrawMultichoiceMenu(0, 0, count, actions, FALSE, 0);

    gSpecialVar_Result = count;
}

void ApplyRepel(void)
{
    gSpecialVar_Result = sRepelItems[gRepelMenuChoices[gSpecialVar_Result]];
    VarSet(VAR_REPEL_STEP_COUNT, ItemId_GetHoldEffectParam(gSpecialVar_Result));
    RemoveBagItem(gSpecialVar_Result, 1);
}

#define tState           data[0]
#define tTrainerId       data[1]
#define tTrainerSpriteId data[2]
#define tWindowX         data[3]
#define tWindowY         data[4]

static void Task_TrainerPicWindow(u8 taskId)
{
    struct Task *task = &gTasks[taskId];

    switch (task->tState)
    {
    case 0:
        task->tState++;
        break;
    case 1:
        break;
    case 2:
        FreeResourcesAndDestroySprite(&gSprites[task->tTrainerSpriteId]);
        task->tState++;
        break;
    case 3:
        Menu_EraseWindowRect(task->tWindowX, task->tWindowY, task->tWindowX + 9, task->tWindowY + 10);
        DestroyTask(taskId);
        break;
    }
}

bool8 ScriptMenu_ShowTrainerPic(u16 trainerId, u8 x, u8 y)
{
    u8 taskId;
    u8 spriteId;

    if (FindTaskIdByFunc(Task_TrainerPicWindow) != TASK_NONE)
    {
        return FALSE;
    }
    else
    {
        Menu_DrawStdWindowFrame(x, y, x + 9, y + 10);
        taskId = CreateTask(Task_TrainerPicWindow, 0x50);
        gTasks[taskId].tState = 0;
        gTasks[taskId].tTrainerId = trainerId;
        spriteId = CreateTrainerSprite(trainerId, x * 8 + 40, y * 8 + 40, 0, (u8 *)0x2000000);
        gTasks[taskId].tTrainerSpriteId = spriteId;
        gTasks[taskId].tWindowX = x;
        gTasks[taskId].tWindowY = y;
        gSprites[spriteId].callback = SpriteCallbackDummy;
        gSprites[spriteId].oam.priority = 0;
        return TRUE;
    }
}

static bool8 (*ScriptMenu_GetTrainerPicboxWaitFunc(void))(void)
{
    u8 taskId = FindTaskIdByFunc(Task_TrainerPicWindow);

    if (taskId == TASK_NONE)
        return NULL;
    gTasks[taskId].tState++;
    return IsPicboxClosed;
}

void CloseTrainerPicBox(void)
{
    bool8 (*func)(void) = ScriptMenu_GetTrainerPicboxWaitFunc();
    if (func == NULL)
        return;

    SetupNativeScript(&gScriptContext1, func);
}

static bool8 IsPicboxClosed(void)
{
    if (FindTaskIdByFunc(Task_TrainerPicWindow) == TASK_NONE)
        return TRUE;
    else
        return FALSE;
}

#undef tState
#undef tTrainerId
#undef tTrainerSpriteId
#undef tWindowX
#undef tWindowY

void DrawListMenu(u8 left, u8 top, u8 displayCount, u8 totalCount, const struct MenuAction *list, u8 ignoreBPress, u8 cursorPos)
{
    u16 width = GetStringWidthInTilesForScriptMenu(list[0].text);
    u16 newWidth;
    u8 i;
    u8 right;
    u8 bottom;

    for (i = 1; i < totalCount; i++)
    {
        newWidth = GetStringWidthInTilesForScriptMenu(list[i].text);
        if (width < newWidth)
            width = newWidth;
    }

    right = width;
    right = (right + left) + 1;

    if (right > 29)
    {
        left = left + (29 - right);
        right = 29;
    }

    bottom = top + (2 * displayCount + 1);

    Menu_DrawStdWindowFrame(left, top, right, bottom);
    Menu_PrintItems(left + 1, top + 1, displayCount, list);
    InitMenu(0, left + 1, top + 1, displayCount, cursorPos, right - left - 1);
    StartListMenuTask(list, left, top, right, bottom, ignoreBPress, displayCount, totalCount);
}

#define tListPtrHi    data[0]
#define tListPtrLo    data[1]
#define tLeft         data[2]
#define tTop          data[3]
#define tRight        data[4]
#define tBottom       data[5]
#define tIgnoreBPress data[6]
#define tDoWrap       data[7]
#define tCursor       data[8]
#define tScrollOffset data[9]
#define tDisplayCount data[10]
#define tTotalCount   data[11]

static void StartListMenuTask(const struct MenuAction *list, u8 left, u8 top, u8 right, u8 bottom, u8 ignoreBPress, u8 displayCount, u8 totalCount)
{
    u8 taskId = CreateTask(Task_HandleListMenuInput, 80);

    gTasks[taskId].tListPtrHi = (u32)list >> 16;
    gTasks[taskId].tListPtrLo = (u32)list;
 
    gTasks[taskId].tLeft = left;
    gTasks[taskId].tTop = top;
    gTasks[taskId].tRight = right;
    gTasks[taskId].tBottom = bottom;
    gTasks[taskId].tIgnoreBPress = ignoreBPress;
    gTasks[taskId].tDisplayCount = displayCount;
    gTasks[taskId].tTotalCount = totalCount;
    gTasks[taskId].tCursor = 0;
    gTasks[taskId].tScrollOffset = 0;

    if (totalCount > 3)
        gTasks[taskId].tDoWrap = TRUE;
    else
        gTasks[taskId].tDoWrap = FALSE;

    if (totalCount > displayCount)
    {
        ClearVerticalScrollIndicatorPalettes();
        CreateVerticalScrollIndicators(TOP_ARROW, (left + right + 1) << 2, top << 3);
        CreateVerticalScrollIndicators(BOTTOM_ARROW, (left + right + 1) << 2, bottom << 3);
        SetVerticalScrollIndicators(TOP_ARROW, INVISIBLE);
    }
}

static void Task_HandleListMenuInput(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    struct MenuAction *list = (struct MenuAction *)((u16)tListPtrHi << 16 | (u16)tListPtrLo);

    if (gPaletteFade.active) return;
    if (gMain.newKeys & A_BUTTON) {
        gSpecialVar_Result = tCursor + tScrollOffset;
        Menu_DestroyCursor();
        Menu_EraseWindowRect(gTasks[taskId].tLeft, gTasks[taskId].tTop, gTasks[taskId].tRight, gTasks[taskId].tBottom);
        DestroyTask(taskId);
        EnableBothScriptContexts();
        DestroyVerticalScrollIndicator(TOP_ARROW);
        DestroyVerticalScrollIndicator(BOTTOM_ARROW);
    } else if (gMain.newKeys & B_BUTTON) {
        if (tIgnoreBPress) return;

        gSpecialVar_Result = 127;
        Menu_DestroyCursor();
        Menu_EraseWindowRect(gTasks[taskId].tLeft, gTasks[taskId].tTop, gTasks[taskId].tRight, gTasks[taskId].tBottom);
        DestroyTask(taskId);
        EnableBothScriptContexts();
        DestroyVerticalScrollIndicator(TOP_ARROW);
        DestroyVerticalScrollIndicator(BOTTOM_ARROW);
    } else if ((gMain.newAndRepeatedKeys & DPAD_ANY) == DPAD_DOWN) {
        if (tCursor == tDisplayCount - 1) {
            if (tCursor + tScrollOffset == tTotalCount - 1) return;
            PlaySE(SE_SELECT);
            tScrollOffset++;
            Menu_BlankWindowRect(tLeft + 1, tTop + 1, tRight - 1, tBottom - 1);
            Menu_PrintItems(tLeft + 1, tTop + 1, tDisplayCount, list + tScrollOffset);
        } else {
            PlaySE(SE_SELECT);
            tCursor = Menu_MoveCursor(1);
        }
    } else if ((gMain.newAndRepeatedKeys & DPAD_ANY) == DPAD_UP) {
        if (tCursor == 0) {
            if (tScrollOffset == 0) return;
            PlaySE(SE_SELECT);
            tScrollOffset--;
            Menu_BlankWindowRect(tLeft + 1, tTop + 1, tRight - 1, tBottom - 1);
            Menu_PrintItems(tLeft + 1, tTop + 1, tDisplayCount, list + tScrollOffset);
        } else {
            PlaySE(SE_SELECT);
            tCursor = Menu_MoveCursor(-1);
        }
    }

    if (tScrollOffset == 0)
        SetVerticalScrollIndicators(TOP_ARROW, INVISIBLE);
    else
        SetVerticalScrollIndicators(TOP_ARROW, VISIBLE);

    if (tScrollOffset + tDisplayCount == tTotalCount)
        SetVerticalScrollIndicators(BOTTOM_ARROW, INVISIBLE);
    else
        SetVerticalScrollIndicators(BOTTOM_ARROW, VISIBLE);
}