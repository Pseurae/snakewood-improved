@gText_UsedMove equ 0x883427D

.if SS_CANGREJO_ELEVATOR
.org 0x884FBDC
s_releaseall
s_end

.org 0x82DD764
.area 0x82dd7ad - 0x82dd764, 0xFF
s_goto EventScript_FixElevatorMain
.endarea
.endif