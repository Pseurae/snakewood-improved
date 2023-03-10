.gba
.thumb

.open "snakewood.gba", "output.gba", 0x8000000

.loadtable "charmap.tbl"

.include "include/script_fldeff.asm"
.include "include/script_items.asm"
.include "include/script_macros.asm"
.include "include/script_moves.asm"
.include "include/script_species.asm"
.include "include/script_vars_flags.asm"

.org 0x886D1F0
.region 0x9850
.endregion

.autoregion
.importobj "build/linked.o"
.endautoregion

.include "scripts/common.asm"

.include "scripts/bugfixes/bright_text.asm"
.include "scripts/bugfixes/diseased_egg.asm"
.include "scripts/bugfixes/fadescreen_shade.asm"
.include "scripts/bugfixes/item_names.asm"
.include "scripts/bugfixes/littleroot_tiles.asm"

.include "scripts/bag_expansion.asm"
.include "scripts/hm_system.asm"
.include "scripts/ps_split.asm"
.include "scripts/repel_prompt.asm"
.include "scripts/reusable_tms.asm"
.include "scripts/summary_screen.asm"

// .org 0x84062f0
// .hword 84, 20

.close