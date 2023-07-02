; Prevents the money window tiles from getting erased on the shop menu screen

.if SHOP_MONEYBOX_FIX
.org 0x80b3a70
set_function_hook r7, Shop_PrintItemDescText
.endif