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
