.global ExpAllHook1, ExpAllHook2, ExpAllHook3

@ 0x802019a - hook via r4
@ 0x80201fa - return
@ 0x80201e0 - else branch
@ r5 - viaSentIn
.align 2
ExpAllHook1:
ldr r4, =(gExpAllEnabled)
ldrb r4, [r4]

cmp r4, #0
beq ExpAllHook1_GoToMainElseBranch

mov r4, r1

mov r0, r4
mov r1, r5
swi #6

mov r1, sl

cmp r0, #0
bne ExpAllHook1_NormalExpSet
mov r0, #1

ExpAllHook1_NormalExpSet:
strh r0, [r1]

ldr r5, =(0x2024dee)
lsr r0, r4, #1

cmp r0, #0
bne ExpAllHook1_SharedExpSet
mov r0, #1

ExpAllHook1_SharedExpSet:
strh r0, [r5]

ldr r1, =(0x80201fa | 1)
bx r1

ExpAllHook1_GoToMainElseBranch:
ldr r0, =(0x80201e0 | 1)
bx r0

@ 0x8020276 - hook via r3
@ 0x80202a0 - next condition
@ 0x80202c8 - end condition
.align 2
ExpAllHook2:
push {r0-r7}
@ Check if Pokemon is an egg
ldr r0, =(0x2016018)
ldrb r0, [r0]

mov r1, #100
mul r1, r0, r1

ldr r0, =(gPlayerParty)
add r0, r1, r0

mov r1, #45

bl ExpAllHook2_GetMonData

cmp r0, #1
beq ExpAllHook2_ConditionBlock

push {r0-r7}
bl PrintR0
pop {r0-r7}

@ Check if Exp All is enabled
ldr r3, =(gExpAllEnabled)
ldrb r3, [r3]

cmp r3, #0
bne ExpAllHook2_NextCondition

@ Check if Pokemon was sent out
ldr r1, =(0x201605F)
ldrb r0, [r1]

mov r2, #1
and r2, r0

cmp r2, #0
bne ExpAllHook2_NextCondition

ExpAllHook2_ConditionBlock:
@ set sent in pokes
ldr r1, =(0x201605F)
ldrb r0, [r1]

lsr r0, r0, #1
strb r0, [r1]

@ Get exp tracker state
ldr r1, =(0x201600F)
mov r0, #5
strb r0, [r1]

@ Set total exp to zero
ldr r1, =(0x2024bec)
mov r0, #0
str r0, [r1]

ExpAllHook2_ConditionEnd:
pop {r0-r7}
ldr r0, =(0x8020996 | 1)
bx r0

ExpAllHook2_NextCondition:
pop {r0-r7}
ldr r3, =(0x80202a0 | 1)
bx r3

ExpAllHook2_GetMonData:
ldr r7, =(GetMonData)
bx r7

@ 0x802033c - hook via r1
@ 0x8020386 - return
.align 2
ExpAllHook3:
push {r0-r7}

@ Check if Pokemon was sent out
ldr r1, =(0x201605F)
ldrb r0, [r1]

mov r1, #1
and r1, r0

cmp r1, #0
beq ExpAllHook3_CheckIfShareActive
mov r7, sl
ldrh r7, [r7]

b ExpAllHook3_ConditionEnd

ExpAllHook3_CheckIfShareActive:
ldr r1, =(gExpAllEnabled)
ldrb r1, [r1]

cmp r1, #0
beq ExpAllHook3_SetExpToZero

ldr r7, =(0x2024dee)
ldrh r7, [r7]

b ExpAllHook3_ConditionEnd

ExpAllHook3_SetExpToZero:
mov r7, #0

ExpAllHook3_ConditionEnd:
ldr r1, =(0x2024bec)
str r7, [r1]

pop {r0-r7}

ldr r3, =(0x8020386 | 1)
bx r3

