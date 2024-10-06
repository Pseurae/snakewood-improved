#pragma once

typedef bool8 (*MenuFunc)();

struct MenuAction
{
    const u8 *text;
    MenuFunc func;
};

extern u16 gSpecialVar_0x8004;
extern u16 gSpecialVar_0x8005;
extern u16 gSpecialVar_Result;
extern u8 gRepelMenuChoices[3];

void LONG_CALL DrawMultichoiceMenu(
    u8 left, u8 top, u8 count, const struct MenuAction *list, u8 ignoreBPress, u8 cursorPos);
u8 LONG_CALL CreateTrainerSprite(u8 trainerSpriteID, s16 x, s16 y, u8 subpriority, u8 *buffer);
void DrawListMenu(
    u8 left, u8 top, u8 displayCount, u8 totalCount, const struct MenuAction *list, u8 ignoreBPress, u8 cursorPos);
