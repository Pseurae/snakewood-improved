.global __aeabi_idivmod, __aeabi_uidivmod, __aeabi_idiv, __aeabi_uidiv

.force_thumb
.thumb_func
__aeabi_idivmod:
.force_thumb
.thumb_func
__aeabi_uidivmod:
swi #0x6
bx lr

.force_thumb
.thumb_func
__aeabi_uidiv:
.force_thumb
.thumb_func
_aeabi_idiv:
swi #0x6
bx lr
