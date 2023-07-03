.if COLORED_STATS
.org 0x809ffbc
ldr r0, =(@Hook | 1)
bx r0
.pool

.autoregion
.align 2
@Hook:
mov r0, r5
bl SummaryScreen_PrintPokemonStats
ldr r0, =(0x80A0048 | 1)
bx r0
.pool
.endautoregion
.endif