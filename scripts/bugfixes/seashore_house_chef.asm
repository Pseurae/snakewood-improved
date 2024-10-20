.if FIX_SEASHORE_HOUSE_CHEF

; Set the object flag to the trainer flag
.org 0x86B6A74
.halfword 0x50A

.org 0x8811A44 + 5
.byte 0x54

.org 0x8811A4C + 5
.byte 0x54

.endif