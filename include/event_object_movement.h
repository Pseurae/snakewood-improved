#pragma once

#include "fieldmap.h"
#include "sprite.h"

void LONG_CALL ObjectEventUpdateMetatileBehaviors(struct ObjectEvent *);
u32 LONG_CALL StartFieldEffectForObjectEvent(u8, struct ObjectEvent *);

u8 LONG_CALL GetObjectEventIdByLocalIdAndMap(u8, u8, u8);
const struct ObjectEventGraphicsInfo LONG_CALL *GetObjectEventGraphicsInfo(u8);
bool8 LONG_CALL TryGetObjectEventIdByLocalIdAndMap(u8, u8, u8, u8 *);
void LONG_CALL DoShadowFieldEffect(struct ObjectEvent *);
bool8 LONG_CALL ObjectEventIsMovementOverridden(struct ObjectEvent *);
u8 LONG_CALL ObjectEventClearHeldMovementIfFinished(struct ObjectEvent *);
void LONG_CALL CameraObjectReset2(void);
void LONG_CALL SetSurfBlob_BobState(u8, u8);
u8 LONG_CALL GetPlayerAvatarGraphicsIdByStateId(u8);
void LONG_CALL ObjectEventSetGraphicsId(struct ObjectEvent *, u8);
void LONG_CALL ObjectEventTurn(struct ObjectEvent *, u8);
void LONG_CALL ObjectEventGetLocalIdAndMap(struct ObjectEvent *, void *, void *, void *);
void LONG_CALL ObjectEventClearHeldMovementIfActive(struct ObjectEvent *);
void LONG_CALL ObjectEventClearHeldMovement(struct ObjectEvent *);
void LONG_CALL FreezeObjectEvents(void);
u8 LONG_CALL SpawnSpecialObjectEvent(struct ObjectEventTemplate *objectEventTemplate);
void LONG_CALL RemoveObjectEvent(struct ObjectEvent *objectEvent);
u8 LONG_CALL SpawnSpecialObjectEventParametrized(
    u8 graphicsId, u8 movementType, u8 localId, s16 x, s16 y, u8 elevation);

#define GROUND_EFFECT_FLAG_TALL_GRASS_ON_SPAWN   (1 << 0)
#define GROUND_EFFECT_FLAG_TALL_GRASS_ON_MOVE    (1 << 1)
#define GROUND_EFFECT_FLAG_LONG_GRASS_ON_SPAWN   (1 << 2)
#define GROUND_EFFECT_FLAG_LONG_GRASS_ON_MOVE    (1 << 3)
#define GROUND_EFFECT_FLAG_ICE_REFLECTION        (1 << 4)
#define GROUND_EFFECT_FLAG_REFLECTION            (1 << 5)
#define GROUND_EFFECT_FLAG_SHALLOW_FLOWING_WATER (1 << 6)
#define GROUND_EFFECT_FLAG_SAND                  (1 << 7)
#define GROUND_EFFECT_FLAG_DEEP_SAND             (1 << 8)
#define GROUND_EFFECT_FLAG_RIPPLES               (1 << 9)
#define GROUND_EFFECT_FLAG_PUDDLE                (1 << 10)
#define GROUND_EFFECT_FLAG_SAND_PILE             (1 << 11)
#define GROUND_EFFECT_FLAG_LAND_IN_TALL_GRASS    (1 << 12)
#define GROUND_EFFECT_FLAG_LAND_IN_LONG_GRASS    (1 << 13)
#define GROUND_EFFECT_FLAG_LAND_IN_SHALLOW_WATER (1 << 14)
#define GROUND_EFFECT_FLAG_LAND_IN_DEEP_WATER    (1 << 15)
#define GROUND_EFFECT_FLAG_LAND_ON_NORMAL_GROUND (1 << 16)
#define GROUND_EFFECT_FLAG_SHORT_GRASS           (1 << 17)
#define GROUND_EFFECT_FLAG_HOT_SPRINGS           (1 << 18)
#define GROUND_EFFECT_FLAG_SEAWEED               (1 << 19)
#define GROUND_EFFECT_FLAG_SHADOW                (1 << 20)

#define OBJECT_EVENTS_COUNT                      16

extern struct ObjectEvent gObjectEvents[OBJECT_EVENTS_COUNT];
extern void (*const gGroundEffectFuncs[20])(struct ObjectEvent *objEvent, struct Sprite *sprite);
