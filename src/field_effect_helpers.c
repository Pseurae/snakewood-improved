#include "types.h"
#include "field_effect_helpers.h"
#include "event_object_movement.h"
#include "fieldmap.h"
#include "metatile_behavior.h"
#include "sprite.h"
#include "constants/field_effects.h"

u32 FldEff_Shadow_(void)
{
    u8 objectEventId;
    const struct ObjectEventGraphicsInfo *graphicsInfo;
    u8 spriteId;

    objectEventId =
        GetObjectEventIdByLocalIdAndMap(gFieldEffectArguments[0], gFieldEffectArguments[1], gFieldEffectArguments[2]);
    graphicsInfo = GetObjectEventGraphicsInfo(gObjectEvents[objectEventId].graphicsId);
    spriteId = CreateSpriteAtEnd(
        gFieldEffectObjectTemplatePointers[gShadowEffectTemplateIds[graphicsInfo->shadowSize]], 0, 0, 0x94);

    if (spriteId != MAX_SPRITES)
    {
        gSprites[spriteId].coordOffsetEnabled = TRUE;
        gSprites[spriteId].oam.objMode = 1;
        gSprites[spriteId].data[0] = gFieldEffectArguments[0];
        gSprites[spriteId].data[1] = gFieldEffectArguments[1];
        gSprites[spriteId].data[2] = gFieldEffectArguments[2];
        gSprites[spriteId].data[3] = (graphicsInfo->height >> 1) - gShadowVerticalOffsets[graphicsInfo->shadowSize];
    }
    return 0;
}
