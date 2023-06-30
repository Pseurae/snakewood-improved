#include "types.h"
#include "event_object_movement.h"
#include "fieldmap.h"
#include "sprite.h"
#include "field_weather.h"
#include "metatile_behavior.h"
#include "constants/field_effects.h"
#include "constants/weather.h"
#include "constants/gba.h"

static bool8 IsSuitableWeatherForShadow(void);

void (*const sGroundEffectFuncs[])(struct ObjectEvent *objEvent, struct Sprite *sprite) = {
    GroundEffect_SpawnOnTallGrass,
    GroundEffect_MoveOnTallGrass,
    GroundEffect_SpawnOnLongGrass,
    GroundEffect_MoveOnLongGrass,
    GroundEffect_WaterReflection,
    GroundEffect_IceReflection,
    GroundEffect_FlowingWater,
    GroundEffect_SandTracks,
    GroundEffect_DeepSandTracks,
    GroundEffect_Ripple,
    GroundEffect_StepOnPuddle,
    GroundEffect_SandPile,
    GroundEffect_JumpOnTallGrass,
    GroundEffect_JumpOnLongGrass,
    GroundEffect_JumpOnShallowWater,
    GroundEffect_JumpOnWater,
    GroundEffect_JumpLandingDust,
    GroundEffect_ShortGrass,
    GroundEffect_HotSprings,
    GroundEffect_Seaweed,
    GroundEffect_Shadow
};

static bool8 IsSuitableWeatherForShadow(void)
{
    switch (gWeatherPtr->currWeather)
    {
        case WEATHER_NONE:
        case WEATHER_SUNNY:
        case WEATHER_SHADE:
            return TRUE;
    }

    return FALSE;
}

static void GetGroundEffectFlags_Shadow(struct ObjectEvent *objEvent, u32 *flags)
{
    if (!IsSuitableWeatherForShadow() 
        || MetatileBehavior_IsPokeGrass(objEvent->currentMetatileBehavior) 
        || MetatileBehavior_IsSurfableWaterOrUnderwater(objEvent->currentMetatileBehavior)
        || MetatileBehavior_IsSurfableWaterOrUnderwater(objEvent->previousMetatileBehavior)
        || MetatileBehavior_IsReflective(objEvent->currentMetatileBehavior)
        || MetatileBehavior_IsReflective(objEvent->previousMetatileBehavior)
        || MetatileBehavior_IsPuddle(objEvent->currentMetatileBehavior)
        || objEvent->inSandPile || objEvent->inHotSprings || objEvent->inShallowFlowingWater
        || objEvent->inanimate)
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
    StartFieldEffectForObjectEvent(FLDEFF_SHADOW, objEvent);
    REG_BLDALPHA = BLDALPHA_BLEND(7, 13);
}

void StartTriggeredGroundEffects(struct ObjectEvent *objEvent, struct Sprite *sprite, u32 flags)
{
    u8 i;
    for (i = 0; i < ARRAY_COUNT(sGroundEffectFuncs); i++, flags >>= 1)
        if (flags & 1)
            sGroundEffectFuncs[i](objEvent, sprite);
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
