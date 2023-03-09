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