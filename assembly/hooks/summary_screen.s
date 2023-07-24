.global SummaryScreen_PrintPokemonStat_Hook
SummaryScreen_PrintPokemonStat_Hook:
    mov r0, r5
    bl SummaryScreen_PrintPokemonStats
    ldr r0, =(0x80A0048 | 1)
    bx r0
