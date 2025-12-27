.global NoFlashMemoryCallback

.align 2
NoFlashMemoryCallback:
push {r0}
bl MgbaOpen
pop {r0}
cmp r0, #1
beq return_to_main

ldr r0, =(CB2_FlashNotDetectedScreen)
ldr r7, =(SetMainCallback2)
bl bx_r7

return_to_main:
ldr r7, =(0x8000294 | 1)
bx r7

bx_r7:
bx r7
