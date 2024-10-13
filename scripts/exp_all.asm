.if EXP_ALL

.org 0x8020024
.halfword 0x4710

.org 0x8020058
.word (CountEligiblePokeForExp | 1)

.org 0x802019A
.halfword 0x0
.word 0x47004800
.word (SetExpAmount | 1)

.org 0x8020344 
.word 0x47004800
.word (GetSentInPokeForExp | 1)

.org 0x83c5564 + 44 * ITEM_BRAIN_LINK + 24
.byte 0x1, 0x1

.org 0x83c5564 + 44 * ITEM_BRAIN_LINK + 26
.byte 0x5

.org 0x83c5564 + 44 * ITEM_BRAIN_LINK + 28
.word ItemUseOutOfBattle_ExpShare | 1

.endif