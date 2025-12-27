.global HandleItemRemoval, NewGameInitDataHook

.align 2
HandleItemRemoval:
push {r0-r7}
mov r0, r3
bl TryRemoveRegisteredItem
pop {r0-r7}

ldr r2, =(0x80a3db4 | 1)
bx r2

@ NewGameInitData already zeroes out the free space section
.align 2
NewGameInitDataHook:
ldr r4, =(0x80a3714 | 1) @ ClearBag
bl bx_r4

bl ClearSavefileSpace

ldr r4, =(0x8052f0c | 1) @ Return to NewGameInitData
bx r4

bx_r4:
bx r4

gOtherText_BirchsVoice::
    .string "BIRCH's voice echoes....\nReally, {PLAYER}? Right now?\lI think not.{PAUSE_UNTIL_PRESS}$"
