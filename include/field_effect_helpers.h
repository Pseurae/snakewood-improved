#pragma once

extern const u16 gShadowVerticalOffsets[];
extern const void *const gFieldEffectObjectTemplatePointers[];
extern const u8 gShadowEffectTemplateIds[];
extern s32 gFieldEffectArguments[8];

void FieldEffectStop(struct Sprite *sprite, u8 id);
