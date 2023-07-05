#include "types.h"
#include "script_menu.h"
#include "item.h"
#include "menu.h"
#include "script.h"
#include "sprite.h"
#include "task.h"
#include "vars.h"
#include "constants/items.h"
#include "constants/vars.h"

static const u16 sRepelItems[3] = { ITEM_REPEL, ITEM_SUPER_REPEL, ITEM_MAX_REPEL };

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

    if (FindTaskIdByFunc(Task_TrainerPicWindow) != 0xFF)
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

static bool8 IsPicboxClosed(void);

bool8 (*ScriptMenu_GetTrainerPicboxWaitFunc(void))(void)
{
    u8 taskId = FindTaskIdByFunc(Task_TrainerPicWindow);

    if (taskId == 0xFF)
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
    if (FindTaskIdByFunc(Task_TrainerPicWindow) == 0xFF)
        return TRUE;
    else
        return FALSE;
}

#undef tState
#undef tTrainerId
#undef tTrainerSpriteId
#undef tWindowX
#undef tWindowY