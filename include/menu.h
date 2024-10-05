#pragma once

#include "text.h"

extern void *gMenuWindowPtr;
extern u16 gMenuTextTileOffset;

void LONG_CALL InitMenuWindow(const struct WindowTemplate *);
u8 LONG_CALL *AlignStringInMenuWindow(u8 *, const u8 *, u8, u8);
void LONG_CALL Menu_PrintText(const u8 *str, u8 left, u8 top);
u8 LONG_CALL Menu_PrintTextPixelCoords(const u8 *text, u8 left, u16 top, u8 a4);
void LONG_CALL MenuPrint_Centered(const u8 *, u8, u8, u16);
void LONG_CALL MenuPrint_RightAligned(const u8 *, u8, u8);
void LONG_CALL AppendToList(u8 *list, u8 *pindex, u32 value);
u8 LONG_CALL *AlignInt1InMenuWindow(u8 *dest, s32 value, u8 alignAmount, u8 alignType);
void LONG_CALL Menu_GetTextColors(u8 *a1, u8 *a2, u8 *a3);
void LONG_CALL Menu_DrawStdWindowFrame(u8, u8, u8, u8);
void LONG_CALL Menu_EraseWindowRect(u8, u8, u8, u8);
void LONG_CALL Menu_BlankWindowRect(u8 left, u8 top, u8 right, u8 bottom);
u8 LONG_CALL PrintStringWithNewlines(
    void *win, u8 *dest, const u8 *src, u16 tileDataStartOffset, u8 left, u16 top, u8 width, u32 a8);
void LONG_CALL Menu_PrintItems(u8, u8, u8, const void *);
void LONG_CALL Menu_DestroyCursor(void);
u8 LONG_CALL InitMenu(u8, u8, u8, u8, u8, u8);
u8 LONG_CALL Menu_MoveCursor(s8);

enum
{
    TOP_ARROW,
    BOTTOM_ARROW,
    LEFT_ARROW, // Bag arrows
    RIGHT_ARROW
};

enum
{
    VISIBLE,
    INVISIBLE
};

void LONG_CALL CreateVerticalScrollIndicators(u8, u16, u16);
void LONG_CALL SetVerticalScrollIndicators(u8, bool8);
void LONG_CALL DestroyVerticalScrollIndicator(u8);
void LONG_CALL LoadScrollIndicatorPalette(void);
void LONG_CALL ClearVerticalScrollIndicatorPalettes(void);