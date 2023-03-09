#pragma once

#include "types.h"

typedef bool8 (*MenuFunc)();

struct MenuAction
{
   const u8 *text;
   MenuFunc func;
};

extern u16 gSpecialVar_0x8004;
extern u16 gSpecialVar_Result;
extern u8 gRepelMenuChoices[3];

void DrawMultichoiceMenu(u8 left, u8 top, u8 count, const struct MenuAction *list, u8 ignoreBPress, u8 cursorPos);
