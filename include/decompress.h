#pragma once

struct CompressedSpritePalette
{
    const u8 *data;
    u16 tag;
};

struct CompressedSpriteSheet
{
    const u8 *data; // LZ77 compressed pixel data
    u16 size;       // Uncompressed size of pixel data
    u16 tag;
};

void LONG_CALL LoadCompressedObjectPic(const struct CompressedSpriteSheet *src);
void LONG_CALL DecompressPicFromTable_2(const void *src, u8 coords, u8 y_offset, void *d, void *dest, s32 species);
void LONG_CALL LZDecompressVram(const void *src, void *dest);
