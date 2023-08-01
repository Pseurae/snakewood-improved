#pragma once

extern u16 gPlttBufferUnfaded[];
extern u16 gPlttBufferFaded[];

void LONG_CALL LoadCompressedObjectPalette(const void *src);
bool8 LONG_CALL BeginNormalPaletteFade(u32 selectedPalettes, s8 delay, u8 startY, u8 targetY, u16 blendColor);
void LONG_CALL LoadPalette(const void *, u16, u16);
void LONG_CALL LoadCompressedPalette(const void *, u16, u16);
void LONG_CALL TransferPlttBuffer(void);
