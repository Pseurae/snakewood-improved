#pragma once

struct MapLayout
{
    u8 data[0x14];
};

struct MapHeader
{
    struct MapLayout *mapLayout;
    u8 data[0x17];
};

extern struct MapHeader gMapHeader;

void LoadMapTilesetPalettes(struct MapLayout *mapLayout);
