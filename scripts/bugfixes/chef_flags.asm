.if FIX_CHEF_SCRIPTS

; Set the object flag to the trainer flag
.org 0x86B6A74
.halfword 0x50A

.org 0x8811A44 + 5
.byte 0x54

.org 0x8811A4C + 5
.byte 0x54

.org 0x881241D + 1
.halfword 0x17

.org 0x8812424 + 1
.halfword 0x17

.org 0x88124D4
.byte 0xfe

.endif