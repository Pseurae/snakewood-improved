.if NEW_ROCLOBSTER_SCRIPT
; Rock Lobster in Dewford Town divespot requires a HM check
.org 0x88259A3
s_goto EventScript_RockLobster
.endif
