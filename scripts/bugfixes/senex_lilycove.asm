.if ALLOW_SENEX_REMATCH
; Avoid softlocking the game when you lose to Senex 
.org 0x884cb6b
.area 0x884cc15 - 0x884cb6b, 0x0
s_playbgm 0x1CF, 0x0
s_msgbox 0x884C25B, MSGBOX_DEFAULT
s_msgbox 0x884C26F, MSGBOX_AUTOCLOSE
s_playse 0x83
s_fadescreen 0x3
; This is the reason why the softlock occurs
; removeobject sets the flag associated with the object event internally
s_removeobject 0x7
s_fadescreen 0x2
s_msgbox 0x884C27D, 0x6
s_playse 0x15
s_applymovement 0x1, 0x880EE4F
s_waitmovement 0x1
s_msgbox 0x884C28B, MSGBOX_AUTOCLOSE
s_call @StartSenexBattle
s_msgbox 0x884C4DD, 0x6
s_fadescreen 0x1
s_removeobject 0x1
s_removeobject 0x3
s_removeobject 0x4
s_removeobject 0x9
s_fadescreen 0x0
s_applymovement 0x6, 0x884CA08
s_waitmovement 0x6
s_applymovement 0xFF, 0x883FAEA
s_waitmovement 0xFF
s_msgbox 0x884C574, 0x6
s_msgbox 0x884C92A, 0x6
s_giveitem 0x15A, 0x1
s_msgbox 0x884C99A, 0x6
s_fadescreen 0x1
s_removeobject 0x5
s_removeobject 0x2
s_removeobject 0x6
s_removeobject 0x8
s_fadescreen 0x0
s_setflag 0x3DD
s_releaseall
s_end
.endarea

.autoregion
@StartSenexBattle:
s_clearflag 0x3dd
s_trainerbattle_no_intro 0x14B, 0x884C4CB
s_return
.endautoregion
.endif