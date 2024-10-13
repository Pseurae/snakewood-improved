#include "types.h"
#include "item_use.h"
#include "task.h"

extern u8 gExpAllEnabled;

static const u8 sText_EnabledExpShare[] = _("Exp. Share is enabled.{PAUSE_UNTIL_PRESS}");
static const u8 sText_DisabledExpShare[] = _("Exp. Share is disabled.{PAUSE_UNTIL_PRESS}");

void ItemUseOutOfBattle_ExpShare(u8 taskId)
{
    gExpAllEnabled = !gExpAllEnabled;
    DisplayItemUseMessage(taskId, gTasks[taskId].data[2], gExpAllEnabled ? sText_EnabledExpShare : sText_DisabledExpShare);
}