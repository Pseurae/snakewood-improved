.if AUTORUN
.org 0x8058d64
set_function_hook r0, Autorun_Hook
.endif 