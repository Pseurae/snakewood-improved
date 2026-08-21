; Just affects the Items pocket, the other ones don't need to be changed.

.if BAG_EXPANSION
; Repoint Item pocket storage to free space in the 2nd Saveblock
.org 0x83c1618
.word gExpandedItemPockets
.byte 60

; Allow x999 items in a single stack
set_nop 0x80a9374
set_nop 0x80a9466

; Move the "x" left to accommodate for the item count
.org 0x80a43e8
.area 2, 0x0
mov r2, #0x60
.endarea

; Nop out all branches for 2-digit scrollers (Force 3-digits)
set_nop 0x80a64d2 ; Selling
set_nop 0x80a5f40 ; Tossing
set_nop 0x80a5386 ; Sell Roller
set_nop 0x80a6ccc ; PC Store

; Buy limit
.org 0xb3dd8
ldrh r1, [r7, #0xe]

.org 0xb3f5c
b 0xb3f62

.org 0xb3f62
strh r0, [r6, #0xe]

; Display correct digits on Buy
.org 0xb3858
mov r3, #3

.org 0xb3e7a
mov r3, #3

; Sell Money functions
.org 0xa6878
lsl r4, r4, #0x10
lsr r4, r4, #0x10

.org 0xa6590
ldrh r1, [r4, #0xa]

.endif
