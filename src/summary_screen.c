#include "types.h"
#include "summary_screen.h"
#include "menu.h"
#include "pokemon.h"
#include "script_menu.h"
#include "string_util.h"
#include "text.h"
#include "constants/pokemon.h"

s8 ChangeSummaryPokemonNormal(s8 delta)
{
    struct Pokemon *mons = sMonSummaryScreen.monList.partyMons;
    u8 index = sMonSummaryScreen.monIndex;
    u8 numMons = sMonSummaryScreen.maxMonIndex + 1;
    delta += numMons;

    index = (index + delta) % numMons;
    if (sMonSummaryScreen.page != PSS_PAGE_INFO)
        while (GetMonData(&mons[index], MON_DATA_IS_EGG))
            index = (index + delta) % numMons;

    if (index == sMonSummaryScreen.monIndex)
        return -1;

    return index;
}

void PrintStatText(struct Pokemon *mon, u8 stat, u8 nature, u8 left, u8 top, u16 width)
{
    u8 *buffer = gStringVar1;
    s8 mod = gNatureStatTable[nature][stat - MON_DATA_ATK];

    *(buffer++) = EXT_CTRL_CODE_BEGIN;
    *(buffer++) = EXT_CTRL_CODE_COLOR;

    switch (mod)
    {
    case 0:                // Neutral
        *(buffer++) = 0xF; // Black
        break;
    case 1:                // Increased
        *(buffer++) = 0x9; // Red
        break;
    case -1:               // Decreased
        *(buffer++) = 0x2; // Light Blue
        break;
    }

    ConvertIntToDecimalString(buffer, GetMonData(mon, stat));
    MenuPrint_Centered(gStringVar1, left, top, width);
}

void SummaryScreen_PrintPokemonStats(struct Pokemon *mon)
{
    u8 nature = GetNature(mon);
    PrintStatText(mon, MON_DATA_ATK, nature, 16, 9, 50);
    PrintStatText(mon, MON_DATA_DEF, nature, 16, 11, 50);
    PrintStatText(mon, MON_DATA_SPATK, nature, 27, 7, 18);
    PrintStatText(mon, MON_DATA_SPDEF, nature, 27, 9, 18);
    PrintStatText(mon, MON_DATA_SPEED, nature, 27, 11, 18);
}