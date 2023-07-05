#include "types.h"
#include "event_object_movement.h"
#include "field_effect_helpers.h"
#include "field_weather.h"
#include "fieldmap.h"
#include "metatile_behavior.h"
#include "sprite.h"
#include "constants/field_effects.h"
#include "constants/gba.h"
#include "constants/weather.h"

static bool8 IsSuitableWeatherForShadow(void);

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

void GetGroundEffectFlags_Shadow(struct ObjectEvent *objEvent, u32 *flags);
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

static bool8 IsSuitableWeatherForShadow(void)
{
    switch (gWeatherPtr->currWeather)
    {
    case WEATHER_NONE:
    case WEATHER_SUNNY:
    case WEATHER_SHADE:
    case WEATHER_CLOUDS:
        return TRUE;
    }

    return FALSE;
}

void GetGroundEffectFlags_Shadow(struct ObjectEvent *objEvent, u32 *flags)
{
    if (!IsSuitableWeatherForShadow() || MetatileBehavior_IsPokeGrass(objEvent->currentMetatileBehavior)
        || MetatileBehavior_IsSurfableWaterOrUnderwater(objEvent->currentMetatileBehavior)
        || MetatileBehavior_IsSurfableWaterOrUnderwater(objEvent->previousMetatileBehavior)
        || MetatileBehavior_IsReflective(objEvent->currentMetatileBehavior)
        || MetatileBehavior_IsReflective(objEvent->previousMetatileBehavior)
        || MetatileBehavior_IsPuddle(objEvent->currentMetatileBehavior) || objEvent->inSandPile
        || objEvent->inHotSprings || objEvent->inShallowFlowingWater || objEvent->inanimate || objEvent->invisible)
    {
        objEvent->hasShadow = FALSE;
    }
    else
    {
        if (!objEvent->hasShadow)
        {
            objEvent->hasShadow = TRUE;
            *flags |= GROUND_EFFECT_FLAG_SHADOW;
        }
    }
}

void GroundEffect_Shadow(struct ObjectEvent *objEvent, struct Sprite *sprite)
{
    (void)sprite;
    // StartFieldEffectForObjectEvent(FLDEFF_SHADOW, objEvent);
    ObjectEventGetLocalIdAndMap(
        objEvent, &gFieldEffectArguments[0], &gFieldEffectArguments[1], &gFieldEffectArguments[2]);
    FldEff_Shadow_();
}

static void (*const sNewGroundEffectFuncs[])(struct ObjectEvent *objEvent, struct Sprite *sprite) = {
    GroundEffect_Shadow,
};

void StartTriggeredGroundEffects(struct ObjectEvent *objEvent, struct Sprite *sprite, u32 flags)
{
    u8 i;
    for (i = 0; i < 20; ++i, flags >>= 1)
        if (flags & 1)
            gGroundEffectFuncs[i](objEvent, sprite);

    for (i = 0; i < ARRAY_COUNT(sNewGroundEffectFuncs); ++i, flags >>= 1)
        if (flags & 1)
            sNewGroundEffectFuncs[i](objEvent, sprite);
}

void GetAllGroundEffectFlags_OnSpawn(struct ObjectEvent *objEvent, u32 *flags)
{
    ObjectEventUpdateMetatileBehaviors(objEvent);
    GetGroundEffectFlags_Reflection(objEvent, flags);
    GetGroundEffectFlags_TallGrassOnSpawn(objEvent, flags);
    GetGroundEffectFlags_LongGrassOnSpawn(objEvent, flags);
    GetGroundEffectFlags_SandPile(objEvent, flags);
    GetGroundEffectFlags_ShallowFlowingWater(objEvent, flags);
    GetGroundEffectFlags_ShortGrass(objEvent, flags);
    GetGroundEffectFlags_HotSprings(objEvent, flags);
    GetGroundEffectFlags_Shadow(objEvent, flags);
}

void GetAllGroundEffectFlags_OnBeginStep(struct ObjectEvent *objEvent, u32 *flags)
{
    ObjectEventUpdateMetatileBehaviors(objEvent);
    GetGroundEffectFlags_Reflection(objEvent, flags);
    GetGroundEffectFlags_TallGrassOnBeginStep(objEvent, flags);
    GetGroundEffectFlags_LongGrassOnBeginStep(objEvent, flags);
    GetGroundEffectFlags_Tracks(objEvent, flags);
    GetGroundEffectFlags_SandPile(objEvent, flags);
    GetGroundEffectFlags_ShallowFlowingWater(objEvent, flags);
    GetGroundEffectFlags_Puddle(objEvent, flags);
    GetGroundEffectFlags_ShortGrass(objEvent, flags);
    GetGroundEffectFlags_HotSprings(objEvent, flags);
    GetGroundEffectFlags_Shadow(objEvent, flags);
}

void GetAllGroundEffectFlags_OnFinishStep(struct ObjectEvent *objEvent, u32 *flags)
{
    ObjectEventUpdateMetatileBehaviors(objEvent);
    GetGroundEffectFlags_ShallowFlowingWater(objEvent, flags);
    GetGroundEffectFlags_SandPile(objEvent, flags);
    GetGroundEffectFlags_Puddle(objEvent, flags);
    GetGroundEffectFlags_Ripple(objEvent, flags);
    GetGroundEffectFlags_ShortGrass(objEvent, flags);
    GetGroundEffectFlags_HotSprings(objEvent, flags);
    GetGroundEffectFlags_Seaweed(objEvent, flags);
    GetGroundEffectFlags_JumpLanding(objEvent, flags);
    GetGroundEffectFlags_Shadow(objEvent, flags);
}
