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
set_nop 0x80a64d2
set_nop 0x80a5f40
set_nop 0x80a5386
set_nop 0x80a6ccc
.endif
