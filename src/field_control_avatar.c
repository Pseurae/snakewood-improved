#include "types.h"
#include "field_control_avatar.h"
#include "field_message_box.h"
#include "flags.h"
#include "item_menu.h"
#include "main.h"
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

static bool8 EnableAutoRun(void)
{
    if (!FlagGet(FLAG_SYS_B_DASH))
        return FALSE;

    PlaySE(SE_SELECT);
    if (gAutorunEnabled)
    {
        gAutorunEnabled = FALSE;
        ScriptContext1_SetupScript(EventScript_DisableAutoRun);
    }
    else
    {
        gAutorunEnabled = TRUE;
        ScriptContext1_SetupScript(EventScript_EnableAutoRun);
    }

    return TRUE;
}