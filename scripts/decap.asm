.macro @decap, offset, desc
.org offset
.string desc
.endmacro

.macro @decap_table, offset, size, stride, i, string
.org offset + i * stride
.area size, 0x0
.string string
.endarea
.endmacro

.include "scripts/decap/general.asm"

.include "scripts/decap/ability_names.asm"
.include "scripts/decap/ability_descriptions.asm"
.include "scripts/decap/item_descriptions.asm"
.include "scripts/decap/item_names.asm"
.include "scripts/decap/map_names.asm"
// Move names are handled within the C injection
.include "scripts/decap/move_descriptions.asm"
.include "scripts/decap/nature_names.asm"
.include "scripts/decap/species.asm"
.include "scripts/decap/trainer_class_names.asm"
.include "scripts/decap/trainer_names.asm"
