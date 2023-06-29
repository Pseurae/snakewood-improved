.if EMERALD_SAVE_PROMPT

.org 0x8094740
ldr r7, =(PrintSavePlayerName | 1)
bx r7
.pool

.org 0x8094778
ldr r7, =(PrintSaveMapName | 1)
bx r7
.pool

.org 0x80947b0
ldr r7, =(PrintSaveBadges | 1)
bx r7
.pool

.org 0x80947f8
ldr r7, =(PrintSavePokedexCount | 1)
bx r7
.pool

.org 0x8094844
ldr r7, =(PrintSavePlayTime | 1)
bx r7
.pool

.endif 