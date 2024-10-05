.global EventScript_AbilityChanger

EventScript_AbilityChanger:
    lock
    faceplayer
    call_if_unset 0xCD, EventScript_AbilityChanger_Intro
    msgbox Text_AbilityChanger_DoYouWantToChangeAbility, MSGBOX_YESNO

    compare VAR_RESULT, 0x0
    goto_if_eq EventScript_AbilityChanger_Cancel

    msgbox Text_AbilityChanger_WhichPokemon, MSGBOX_DEFAULT

    nop
    nop
    nop
    callnative (0x80f9a0c | 1)
    waitstate

    lock

    compare VAR_0x8004, 255
    goto_if_eq EventScript_AbilityChanger_Cancel

    call EventScript_AbilityChanger_CheckIfEgg
    bufferpartymonnick 1, VAR_0x8004

    call EventScript_AbilityChanger_CheckChangeAbility

    callnative BufferAlternateAbilityName

    msgbox Text_AbilityChanger_ChangePokeAbility, MSGBOX_YESNO
    compare VAR_RESULT, 0x0
    goto_if_eq EventScript_AbilityChanger_Cancel

    callnative ChangePartyMonAbility

    msgbox Text_AbilityChanger_ChangedPokeAbility, MSGBOX_NPC

    release
    end

EventScript_AbilityChanger_CheckIfEgg:
    specialvar_ VAR_RESULT, 0x147
    compare VAR_RESULT, SPECIES_EGG

    goto_if_eq EventScript_AbilityChanger_IsEgg
    return

EventScript_AbilityChanger_CheckChangeAbility:
    callnative CheckIfSpeciesHasAlternateAbility
    compare VAR_RESULT, 0x0
    goto_if_eq EventScript_AbilityChanger_CannotChangeAbility
    return

EventScript_AbilityChanger_CannotChangeAbility:
    msgbox Text_AbilityChanger_CannotChangeAbility, MSGBOX_NPC
    release
    end

EventScript_AbilityChanger_Intro:
    msgbox Text_AbilityChanger_Intro, MSGBOX_DEFAULT
    setflag 0xCD
    return

EventScript_AbilityChanger_Cancel:
    msgbox Text_AbilityChanger_Cancel, MSGBOX_NPC
    release
    end

EventScript_AbilityChanger_IsEgg:
    msgbox Text_AbilityChanger_IsEgg, MSGBOX_NPC
    release
    end

Text_AbilityChanger_Intro:
    .string "Back when I used to live in the Johto\nregion, my grandma taught me how to\nchange a POKéMON's ABILITY.\p"
    .string "If you want, I could try to do the\nsame to your POKéMON.$"

Text_AbilityChanger_DoYouWantToChangeAbility:
    .string "So, do you want to change one of your\nPOKéMON's ABILITY?$"

Text_AbilityChanger_WhichPokemon:
    .string "Which POKéMON's ABILITY should I try\nto change?$"

Text_AbilityChanger_Cancel:
    .string "Come back if you change your mind!$"

Text_AbilityChanger_IsEgg:
    .string "I can't change the ABILITY of an EGG!$"

Text_AbilityChanger_CannotChangeAbility:
    .string "I'm sorry, but I can't change the\nABILITY of your {STR_VAR_2}.$"

Text_AbilityChanger_ChangePokeAbility:
    .string "Do you want to change {STR_VAR_2}'s\nABILITY to {STR_VAR_1}?$"

Text_AbilityChanger_ChangedPokeAbility:
    .string "Your {STR_VAR_2}'s ABILITY has been\nturned to {STR_VAR_1}!$"
