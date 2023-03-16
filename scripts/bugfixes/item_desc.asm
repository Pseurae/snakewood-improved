.macro repoint_item_desc, i, desc
.org 0x83c5564 + (44 * i) + 20
.area 0x4, 0x0
.word desc
.endarea
.endmacro

.macro replace_item_desc, pointer, size, desc
.org pointer
.area size, 0x0
.string desc
.endarea
.endmacro

@TM31_IcePunch_Desc equ 0x83c4fa4
@TM31_IcePunch_DescEnd equ 0x83c4fdb
@TM31_IcePunch_Size equ (@TM31_IcePunch_DescEnd - @TM31_IcePunch_Desc)

.if ITEM_DESCRIPTIONS
replace_item_desc @TM31_IcePunch_Desc, @TM31_IcePunch_Size, "A freezing punch\nthat can leave the\nfoe frozen solid."
repoint_item_desc ITEM_MAGIC_STARS, @@MagicStars_Desc

.autoregion
@@MagicStars_Desc:
.string "Chocolate stars\nwith faces. Raise\nSPEED."
.endautoregion
.endif
