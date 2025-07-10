#include "types.h"
#include "item_use.h"
#include "bios.h"
#include "palette.h"
#include "stats_viewer.h"
#include "task.h"
#include "constants/gba.h"
#include "constants/rgb.h"

extern u8 gExpAllEnabled;

static const u8 sText_EnabledExpShare[] = _("Exp. Share is enabled.{PAUSE_UNTIL_PRESS}");
static const u8 sText_DisabledExpShare[] = _("Exp. Share is disabled.{PAUSE_UNTIL_PRESS}");

static void Task_HandleStatsViewerPaletteFade(u8 taskId);

void ItemUseOutOfBattle_ExpShare(u8 taskId)
{
    gExpAllEnabled = !gExpAllEnabled;
    DisplayItemUseMessage(
        taskId, gTasks[taskId].data[2], gExpAllEnabled ? sText_EnabledExpShare : sText_DisabledExpShare);
}

#define tState        data[0]
#define tSelectedItem data[2]

void ItemUseOutOfBattle_StatsViewer(u8 taskId)
{
    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_HandleStatsViewerPaletteFade;
}

static void Task_HandleStatsViewerPaletteFade(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    s16 *data = gTasks[taskId].data;

    if (tSelectedItem)
        GoToStatsViewerFromOverworld();
    else
        GoToStatsViewerFromBag();

    DmaFill16(3, 0x0, VRAM, VRAM_SIZE);
    DestroyTask(taskId);
}