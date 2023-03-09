#include "types.h"
#include "item.h"
#include "script_menu.h"
#include "vars.h"
#include "constants/items.h"

static const u16 sRepelItems[3] = { ITEM_REPEL, ITEM_SUPER_REPEL, ITEM_MAX_REPEL };

#define VAR_REPEL_STEP_COUNT 0x4021

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
