.if PS_SPLIT
; Hook new function
.org 0x803ba2c
.area 0x803c348 - 0x803ba2c, 0xFE
ldr r4, =CalculateBaseDamage | 1
bx r4
.pool
.endarea
.endif
