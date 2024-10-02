.if NEW_TITLE_SCREEN
.org 0x8e9efd0
.area 0x654, 0x0
.import "assets/logo.8bpp.lz"
.endarea

.org 0x8e9d644
.autoregion
@PressStart:
.import "assets/press_start.4bpp.lz"
.endautoregion

.org 0x8393F8C
.word @PressStart
.endif