@ElevatorHasNoSupply equ 0x883413B
@ElectricityCoursed equ 0x88341C5
@UsedMove equ 0x883427D
@StepBack equ 0x883412E

.if ENABLE_BUGFIXES
.org 0x884FBDC
s_releaseall
s_end

.org 0x82DD764
.area 0x82dd7ad - 0x82dd764, 0xFF
s_goto @FixElevatorMain
.endarea

.org @UsedMove
.string "[buffer1] used [buffer2]!"

.autoregion
@FixElevatorMain:
s_msgbox @ElevatorHasNoSupply, MSGBOX_DEFAULT
s_callnative CheckIfPartyHasMoveForElevator | 1
s_compare VAR_RESULT, MSGBOX_DEFAULT
s_goto_if_eq @StepBack
s_bufferpartymonnick 0x0, VAR_RESULT
s_setfieldeffectargument 0x0, VAR_RESULT
s_buffermovename 0x1, VAR_0x8004
s_msgbox @DoYouWantToUseMove, MSGBOX_YESNO
s_compare VAR_RESULT, 0x1
s_goto_if_eq @FixElevatorYes
s_closemessage
s_goto @StepBack
@FixElevatorYes:
s_msgbox @UsedMove, MSGBOX_DEFAULT
s_waitmessage
s_dofieldeffect FLDEFF_USE_ROCK_SMASH
s_waitstate
s_msgbox @ElectricityCoursed, MSGBOX_AUTOCLOSE
s_setvar 0x407E, 0x1
s_setflag 0x42B
@FixElevatorEnd:
s_releaseall
s_end

@DoYouWantToUseMove:
.string "Do you want to use [buffer1]'s\n[buffer2]?"
.endautoregion
.endif