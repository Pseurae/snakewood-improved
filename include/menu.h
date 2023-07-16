#pragma once

#include "text.h"

extern void *gMenuWindowPtr;
extern u16 gMenuTextTileOffset;

void InitMenuWindow(const struct WindowTemplate *);
u8 *AlignStringInMenuWindow(u8 *, const u8 *, u8, u8);
void Menu_PrintText(const u8 *str, u8 left, u8 top);
u8 Menu_PrintTextPixelCoords(const u8 *text, u8 left, u16 top, u8 a4);
void MenuPrint_Centered(const u8 *, u8, u8, u16);
void MenuPrint_RightAligned(const u8 *, u8, u8);
void AppendToList(u8 *list, u8 *pindex, u32 value);
u8 *AlignInt1InMenuWindow(u8 *dest, s32 value, u8 alignAmount, u8 alignType);
void Menu_GetTextColors(u8 *a1, u8 *a2, u8 *a3);
void Menu_DrawStdWindowFrame(u8, u8, u8, u8);
void Menu_EraseWindowRect(u8, u8, u8, u8);
void Menu_BlankWindowRect(u8 left, u8 top, u8 right, u8 bottom);
u8 PrintStringWithNewlines(
    void *win, u8 *dest, const u8 *src, u16 tileDataStartOffset, u8 left, u16 top, u8 width, u32 a8);
