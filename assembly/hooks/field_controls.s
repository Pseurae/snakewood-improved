.global ProcessPlayerFieldInput_Hook

.align 2
ProcessPlayerFieldInput_Hook:
mov r0, r5
bl ProcessPlayerFieldInput_Rest
cmp r0, #0
beq Ret_0

Ret_1:
ldr r4, =(0x8068160 | 1)
bx r4

Ret_0:
ldr r4, =(0x8068164 | 1)
bx r4
