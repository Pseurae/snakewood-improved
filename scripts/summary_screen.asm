; Hook Summary Screen's change page function
.org 0x809F284
.area 0x8C, 0xFF
ldr r5, =ChangeSummaryPokemonNormal | 1
bx r5
.pool
.endarea
