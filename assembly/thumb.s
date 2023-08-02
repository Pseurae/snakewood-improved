.global __aeabi_idivmod, __aeabi_uidivmod
.thumb_func
__aeabi_idivmod:
__aeabi_uidivmod:
swi #6
bx lr
