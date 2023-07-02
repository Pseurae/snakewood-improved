.if PS_SPLIT
; Hook new function
.org 0x803ba2c
.area 0x803c348 - 0x803ba2c, 0xFE
set_function_hook r4, CalculateBaseDamage
.endarea
.endif
