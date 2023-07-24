.if PS_SPLIT
.org 0x803c122
b 0x803c25c

.org 0x803c12a
b 0x803c25c

.org 0x803bfbc
set_function_hook r1, PS_Split_Hook
.endif
