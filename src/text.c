#include "types.h"
#include "text.h"

u16 *GetCursorTilemapPointerWithOffset(struct Window *win, u32 xOffset, u32 yOffset)
{
    u16 *ptr = NULL;
    if (win->tilemap)
    {
        u8 x = ((win->left + win->cursorX) >> 3) + xOffset + win->tilemapLeft;
        u8 y = ((win->top + win->cursorY) >> 3) + yOffset + win->tilemapTop;
        ptr = &win->tilemap[(y * 32) + x];
    }
    return ptr;
}

void SetCursorY(struct Window *win, u8 y)
{
    win->cursorY = y;
}