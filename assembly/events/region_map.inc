.global EventScript_OpenMapFromLButton

EventScript_OpenMapFromLButton:
	lockall
	fadescreen FADE_TO_BLACK
	special FieldShowRegionMap
	waitstate
	releaseall
	end
