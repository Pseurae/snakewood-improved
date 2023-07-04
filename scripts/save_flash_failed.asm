.if WRONG_SAVE_TYPE_ERROR
.org 0x800028c
set_function_hook r7, @NoFlashMemoryCallback

.autoregion
.align 2
@NoFlashMemoryCallback:
cmp r0, #1
beq @return_to_main
ldr r0, =(@MainCBHook | 1)
ldr r7, =(0x80003cc | 1)
bl @linker

@return_to_main:
ldr r7, =(0x8000294 | 1)
bx r7

@linker:
bx r7
.pool

@MainCBHook:
push {r0-r2, lr}
ldr r2, =(0x3001bac)
ldrb r1, [r2]

cmp r1, #0x1
beq @early_ret

ldr r0, =(@ErrorText)

push {r0-r7}
bl FlashNotDetectedScreen
pop {r0-r7}

mov r1, #0x1
strb r1, [r2]

@early_ret:
pop {r0-r2, pc}
.pool

@ErrorText:
.byte 0xFC, 0x01, 0x02
.stringn "ERROR!\n"
.byte 0xFC, 0x01, 0x01
.string "Flash memory not detected.\n\nSet your emulator's save type\nsetting to Flash 1MB / 128K\nand reload the rom."
.endautoregion
.endif