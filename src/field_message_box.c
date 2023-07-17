#include "types.h"
#include "field_message_box.h"
#include "menu.h"
#include "save_time_util.h"
#include "string_util.h"
#include "task.h"
#include "text.h"

extern struct Window gFieldMessageBoxWindow;
extern u8 sMessageBoxMode;

static void PrintFieldMessageInstant(const u8 *message);
static void Task_FieldMessageBoxInstant(u8 taskId);

bool8 ShowFieldMessageInstant(const u8 *message)
{
    if (sMessageBoxMode != FIELD_MESSAGE_BOX_HIDDEN)
    {
        return FALSE;
    }
    else
    {
        PrintFieldMessageInstant(message);
        sMessageBoxMode = FIELD_MESSAGE_BOX_NORMAL;
        return TRUE;
    }
}

static void PrintFieldMessageInstant(const u8 *message)
{
    u8 taskId;
    u16 *hi, *lo;
    taskId = CreateTask(Task_FieldMessageBoxInstant, 80);

    hi = (u16 *)(&gTasks[taskId].data[1]);
    lo = (u16 *)(&gTasks[taskId].data[2]);

    *hi = (u32)(message) >> 16;
    *lo = (u32)(message)&0xffff;
}

static void Task_FieldMessageBoxInstant(u8 taskId)
{
    struct Task *task = &gTasks[taskId];
    switch (task->data[0])
    {
    case 0:
        TextWindow_LoadDialogueFrameTiles(&gFieldMessageBoxWindow);
        task->data[0]++;
        break;
    case 1:
        TextWindow_DrawDialogueFrame(&gFieldMessageBoxWindow);
        task->data[0]++;
        break;
    case 2:
        u16 *hi, *lo;
        hi = (u16 *)(&gTasks[taskId].data[1]);
        lo = (u16 *)(&gTasks[taskId].data[2]);

        u8 *message = (u8 *)((u32)(*hi << 16 | *lo));

        StringExpandPlaceholders(gStringVar4, message);
        Text_InitWindowAndPrintText(&gFieldMessageBoxWindow, gStringVar4, gMenuTextTileOffset, 2, 15);
        DestroyTask(taskId);
    }
}

void HideFieldMessageBoxInstant(void)
{
    u8 taskId = FindTaskIdByFunc(Task_FieldMessageBoxInstant);
    if (taskId != TASK_NONE)
        DestroyTask(taskId);

    TextWindow_EraseDialogueFrame(&gFieldMessageBoxWindow);
    sMessageBoxMode = FIELD_MESSAGE_BOX_HIDDEN;
}