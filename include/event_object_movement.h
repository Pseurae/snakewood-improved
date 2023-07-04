#pragma once

#include "fieldmap.h"
#include "sprite.h"

void GroundEffect_SpawnOnTallGrass(struct ObjectEvent *objEvent, struct Sprite *sprite);
void GroundEffect_MoveOnTallGrass(struct ObjectEvent *objEvent, struct Sprite *sprite);
void GroundEffect_SpawnOnLongGrass(struct ObjectEvent *objEvent, struct Sprite *sprite);
void GroundEffect_MoveOnLongGrass(struct ObjectEvent *objEvent, struct Sprite *sprite);
void GroundEffect_WaterReflection(struct ObjectEvent *objEvent, struct Sprite *sprite);
void GroundEffect_IceReflection(struct ObjectEvent *objEvent, struct Sprite *sprite);
void GroundEffect_FlowingWater(struct ObjectEvent *objEvent, struct Sprite *sprite);
void GroundEffect_SandTracks(struct ObjectEvent *objEvent, struct Sprite *sprite);
void GroundEffect_DeepSandTracks(struct ObjectEvent *objEvent, struct Sprite *sprite);
void GroundEffect_Ripple(struct ObjectEvent *objEvent, struct Sprite *sprite);
void GroundEffect_StepOnPuddle(struct ObjectEvent *objEvent, struct Sprite *sprite);
void GroundEffect_SandPile(struct ObjectEvent *objEvent, struct Sprite *sprite);
void GroundEffect_JumpOnTallGrass(struct ObjectEvent *objEvent, struct Sprite *sprite);
void GroundEffect_JumpOnLongGrass(struct ObjectEvent *objEvent, struct Sprite *sprite);
void GroundEffect_JumpOnShallowWater(struct ObjectEvent *objEvent, struct Sprite *sprite);
void GroundEffect_JumpOnWater(struct ObjectEvent *objEvent, struct Sprite *sprite);
void GroundEffect_JumpLandingDust(struct ObjectEvent *objEvent, struct Sprite *sprite);
void GroundEffect_ShortGrass(struct ObjectEvent *objEvent, struct Sprite *sprite);
void GroundEffect_HotSprings(struct ObjectEvent *objEvent, struct Sprite *sprite);
void GroundEffect_Seaweed(struct ObjectEvent *objEvent, struct Sprite *sprite);
void GroundEffect_Shadow(struct ObjectEvent *objEvent, struct Sprite *sprite);

void ObjectEventUpdateMetatileBehaviors(struct ObjectEvent *);
u32 StartFieldEffectForObjectEvent(u8, struct ObjectEvent *);
void GetGroundEffectFlags_Reflection(struct ObjectEvent *, u32 *);
void GetGroundEffectFlags_TallGrassOnSpawn(struct ObjectEvent *, u32 *);
void GetGroundEffectFlags_TallGrassOnBeginStep(struct ObjectEvent *, u32 *);
void GetGroundEffectFlags_LongGrassOnSpawn(struct ObjectEvent *, u32 *);
void GetGroundEffectFlags_LongGrassOnBeginStep(struct ObjectEvent *, u32 *);
void GetGroundEffectFlags_Tracks(struct ObjectEvent *, u32 *);
void GetGroundEffectFlags_SandPile(struct ObjectEvent *, u32 *);
void GetGroundEffectFlags_ShallowFlowingWater(struct ObjectEvent *, u32 *);
void GetGroundEffectFlags_Puddle(struct ObjectEvent *, u32 *);
void GetGroundEffectFlags_Ripple(struct ObjectEvent *, u32 *);
void GetGroundEffectFlags_ShortGrass(struct ObjectEvent *, u32 *);
void GetGroundEffectFlags_HotSprings(struct ObjectEvent *, u32 *);
void GetGroundEffectFlags_Seaweed(struct ObjectEvent *, u32 *);
void GetGroundEffectFlags_JumpLanding(struct ObjectEvent *, u32 *);

u8 GetObjectEventIdByLocalIdAndMap(u8, u8, u8);
const struct ObjectEventGraphicsInfo *GetObjectEventGraphicsInfo(u8);
bool8 TryGetObjectEventIdByLocalIdAndMap(u8, u8, u8, u8 *);
void DoShadowFieldEffect(struct ObjectEvent *);
bool8 ObjectEventIsMovementOverridden(struct ObjectEvent *);
u8 ObjectEventClearHeldMovementIfFinished(struct ObjectEvent *);
void CameraObjectReset2(void);
void SetSurfBlob_BobState(u8, u8);
u8 GetPlayerAvatarGraphicsIdByStateId(u8);
void ObjectEventSetGraphicsId(struct ObjectEvent *, u8);
void ObjectEventTurn(struct ObjectEvent *, u8);
void ObjectEventGetLocalIdAndMap(struct ObjectEvent *, void *, void *, void *);
void ObjectEventClearHeldMovementIfActive(struct ObjectEvent *);
void FreezeObjectEvents(void);

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
