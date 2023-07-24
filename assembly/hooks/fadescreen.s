.global FadeScreenFix_Hook
FadeScreenFix_Hook:
    push {r0-r7}
    bl ReloadMapPalettes
    pop {r0-r7}

    ldr r2, =(0x807d726 | 1)
    bx r2
