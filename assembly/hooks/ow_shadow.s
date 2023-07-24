.global UpdateShadowFieldEffect_Hook
UpdateShadowFieldEffect_Hook:
ldrh r3, [r1, #0x22]
add r0, r0, r3
strh r0, [r5, #0x22]
ldr r0, [r4]

push {r0-r3}
mov r0, #0x3e

ldrb r1, [r1, r0] // Load invisibility bit from linkedSprite

mov r2, #0x4
and r2, r1

ldrb r3, [r5, r0] // Load invisibility bit from shadowSprite

mov r1, #0x5
neg r1, r1
and r1, r3
orr r1, r2

strb r1, [r5, r0]

pop {r0-r3}

ldr r3, =(0x8126d78 | 1) // Return back to function
bx r3
