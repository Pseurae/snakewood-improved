.if STATS_VIEWER

.org 0x83c5564 + (44 * ITEM_STATS_VIEWER)
.area 0xE, 0x0
.string "STATS VIEWER"
.endarea

.org 0x83c5564 + (44 * ITEM_STATS_VIEWER) + 28
.word (ItemUseOutOfBattle_StatsViewer | 1)

.org 0x83c5564 + (44 * ITEM_STATS_VIEWER) + 24
.byte 0x1, 0x1

.org 0x83c5564 + (44 * ITEM_STATS_VIEWER) + 26
.byte 0x5

.org 0x83c5564 + (44 * ITEM_STATS_VIEWER) + 20
.word @StatsViewer_Desc

.autoregion
@StatsViewer_Desc:
.string "A device which lets\nyou see your\nPOKeMON's stats."
.endautoregion

.org 0x84062F0
.halfword ITEM_STATS_VIEWER

.endif