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
#include "field_weather.h"
#include "fixed_math.h"
#include "constants/gba.h"
#include "constants/rgb.h"
#include "constants/field_weather.h"
#include "data/day_night/tints.h"

#define TINT_PERIODS_PER_HOUR 60
#define MINUTES_PER_TINT_PERIOD (60 / TINT_PERIODS_PER_HOUR)
#define TINT_PERIODS_COUNT (24 * TINT_PERIODS_PER_HOUR)

EWRAM_DATA u16 gPlttPreDN[0x200] = { 0 };

static EWRAM_DATA struct {
    u16 initialized:1;
    u16 phase:1;
    u16 prevPeriod;
    u16 currPeriod;
} sDayNightControl = { 0 };

static void GetLocalHoursAndMinutes(s8 *hours, s8 *minutes)
{
    u16 totalVBlanks = gPlayTimeVBlanks + 60 * (gPlayTimeSeconds + gPlayTimeMinutes * 60);
    *hours = (totalVBlanks / 60) % 24;
    *minutes = totalVBlanks % 60;
}

static bool8 ShouldTintOverworld(void)
{
    // if (IsMapTypeOutdoors(gMapHeader.mapType))
    //     return TRUE;

    return TRUE;
}

static void TintPalette_DayNight(const u16 *src, u16 *dst, u16 count, const u16 filter1[3], const u16 filter2[3], u8 coeff, bool8 excludeBlack)
{
    u32 i;
    u16 r1, g1, b1, r2, g2, b2, r, g, b;
    for (i = 0; i < count; ++i, ++src, ++dst)
    {
        if (*src == RGB_BLACK && excludeBlack) continue;

        r1 = Q_8_8_TO_INT(GET_R(*src) * filter1[0]);
        g1 = Q_8_8_TO_INT(GET_G(*src) * filter1[1]);
        b1 = Q_8_8_TO_INT(GET_B(*src) * filter1[2]);

        r2 = Q_8_8_TO_INT(GET_R(*src) * filter2[0]);
        g2 = Q_8_8_TO_INT(GET_G(*src) * filter2[1]);
        b2 = Q_8_8_TO_INT(GET_B(*src) * filter2[2]);

        r = r1 + (((r2 - r1) * coeff * 547) >> 15);
        g = g1 + (((g2 - g1) * coeff * 547) >> 15);
        b = b1 + (((b2 - b1) * coeff * 547) >> 15);

        r = min(r, 31);
        g = min(g, 31);
        b = min(b, 31);

        *dst = RGB(r, g, b);
    }
}

void RetintForDayNight(void)
{
    s8 hour, minutes, nextHour, hourPhase;
    u16 period;

    if (!ShouldTintOverworld())
        return;

    GetLocalHoursAndMinutes(&hour, &minutes);

    nextHour = (hour + 1) % 24;
    hourPhase = minutes / MINUTES_PER_TINT_PERIOD;

    period = hour * TINT_PERIODS_PER_HOUR + hourPhase;

    if (!sDayNightControl.phase)
    {
        if (!sDayNightControl.initialized || sDayNightControl.prevPeriod != period)
        {
            sDayNightControl.initialized = TRUE;
            sDayNightControl.prevPeriod = sDayNightControl.currPeriod = period;
            TintPalette_DayNight(gPlttPreDN, gPlttBufferUnfaded, BG_PLTT_SIZE >> 1, sTimeOfDayTints[hour], sTimeOfDayTints[nextHour], hourPhase, TRUE);
            sDayNightControl.phase = 1;
        }
    }
    else
    {
        TintPalette_DayNight(gPlttPreDN + (BG_PLTT_SIZE >> 1), gPlttBufferUnfaded + (BG_PLTT_SIZE >> 1), OBJ_PLTT_SIZE >> 1, sTimeOfDayTints[hour], sTimeOfDayTints[nextHour], hourPhase, TRUE);
        if (gWeatherPtr->palProcessingState != WEATHER_PAL_STATE_SCREEN_FADING_IN &&
            gWeatherPtr->palProcessingState != WEATHER_PAL_STATE_SCREEN_FADING_OUT)
        {
            CpuCopy16(gPlttBufferUnfaded, gPlttBufferFaded, PLTT_SIZE);
            ApplyWeatherColorMapIfIdle(gWeatherPtr->gammaIndex);
        }

        sDayNightControl.phase = 0;
    }
}

static void WriteBlendedPalette(u16 offset, u16 size)
{
    s8 hour, minutes, nextHour, hourPhase;
    u16 period;
    u8 tintType = ShouldTintOverworld();

    if (ShouldTintOverworld())
    {
        GetLocalHoursAndMinutes(&hour, &minutes);
    
        nextHour = (hour + 1) % 24;
        hourPhase = minutes / MINUTES_PER_TINT_PERIOD;
    
        period = hour * TINT_PERIODS_PER_HOUR + hourPhase;
    
        if (!sDayNightControl.initialized || sDayNightControl.currPeriod != period)
        {
            sDayNightControl.initialized = TRUE;
            sDayNightControl.currPeriod = period;
        }
    
        TintPalette_DayNight(&gPlttPreDN[offset], &gPlttBufferUnfaded[offset], size >> 1, sTimeOfDayTints[hour], sTimeOfDayTints[nextHour], hourPhase, FALSE);
    }
    else
    {
        CpuCopy16(&gPlttPreDN[offset], &gPlttBufferUnfaded[offset], size);
    }
}

static void LoadDayNightPalette(const void *src, u16 offset, u16 size)
{
    CpuCopy16(src, gPlttPreDN + offset, size);
    WriteBlendedPalette(offset, size);
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

u8 LoadDayNightSpritePalette(const struct SpritePalette *palette)
{
    u8 index = IndexOfSpritePaletteTag(palette->tag);

    if (index != 0xFF)
        return index;

    index = AllocSpritePalette(palette->tag);

    if (index != 0xFF)
        LoadDayNightPalette(palette->data, index * 16 + 0x100, 32);

    return index;
}