.global __aeabi_idivmod
.thumb_func
__aeabi_idivmod:
	swi #6
    bx lr

.global __aeabi_uidivmod
.thumb_func
__aeabi_uidivmod:
    swi #6
    bx lr
