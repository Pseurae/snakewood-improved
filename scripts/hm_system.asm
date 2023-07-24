; Declarations

.if NEW_HM_SYSTEM
; Replace Party Context Menu function
.org 0x8089a8c
set_function_hook r3, OpenPokemonContextMenu

.org 0x81b0dcc
s_goto EventScript_CutTree

.org 0x81b0eb7
s_goto EventScript_RockSmash

.org 0x81b0fcb
s_goto EventScript_StrengthBoulder

.org 0x806875c
.word EventScript_Waterfall

.org 0x8068798
.word EventScript_Dive

.org 0x80687d8
.word EventScript_DiveUnderwater

.org 0x80598e0
.area 0x8059930 - 0x80598e0, 0xFE
set_function_hook r7, PartyHasMonWithSurf
.endarea

.org 0x8068728
.word EventScript_UseSurf

; Make HMs forgettable
.org 0x809f7f2
.area 0x2, 0x0
mov r0, #0
.endarea

; Make HMs forgettable
.org 0x8040a00
.area 0x4, 0x0
mov r0, #0
bx lr
.endarea
.endif 
