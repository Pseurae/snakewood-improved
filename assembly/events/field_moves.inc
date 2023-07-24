.global EventScript_CutTree
.global EventScript_RockSmash
.global EventScript_StrengthBoulder
.global EventScript_Waterfall
.global EventScript_Dive
.global EventScript_DiveUnderwater
.global EventScript_UseSurf

EventScript_CutTree:
	lockall
	goto_if_unset FLAG_BADGE01_GET, EventScript_CannotUseCut
	setvar VAR_0x8004, ITEM_HM01_CUT
	callnative CheckIfPartyCanUseHM
	compare VAR_RESULT, 6
	goto_if_eq EventScript_CannotUseCut
	setfieldeffectargument 0, VAR_RESULT
	bufferpartymonnick 0, VAR_RESULT
	buffermovename 1, MOVE_CUT
	msgbox Text_UseCutPromptText, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_CutChoseNo
	msgbox Text_MonUsedMove, MSGBOX_DEFAULT
	closemessage
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
	waitstate
	goto EventScript_DoTreeCutMovement
	end

EventScript_RockSmash:
	lockall
	goto_if_unset FLAG_BADGE03_GET, EventScript_CannotUseRockSmash
	setvar VAR_0x8004, ITEM_HM06_ROCK_SMASH
	callnative CheckIfPartyCanUseHM
	compare VAR_RESULT, 6
	goto_if_eq EventScript_CannotUseRockSmash
	setfieldeffectargument 0, VAR_RESULT
	bufferpartymonnick 0, VAR_RESULT
	buffermovename 1, MOVE_ROCK_SMASH
	msgbox Text_UseRockSmashPrompt, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_RockSmashChoseNo
	msgbox Text_MonUsedMove, MSGBOX_DEFAULT
	closemessage
	dofieldeffect FLDEFF_USE_ROCK_SMASH
	waitstate
	goto EventScript_DoRockSmashMovement
	end

EventScript_StrengthBoulder:
	lockall
	goto_if_unset FLAG_BADGE04_GET, EventScript_CannotUseStrength
	goto_if_set FLAG_SYS_USE_STRENGTH, EventScript_AlreadyUsedStrength
	setvar VAR_0x8004, ITEM_HM04_STRENGTH
	callnative CheckIfPartyCanUseHM
	compare VAR_RESULT, 6
	goto_if_eq EventScript_CannotUseStrength
	setfieldeffectargument 0, VAR_RESULT
	msgbox Text_UseStrengthPrompt, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_StrengthChoseNo
	closemessage
	dofieldeffect FLDEFF_USE_STRENGTH
	waitstate
	goto EventScript_UsedStrength
	end

EventScript_Waterfall:
	lockall
	setvar VAR_0x8004, ITEM_HM07_WATERFALL
	callnative CheckIfPartyCanUseHM
	compare VAR_RESULT, 6
	goto_if_eq EventScript_WaterfallNoMonKnows
	bufferpartymonnick 0, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	msgbox Text_UseWaterfallPrompt, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_WaterfallDone
	msgbox Text_UsedWaterfall, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_WATERFALL
	goto EventScript_WaterfallDone

EventScript_Dive:
	lockall
	setvar VAR_0x8004, ITEM_HM08_DIVE
	callnative CheckIfPartyCanUseHM
	compare VAR_RESULT, 6
	goto_if_eq CannotUseDive
	bufferpartymonnick 0, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	setfieldeffectargument 1, 1
	msgbox Text_UseDivePrompt, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Dive_Done
	msgbox Text_UsedDive, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_DIVE
	goto Dive_Done
	lockall
CannotUseDive:
	msgbox Text_CannotUseDive, MSGBOX_DEFAULT
Dive_Done:
	releaseall
	end

EventScript_DiveUnderwater:
	lockall
	setvar VAR_0x8004, ITEM_HM08_DIVE
	callnative CheckIfPartyCanUseHM
	compare VAR_RESULT, 6
	goto_if_eq EventScript_UnderwaterCannotUseDive
	bufferpartymonnick 0, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	setfieldeffectargument 1, 1
	msgbox Text_UnderwaterUseDivePrompt, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_UnderwaterDiveDone
	msgbox Text_UsedDive, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_DIVE
	goto EventScript_UnderwaterDiveDone

EventScript_UseSurf:
	setvar VAR_0x8004, ITEM_HM03_SURF
	callnative CheckIfPartyCanUseHM
	compare VAR_RESULT, 6
	goto_if_eq EventScript_EndUseSurf
	bufferpartymonnick 0, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	lockall
	msgbox Text_WantToUseSurf, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_ReleaseUseSurf
	msgbox Text_PlayerUsedSurf, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_SURF
EventScript_ReleaseUseSurf:
	releaseall
EventScript_EndUseSurf:
    end
