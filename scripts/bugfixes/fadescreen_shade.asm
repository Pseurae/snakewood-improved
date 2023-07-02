; Fixes the fadescreen interaction with "Shade" weather (forests etc)

.if SHADE_FADESCREEN
.org 0x807d644
set_function_hook r3, FadeScreen
.endif
