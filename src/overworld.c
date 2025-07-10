#include "types.h"
#include "overworld.h"
#include "day_night.h"
#include "debug.h"
#include "main.h"
#include "palette.h"

void CB2_Overworld(void)
{
    bool8 fading = (gPaletteFade.active != 0);
    if (fading)
        SetVBlankCallback(NULL);
    OverworldBasic();
    UpdateDayNightTint();
    if (fading)
        SetFieldVBlankCallback();
}