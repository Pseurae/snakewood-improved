.if NEW_ROCLOBSTER_SCRIPT
; Rock Lobster in Dewford Town divespot requires a HM check
.org 0x88259A3
s_goto @EventScript_RockLobster

.autoregion
@EventScript_RockLobster:
	s_lock
	s_goto_if_unset FLAG_BADGE03_GET, 0x81B0F3E
	s_setvar VAR_0x8004, ITEM_HM06_ROCK_SMASH
	s_callnative (CheckIfPartyCanUseHM | 1)
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
	s_setwildbattle 0x73, 0x32, 0x0
	s_dowildbattle
	s_setflag 0x3D44
	s_removeobject 0x1
    s_finditem 0x30, 0x1
	s_release
	s_end
.endautoregion
.endif
