; Mark TMs as important
.org 0x80a9a08
.area 0x1C, 0xFE
ldr r3, =ItemId_GetImportance | 1
bx r3
.pool
.endarea

; Nop out the TM removeitem command
set_nop_bl 0x806f21c

; Hook the TM menu's print callback 
.org 0x80A4548
.area 0x1B4, 0xFE
ldr r3, =Menu_PrintTMHM | 1
bx r3
.pool
.endarea

