#include "types.h"
#include "menu.h"
#include "string_util.h"
#include "save_time_util.h"
#include "fieldmap.h"
#include "text.h"

void PrintSavePlayerName(s16 x, s16 y)
{
    u8 *player = gStringVar4;
    *(player++) = EXT_CTRL_CODE_BEGIN;
    *(player++) = EXT_CTRL_CODE_COLOR;
    *(player++) = TEXT_COLOR_BLUE;

    StringCopy(player, gPlayerName);
    Menu_PrintText(gOtherText_Player, x, y);
    MenuPrint_RightAligned(gStringVar4, x + 12, y);
}

void PrintSaveMapName(s16 x, s16 y)
{
    u8 *name = gStringVar4;
    *(name++) = EXT_CTRL_CODE_BEGIN;
    *(name++) = EXT_CTRL_CODE_COLOR;
    *(name++) = TEXT_COLOR_GREEN;

    CopyMapName(name, gMapHeader.regionMapSectionId);
    Menu_PrintText(gStringVar4, x, y);
}

void PrintSaveBadges(s16 x, s16 y)
{
    u8 *badges = gStringVar4;
    *(badges++) = EXT_CTRL_CODE_BEGIN;
    *(badges++) = EXT_CTRL_CODE_COLOR;
    *(badges++) = TEXT_COLOR_BLUE;

    Menu_PrintText(gOtherText_Badges, x, y);
    ConvertIntToDecimalString(badges, GetBadgeCount());
    MenuPrint_RightAligned(gStringVar4, x + 12, y);
}

void PrintSavePokedexCount(s16 x, s16 y)
{
    u8 *pokedex = gStringVar4;
    *(pokedex++) = EXT_CTRL_CODE_BEGIN;
    *(pokedex++) = EXT_CTRL_CODE_COLOR;
    *(pokedex++) = TEXT_COLOR_BLUE;

    Menu_PrintText(gOtherText_Pokedex, x, y);
    ConvertIntToDecimalStringN(pokedex, GetPokedexSeenCount(), 1, 3);
    MenuPrint_RightAligned(gStringVar4, x + 12, y);
}

void PrintSavePlayTime(s16 x, s16 y)
{
    u8 *playtime = gStringVar4;
    *(playtime++) = EXT_CTRL_CODE_BEGIN;
    *(playtime++) = EXT_CTRL_CODE_COLOR;
    *(playtime++) = TEXT_COLOR_BLUE;

    Menu_PrintText(gOtherText_PlayTime, x, y);
    FormatPlayTime(playtime, gPlayTimeHours, gPlayTimeMinutes, 1);
    MenuPrint_RightAligned(gStringVar4, x + 12, y);
}