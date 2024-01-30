.global MoreExp_Hook

MoreExp_Hook:
    push {r0-r2}
    ldr r0, =(0x2024bec)
    ldr r1, [r0, #0]
    mov r2, #2
    mul r1, r2
    str r1, [r0]
    pop {r0-r2}

    mov	r8, r3
    ldr	r0, =(0x20239f8)
    ldrh r0, [r0, #0]
    mov r1, #1
    and r1, r0
    cmp	r1, #0
    beq IsDoubleBattle

    ldr r0, =(0x8020414 | 1)
    bx r0

IsDoubleBattle:
    ldr r0, =(0x8020488 | 1)
    bx r0
