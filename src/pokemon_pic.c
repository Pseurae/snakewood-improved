#include "types.h"
#include "pokemon_pic.h"
#include "decompress.h"
#include "field_weather.h"
#include "palette.h"
#include "sprite.h"

u8 CreateMonSprite_PicBox(u16 species, s16 x, s16 y, u8 subpriority)
{
    DecompressPicFromTable_2(&gMonFrontPicTable[species],
        gMonFrontPicCoords[species].coords,
        gMonFrontPicCoords[species].y_offset,
        gMonSpriteGfx_Sprite_ptr[3],
        gMonSpriteGfx_Sprite_ptr[3],
        species);

    LoadCompressedObjectPalette(&gMonPaletteTable[species]);
    SetMonSpriteTemplate(species, 3);
    gCreatingSpriteTemplate.paletteTag = gMonPaletteTable[species].tag;
    PreservePaletteInWeather(IndexOfSpritePaletteTag(gMonPaletteTable[species].tag) + 0x10);
    return CreateSprite(&gCreatingSpriteTemplate, x, y, subpriority);
}