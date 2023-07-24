; New Repel wore off script

.if REPEL_PROMPT
; Call the new Repel script instead
.org 0x808558c
.word RepelPrompt
.endif
