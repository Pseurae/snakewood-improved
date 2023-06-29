.if NECROPOLIS_RESPAWN
.org 0x885E61F
s_goto @Grendel_WarpToHeights

.autoregion
@Grendel_WarpToHeights:
    s_setrespawn 10 ; Sootopolis City
    s_msgbox 0x885E726, MSGBOX_AUTOCLOSE
    s_warp 0x28, 0xFF, 0x5, 0x7
    s_release
    s_end
.endautoregion
.endif