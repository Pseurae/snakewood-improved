.global EventScript_NatureChanger

EventScript_NatureChanger:
    lock
    faceplayer
    msgbox Text_Intro, MSGBOX_YESNO
    compare VAR_RESULT, 0
    goto_if_eq EventScript_NatureChangerCancel
    call EventScript_NatureChanger_ChoosePokemon

    compare VAR_0x8004, 255
    goto_if_eq EventScript_NatureChangerCancel

    call EventScript_NatureChanger_CheckIfEgg

    bufferpartymonnick 1, VAR_0x8004

EventScript_NatureChanger_SelectNature:
    message Text_WhichNature
    waitmessage

    call EventScript_NatureChanger_ShowNatureWindow
    closemessage

    @ B Button check
    compare VAR_RESULT, 127
    goto_if_eq EventScript_NatureChangerCancel

    @ Cancel option check
    compare VAR_RESULT, 25
    goto_if_eq EventScript_NatureChangerCancel

    callnative BufferNatureName

    copyvar VAR_0x8005, VAR_RESULT
    msgbox Text_AreYouSure, MSGBOX_YESNO
    compare VAR_RESULT, 0
    goto_if_eq EventScript_NatureChanger_SelectNature
    
    callnative ChangePartyMonNature
    release

    msgbox Text_Changed, MSGBOX_NPC
    end

EventScript_NatureChangerCancel:
    msgbox Text_Canceled, MSGBOX_NPC
    releaseall
    end

EventScript_NatureChangerIsEgg:
    msgbox Text_IsEgg, MSGBOX_NPC
    releaseall
    end

EventScript_NatureChanger_ChoosePokemon:
    callnative (0x80f9a0c | 1)
    waitstate
    return

EventScript_NatureChanger_CheckIfEgg:
    specialvar_ VAR_RESULT, 0x147
    compare VAR_RESULT, SPECIES_EGG

    goto_if_eq EventScript_NatureChangerIsEgg
    return

EventScript_NatureChanger_ShowNatureWindow:
    callnative DrawNaturesWindow
    waitstate
    return

Text_Intro:
    .string "Would you like me to change one of your\nPOKéMON's NATURE?$"

Text_WhichNature:
    .string "Which nature should I give\n{STR_VAR_2}?$"

Text_Canceled:
    .string "Come visit me if you have a change of\nheart.$"

Text_IsEgg:
    .string "I can't change the NATURE of an EGG!$"

Text_AreYouSure:
    .string "Are you sure you want to change\n{STR_VAR_2}'s NATURE to {STR_VAR_1}?$"

Text_Changed:
    .string "I've changed your {STR_VAR_2}'s NATURE\nto {STR_VAR_1}!$"
