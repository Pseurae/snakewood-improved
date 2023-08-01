#pragma once

bool8 LONG_CALL ShowFieldMessage(const u8 *message);
void LONG_CALL HideFieldMessageBox(void);

void LONG_CALL TextWindow_LoadDialogueFrameTiles(void *win);
void LONG_CALL TextWindow_DrawDialogueFrame(void *win);
void LONG_CALL TextWindow_EraseDialogueFrame(void *win);

enum
{
    FIELD_MESSAGE_BOX_HIDDEN,
    FIELD_MESSAGE_BOX_UNUSED,
    FIELD_MESSAGE_BOX_NORMAL,
    FIELD_MESSAGE_BOX_AUTO_SCROLL,
};

bool8 ShowFieldMessageInstant(const u8 *message);
void HideFieldMessageBoxInstant(void);
