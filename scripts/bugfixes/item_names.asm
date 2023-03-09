; Override item names from table
.macro fix_item_name, i, name
.org 0x83c5564 + (44 * i)
.area 0xE, 0x0
.string name
.endarea
.endmacro

fix_item_name ITEM_AFRO_BALL, "AFRO BALL"
fix_item_name ITEM_RIESEN, "RIESEN"
fix_item_name ITEM_POKEPHONE, "POKéPHONE"
