#pragma once

struct Tileset;

void LoadDayNightTilesetPalette(const struct Tileset *tileset, int destOffset, int size);
void UpdateDayNightTint(void);