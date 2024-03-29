#pragma once

#include "sprite.h"

extern const u16 gShadowVerticalOffsets[4];
extern const void *const gFieldEffectObjectTemplatePointers[];
extern const u8 gShadowEffectTemplateIds[];
extern s32 gFieldEffectArguments[8];

void LONG_CALL FieldEffectStop(struct Sprite *sprite, u8 id);
u32 FldEff_Shadow_(void);
void LONG_CALL UpdateShadowFieldEffect(struct Sprite *sprite);
