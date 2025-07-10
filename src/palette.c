#include "types.h"
#include "bios.h"
#include "palette.h"
#include "day_night.h"

extern u8 gPaletteDecompressionBuffer[0x400];

void LoadCompressedPalette(const void *src, u16 offset, u16 size)
{
    LZ77UnCompWram(src, gPaletteDecompressionBuffer);
    CpuFill16(0, gPlttPreDN + offset, size);
    CpuCopy16(gPaletteDecompressionBuffer, gPlttBufferUnfaded + offset, size);
    CpuCopy16(gPaletteDecompressionBuffer, gPlttBufferFaded + offset, size);
}

void LoadPalette(const void *src, u16 offset, u16 size)
{
    CpuFill16(0, gPlttPreDN + offset, size);
    CpuCopy16(src, gPlttBufferUnfaded + offset, size);
    CpuCopy16(gPlttBufferUnfaded + offset, gPlttBufferFaded + offset, size);
}

void FillPalette(u16 value, u16 offset, u16 size)
{
    CpuFill16(0, gPlttPreDN + offset, size);
    CpuFill16(value, gPlttBufferUnfaded + offset, size);
    CpuFill16(value, gPlttBufferFaded + offset, size);
}