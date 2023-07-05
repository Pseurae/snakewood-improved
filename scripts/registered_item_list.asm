.if MULTIPLE_REGISTERED_ITEMS
; Clear gRegisteredItems on New Game
.org 0x8052f04
set_function_hook r4, @NewGameInitDataHook

.org 0x80a444c
set_function_hook r5, Menu_PrintKeyItem

.org 0x83c165c
.word (HandlePopupMenuAction_Register | 1)

.org 0x80a3dac
set_function_hook r2, @HandleItemRemoval

.org 0x8068158
set_function_hook r4, @ProcessPlayerFieldInputHook

.org 0x80c9100
.word @BirchVoice

.autoregion
.align 2
@ProcessPlayerFieldInputHook:
cmp r0, #0
beq @@ReturnToFunc

push {r0-r7}
ldr r0, =@EventScript_UseRegisteredItem
ldr r1, =@UseWhichRegisteredItem
bl UseRegisteredKeyItemFromField
pop {r0-r7}

ldr r4, =(0x8068160 | 1)
bx r4

@@ReturnToFunc:
ldr r4, =(0x8068164 | 1)
bx r4


@HandleItemRemoval:
push {r0-r7}
mov r0, r3
bl TryRemoveRegisteredItem
pop {r0-r7}

ldr r2, =(0x80a3db4 | 1)
bx r2

.align 2
@NewGameInitDataHook:
ldr r4, =(0x80a3714 | 1) ; ClearBag
bl @linker

push {r0-r7}
bl ClearRegisteredItems
pop {r0-r7}

ldr r4, =(0x8052f0c | 1) ; Return to NewGameInitData
bx r4

@linker:
bx r4
.pool

@EventScript_UseRegisteredItem:
s_lockall
s_callnative (DrawRegisteredItemsMultichoice | 1)
s_waitstate
s_callnative (UseSelectedRegisteredItem | 1)
s_callnative (HideFieldMessageBoxInstant | 1)
s_releaseall
s_return

@UseWhichRegisteredItem:
.string "Use which item?"

@BirchVoice:
.string "BIRCH's voice echoes....\nReally, [player]? Right now?\lI think not.", 0xfc, 0x09
.endautoregion

.org 0x80b5290
cmp r0, #2
.endif