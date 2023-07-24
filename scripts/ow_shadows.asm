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
set_function_hook r7, GetAllGroundEffectFlags_OnSpawn

.org 0x8063638 ; GetAllGroundEffectFlags_OnBeginStep
set_function_hook r7, GetAllGroundEffectFlags_OnBeginStep

.org 0x8063690 ; GetAllGroundEffectFlags_OnFinishStep
set_function_hook r7, GetAllGroundEffectFlags_OnFinishStep

.org 0x8064218 ; StartTriggeredGroundEffects
set_function_hook r7, StartTriggeredGroundEffects

; Update field effect script to use new FldEff_Shadow.
.org 0x81D9C46
.byte 0x3
.word (FldEff_Shadow_ | 1 )

; Nop out all assignments to objEvent->hasShadow by jumping movements.

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

; Mixed direction JumpInPlace
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

; Disable shadows till player sprite reaches the ground.
.org 0x839F454
.word (FlyInFieldEffect_BirdSwoopDown | 1)

; Patch weather functions to use Weather_SetBlendCoeff.
.org 0x807cae8
set_function_hook r7, None_InitVars

.org 0x807df9c
set_function_hook r0, Sunny_InitVars

.org 0x8080430
set_function_hook r7, Shade_InitVars

.org 0x807df24
mov r0, #0x8
mov r1, #0xc

set_nop_bl 0x807dea8

.org 0x8126d70
set_function_hook r3, UpdateShadowFieldEffect_Hook

.endif