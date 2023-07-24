.global EventScript_RockLobster

.set LOCALID_ROCLOBSTER, 1

EventScript_RockLobster:
	lock
	goto_if_unset FLAG_BADGE03_GET, EventScript_CannotUseRockSmash
	setvar VAR_0x8004, ITEM_HM06_ROCK_SMASH
	callnative CheckIfPartyCanUseHM
	compare VAR_RESULT, 6
	goto_if_eq EventScript_CannotUseRockSmash
	msgbox 0x88259F7, MSGBOX_AUTOCLOSE
	applymovement OBJ_EVENT_ID_PLAYER, 0x880EE4F
	waitmovement OBJ_EVENT_ID_PLAYER
	playbgm MUS_C_VS_LEGEND_BEAST, 0x0
	msgbox 0x8825A3E, MSGBOX_AUTOCLOSE
	playmoncry SPECIES_ROCLOBSTER, 0x0
	msgbox 0x8825A62, MSGBOX_AUTOCLOSE
	waitmoncry
	setwildbattle SPECIES_ROCLOBSTER, 50, ITEM_NONE
	dowildbattle
	setflag 0x3D44
	removeobject LOCALID_ROCLOBSTER
    finditem ITEM_HARDDISKSOLO, 1
	release
	end
