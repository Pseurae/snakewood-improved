#pragma once

#define PARTY_SIZE             6
#define POKEMON_NAME_LENGTH    10

#define IS_MOVE_PHYSICAL(move) (gBattleMoveSplit[move] == CATEGORY_PHYSICAL)
#define IS_MOVE_SPECIAL(move)  (gBattleMoveSplit[move] == CATEGORY_SPECIAL)
#define IS_MOVE_STATUS(move)   (gBattleMoveSplit[move] == CATEGORY_STATUS)

enum
{
    CATEGORY_PHYSICAL,
    CATEGORY_SPECIAL,
    CATEGORY_STATUS
};

struct PACKED BattleMove
{
    u8 effect;
    u8 power;
    u8 type;
    u8 accuracy;
    u8 pp;
    u8 secondaryEffectChance;
    u8 target;
    s8 priority;
    u8 flags;
    u8 unk0[3];
};

struct ContestMove
{
    u8 effect;
    u8 contestCategory:3;
    u8 comboStarterId;
    u8 comboMoves[4];
};

struct PACKED BaseStats
{
    /*0x00*/ u8 baseHP;
    /*0x01*/ u8 baseAttack;
    /*0x02*/ u8 baseDefense;
    /*0x03*/ u8 baseSpeed;
    /*0x04*/ u8 baseSpAttack;
    /*0x05*/ u8 baseSpDefense;
    /*0x06*/ u8 type1;
    /*0x07*/ u8 type2;
    /*0x08*/ u8 catchRate;
    /*0x09*/ u8 expYield;
    /*0x0A*/ u16 evYield_HP:2;
    /*0x0A*/ u16 evYield_Attack:2;
    /*0x0A*/ u16 evYield_Defense:2;
    /*0x0A*/ u16 evYield_Speed:2;
    /*0x0B*/ u16 evYield_SpAttack:2;
    /*0x0B*/ u16 evYield_SpDefense:2;
    /*0x0C*/ u16 item1;
    /*0x0E*/ u16 item2;
    /*0x10*/ u8 genderRatio;
    /*0x11*/ u8 eggCycles;
    /*0x12*/ u8 friendship;
    /*0x13*/ u8 growthRate;
    /*0x14*/ u8 eggGroup1;
    /*0x15*/ u8 eggGroup2;
    /*0x16*/ u8 ability1;
    /*0x17*/ u8 ability2;
    /*0x18*/ u8 safariZoneFleeRate;
    /*0x19*/ u8 bodyColor:7;
    u8 noFlip:1;
    u16 padding;
};

struct PACKED BoxPokemon
{
    u32 personality;
    u32 otId;
    u8 nickname[POKEMON_NAME_LENGTH];
    u8 language;
    u8 isBadEgg:1;
    u8 hasSpecies:1;
    u8 isEgg:1;
    u8 blockBoxRS:1; // Unused, but Pokémon Box Ruby & Sapphire will refuse to deposit a Pokémon with this flag set
    u8 otName[7];
    u8 markings;
    u16 checksum;
    u16 nature:5;
    u16 unk0:11;

    u8 unk1[80 - 32];
};

struct PACKED Pokemon
{
    /*0x00*/ struct BoxPokemon box;
    /*0x50*/ u32 status;
    /*0x54*/ u8 level;
    /*0x55*/ u8 mail;
    /*0x56*/ u16 hp;
    /*0x58*/ u16 maxHP;
    /*0x5A*/ u16 attack;
    /*0x5C*/ u16 defense;
    /*0x5E*/ u16 speed;
    /*0x60*/ u16 spAttack;
    /*0x62*/ u16 spDefense;
};

#define BATTLE_STATS_NO 8

struct BattlePokemon
{
    /*0x00*/ u16 species;
    /*0x02*/ u16 attack;
    /*0x04*/ u16 defense;
    /*0x06*/ u16 speed;
    /*0x08*/ u16 spAttack;
    /*0x0A*/ u16 spDefense;
    /*0x0C*/ u16 moves[4];
    /*0x14*/ u32 hpIV:5;
    /*0x14*/ u32 attackIV:5;
    /*0x15*/ u32 defenseIV:5;
    /*0x15*/ u32 speedIV:5;
    /*0x16*/ u32 spAttackIV:5;
    /*0x17*/ u32 spDefenseIV:5;
    /*0x17*/ u32 isEgg:1;
    /*0x17*/ u32 altAbility:1;
    /*0x18*/ s8 statStages[BATTLE_STATS_NO];
    /*0x20*/ u8 ability;
    /*0x21*/ u8 type1;
    /*0x22*/ u8 type2;
    /*0x23*/ u8 unknown;
    /*0x24*/ u8 pp[4];
    /*0x28*/ u16 hp;
    /*0x2A*/ u8 level;
    /*0x2B*/ u8 friendship;
    /*0x2C*/ u16 maxHP;
    /*0x2E*/ u16 item;
    /*0x30*/ u8 nickname[POKEMON_NAME_LENGTH + 1];
    /*0x3B*/ u8 ppBonuses;
    /*0x3C*/ u8 otName[8];
    /*0x44*/ u32 experience;
    /*0x48*/ u32 personality;
    /*0x4C*/ u32 status1;
    /*0x50*/ u32 status2;
    /*0x54*/ u32 otId;
};

extern struct Pokemon gPlayerParty[PARTY_SIZE];
extern const struct ContestMove gContestMoves[];
extern u8 gPlayerPartyCount;

u32 LONG_CALL CanMonLearnTMHM(struct Pokemon *mon, u8 tm);
bool8 LONG_CALL MonKnowsMove(struct Pokemon *mon, u16 move);
// u32 LONG_CALL GetMonData(struct Pokemon *mon, s32 field, const void *dataArg);
u32 LONG_CALL GetMonData();
void LONG_CALL SetMonData(struct Pokemon *mon, s32 field, const void *dataArg);
u8 LONG_CALL CountAliveMons(u8 a1);
bool8 CheckIfMonCanUseHM(struct Pokemon *mon, u16 hm);
bool8 LONG_CALL CheckIfPartyCanUseTM(u16 tm);
u8 LONG_CALL CalculatePPWithBonus(u16 move, u8 ppBonuses, u8 moveIndex);
bool8 LONG_CALL IsHMMove(u16 move);
u8 LONG_CALL GetNature(struct Pokemon *mon);
u8 LONG_CALL GetNatureFromPersonality(u32 personality);
u16 LONG_CALL CalculateBoxMonChecksum(struct BoxPokemon *boxMon);
void LONG_CALL EncryptBoxMon(struct BoxPokemon *boxMon);
void LONG_CALL DecryptBoxMon(struct BoxPokemon *boxMon);
void LONG_CALL SetBoxMonData(struct BoxPokemon *boxMon, s32 field, u32 dataArg);
void LONG_CALL CalculateMonStats(struct Pokemon *mon);
u8 LONG_CALL GetAbilityBySpecies(u16 species, bool8 altAbility);
u8 LONG_CALL GetMonGender(struct Pokemon *mon);

enum
{
    STAT_STAGE_HP,      // 0
    STAT_STAGE_ATK,     // 1
    STAT_STAGE_DEF,     // 2
    STAT_STAGE_SPEED,   // 3
    STAT_STAGE_SPATK,   // 4
    STAT_STAGE_SPDEF,   // 5
    STAT_STAGE_ACC,     // 6
    STAT_STAGE_EVASION, // 7
};

extern const s8 gNatureStatTable[25][5];
extern const u8 *const gNatureNames[25];
extern const struct BaseStats gBaseStats[];
extern const u8 gSpeciesNames[][11];
extern const u8 gAbilityNames[][13];

extern const u8 gMoveNames[][13];
extern const u8 *const gMoveDescriptions[];
extern const u8 gBattleMoveSplit[];
extern const struct BattleMove gBattleMoves[];
extern const u16 *gLevelUpLearnsets[];