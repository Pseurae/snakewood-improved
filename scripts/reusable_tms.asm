.if REUSABLE_TMS
; Mark TMs as important
.org 0x80a9a08
.area 0x1C, 0xFE
set_function_hook r3, ItemId_GetImportance
.endarea

; Nop out the TM removeitem command
set_nop_bl 0x806f21c

; Hook the TM menu's print callback 
.org 0x80A4548
.area 0x1B4, 0xFE
set_function_hook r3, Menu_PrintTMHM
.endarea
.endif
