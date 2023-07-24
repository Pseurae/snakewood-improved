.global EventScript_FixElevatorMain

.set Text_ElevatorHasNoSupply, 0x883413B
.set Text_ElectricityCoursed, 0x88341C5
.set EventScript_ElevatorStepBack, 0x883412E

EventScript_FixElevatorMain:
    msgbox Text_ElevatorHasNoSupply, MSGBOX_DEFAULT
    callnative CheckIfPartyHasMoveForElevator
    compare VAR_RESULT, MSGBOX_DEFAULT
    goto_if_eq EventScript_ElevatorStepBack
    bufferpartymonnick 0x0, VAR_RESULT
    setfieldeffectargument 0x0, VAR_RESULT
    buffermovename 0x1, VAR_0x8004
    msgbox Text_DoYouWantToUseMove, MSGBOX_YESNO
    compare VAR_RESULT, 0x1
    goto_if_eq FixElevatorYes
    closemessage
    goto EventScript_ElevatorStepBack
FixElevatorYes:
    msgbox Text_MonUsedMove, MSGBOX_DEFAULT
    waitmessage
    dofieldeffect FLDEFF_USE_ROCK_SMASH
    waitstate
    msgbox Text_ElectricityCoursed, MSGBOX_AUTOCLOSE
    setvar 0x407E, 0x1
    setflag 0x42B
FixElevatorEnd:
    releaseall
    end

Text_DoYouWantToUseMove:
    .string "Do you want to use {STR_VAR_1}'s\n{STR_VAR_2}?$"
