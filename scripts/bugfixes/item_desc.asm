; Override item names from table
.macro fix_item_desc, i, desc
.org 0x83c5564 + (44 * i) + 20
.area 0x4, 0x0
.word desc
.endarea
.endmacro

.if ITEM_DESCRIPTIONS
fix_item_desc ITEM_TM31_ICE_PUNCH, @@IcePunch_Desc

; Description Strings
.autoregion
@@IcePunch_Desc:
.string "A freezing punch\nthat can leave the\nfoe frozen solid."
.endautoregion
.endif
