; Override item names from table
.macro fix_item_name, i, name
.org 0x83c5564 + (44 * i)
.area 0xE, 0x0
.string name
.endarea
.endmacro

.if ITEM_NAMES
fix_item_name ITEM_AFRO_BALL, "Afro Ball"
fix_item_name ITEM_RIESEN, "Riesen"
fix_item_name ITEM_POKEPHONE, "PokéPhone"
fix_item_name ITEM_GATEAU, "Gateau"
fix_item_name ITEM_SPANNER, "Spanner"
fix_item_name ITEM_SOMA, "Soma"
fix_item_name ITEM_COLOGNE, "Cologne"
fix_item_name ITEM_SPARK_TOKEN, "Spark Token"
fix_item_name ITEM_ELECTRICHONEY, "Electrichoney"
fix_item_name ITEM_PLUS_BAND, "Plus Band"
.endif
