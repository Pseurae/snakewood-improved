.if MULTIPLE_REGISTERED_ITEMS
.align 2
.org 0x80a444c
set_function_hook r5, Menu_PrintKeyItem

.org 0x83c165c
.word (HandlePopupMenuAction_Register | 1)

.org 0x80a3dac
set_function_hook r2, HandleItemRemoval

.org 0x8068158
set_function_hook r4, ProcessPlayerFieldInput_Hook

.org 0x80c9100
.word gOtherText_BirchsVoice

; Let multichoice box wrap on more than 2 items
.org 0x80b5290
cmp r0, #2
.endif