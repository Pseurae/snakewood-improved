#pragma once

#include "decompress.h"

struct MonCoords
{
    u8 coords; // u8 x:4, y:4;
    u8 y_offset;
};

extern const struct MonCoords gMonFrontPicCoords[];
extern const struct CompressedSpriteSheet gMonFrontPicTable[];

extern u8 *const gMonSpriteGfx_Sprite_ptr[];
extern const struct CompressedSpritePalette gMonPaletteTable[];

void LONG_CALL SetMonSpriteTemplate(u16, u8);
u8 CreateMonSprite_PicBox(u16 species, s16 x, s16 y, u8 subpriority);
