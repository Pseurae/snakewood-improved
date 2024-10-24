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

@Chikuwa_Desc equ 0x83c268f
@Chikuwa_DescEnd equ 0x83c26c1
@Chikuwa_Size equ (@Chikuwa_DescEnd - @Chikuwa_Desc)

.if ITEM_DESCRIPTIONS
replace_item_desc @TM31_IcePunch_Desc, @TM31_IcePunch_Size, "A freezing punch\nthat can leave the\nfoe frozen solid."
replace_item_desc @Chikuwa_Desc, @Chikuwa_Size, "A tubular snack\nthat heals all\nstatus problems."
repoint_item_desc ITEM_MAGIC_STARS, @MagicStars_Desc
repoint_item_desc ITEM_NECRO_BALL, @NecroBall_Desc

.autoregion
@MagicStars_Desc:
.string "Chocolate stars\nwith faces. Raise\nSpeed."

@NecroBall_Desc:
.string "An ancient Ball\nforged in hellfire\n1000 years ago."
.endautoregion
.endif
