; Fixes the fadescreen interaction with "Shade" weather (forests etc)

.org 0x807d644
ldr r3, =FadeScreen | 1
bx r3
.pool
