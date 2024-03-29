; The command to show a Pokemon's portrait is bugged by
; default in Ruby. The sprites load with the wrong palette
; attached.

.if SHOW_METEOR_PORTRAIT
.autoregion
.align 2

@ShowDragonPortrait:
push {r0-r2, lr}
mov r0, #0x9
mov r1, #0xa
mov r2, #0x3
bl ScriptMenu_ShowTrainerPic
pop {r0-r2, pc}

@HideDragonPortrait:
push {r0-r7, lr}
bl CloseTrainerPicBox
pop {r0-r7, pc}
.endautoregion

.org 0x880EE51
.area 0x880EF7B - 0x880EE51, 0x0
s_lockall
s_playse 0x15
s_applymovement 0xFF, 0x880EE38
s_waitmovement 0xFF
s_playse 0x15
s_applymovement 0xFF, 0x880EE48
s_waitmovement 0xFF
s_msgbox 0x880EA9E, 0x4
s_closemessage
s_playmoncry 0x18D, 0x0
s_waitmoncry
s_playse 0x15
s_applymovement 0xFF, 0x880EE4B
s_waitmovement 0xFF
s_playmoncry 0x18D, 0x0
s_waitmoncry
s_fadescreen 0x3
s_fadescreen 0x2
s_playmoncry 0x18D, 0x0
s_waitmoncry
s_fadescreen 0x3
s_setobjectxy 0x1, 0x7, 0x5
s_addobject 0x1
s_fadescreen 0x2
s_msgbox 0x880EAD4, 0x4
s_closemessage
s_playse 0x15
s_fadescreen 0x3
s_fadescreen 0x2
s_playse 0x15
s_fadescreen 0x3
s_fadescreen 0x2
s_callnative @ShowDragonPortrait | 1
s_delay 0x40
s_msgbox 0x880EAFF, 0x4
s_closemessage
s_callnative @HideDragonPortrait | 1
s_playse 0x15
s_fadescreen 0x3
s_fadescreen 0x2
s_msgbox 0x880EB51, 0x6
s_playmoncry 0x18D, 0x0
s_waitmoncry
s_playse 0x15
s_applymovement 0xFF, 0x880EE4F
s_waitmovement 0xFF
s_msgbox 0x880EB92, 0x6
s_playmoncry 0x18D, 0x0
s_waitmoncry
s_playse 0x15
s_applymovement 0xFF, 0x880EE4F
s_waitmovement 0xFF
s_msgbox 0x880EBFC, 0x6
s_playmoncry 0x18D, 0x0
s_waitmoncry
s_playse 0x15
s_applymovement 0xFF, 0x880EE4F
s_waitmovement 0xFF
s_msgbox 0x880ECA0, 0x4
s_closemessage
s_call 0x880EA92
s_playmoncry 0x18D, 0x0
s_waitmoncry
s_msgbox 0x880ED06, 0x4
s_closemessage
s_playmoncry 0x18D, 0x0
s_fadescreen 0x3
s_removeobject 0x1
s_fadescreen 0x2
s_waitmoncry
s_setflag 0x6000
s_msgbox 0x880ED91, 0x6
s_setvar 0x5011, 0x1
s_releaseall
s_end
.endarea

.org 0x880EAFF
.area 0x50
.byte 0xFC, 0x01, 0x03
.string "METEOR: Our contract is\nterminated, human! We have joined\lthe HORSEMEN now."
.endarea

.org 0x880E287
.area 0x880E2DC - 0x880E287, 0x0
s_lockall
s_playse 0x15
s_applymovement 0xFF, 0x880DB6A
s_waitmovement 0xFF
s_playmoncry 0x18D, 0x0
s_waitmoncry
s_msgbox 0x880DD59, 0x6
s_playse 0x15
s_fadescreen 0x3
s_fadescreen 0x2
s_playse 0x15
s_fadescreen 0x3
s_fadescreen 0x2
s_callnative @ShowDragonPortrait | 1
s_delay 0x10
s_playmoncry 0x18D, 0x0
s_waitmoncry
s_delay 0x10
s_callnative @HideDragonPortrait | 1
s_fadescreen 0x3
s_fadescreen 0x2
s_msgbox 0x880DD72, 0x6
s_setvar 0x5003, 0x5
s_releaseall
s_end
.endarea
.endif
