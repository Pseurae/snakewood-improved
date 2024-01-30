; Made by Super Versekr Dark
.if EXP_ON_CAPTURE
.org 0x81D9ED3
.byte 0x41
.word ExpOnCapture_Hook

.org 0x8013DE0
.word 0x8013DF9

.endif