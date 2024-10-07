.expfunc @get_evolution_offset(_species, _n), (0x8203b68 + 8 * ((_species * 5) + _n))

.macro @set_evolution_method, _species, _n, _method
.org @get_evolution_offset(_species, _n)
.halfword _method
.endmacro

.macro @set_evolution_param, _species, _n, _param
.org @get_evolution_offset(_species, _n) + 2
.halfword _param
.endmacro

.macro @set_evolution_target, _species, _n, _target
.org @get_evolution_offset(_species, _n) + 4
.halfword _target
.endmacro

.if EVOLUTION_CHANGES

@set_evolution_param SPECIES_KOFFING, 0, 24
@set_evolution_param SPECIES_BALTOY, 0, 24

.endif