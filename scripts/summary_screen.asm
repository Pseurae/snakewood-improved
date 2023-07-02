.if WRAPPING_SUMMARY
; Hook Summary Screen's change page function
.org 0x809F284
.area 0x8C, 0xFF
set_function_hook r5, ChangeSummaryPokemonNormal
.endarea
.endif
