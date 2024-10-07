0x081fec18

.expfunc @get_stat_offset(_species), (0x081fec18 + _species * 28)

.macro @set_pokestat_hp, _species, _hp
.org @get_stat_offset(_species)
.byte _hp

.macro @set_pokestat_atk, _species, _atk
.org @get_stat_offset(_species) + 1
.byte _atk

.macro @set_pokestat_def, _species, _def
.org @get_stat_offset(_species) + 2
.byte _def

.macro @set_pokestat_spd, _species, _spd
.org @get_stat_offset(_species) + 3
.byte _spd

.macro @set_pokestat_spatk, _species, _spdef
.org @get_stat_offset(_species) + 4
.byte _spdef

.macro @set_pokestat_spdef, _species, _spatk
.org @get_stat_offset(_species) + 5
.byte _spatk

@set_pokestat_hp SPECIES_KENCHUKUO, 85
@set_pokestat_atk SPECIES_KENCHUKUO, 120
@set_pokestat_def SPECIES_KENCHUKUO, 85
@set_pokestat_spatk SPECIES_KENCHUKUO, 85
@set_pokestat_spdef SPECIES_KENCHUKUO, 85
@set_pokestat_spd SPECIES_KENCHUKUO, 100