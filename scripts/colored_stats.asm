.if COLORED_STATS
.org 0x809ffbc
set_function_hook r0, SummaryScreen_PrintPokemonStat_Hook
.endif