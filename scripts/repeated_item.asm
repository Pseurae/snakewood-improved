.if REPEATED_ITEM
.org 0x808b178
.word (Task_ItemUseCallback | 1)
.endif
