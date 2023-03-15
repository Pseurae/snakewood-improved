#include "types.h"
#include "pokemon.h"
#include "battle.h"
#include "item.h"
#include "script_menu.h"
#include "constants/items.h"
#include "constants/pokemon.h"
#include "constants/species.h"

bool8 CheckIfMonCanUseHM(struct Pokemon *mon, u16 hm)
{
    u16 species = GetMonData(mon, MON_DATA_SPECIES2);
    if (!species || species == SPECIES_EGG)
        return FALSE;

    if ((CheckBagHasItem(hm, 1) && CanMonLearnTMHM(mon, hm - ITEM_TM01_FOCUS_PUNCH)) ||
        (MonKnowsMove(mon, ItemIdToBattleMoveId(hm)) == TRUE))
        return TRUE;

    return FALSE;
}

bool8 CheckIfPartyCanUseHM(void)
{
    u8 i;
    u16 tm = gSpecialVar_0x8004;

    gSpecialVar_Result = PARTY_SIZE;

    if (tm < ITEM_TM01_FOCUS_PUNCH || tm > ITEM_HM08_DIVE)
        return FALSE;

    if (!CheckBagHasItem(tm, 1))
        return FALSE;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        u16 species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES2);
        if (!species || species == SPECIES_EGG)
            return FALSE;

        if ((CanMonLearnTMHM(&gPlayerParty[i], tm - ITEM_TM01_FOCUS_PUNCH)) ||
            (MonKnowsMove(&gPlayerParty[i], ItemIdToBattleMoveId(tm)) == TRUE))
        {
            gSpecialVar_Result = i;
            gSpecialVar_0x8004 = species;
            return TRUE;
        }
    }

    return FALSE;
}

bool8 PartyHasMonWithSurf(void)
{
    gSpecialVar_0x8004 = ITEM_HM03_SURF;
    CheckIfPartyCanUseHM();

    if (gSpecialVar_Result == PARTY_SIZE)
        return FALSE;
    else
        return TRUE;
}

void CheckIfPartyHasMoveForElevator(void)
{
    u8 i, j;
    gSpecialVar_Result = 6;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        u16 species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES);
        if (!species)
            break;

        if (GetMonData(&gPlayerParty[i], MON_DATA_IS_EGG))
            continue;

        for (j = 0; j < 4; j++)
        {
            u16 moveId = GetMonData(&gPlayerParty[i], MON_DATA_MOVE1 + j);
            if (gBattleMoves[moveId].type == TYPE_ELECTRIC)
            {
                gSpecialVar_0x8004 = moveId;
                gSpecialVar_Result = i;
                break;
            }
        }
    }
}
