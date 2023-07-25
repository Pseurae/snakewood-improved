.gba
.thumb

.open INPUT_FILE, OUTPUT_FILE, 0x8000000

.loadtable "charmap.tbl"

.include "config.asm"

.include "scripts/include/fldeff.asm"
.include "scripts/include/items.asm"
.include "scripts/include/moves.asm"
.include "scripts/include/scripts.asm"
.include "scripts/include/species.asm"
.include "scripts/include/types.asm"
.include "scripts/include/vars_flags.asm"

.org 0x8729e20
.region 0xaca0
.endregion

.org 0x886d1f0
.region 0x9850
.endregion

.autoregion
.importobj "build/linked_processed.o"
.endautoregion

.include "scripts/predefs/common.asm"
.include "scripts/predefs/gba.asm"
.include "scripts/predefs/pokemon_data.asm"

.include "scripts/bugfixes/movement/birch_chase.asm"
.include "scripts/bugfixes/movement/chloe_entry.asm"
.include "scripts/bugfixes/movement/pestilence_exit.asm"

.include "scripts/bugfixes/fadescreen_shade.asm"
.include "scripts/bugfixes/field_mon_sprite.asm"
.include "scripts/bugfixes/fix_poke_types.asm"
.include "scripts/bugfixes/golbat_gfx.asm"
.include "scripts/bugfixes/item_desc.asm"
.include "scripts/bugfixes/item_names.asm"
.include "scripts/bugfixes/littleroot_tiles.asm"
.include "scripts/bugfixes/meteor_portrait.asm"
.include "scripts/bugfixes/necropolis_respawn.asm"
.include "scripts/bugfixes/roclobster.asm"
.include "scripts/bugfixes/senex_lilycove.asm"
.include "scripts/bugfixes/shop_frame_tiles.asm"
.include "scripts/bugfixes/ss_cangrejo.asm"
.include "scripts/bugfixes/text_colors.asm"

.include "scripts/autorun.asm"
.include "scripts/bag_expansion.asm"
.include "scripts/colored_field_moves.asm"
.include "scripts/colored_stats.asm"
.include "scripts/emerald_save_prompt.asm"
.include "scripts/exp_on_capture.asm"
.include "scripts/hm_system.asm"
.include "scripts/ow_shadows.asm"
.include "scripts/ps_split.asm"
.include "scripts/registered_item_list.asm"
.include "scripts/repeated_item.asm"
.include "scripts/repel_prompt.asm"
.include "scripts/reusable_tms.asm"
.include "scripts/save_flash_failed.asm"
.include "scripts/summary_screen.asm"

.close