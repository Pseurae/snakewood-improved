.gba
.thumb

.open "snakewood.gba", "output.gba", 0x8000000

.loadtable "charmap.tbl"

.include "config.asm"

.include "scripts/include/fldeff.asm"
.include "scripts/include/items.asm"
.include "scripts/include/macros.asm"
.include "scripts/include/moves.asm"
.include "scripts/include/species.asm"
.include "scripts/include/vars_flags.asm"

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
.include "scripts/bugfixes/field_mon_sprite.asm"
.include "scripts/bugfixes/golbat_gfx.asm"
.include "scripts/bugfixes/item_desc.asm"
.include "scripts/bugfixes/item_names.asm"
.include "scripts/bugfixes/littleroot_tiles.asm"
.include "scripts/bugfixes/mauville_movement.asm"
.include "scripts/bugfixes/meteor_portrait.asm"
.include "scripts/bugfixes/route101_movement.asm"
.include "scripts/bugfixes/shop_frame_tiles.asm"
.include "scripts/bugfixes/ss_cangrejo.asm"
.include "scripts/bugfixes/verdanturf_ruins_movement.asm"

.include "scripts/bag_expansion.asm"
.include "scripts/hm_system.asm"
.include "scripts/ps_split.asm"
.include "scripts/repel_prompt.asm"
.include "scripts/reusable_tms.asm"
.include "scripts/summary_screen.asm"

// .org 0x84062f0
// .hword 84, 20

.close