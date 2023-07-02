.macro gba_color, rv, gv, bv
.halfword (rv | (gv << 5) | (bv << 10))
.endmacro