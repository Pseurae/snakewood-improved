#pragma once

extern u16 gPlttBufferUnfaded[];
extern u16 gPlttBufferFaded[];

bool8 BeginNormalPaletteFade(u32 selectedPalettes, s8 delay, u8 startY, u8 targetY, u16 blendColor);
