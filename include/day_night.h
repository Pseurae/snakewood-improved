#pragma once

struct Tileset;

void PatchObjectDayNightPalette(u16 paletteTag, u8 paletteSlot);
void LoadDayNightTilesetPalette(const struct Tileset *tileset, int destOffset, int size);
void UpdateDayNightTint(void);