; Set a bl instruction to two nops
.macro set_nop_bl, p
.org p
.area 0x4, 0x0
nop
nop
.endarea
.endmacro

; Set a 2 byte instruction to a nop
.macro set_nop, p
.org p
.area 0x2, 0x0
nop
.endarea
.endmacro

; Set a long call hook with bx
.macro set_function_hook, reg, func
.area 0x8, 0x0
ldr reg, =(func | 1)
bx reg
.pool
.endarea
.endmacro
