#include "types.h"
#include "item.h"
#include "menu.h"
#include "pokemon.h"
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
