#pragma once
#include "types.h"

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

struct BattleMove
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
};

struct ContestMove
{
    u8 effect;
    u8 contestCategory:3;
    u8 comboStarterId;
    u8 comboMoves[4];
};

struct PACKED Pokemon
{
    u8 unk0[100];
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
extern const struct BattleMove gBattleMoves[];

u32 CanMonLearnTMHM(struct Pokemon *mon, u8 tm);
bool8 MonKnowsMove(struct Pokemon *mon, u16 move);
u32 GetMonData(struct Pokemon *mon, s32 field);
u8 CountAliveMons(u8 a1);
bool8 CheckIfMonCanUseHM(struct Pokemon *mon, u16 hm);
bool8 CheckIfPartyCanUseTM(u16 tm);
u8 CalculatePPWithBonus(u16 move, u8 ppBonuses, u8 moveIndex);
bool8 IsHMMove(u16 move);
u8 GetNature(struct Pokemon *mon);

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