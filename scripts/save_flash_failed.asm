.if WRONG_SAVE_TYPE_ERROR
.org 0x800028c
set_function_hook r7, NoFlashMemoryCallback
.endif