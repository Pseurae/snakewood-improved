#include "types.h"
#include "field_control_avatar.h"
#include "event_object_movement.h"
#include "field_message_box.h"
#include "field_player_avatar.h"
#include "flags.h"
#include "item_menu.h"
#include "main.h"
#include "save_time_util.h"
#include "script.h"
#include "sound.h"
#include "constants/flags.h"
#include "constants/gba.h"
#include "constants/songs.h"

static bool8 EnableAutoRun(void);

int ProcessPlayerFieldInput_Rest(struct FieldInput *input)
{

    if (input->pressedSelectButton && UseRegisteredKeyItemFromField())
        return TRUE;

    if ((gMain.newKeys & R_BUTTON) == R_BUTTON && EnableAutoRun())
        return TRUE;

    return FALSE;
}

static const u8 sText_DisabledAutorun[] = _("Autorun {COLOR RED}disabled{COLOR DARK_GREY}.");
static const u8 sText_EnabledAutorun[] = _("Autorun {COLOR GREEN}enabled{COLOR DARK_GREY}.");

static bool8 EnableAutoRun(void)
{
    if (!FlagGet(FLAG_SYS_B_DASH))
        return FALSE;

    PlaySE(SE_SELECT);

    ScriptContext2_Enable();
    FreezeObjectEvents();
    PlayerFreeze();
    StopPlayerAvatar();

    gAutorunEnabled = !gAutorunEnabled;

    ShowFieldMessageInstant(gAutorunEnabled ? sText_EnabledAutorun : sText_DisabledAutorun);
    ScriptContext1_SetupScript(EventScript_CloseAutorunMessage);

    return TRUE;
}