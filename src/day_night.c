#include "types.h"
#include "day_night.h"
#include "bios.h"
#include "decompress.h"
#include "event_object_movement.h"
#include "fieldmap.h"
#include "overworld.h"
#include "palette.h"
#include "save_time_util.h"
#include "sprite.h"
#include "constants/gba.h"
#include "constants/rgb.h"
#include "data/day_night/tints.h"

static EWRAM_DATA u8 sCurrentTintIndex = 0;

static u16 ApplyBlend(u32 argb, u16 rgb)
{
    u32 mA = (argb & 0xFF000000) >> (24 + 3);
    u32 mR = (argb & 0x00FF0000) >> (16 + 3);
    u32 mG = (argb & 0x0000FF00) >> (8 + 3);
    u32 mB = (argb & 0x000000FF) >> (0 + 3);

    u8 rem = 31 - mA;

    u16 r = (GET_R(rgb) * rem + mR * mA) / 31;
    u16 g = (GET_G(rgb) * rem + mG * mA) / 31;
    u16 b = (GET_B(rgb) * rem + mB * mA) / 31;

    return RGB(r, g, b);
}

static inline u8 GetCurrentTintIndex(void)
{
    return ((gPlayTimeHours * 60 + gPlayTimeMinutes) * 60 + gPlayTimeSeconds) % 144;
}

static inline u32 GetTintColor(void)
{
    sCurrentTintIndex = GetCurrentTintIndex();
    return sTimeBlendColors[sCurrentTintIndex];
}

static void WriteBlendedPalette(const u16 *src, u16 *dst, u16 size)
{
    u32 tintColor = GetTintColor();
    for (u32 i = 0; i < size; ++i)
        dst[i] = ApplyBlend(tintColor, src[i]);
}

void UpdateDayNightTint(void)
{
    if (sCurrentTintIndex == GetCurrentTintIndex())
        return;

    LoadDayNightTilesetPalette(
        gMapHeader.mapLayout->primaryTileset, BG_PLTT_ID(0), NUM_PALS_IN_PRIMARY * PLTT_SIZE_4BPP);
    LoadDayNightTilesetPalette(gMapHeader.mapLayout->secondaryTileset,
        BG_PLTT_ID(NUM_PALS_IN_PRIMARY),
        (NUM_PALS_TOTAL - NUM_PALS_IN_PRIMARY) * PLTT_SIZE_4BPP);

    for (u32 i = 0; i < 12; ++i)
    {
        u16 tag = GetObjectPaletteTag(i);
        if (tag != 0x11FF)
            PatchObjectDayNightPalette(tag, i);
    }
}

static void LoadDayNightPalette(const void *src, u16 offset, u16 size)
{
    WriteBlendedPalette(src, gPlttBufferUnfaded + offset, size / 2);
    // CpuCopy16(src, gPlttBufferUnfaded + offset, size);
    CpuCopy16(gPlttBufferUnfaded + offset, gPlttBufferFaded + offset, size);
}

void LoadDayNightTilesetPalette(const struct Tileset *tileset, int destOffset, int size)
{
    if (tileset)
    {
        if (tileset->isSecondary == FALSE)
        {
            u16 black = RGB_BLACK;
            LoadDayNightPalette(&black, destOffset, PLTT_SIZEOF(1));
            LoadDayNightPalette(tileset->palettes[0] + 1, destOffset + 1, size - PLTT_SIZEOF(1));
        }
        else if (tileset->isSecondary == TRUE)
        {
            LoadDayNightPalette(tileset->palettes[NUM_PALS_IN_PRIMARY], destOffset, size);
        }
        else
        {
            LZ77UnCompVram(tileset->palettes, (void *)EWRAM);
            LoadDayNightPalette((void *)EWRAM, destOffset, size);
        }
    }
}

void PatchObjectDayNightPalette(u16 paletteTag, u8 paletteSlot)
{
    u8 paletteIndex = FindObjectEventPaletteIndexByTag(paletteTag);
    LoadDayNightPalette(gObjectEventSpritePalettes[paletteIndex].data, 16 * paletteSlot + 0x100, 0x20);
}