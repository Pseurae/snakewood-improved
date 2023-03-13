#include "types.h"
#include "field_weather.h"
#include "bios.h"
#include "fieldmap.h"
#include "palette.h"
#include "task.h"
#include "constants/field_weather.h"
#include "constants/weather.h"

void FadeScreen(u8 mode, u8 delay)
{
    u32 fadeColor;
    bool8 fadeOut;
    bool8 useWeatherPal;

    switch (mode)
    {
    case FADE_FROM_BLACK:
        fadeColor = 0;
        fadeOut = FALSE;
        break;
    case FADE_FROM_WHITE:
        fadeColor = 0xFFFF;
        fadeOut = FALSE;
        break;
    case FADE_TO_BLACK:
        fadeColor = 0;
        fadeOut = TRUE;
        break;
    case FADE_TO_WHITE:
        fadeColor = 0xFFFF;
        fadeOut = TRUE;
        break;
    default:
        return;
    }

    switch (gWeatherPtr->currWeather)
    {
    case WEATHER_RAIN_LIGHT:
    case WEATHER_RAIN_MED:
    case WEATHER_RAIN_HEAVY:
    case WEATHER_SNOW:
    case WEATHER_FOG_1:
    case WEATHER_SHADE:
    case WEATHER_DROUGHT:
        useWeatherPal = TRUE;
        break;
    default:
        useWeatherPal = FALSE;
        break;
    }

    if (fadeOut)
    {
        if (useWeatherPal)
            CpuFastCopy(gPlttBufferFaded, gPlttBufferUnfaded, 0x200 << 1);

        BeginNormalPaletteFade(0xFFFFFFFF, delay, 0, 16, fadeColor);
        gWeatherPtr->palProcessingState = WEATHER_PAL_STATE_SCREEN_FADING_OUT;
    }
    else
    {
        gWeatherPtr->fadeDestColor = fadeColor;

        if (useWeatherPal)
        {
            LoadMapTilesetPalettes(gMapHeader.mapLayout);
            CpuFastFill(0x0, gPlttBufferFaded, 0x200 << 1);
            gWeatherPtr->fadeScreenCounter = 0;
        }
        else
            BeginNormalPaletteFade(0xFFFFFFFF, delay, 16, 0, fadeColor);

        gWeatherPtr->palProcessingState = WEATHER_PAL_STATE_SCREEN_FADING_IN;
        gWeatherPtr->fadeInFirstFrame = 1;
        gWeatherPtr->fadeInTimer = 0;

        Weather_SetBlendCoeffs(gWeatherPtr->currBlendEVA, gWeatherPtr->currBlendEVB);
        gWeatherPtr->readyForInit = TRUE;
    }
}
