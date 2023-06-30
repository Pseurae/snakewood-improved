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

struct PACKED ObjectEvent
{
    /*0x00*/ u32 active:1;
             u32 singleMovementActive:1;
             u32 triggerGroundEffectsOnMove:1;
             u32 triggerGroundEffectsOnStop:1;
             u32 disableCoveringGroundEffects:1; // disables ground effects that cover parts of the object's sprite
             u32 landingJump:1;
             u32 heldMovementActive:1;
             u32 heldMovementFinished:1;
    /*0x01*/ u32 frozen:1;
             u32 facingDirectionLocked:1;
             u32 disableAnim:1; // used to disable forced movement sliding animations (like on ice)
             u32 enableAnim:1;
             u32 inanimate:1;
             u32 invisible:1;
             u32 offScreen:1;
             u32 trackedByCamera:1; // only set for the player object
    /*0x02*/ u32 isPlayer:1;
             u32 hasReflection:1;
             u32 inShortGrass:1;
             u32 inShallowFlowingWater:1;
             u32 inSandPile:1;
             u32 inHotSprings:1;
             u32 hasShadow:1;
             u32 spriteAnimPausedBackup:1;
    /*0x03*/ u32 spriteAffineAnimPausedBackup:1;
             u32 disableJumpLandingGroundEffect:1;
             u32 fixedPriority:1;
    /*0x04*/ u8 spriteId;
    /*0x05*/ u8 graphicsId;
    /*0x06*/ u8 movementType;
    /*0x07*/ u8 trainerType;
    /*0x08*/ u8 localId;
    /*0x09*/ u8 mapNum;
    /*0x0A*/ u8 mapGroup;
    /*0x0B*/ u8 currentElevation:4;
             u8 previousElevation:4;
    /*0x0C*/ struct Coords16 initialCoords;
    /*0x10*/ struct Coords16 currentCoords;
    /*0x14*/ struct Coords16 previousCoords;
    /*0x18*/ u8 facingDirection:4;
    /*0x18*/ u8 movementDirection:4;
    /*0x19*/ union PACKED {
        u8 as_byte;
        struct PACKED {
            u16 x:4;
            u16 y:4;
        } as_nybbles;
    }  range;
    /*0x1A*/ u8 fieldEffectSpriteId;
    /*0x1B*/ u8 warpArrowSpriteId;
    /*0x1C*/ u8 movementActionId;
    /*0x1D*/ u8 trainerRange_berryTreeId;
    /*0x1E*/ u8 currentMetatileBehavior;
    /*0x1F*/ u8 previousMetatileBehavior;
    /*0x20*/ u8 previousMovementDirection;
    /*0x21*/ u8 directionSequenceIndex;
    /*0x22*/ u8 playerCopyableMovement; // used as an index to gCopyPlayerMovementFuncs for the "copy player" movement types
    /*size = 0x24*/
};

struct PACKED ObjectEventGraphicsInfo 
{
    /*0x00*/ u16 tileTag;
    /*0x02*/ u16 paletteTag;
    /*0x04*/ u16 bridgeReflectionPaletteTag;
    /*0x06*/ u16 size;
    /*0x08*/ s16 width;
    /*0x0A*/ s16 height;
    /*0x0C*/ u8 paletteSlot:4;
             u8 shadowSize:2;
             u8 inanimate:1;
             u8 disableReflectionPaletteLoad:1;
    /*0x0D*/ u8 tracks;
    /*0x10*/ const struct OamData *oam;
    /*0x14*/ const struct SubspriteTable *subspriteTables;
    /*0x18*/ const union AnimCmd *const *anims;
    /*0x1C*/ const struct SpriteFrameImage *images;
    /*0x20*/ const union AffineAnimCmd *const *affineAnims;
};

extern struct MapHeader gMapHeader;

void LoadMapTilesetPalettes(struct MapLayout *mapLayout);
const u8 *CopyMapName(u8 *dest, u16 b);
