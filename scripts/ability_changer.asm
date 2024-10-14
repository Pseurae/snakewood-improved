.if ABILITY_CHANGER
.org 0x88189F1
s_goto EventScript_AbilityChanger

.org 0x8152F2E
s_callnative (DrawFrameTest | 1)
s_end
.endif