#include "types.h"
#include "naming_screen.h"

extern struct NamingScreen *const gNamingScreenPtr;

u8 KeyboardKeyHandler_Character(u8 event)
{
    TryStartButtonFlash(3, 0, 0);
    if (event == KBEVENT_PRESSED_A)
    {
        u8 textFull = AddTextCharacter();

        if (gNamingScreenPtr->currentPage == PAGE_UPPER && GetTextEntryPosition() == 1)
            MainState_StartPageSwap();

        SquishCursor();
        if (textFull)
        {
            SetInputState(INPUT_STATE_DISABLED);
            gNamingScreenPtr->state = MAIN_STATE_MOVE_TO_OK_BUTTON;
        }
    }
    return FALSE;
}