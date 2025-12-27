.global Autorun_Hook

.align 2
Autorun_Hook:
mov r0, #2
and r4, r0
lsr r4, #1

ldr r0, =(gAutorunEnabled)
ldrb r0, [r0]

eor r4, r0
cmp r4, #0
beq else_branch

next_condition:
ldr r0, =(0x8058d6c | 1)
bx r0

else_branch:
ldr r0, =(0x8058da8 | 1)
bx r0
