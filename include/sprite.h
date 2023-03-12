#pragma once

struct SpriteTemplate
{
    u16 tileTag;
    u16 paletteTag;
    const void *oam;
    const void *const *anims;
    const void *images;
    const void *const *affineAnims;
    void (*callback)(void *);
};

struct OamData
{
    /*0x00*/ u32 y:8;
    /*0x01*/ u32 affineMode:2; // 0x1, 0x2 = 0x3
    u32 objMode:2;             // 0x4, 0x8 = 0xC
    u32 mosaic:1;              // 0x10
    u32 bpp:1;                 // 0x20
    u32 shape:2;               // 0x40, 0x80

    /*0x02*/ u32 x:9;
    u32 matrixNum:5; // bits 3/4 are h-flip/v-flip if not in affine mode
    u32 size:2;

    /*0x04*/ u16 tileNum:10;
    u16 priority:2;
    u16 paletteNum:4;
    /*0x06*/ u16 affineParam;
};

struct Sprite;
typedef void (*SpriteCallback)(struct Sprite *);

struct Sprite
{
    /*0x00*/ struct OamData oam;
    /*0x08*/ const union AnimCmd *const *anims;
    /*0x0C*/ const struct SpriteFrameImage *images;
    /*0x10*/ const union AffineAnimCmd *const *affineAnims;
    /*0x14*/ const struct SpriteTemplate *template;
    /*0x18*/ const struct SubspriteTable *subspriteTables;
    /*0x1C*/ SpriteCallback callback;

    /*0x20*/ s16 x, y;
    /*0x24*/ s16 x2, y2;
    /*0x28*/ s8 centerToCornerVecX;
    /*0x29*/ s8 centerToCornerVecY;

    /*0x2A*/ u8 animNum;
    /*0x2B*/ u8 animCmdIndex;
    /*0x2C*/ u8 animDelayCounter:6;
    u8 animPaused:1;
    u8 affineAnimPaused:1;
    /*0x2D*/ u8 animLoopCounter;

    // general purpose data fields
    /*0x2E*/ s16 data[8];

    /*0x3E*/ u16 inUse:1;     // 1
    u16 coordOffsetEnabled:1; // 2
    bool16 invisible:1;       // 4
    u16 flags_3:1;            // 8
    u16 flags_4:1;            // 0x10
    u16 flags_5:1;            // 0x20
    u16 flags_6:1;            // 0x40
    u16 flags_7:1;            // 0x80
    /*0x3F*/ u16 hFlip:1;
    u16 vFlip:1;
    u16 animBeginning:1;
    u16 affineAnimBeginning:1;
    u16 animEnded:1;
    u16 affineAnimEnded:1;
    u16 usingSheet:1;
    u16 flags_f:1;

    /*0x40*/ u16 sheetTileStart;

    /*0x42*/ u8 subspriteTableNum:6;
    u8 subspriteMode:2;

    /*0x43*/ u8 subpriority;
};

extern struct Sprite gSprites[];
extern struct SpriteTemplate gCreatingSpriteTemplate;

u8 IndexOfSpritePaletteTag(u16 tag);
u8 CreateSprite(const void *template, s16 x, s16 y, u8 subpriority);
void SpriteCallbackDummy(struct Sprite *sprite);
void FreeResourcesAndDestroySprite(struct Sprite *sprite);
