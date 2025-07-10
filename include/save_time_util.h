#pragma once

extern const u8 gOtherText_Player[];
extern const u8 gOtherText_Badges[];
extern const u8 gOtherText_Pokedex[];
extern const u8 gOtherText_PlayTime[];

extern const u8 gPlayerName[8];
extern const u16 gPlayTimeHours;
extern const u8 gPlayTimeMinutes;
extern const u8 gPlayTimeSeconds;
extern const u8 gPlayTimeVBlanks;

void LONG_CALL FormatPlayTime(u8 *playtime, u16 hours, u16 minutes, bool16 colon);
u8 LONG_CALL GetBadgeCount(void);
u16 LONG_CALL GetPokedexSeenCount(void);
