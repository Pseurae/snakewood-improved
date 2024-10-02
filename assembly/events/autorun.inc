.global EventScript_CloseAutorunMessage

EventScript_CloseAutorunMessage:
	lockall
	waitmessage
	waitbuttonpress
    callnative HideFieldMessageBoxInstant
	releaseall
    end

Text_DisabledAutoRun:
    .string "Autorun {COLOR RED}disabled{COLOR DARK_GREY}.$"

Text_EnabledAutoRun:
    .string "Autorun {COLOR GREEN}enabled{COLOR DARK_GREY}.$"
