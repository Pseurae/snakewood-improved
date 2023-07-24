.global EventScript_DisableAutoRun
.global EventScript_EnableAutoRun

EventScript_DisableAutoRun:
    lockall
    msgbox Text_DisableAutoRun, MSGBOX_AUTOCLOSE
    releaseall
    end

EventScript_EnableAutoRun:
    lockall
    msgbox Text_EnableAutoRun, MSGBOX_AUTOCLOSE
    releaseall
    end

Text_DisableAutoRun:
    .string "Autorun {COLOR RED}disabled{COLOR DARK_GREY}.$"

Text_EnableAutoRun:
    .string "Autorun {COLOR GREEN}enabled{COLOR DARK_GREY}.$"
