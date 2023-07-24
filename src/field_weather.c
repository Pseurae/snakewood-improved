#include "types.h"
#include "field_weather.h"
#include "bios.h"
#include "fieldmap.h"
#include "palette.h"
#include "task.h"
#include "constants/field_weather.h"
#include "constants/weather.h"

void ReloadMapPalettes(void)
{
    gWeatherPtr->fadeScreenCounter = 0;
    LoadMapTilesetPalettes(gMapHeader.mapLayout);
    CpuFastFill(0x0, gPlttBufferFaded, 0x200 << 1);
}
