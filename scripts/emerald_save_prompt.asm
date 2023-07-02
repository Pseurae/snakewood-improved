.if EMERALD_SAVE_PROMPT

.org 0x8094740
set_function_hook r7, PrintSavePlayerName

.org 0x8094778
set_function_hook r7, PrintSaveMapName

.org 0x80947b0
set_function_hook r7, PrintSaveBadges

.org 0x80947f8
set_function_hook r7, PrintSavePokedexCount

.org 0x8094844
set_function_hook r7, PrintSavePlayTime

.endif 