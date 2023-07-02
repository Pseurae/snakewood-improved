.if FIX_POKEMON_TYPES

; Replace type icons with default ones.
.org 0x8e71d10
.import "assets/move_types.4bpp.lz"

; Replace obtainable "Disease" Pokemon types
replace_poke_types SPECIES_GRAVEILL, TYPE_WATER, TYPE_WATER
replace_poke_types SPECIES_AZOMBARILL, TYPE_WATER, TYPE_WATER
replace_poke_types SPECIES_TURMUR, TYPE_POISON, TYPE_POISON
replace_poke_types SPECIES_FACELEECH, TYPE_POISON, TYPE_POISON

.endif