.global RepelPrompt

.set Text_EffectWoreOff, 0x81C33EF
.set Text_PlayerUsedRepel, 0x840EAC3

RepelPrompt:
lock
callnative HasRepelItem
compare VAR_RESULT, 0
goto_if_eq NoRepelItem
msgbox UseAnother, MSGBOX_YESNO
compare VAR_RESULT, 1
goto_if_eq ChooseRepel
goto ScriptEnd
ChooseRepel:
callnative DrawRepelWindow

subvar VAR_RESULT, 1
compare VAR_RESULT, 0
goto_if_eq UseRepel
closemessage
waitstate

UseRepel:
callnative ApplyRepel
bufferitemname 1, VAR_RESULT
message Text_PlayerUsedRepel
waitmessage
goto ScriptEnd

NoRepelItem:
msgbox Text_EffectWoreOff, MSGBOX_SIGN

ScriptEnd:
closemessage
release
end

UseAnother:
.string "REPEL's effect wore off...\nUse another?$"
