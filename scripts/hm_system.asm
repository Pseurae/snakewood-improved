; Declarations
@CannotUseCut equ 0x81B0E32
@DoTreeCutMovement equ 0x81B0E21
@UsedCutRockSmashText equ 0x81B0E82
@UseCutPromptText equ 0x81B0E3F
@Cut_ChoseNo equ 0x81B0E3C
@CannotUseRockSmash equ 0x81B0F3E
@RockSmash_ChoseNo equ 0x81B0F48
@UseRockSmashPromptText equ 0x81B0F4B
@CannotUseRockSmashText equ 0x81B0F90
@DoRockSmashMovement equ 0x81B0F0C
@AlreadyUsedStrength equ 0x81B1030
@Strength_ChoseNo equ 0x81B103A
@CannotUseStrength equ 0x81B1026
@UsedStrength equ 0x81B1019
@UseStrengthPromptText equ 0x81B103D
@Waterfall_NoMonKnows equ 0x81B1195
@Waterfall_Done equ 0x81B119D
@UseWaterfallPromptText equ 0x81B11D4
@UsedWaterfallText equ 0x81B120D
@UnderwaterCannotUseDive equ 0x81B12A7
@UnderwaterDive_Done equ 0x81B12BE
@CannotUseDiveText equ 0x81B12C0
@UseDivePromptText equ 0x81B1303
@UsedDiveText equ 0x81B1335
@UnderwaterUseDivePromptText equ 0x81B138E
@EventScript_EndUseSurf equ 0x81a014d
@gText_WantToUseSurf equ 0x81a1344
@gText_PlayerUsedSurf equ 0x81a137d

.if NEW_HM_SYSTEM
; Replace Party Context Menu function
.org 0x8089a8c
ldr r3, =OpenPokemonContextMenu | 1
bx r3
.pool

.org 0x81b0dcc
s_goto @EventScript_CutTree

.org 0x81b0eb7
s_goto @EventScript_RockSmash

.org 0x81b0fcb
s_goto @EventScript_StrengthBoulder

.org 0x806875c
.word @EventScript_Waterfall

.org 0x8068798
.word @EventScript_Dive

.org 0x80687d8
.word @EventScript_DiveUnderwater

.org 0x80598e0
.area 0x8059930 - 0x80598e0, 0xFE
ldr r7, =PartyHasMonWithSurf | 1
bx r7
.pool
.endarea

.org 0x8068728
.word @EventScript_UseSurf

.autoregion
@EventScript_CutTree:
	s_lockall
	s_goto_if_unset FLAG_BADGE01_GET, @CannotUseCut
	s_setvar VAR_0x8004, ITEM_HM01_CUT
	s_callnative CheckIfPartyCanUseHM + 1
	s_compare VAR_RESULT, 6
	s_goto_if_eq @CannotUseCut
	s_setfieldeffectargument 0, VAR_RESULT
	s_bufferpartymonnick 0, VAR_RESULT
	s_buffermovename 1, MOVE_CUT
	s_msgbox @UseCutPromptText, MSGBOX_YESNO
	s_compare VAR_RESULT, NO
	s_goto_if_eq @Cut_ChoseNo
	s_msgbox @UsedCutRockSmashText, MSGBOX_DEFAULT
	s_closemessage
	s_dofieldeffect FLDEFF_USE_CUT_ON_TREE
	s_waitstate
	s_goto @DoTreeCutMovement
	s_end
.endautoregion

.autoregion
@EventScript_RockSmash:
	s_lockall
	s_goto_if_unset FLAG_BADGE03_GET, @CannotUseRockSmash
	s_setvar VAR_0x8004, ITEM_HM06_ROCK_SMASH
	s_callnative CheckIfPartyCanUseHM + 1
	s_compare VAR_RESULT, 6
	s_goto_if_eq @CannotUseRockSmash
	s_setfieldeffectargument 0, VAR_RESULT
	s_bufferpartymonnick 0, VAR_RESULT
	s_buffermovename 1, MOVE_ROCK_SMASH
	s_msgbox @UseRockSmashPromptText, MSGBOX_YESNO
	s_compare VAR_RESULT, NO
	s_goto_if_eq @RockSmash_ChoseNo
	s_msgbox @UsedCutRockSmashText, MSGBOX_DEFAULT
	s_closemessage
	s_dofieldeffect FLDEFF_USE_ROCK_SMASH
	s_waitstate
	s_goto @DoRockSmashMovement
	s_end
.endautoregion

.autoregion
@EventScript_StrengthBoulder:
	s_lockall
	s_goto_if_unset FLAG_BADGE04_GET, @CannotUseStrength
	s_goto_if_set FLAG_SYS_USE_STRENGTH, @AlreadyUsedStrength
	s_setvar VAR_0x8004, ITEM_HM04_STRENGTH
	s_callnative CheckIfPartyCanUseHM + 1
	s_compare VAR_RESULT, 6
	s_goto_if_eq @CannotUseStrength
	s_setfieldeffectargument 0, VAR_RESULT
	s_msgbox @UseStrengthPromptText, MSGBOX_YESNO
	s_compare VAR_RESULT, NO
	s_goto_if_eq @Strength_ChoseNo
	s_closemessage
	s_dofieldeffect FLDEFF_USE_STRENGTH
	s_waitstate
	s_goto @UsedStrength
	s_end
.endautoregion

.autoregion
@EventScript_Waterfall:
	s_lockall
	s_setvar VAR_0x8004, ITEM_HM07_WATERFALL
	s_callnative CheckIfPartyCanUseHM + 1
	s_compare VAR_RESULT, 6
	s_goto_if_eq @Waterfall_NoMonKnows
	s_bufferpartymonnick 0, VAR_RESULT
	s_setfieldeffectargument 0, VAR_RESULT
	s_msgbox @UseWaterfallPromptText, MSGBOX_YESNO
	s_compare VAR_RESULT, NO
	s_goto_if_eq @Waterfall_Done
	s_msgbox @UsedWaterfallText, MSGBOX_DEFAULT
	s_dofieldeffect FLDEFF_USE_WATERFALL
	s_goto @Waterfall_Done
.endautoregion

.autoregion
@EventScript_Dive:
	s_lockall
	s_setvar VAR_0x8004, ITEM_HM08_DIVE
	s_callnative CheckIfPartyCanUseHM + 1
	s_compare VAR_RESULT, 6
	s_goto_if_eq @@CannotUseDive
	s_bufferpartymonnick 0, VAR_RESULT
	s_setfieldeffectargument 0, VAR_RESULT
	s_setfieldeffectargument 1, 1
	s_msgbox @UseDivePromptText, MSGBOX_YESNO
	s_compare VAR_RESULT, NO
	s_goto_if_eq @@Dive_Done
	s_msgbox @UsedDiveText, MSGBOX_DEFAULT
	s_dofieldeffect FLDEFF_USE_DIVE
	s_goto @@Dive_Done
	s_lockall
@@CannotUseDive:
	s_msgbox @CannotUseDiveText, MSGBOX_DEFAULT
@@Dive_Done:
	s_releaseall
	s_end

@EventScript_DiveUnderwater:
	s_lockall
	s_setvar VAR_0x8004, ITEM_HM08_DIVE
	s_callnative CheckIfPartyCanUseHM + 1
	s_compare VAR_RESULT, 6
	s_goto_if_eq @UnderwaterCannotUseDive
	s_bufferpartymonnick 0, VAR_RESULT
	s_setfieldeffectargument 0, VAR_RESULT
	s_setfieldeffectargument 1, 1
	s_msgbox @UnderwaterUseDivePromptText, MSGBOX_YESNO
	s_compare VAR_RESULT, NO
	s_goto_if_eq @UnderwaterDive_Done
	s_msgbox @UsedDiveText, MSGBOX_DEFAULT
	s_dofieldeffect FLDEFF_USE_DIVE
	s_goto @UnderwaterDive_Done
.endautoregion

.autoregion
@EventScript_UseSurf:
	s_setvar VAR_0x8004, ITEM_HM03_SURF
	s_callnative CheckIfPartyCanUseHM + 1
	s_compare VAR_RESULT, 6
	s_goto_if_eq @@EventScript_EndUseSurf
	s_bufferpartymonnick 0, VAR_RESULT
	s_setfieldeffectargument 0, VAR_RESULT
	s_lockall
	s_msgbox @gText_WantToUseSurf, MSGBOX_YESNO
	s_compare VAR_RESULT, NO
	s_goto_if_eq @@EventScript_ReleaseUseSurf
	s_msgbox @gText_PlayerUsedSurf, MSGBOX_DEFAULT
	s_dofieldeffect FLDEFF_USE_SURF
@@EventScript_ReleaseUseSurf:
	s_releaseall
@@EventScript_EndUseSurf:
    s_end
.endautoregion

.org 0x809f7f2
.area 0x2, 0x0
mov r0, #0
.endarea

.org 0x8040a00
.area 0x4, 0x0
mov r0, #0
bx lr
.endarea

; Rock Lobster in Dewford Town divespot requires a HM check
.org 0x88259A3
s_goto @EventScript_RockLobster

.autoregion
@EventScript_RockLobster:
	s_lock
	s_goto_if_unset FLAG_BADGE03_GET, @CannotUseRockSmash
	s_setvar VAR_0x8004, ITEM_HM06_ROCK_SMASH
	s_callnative CheckIfPartyCanUseHM + 1
	s_compare VAR_RESULT, 6
	s_goto_if_eq 0x81B0F3E
	s_msgbox 0x88259F7, MSGBOX_AUTOCLOSE
	s_applymovement 0xFF, 0x880EE4F
	s_waitmovement 0xFF
	s_playbgm 0x166, 0x0
	s_msgbox 0x8825A3E, MSGBOX_AUTOCLOSE
	s_playmoncry 0x73, 0x0
	s_msgbox 0x8825A62, MSGBOX_AUTOCLOSE
	s_waitmoncry
	s_setwildbattle 0x73, 0x32, 0x30
	s_dowildbattle
	s_setflag 0x3D44
	s_removeobject 0x1
	s_release
	s_end
.endautoregion
.endif 
