.global PS_Split_Hook
PS_Split_Hook:
ldr r1, =(gCurrentMove)
ldrh r1, [r1]

ldr r0, =(gBattleMoveSplit)
add r0, r1
ldrb r1, [r0]

cmp r1, #0
beq physical
cmp r1, #1
beq special

b status

physical:
ldr r0, =(0x803bfc4 | 1)
bx r0

special:
ldr r0, =(0x803c132 | 1)
bx r0

status:
ldr r0, =(0x803c128 | 1)
bx r0
