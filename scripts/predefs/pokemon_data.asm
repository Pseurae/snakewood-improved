; Stats-related
.macro replace_poke_types, i, t1, t2
.org 0x81fec18 + (0x1c * i) + 6
.area 0x2, 0x0
.byte t1, t2
.endarea
.endmacro

; GFX-related
.macro set_poke_front_gfx, i, p
.org 0x81e8354 + 8 * i
.word p
.endmacro

.macro set_poke_back_gfx, i, p
.org 0x81e97f4 + 8 * i
.word p
.endmacro

.macro set_poke_normal_pal, i, p
.org 0x81ea5b4 + 8 * i
.word p
.endmacro

.macro set_poke_shiny_pal, i, p
.org 0x81eb374 + 8 * i
.word p
.endmacro

.macro set_poke_elevation, i, p
.org 0x81ecb14 + i
.byte p
.endmacro

.macro set_poke_front_coords, i, p1, p2, p3, p4
.align 2
.org 0x81e7c74 + 4 * i
.byte p1, p2, p3, p4
.endmacro

.macro set_poke_back_coords, i, p1, p2, p3, p4
.align 2
.org 0x81e9114 + 4 * i
.byte p1, p2, p3, p4
.endmacro
