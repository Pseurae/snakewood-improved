; New Repel wore off script

; 0x081C33EF -> "REPEL's effect wore off..."
@EffectWoreOff equ 0x081C33EF

.if REPEL_PROMPT
.autoregion
@RepelMain:
s_lock
s_callnative (HasRepelItem | 1)
s_compare VAR_RESULT, 0
s_goto_if_eq @@NoRepelItem
s_msgbox @@UseAnother, MSGBOX_YESNO
s_compare VAR_RESULT, 1
s_goto_if_eq @@ChooseRepel
s_goto @@ScriptEnd
@@ChooseRepel:
s_callnative (DrawRepelWindow | 1)
s_subvar VAR_RESULT, 1
; VAR_RESULT == 0 -> only one type of Repel present
s_compare VAR_RESULT, 0
s_goto_if_eq @@ApplyRepel
s_closemessage
s_waitstate
@@ApplyRepel:
s_callnative (ApplyRepel | 1)
s_bufferitemname 0, VAR_RESULT
s_msgbox @@PlayerUsed, MSGBOX_SIGN
s_closemessage
s_goto @@ScriptEnd
@@NoRepelItem:
s_msgbox @EffectWoreOff, MSGBOX_SIGN
@@ScriptEnd:
s_closemessage
s_release
s_end

@@UseAnother:
.string "REPEL's effect wore off...\nUse another?"

@@PlayerUsed:
.string "[player] used\n[buffer1]."
.endautoregion

; Call the new Repel script instead
.org 0x808558c
.word @RepelMain
.endif
