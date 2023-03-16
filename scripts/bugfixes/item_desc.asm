; Override item names from table
.macro replace_item_desc, i, desc
.org 0x83c5564 + (44 * i) + 20
.area 0x4, 0x0
.word desc
.endarea
.endmacro

@TM31_IcePunch_Desc equ 0x83c4fa4
@TM31_IcePunch_DescEnd equ 0x83c4fdb

.if ITEM_DESCRIPTIONS
; Description Strings
.org @TM31_IcePunch_Desc
.area @TM31_IcePunch_DescEnd - @TM31_IcePunch_Desc, 0x0
.string "A freezing punch\nthat can leave the\nfoe frozen solid."
.endarea
.endif
