; TODO: After using Fly, there seems to be two shadow sprites attached to the player.
; Does not affect anything else, and seems to fix itself when another map is loaded. (warping)

.if OW_EVENT_SHADOWS
.org 0x80635f0 ; GetAllGroundEffectFlags_OnSpawn
ldr r7, =(GetAllGroundEffectFlags_OnSpawn | 1)
bx r7
.pool

.org 0x8063638 ; GetAllGroundEffectFlags_OnBeginStep
ldr r7, =(GetAllGroundEffectFlags_OnBeginStep | 1)
bx r7
.pool

.org 0x8063690 ; GetAllGroundEffectFlags_OnFinishStep
ldr r7, =(GetAllGroundEffectFlags_OnFinishStep | 1)
bx r7
.pool

.org 0x8064218 ; StartTriggeredGroundEffects
ldr r7, =(StartTriggeredGroundEffects | 1)
bx r7
.pool

.org 0x81D9C46
.byte 0x3
.word FldEff_Shadow_ | 1 

.org 0x806425c
ldr r7, =(FilterOutDisabledCoveringGroundEffects | 1)
bx r7
.pool
.endif