; Fixes the fadescreen interaction with "Shade" weather (forests etc)

.if SHADE_FADESCREEN
.org 0x807d6fc
set_function_hook r2, FadeScreenFix_Hook
.endif
