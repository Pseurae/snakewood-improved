.if ENABLE_BUGFIXES
.autoregion
@ExitMovement:
.byte 0xB ; Step Right (Normal)
.byte 0x9 ; Step Up (Normal)
.byte 0x9 ; Step Up (Normal)
.byte 0x9 ; Step Up (Normal)
.byte 0xA ; Step Left (Normal)
.byte 0xA ; Step Left (Normal)
.byte 0xA ; Step Left (Normal)
.byte 0xA ; Step Left (Normal)
.byte 0xA ; Step Left (Normal)
.byte 0x9 ; Step Up (Normal)
.byte 0x9 ; Step Up (Normal)
.byte 0x9 ; Step Up (Normal)
.byte 0xFE ; End of Movements
.endautoregion

.org 0x88370ed
.word @ExitMovement

.org 0x883710d
.word @ExitMovement
.endif
