; Fixes the fadescreen interaction with "Shade" weather (forests etc)

.if SHADE_FADESCREEN
.org 0x807d644
ldr r3, =FadeScreen | 1
bx r3
.pool
.endif
