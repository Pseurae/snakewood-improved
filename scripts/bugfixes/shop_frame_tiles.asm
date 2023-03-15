; Prevents the money window tiles from getting erased on the shop menu screen

.if SHOP_MONEYBOX_FIX
.org 0x80b3a70
ldr r7, =Shop_PrintItemDescText | 1
bx r7
.pool
.endif