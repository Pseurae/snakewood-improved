#pragma once

struct Tileset;
struct SpritePalette;

extern u16 gPlttPreDN[0x200];

void RetintForDayNight(void);
u8 LoadDayNightSpritePalette(const struct SpritePalette *palette);
void PatchObjectDayNightPalette(u16 paletteTag, u8 paletteSlot);
void LoadDayNightTilesetPalette(const struct Tileset *tileset, int destOffset, int size);
void UpdateDayNightTint(void);