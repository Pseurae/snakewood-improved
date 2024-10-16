#pragma once

#include "main.h"

#define KBEVENT_NONE           0
#define KBEVENT_PRESSED_A      5
#define KBEVENT_PRESSED_B      6
#define KBEVENT_PRESSED_SELECT 8
#define KBEVENT_PRESSED_START  9

enum
{
    PAGE_UPPER,
    PAGE_LOWER,
    PAGE_OTHERS,
};

enum
{
    MAIN_STATE_BEGIN_FADE_IN,
    MAIN_STATE_WAIT_FADE_IN,
    MAIN_STATE_HANDLE_INPUT,
    MAIN_STATE_MOVE_TO_OK_BUTTON,
    MAIN_STATE_START_PAGE_SWAP,
    MAIN_STATE_WAIT_PAGE_SWAP,
    MAIN_STATE_6,
    MAIN_STATE_UPDATE_SENT_TO_PC_MESSAGE,
    MAIN_STATE_BEGIN_FADE_OUT,
};

enum
{
    INPUT_STATE_DISABLED,
    INPUT_STATE_ENABLED,
};

struct NamingScreen
{
    /*0x00*/ u8 state;
    /*0x01*/ u8 templateNum;
    /*0x02*/ u16 nameLeftOffset;
    /*0x04*/ u16 bg1vOffset;
    /*0x06*/ u16 bg2vOffset;
    /*0x08*/ u16 bg1Priority;
    /*0x0A*/ u16 bg2Priority;
    /*0x0C*/ u8 bgToReveal;
    /*0x0D*/ u8 bgToHide;
    /*0x0E*/ u8 currentPage;
    /*0x0F*/ u8 cursorSpriteId;
    /*0x10*/ u8 pageIndicatorSpriteId;
    /*0x11*/ u8 textBuffer[0x10];
    /*0x21*/ u8 filler21[0x13];
    /*0x34*/ const struct NamingScreenTemplate *template;
    /*0x38*/ u8 *destBuffer;
    /*0x3C*/ u16 keyRepeatStartDelayCopy;
    /*0x3E*/ u16 speciesOrPlayerGender;
    /*0x40*/ u16 monGender;
    /*0x42*/ u32 monPersonality;
    /*0x46*/ MainCallback returnCallback;
};

void LONG_CALL TryStartButtonFlash(u8, u8, u8);
bool8 LONG_CALL AddTextCharacter(void);
void LONG_CALL SquishCursor(void);
void LONG_CALL SetInputState(u8);
void LONG_CALL MainState_StartPageSwap(void);
u8 LONG_CALL GetTextEntryPosition(void);
