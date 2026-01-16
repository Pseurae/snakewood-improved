.global EventScript_OpenMapFromLButton

EventScript_OpenMapFromLButton:
	lockall
	fadescreen FADE_TO_BLACK
	callnative FieldShowRegionMap
	waitstate
	releaseall
	end
