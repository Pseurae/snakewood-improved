; Override item names from table
.macro fix_item_name, i, name
.org 0x83c5564 + (44 * i)
.area 0xE, 0x0
.string name
.endarea
.endmacro

.if ITEM_NAMES
fix_item_name ITEM_AFRO_BALL, "AFRO BALL"
fix_item_name ITEM_RIESEN, "RIESEN"
fix_item_name ITEM_POKEPHONE, "POKéPHONE"
fix_item_name ITEM_GATEAU, "GATEAU"
fix_item_name ITEM_SPANNER, "SPANNER"
fix_item_name ITEM_SOMA, "SOMA"
fix_item_name ITEM_COLOGNE, "COLOGNE"
fix_item_name ITEM_SPARK_TOKEN, "SPARK TOKEN"
.endif
