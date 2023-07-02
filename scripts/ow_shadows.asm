.macro @NopShadowFlagSetting, offset
.org offset + 0x16
.area 0x2 * 4
nop
nop
nop
nop
.endarea
.endmacro

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
.word (FldEff_Shadow_ | 1 )

; Jump 2
@NopShadowFlagSetting 0x80613d4
@NopShadowFlagSetting 0x806142c
@NopShadowFlagSetting 0x8061484
@NopShadowFlagSetting 0x80614dc

; Jump
@NopShadowFlagSetting 0x80621bc
@NopShadowFlagSetting 0x8062214
@NopShadowFlagSetting 0x806226c
@NopShadowFlagSetting 0x80622c4

; JumpInPlace
@NopShadowFlagSetting 0x806231c
@NopShadowFlagSetting 0x8062374
@NopShadowFlagSetting 0x80623cc
@NopShadowFlagSetting 0x8062424

; Mixed JumpInPlace
@NopShadowFlagSetting 0x806247c
@NopShadowFlagSetting 0x80624d4
@NopShadowFlagSetting 0x806252c
@NopShadowFlagSetting 0x8062584

; AcroWheelieHop
@NopShadowFlagSetting 0x8062bfc
@NopShadowFlagSetting 0x8062c54
@NopShadowFlagSetting 0x8062cac
@NopShadowFlagSetting 0x8062d04

; AcroWheelieHop
@NopShadowFlagSetting 0x8062d5c
@NopShadowFlagSetting 0x8062db4
@NopShadowFlagSetting 0x8062e0c
@NopShadowFlagSetting 0x8062e64

; AcroWheelieJump
@NopShadowFlagSetting 0x8062ebc
@NopShadowFlagSetting 0x8062f14
@NopShadowFlagSetting 0x8062f6c
@NopShadowFlagSetting 0x8062fc4

.org 0x839F454
.word (FlyInFieldEffect_BirdSwoopDown | 1)

.org 0x08374560 + 0x14
.word (UpdateShadowFieldEffect_ | 1)

.org 0x08374578 + 0x14
.word (UpdateShadowFieldEffect_ | 1)

.org 0x08374590 + 0x14
.word (UpdateShadowFieldEffect_ | 1)

.org 0x083745a8 + 0x14
.word (UpdateShadowFieldEffect_ | 1)

.org 0x807cae8
ldr r7, = (None_InitVars | 1)
bx r7
.pool

.org 0x807df9c
ldr r0, = (Sunny_InitVars | 1)
bx r0
.pool

.org 0x8080430
ldr r7, =(Shade_InitVars | 1)
bx r7
.pool

.org 0x807df24
mov r0, #0x8
mov r1, #0xc

set_nop_bl 0x807dea8

.endif