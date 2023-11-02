.if FIX_FEMALE_MC_OW_SPRITES

; Change sprite palette slot to the first one
.org 0x8372558 + 12
.byte 0x10

.org 0x837257c + 12
.byte 0x10

.org 0x83725a0 + 12
.byte 0x10

.org 0x83725c4 + 12
.byte 0x10

.org 0x83725e8 + 12
.byte 0x10


; Fix naming screen issue
.org 0x80b6e76
bl #0x8059854

.endif