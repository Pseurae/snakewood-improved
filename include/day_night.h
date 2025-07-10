#pragma once

struct Tileset;
struct SpritePalette;

u8 LoadDayNightSpritePalette(const struct SpritePalette *palette);
void PatchObjectDayNightPalette(u16 paletteTag, u8 paletteSlot);
void LoadDayNightTilesetPalette(const struct Tileset *tileset, int destOffset, int size);
void UpdateDayNightTint(void);