#pragma once

struct MapLayout
{
    u8 data[0x14];
};

struct MapEvents
{
    u8 data[0x14];
};

struct MapHeader
{
    struct MapLayout *mapLayout;
    struct MapEvents *events;
    u8 *mapScripts;
    struct MapConnections *connections;
    u16 music;
    u16 mapLayoutId;
    u8 regionMapSectionId;
    u8 cave;
    u8 weather;
    u8 mapType;
    u8 filler_18;
    u8 escapeRope;
    u8 flags;
    u8 battleType;
};

extern struct MapHeader gMapHeader;

void LoadMapTilesetPalettes(struct MapLayout *mapLayout);
const u8 *CopyMapName(u8 *dest, u16 b);
