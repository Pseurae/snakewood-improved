#pragma once

#include "types.h"
#include "pokemon.h"

enum PokemonSummaryScreenPage
{
	PSS_PAGE_INFO,
	PSS_PAGE_SKILLS,
	PSS_PAGE_BATTLE_MOVES,
	PSS_PAGE_CONTEST_MOVES,
};

struct PACKED PokemonSummaryScreen {
    /*0x00*/ union {
        struct Pokemon *partyMons;
        struct BoxPokemon *boxMons;
    } monList;
    /*0x04*/ void *callback;
    /*0x08*/ u8 mode; // see enum PokemonSummaryScreenMode
    /*0x09*/ u8 monIndex;
    /*0x0A*/ u8 maxMonIndex;
    /*0x0B*/ u8 page; // enum PokemonSummaryScreenPage
    /*0x0C*/ u8 monSpriteId;
    /*0x0D*/ u8 ballSpriteId;
    /*0x0E*/ bool8 usingPC;
    /*0x0F*/ u8 inputHandlingTaskId;
    /*0x10*/ struct Pokemon loadedMon;
    /*0x74*/ u8 loadGfxState;
    /*0x75*/ u8 firstPage;
    /*0x76*/ u8 lastPage;
    /*0x77*/ u8 unk77;
    /*0x78*/ u8 unk78;
    /*0x79*/ u8 selectedMoveIndex;
    /*0x7A*/ u8 switchMoveIndex;
    /*0x7B*/ bool8 disableMoveOrderEditing;
    /*0x7C*/ u16 moveToLearn;
    /*0x7E*/ u8 headerTextId; // used as index into sPageHeaderTexts
    /*0x7F*/ u8 headerActionTextId; // used as index into sPageHeaderTexts
    /*0x80*/ u8 bgToggle;
    /*0x84*/ void *unk84;
};

extern struct PokemonSummaryScreen sMonSummaryScreen;

void SummaryScreen_PlaceTextTile_White(u8 tile, u8 x, u8 y);
void SummaryScreen_PrintColoredText(const u8 *text, u8 id, u8 left, u8 top);
void SummaryScreen_DrawTypeIcon(u8, u8, u8, u8);
u8 *SummaryScreen_SetTextColor(u8 *text, u8 id);
u8 *SummaryScreen_CopyColoredString(u8 *dest, const u8 *src, u8 id);

u16 GetMonMove(struct Pokemon *, u8);
u16 GetMonMovePP(struct Pokemon *mon, u8 moveId);
void SummaryScreen_SetSpriteInvisibility(u8 a, u8 invisible);

