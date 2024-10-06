#include "types.h"
#include "item.h"
#include "menu.h"
#include "pokemon.h"
#include "random.h"
#include "script_menu.h"
#include "string_util.h"
#include "constants/abilities.h"
#include "constants/items.h"
#include "constants/pokemon.h"

#define POKEMENU_FIRST_FIELD_MOVE_ID 10

enum
{
    POKEMENU_SUMMARY,        // 0
    POKEMENU_SWITCH,         // 1
    POKEMENU_ITEM,           // 2
    POKEMENU_CANCEL,         // 3
    POKEMENU_GIVE_ITEM,      // 4
    POKEMENU_TAKE_ITEM,      // 5
    POKEMENU_TAKE_MAIL,      // 6
    POKEMENU_MAIL,           // 7
    POKEMENU_READ_MAIL,      // 8
    POKEMENU_CANCEL_SUBMENU, // 9
    POKEMENU_CUT,            // 10
    POKEMENU_FLASH,          // 11
    POKEMENU_ROCK_SMASH,     // 12
    POKEMENU_STRENGTH,       // 13
    POKEMENU_SURF,           // 14
    POKEMENU_FLY,            // 15
    POKEMENU_DIVE,           // 16
    POKEMENU_WATERFALL,      // 17
    POKEMENU_TELEPORT,       // 18
    POKEMENU_DIG,            // 19
    POKEMENU_SECRET_POWER,   // 20
    POKEMENU_MILK_DRINK,     // 21
    POKEMENU_SOFT_BOILED,    // 22
    POKEMENU_SWEET_SCENT     // 23
};

#define sFieldMovesTerminator 0xFF

extern u8 gLastFieldPokeMenuOpened;
extern u8 sPokeMenuCursorPos;
extern u8 sPokeMenuOptionsNo;
extern u8 sPokeMenuOptionsOrder[8];
extern u16 sPokeMenuFieldMoves[];

void OpenPokemonContextMenu(void)
{
    sPokeMenuOptionsNo = 0;
    // if checking pokemon is an egg, we can't give it an item and it doesn't know any move
    if (GetMonData(&gPlayerParty[gLastFieldPokeMenuOpened], MON_DATA_IS_EGG))
    {
        AppendToList(sPokeMenuOptionsOrder, &sPokeMenuOptionsNo, POKEMENU_SUMMARY);
        AppendToList(sPokeMenuOptionsOrder, &sPokeMenuOptionsNo, POKEMENU_SWITCH);
        AppendToList(sPokeMenuOptionsOrder, &sPokeMenuOptionsNo, POKEMENU_CANCEL);
    }
    else
    {
        if (CheckIfMonCanUseHM(&gPlayerParty[gLastFieldPokeMenuOpened], ITEM_HM05_FLASH))
            AppendToList(sPokeMenuOptionsOrder, &sPokeMenuOptionsNo, POKEMENU_FLASH);

        if (CheckIfMonCanUseHM(&gPlayerParty[gLastFieldPokeMenuOpened], ITEM_HM02_FLY))
            AppendToList(sPokeMenuOptionsOrder, &sPokeMenuOptionsNo, POKEMENU_FLY);

        u16 moveID, tableID;
        for (moveID = 0; moveID < 4; moveID++) // 4, max number of possible field moves
        {
            for (tableID = 8; sPokeMenuFieldMoves[tableID] != sFieldMovesTerminator; tableID++)
            {
                u16 move = GetMonData(&gPlayerParty[gLastFieldPokeMenuOpened], MON_DATA_MOVE1 + moveID);
                if (move == sPokeMenuFieldMoves[tableID])
                {
                    u8 fieldID = tableID + POKEMENU_FIRST_FIELD_MOVE_ID;
                    AppendToList(sPokeMenuOptionsOrder, &sPokeMenuOptionsNo, fieldID);
                    break;
                }
            }
        }
        AppendToList(sPokeMenuOptionsOrder, &sPokeMenuOptionsNo, POKEMENU_SUMMARY);

        // can't switch a pokemon if it's the only one in the party
        if (GetMonData(&gPlayerParty[1], MON_DATA_SPECIES) != 0)
            AppendToList(sPokeMenuOptionsOrder, &sPokeMenuOptionsNo, POKEMENU_SWITCH);

        if (ItemIsMail(GetMonData(&gPlayerParty[gLastFieldPokeMenuOpened], MON_DATA_HELD_ITEM)))
            AppendToList(sPokeMenuOptionsOrder, &sPokeMenuOptionsNo, POKEMENU_MAIL);
        else
            AppendToList(sPokeMenuOptionsOrder, &sPokeMenuOptionsNo, POKEMENU_ITEM);

        AppendToList(sPokeMenuOptionsOrder, &sPokeMenuOptionsNo, POKEMENU_CANCEL);
    }
}

static const u8 sNatureName_Hardy[] = _("HARDY");
static const u8 sNatureName_Lonely[] = _("LONELY");
static const u8 sNatureName_Brave[] = _("BRAVE");
static const u8 sNatureName_Adamant[] = _("ADAMANT");
static const u8 sNatureName_Naughty[] = _("NAUGHTY");
static const u8 sNatureName_Bold[] = _("BOLD");
static const u8 sNatureName_Docile[] = _("DOCILE");
static const u8 sNatureName_Relaxed[] = _("RELAXED");
static const u8 sNatureName_Impish[] = _("IMPISH");
static const u8 sNatureName_Lax[] = _("LAX");
static const u8 sNatureName_Timid[] = _("TIMID");
static const u8 sNatureName_Hasty[] = _("HASTY");
static const u8 sNatureName_Serious[] = _("SERIOUS");
static const u8 sNatureName_Jolly[] = _("JOLLY");
static const u8 sNatureName_Naive[] = _("NAIVE");
static const u8 sNatureName_Modest[] = _("MODEST");
static const u8 sNatureName_Mild[] = _("MILD");
static const u8 sNatureName_Quiet[] = _("QUIET");
static const u8 sNatureName_Bashful[] = _("BASHFUL");
static const u8 sNatureName_Rash[] = _("RASH");
static const u8 sNatureName_Calm[] = _("CALM");
static const u8 sNatureName_Gentle[] = _("GENTLE");
static const u8 sNatureName_Sassy[] = _("SASSY");
static const u8 sNatureName_Careful[] = _("CAREFUL");
static const u8 sNatureName_Quirky[] = _("QUIRKY");

extern const u8 gOtherText_CancelNoTerminator[];

const struct MenuAction sNatureMenuActions[] = {
    {             sNatureName_Hardy, NULL },
    {            sNatureName_Lonely, NULL },
    {             sNatureName_Brave, NULL },
    {           sNatureName_Adamant, NULL },
    {           sNatureName_Naughty, NULL },
    {              sNatureName_Bold, NULL },
    {            sNatureName_Docile, NULL },
    {           sNatureName_Relaxed, NULL },
    {            sNatureName_Impish, NULL },
    {               sNatureName_Lax, NULL },
    {             sNatureName_Timid, NULL },
    {             sNatureName_Hasty, NULL },
    {           sNatureName_Serious, NULL },
    {             sNatureName_Jolly, NULL },
    {             sNatureName_Naive, NULL },
    {            sNatureName_Modest, NULL },
    {              sNatureName_Mild, NULL },
    {             sNatureName_Quiet, NULL },
    {           sNatureName_Bashful, NULL },
    {              sNatureName_Rash, NULL },
    {              sNatureName_Calm, NULL },
    {            sNatureName_Gentle, NULL },
    {             sNatureName_Sassy, NULL },
    {           sNatureName_Careful, NULL },
    {            sNatureName_Quirky, NULL },
    { gOtherText_CancelNoTerminator, NULL }
};

void DrawNaturesWindow(void)
{
    DrawListMenu(0, 0, 6, ARRAY_COUNT(sNatureMenuActions), sNatureMenuActions, FALSE, 0);
}

void BufferNatureName(void)
{
    if (gSpecialVar_Result >= 25)
        return;
    StringCopy(gStringVar1, gNatureNames[gSpecialVar_Result]);
}

void ChangePartyMonNature(void)
{
    u8 nature = gSpecialVar_0x8005;
    u8 partyMonIndex = gSpecialVar_0x8004;

    struct Pokemon *mon = &gPlayerParty[partyMonIndex];

    mon->box.nature = nature + 1;

    CalculateMonStats(mon);
}

void CheckIfSpeciesHasAlternateAbility(void)
{
    gSpecialVar_Result = gBaseStats[gSpecialVar_Result].ability2 != ABILITY_NONE;
}

void ChangePartyMonAbility(void)
{
    struct Pokemon *mon = &gPlayerParty[gSpecialVar_0x8004];
    u8 altAbility = !GetMonData(mon, MON_DATA_ALT_ABILITY);
    SetMonData(mon, MON_DATA_ALT_ABILITY, &altAbility);
    CalculateMonStats(mon);
}

void BufferAlternateAbilityName(void)
{
    struct Pokemon *mon = &gPlayerParty[gSpecialVar_0x8004];
    StringCopy(gStringVar1,
        gAbilityNames[GetAbilityBySpecies(GetMonData(mon, MON_DATA_SPECIES), !GetMonData(mon, MON_DATA_ALT_ABILITY))]);
}