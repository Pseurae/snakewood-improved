.if FIX_FEMALE_MC_OW_SPRITES

; Player Sprites
; Player sprites are supposed to use the 0th palette slot, but 
; the female OW sprite loads its palette to the 10th slot. 

; Change player sprite palette slot to 0
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

; "Rival" counterpart sprites
; The NamingScreen uses the sprites meant for the rivals instead 
; of the ones defined for the player object. 
; The palette tags for the female OW sprites are wrong.

; Use correct palette tags
.org 0x8372798 + 2
.hword 0x110B

.org 0x83727bc + 2
.hword 0x110B

.org 0x83727e0 + 2
.hword 0x110B

.org 0x8372804 + 2
.hword 0x110B

.org 0x8372828 + 2
.hword 0x110B

; Old fix was to use the player sprites specifically in the NamingScreen function.

; Fix naming screen issue
; .org 0x80b6e76
; bl #0x8059854

; Fix reflections
.org 0x837387C
.hword 0x110B

.org 0x8373880
.word 0x8373894

.org 0x8368508
.area 0x20, 0x0
.import "assets/jericho_refl.gbapal"
.endarea

.endif