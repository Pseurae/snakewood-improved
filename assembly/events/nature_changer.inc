.global EventScript_NatureChanger

EventScript_NatureChanger:
    lock
    faceplayer
    call_if_unset 0x68, EventScript_NatureChanger_Intro

    msgbox Text_NatureChanger_DoYouWantToChangeNature, MSGBOX_YESNO
    compare VAR_RESULT, 0
    goto_if_eq EventScript_NatureChanger_Cancel
    call EventScript_NatureChanger_ChoosePokemon

    compare VAR_0x8004, 255
    goto_if_eq EventScript_NatureChanger_Cancel

    call EventScript_NatureChanger_CheckIfEgg

    bufferpartymonnick 1, VAR_0x8004

EventScript_NatureChanger_SelectNature:
    message Text_NatureChanger_WhichNature
    waitmessage

    call EventScript_NatureChanger_ShowNatureWindow
    closemessage

    @ B Button check
    compare VAR_RESULT, 127
    goto_if_eq EventScript_NatureChanger_Cancel

    @ Cancel option check
    compare VAR_RESULT, 25
    goto_if_eq EventScript_NatureChanger_Cancel

    callnative BufferNatureName

    copyvar VAR_0x8005, VAR_RESULT
    msgbox Text_NatureChanger_AreYouSure, MSGBOX_YESNO
    compare VAR_RESULT, 0
    goto_if_eq EventScript_NatureChanger_SelectNature
    
    callnative ChangePartyMonNature
    release

    msgbox Text_NatureChanger_Changed, MSGBOX_NPC
    end

EventScript_NatureChanger_Intro:
    msgbox Text_NatureChanger_Intro, MSGBOX_DEFAULT
    setflag 0x68
    return

EventScript_NatureChanger_Cancel:
    msgbox Text_NatureChanger_Cancel, MSGBOX_NPC
    releaseall
    end

EventScript_NatureChanger_IsEgg:
    msgbox Text_NatureChanger_IsEgg, MSGBOX_NPC
    releaseall
    end

EventScript_NatureChanger_ChoosePokemon:
    special SelectMonForNPCTrade
    waitstate
    return

EventScript_NatureChanger_CheckIfEgg:
    specialvar VAR_RESULT, ScriptGetPartyMonSpecies
    compare VAR_RESULT, SPECIES_EGG

    goto_if_eq EventScript_NatureChanger_IsEgg
    return

EventScript_NatureChanger_ShowNatureWindow:
    callnative DrawNaturesWindow
    waitstate
    return

Text_NatureChanger_Intro:
    .string "In times like these, you should take\nadvantage of every ounce of your\lPOKéMON's power.\p"
    .string "I could change the NATURE of your\nPOKéMON so that you play to its\lstrengths.$"

Text_NatureChanger_DoYouWantToChangeNature:
    .string "Would you like me to change one of your\nPOKéMON's NATURE?$"

Text_NatureChanger_WhichNature:
    .string "Which nature should I give\n{STR_VAR_2}?$"

Text_NatureChanger_Cancel:
    .string "Feel to visit me if you have a change\nof heart.$"

Text_NatureChanger_IsEgg:
    .string "I can't change the NATURE of an EGG!$"

Text_NatureChanger_AreYouSure:
    .string "Are you sure you want to change\n{STR_VAR_2}'s NATURE to {STR_VAR_1}?$"

Text_NatureChanger_Changed:
    .string "I've changed your {STR_VAR_2}'s NATURE\nto {STR_VAR_1}!$"
