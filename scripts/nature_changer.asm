.if NATURE_CHANGER

.org 0x86C9A10
.word EventScript_NatureChanger

.org 0x803f464
set_function_hook r1, GetNature_


set_nop_bl 0x811233a

.endif