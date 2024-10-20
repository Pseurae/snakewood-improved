.if EXP_ALL

.org 0x8020164
b 0x802016a

.org 0x802019a
nop
set_function_hook r4, ExpAllHook1

.org 0x8020276
nop
set_function_hook r3, ExpAllHook2

.org 0x802033c
set_function_hook r3, ExpAllHook3

.org 0x83c5564 + 44 * ITEM_BRAIN_LINK + 24
.byte 0x1, 0x1

.org 0x83c5564 + 44 * ITEM_BRAIN_LINK + 26
.byte 0x5

.org 0x83c5564 + 44 * ITEM_BRAIN_LINK + 28
.word ItemUseOutOfBattle_ExpShare | 1

.endif