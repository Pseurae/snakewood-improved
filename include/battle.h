#pragma once

#include "types.h"
#include "berry.h"
#include "main.h"
#include "pokemon.h"
#include "constants/moves.h"

#define MAX_BATTLERS_COUNT 4
#define MAX_MON_MOVES      4

struct ResourceFlags
{
    u32 arr[4];
};

struct BattleStruct /* 0x2000000 */
{
    u8 filler00000[0x14000];
    /*0x14000*/ u8 linkSend[0x1000];
    /*0x15000*/ u8 linkRecv[0x1000];
    /*0x16000*/ u8 turnEffectsTracker;
    /*0x16001*/ u8 turnEffectsBattlerId;
    /*0x16002*/ u8 animTurn;
    /*0x16003*/ u8 scriptingActive;
    /*0x16004*/ u8 wrappedMove[MAX_BATTLERS_COUNT * 2];
    /*0x1600C*/ u8 cmd49StateTracker;
    /*0x1600D*/ u8 unk1600D; // unused
    /*0x1600E*/ u8 turnCountersTracker;
    /*0x1600F*/ u8 getexpStateTracker;
    /*0x16010*/ u8 moveTarget[MAX_BATTLERS_COUNT];
    /*0x16014*/ u32 painSplitHP;
    /*0x16018*/ u8 expGetterMonId;
    /*0x16019*/ u8 unk16019;           // unused
    /*0x1601A*/ u8 atk5A_StateTracker; // also atk5B, statetracker
    /*0x1601B*/ u8 wildVictorySong;
    /*0x1601C*/ u8 dynamicMoveType;
    /*0x1601D*/ u8 focusPunchBattler;
    /*0x1601E*/ u8 statChanger;
    /*0x1601F*/ u8 dmgMultiplier;
    /*0x16020*/ u8 wrappedBy[MAX_BATTLERS_COUNT];
    /*0x16024*/ u16 assistMove[PARTY_SIZE * MAX_MON_MOVES];
    /*0x16054*/ u8 battlerPreventingSwitchout;
    /*0x16055*/ u8 unk16055; // unused
    /*0x16056*/ u8 moneyMultiplier;
    /*0x16057*/ u8 savedTurnActionNumber;
    /*0x16058*/ u8 switchInAbilitiesCounter;
    /*0x16059*/ u8 faintedActionsState;
    /*0x1605A*/ u8 faintedActionsBattlerId;
    /*0x1605C*/ u16 exp;
    /*0x1605E*/ u8 unk1605E;
    /*0x1605F*/ u8 sentInPokes;
    /*0x16060*/ u8 selectionScriptFinished[MAX_BATTLERS_COUNT];
    /*0x16064*/ u8 unk16064[MAX_BATTLERS_COUNT];
    /*0x16068*/ u8 monToSwitchIntoId[MAX_BATTLERS_COUNT];
    /*0x1606C*/ u8 unk1606C[MAX_BATTLERS_COUNT][3];
    /*0x16078*/ u8 runTries;
    /*0x16079*/ u8 caughtNick[POKEMON_NAME_LENGTH + 1];
    /*0x16084*/ u8 battleStyle;
    /*0x16085*/ u8 unk16085;
    /*0x16086*/ u8 safariGoNearCounter;
    /*0x16087*/ u8 safariPkblThrowCounter;
    /*0x16088*/ u8 safariFleeRate;
    /*0x16089*/ u8 safariCatchFactor;
    /*0x1608A*/ u8 linkBattleVsSpriteId_V;
    /*0x1608B*/ u8 linkBattleVsSpriteId_S;
    /*0x1608C*/ u8 ChosenMoveID[MAX_BATTLERS_COUNT];
    /*0x16090*/ s32 bideDmg;
    /*0x16094*/ u8 stateIdAfterSelScript[4];
    /*0x16098*/ u8 unk16098[3]; // unused
    /*0x1609B*/ u8 castformToChangeInto;
    /*0x1609C*/ u8 atk6C_statetracker;
    /*0x1609D*/ u8 unk1609D;
    /*0x1609E*/ u8 dbgAICycleMoveTracker[2]; // debug
    /*0x160A0*/ u8 stringMoveType;
    /*0x160A1*/ u8 animTargetsHit;
    /*0x160A2*/ u8 expGetterBattlerId;
    /*0x160A3*/ u8 unk160A3;
    /*0x160A4*/ u8 animArg1;
    /*0x160A5*/ u8 animArg2;
    /*0x160A6*/ u8 unk160A6; // related to gAbsentBattlerFlags, possibly absent flags turn ago?
    /*0x160A7*/ u8 unk160A7;
    /*0x160A8*/ u8 unk160A8;
    /*0x160A9*/ u8 unk160A9;
    /*0x160AA*/ u8 unk160AA;
    /*0x160AB*/ u8 unk160AB;
    /*0x160AC*/ u16 lastTakenMove[2 * 2 * 2];
    /*0x160BC*/ u16 HP_OnSwitchout[2];
    /*0x160C0*/ u8 abilityPreventingSwitchout;
    /*0x160C1*/ u8 hpScale;
    /*0x160C2*/ u16 unk160C2;
    /*0x160C4*/ MainCallback unk160C4;

    // Buffers used by the AI are indexed using (battler / 2)
    // i.e. the flank bit, because at no point in game is the
    // player's partner in a multi battle controlled by the AI.
    // This is changed in Emerald to support the Tabitha fight
    // in the Space Center.
    /*0x160C8*/ u8 AI_monToSwitchIntoId[2];
    /*0x160CA*/ u8 synchroniseEffect;
    /*0x160CB*/ u8 multiplayerId;
    /*0x160CC*/ u16 usedHeldItems[MAX_BATTLERS_COUNT];
    // Space is reserved for two u16s, one for each opponent in
    // doubles. However, only the lower byte of each is ever used.
    /*0x160D4*/ u16 AI_usedItemId[2];
    /*0x160D8*/ u8 AI_usedItemType[2];
    /*0x160DA*/ u8 AI_usedItemEffect[2];
    /*0x160DC*/ u8 statAnimPlayed;
    /*0x160DD*/ u8 intimidateBank;
    /*0x160DE*/ u8 unk160DE;
    /*0x160DF*/ u8 unk160DF;
    /*0x160E0*/ u8 unk160E0[6];
    /*0x160E6*/ u8 unk160E6;
    /*0x160E7*/ u8 atkCancellerTracker;
    /*0x160E8*/ u16 choicedMove[MAX_BATTLERS_COUNT];
    /*0x160F0*/ u16 changedItems[MAX_BATTLERS_COUNT];
    /*0x160F8*/ u8 unk160F8;
    /*0x160F9*/ u8 unk160F9;
    /*0x160FA*/ u8 levelUpHP;
    /*0x160FB*/ u8 unk160FB;
    /*0x160FC*/ u8 turnSideTracker;
    /*0x160FD*/ u8 unk160FD;
    /*0x160FE*/ u8 unk160FE;
    /*0x160FF*/ u8 unk160FF;
    /*0x16100*/ u16 lastTakenMoveFrom[2 * 4];
    /*0x16110*/ u8 wishPerishSongState;
    /*0x16111*/ u8 wishPerishSongBattlerId;
    /*0x16112*/ u8 multihitMoveEffect;
    /*0x16113*/ u8 givenExpMons;
};

struct PACKED ProtectStruct
{
    /*field0*/
    u32 protected:1;
    u32 endured:1;
    u32 noValidMoves:1;
    u32 helpingHand:1;
    u32 bounceMove:1;
    u32 stealMove:1;
    u32 flag0Unknown:1;
    u32 prlzImmobility:1;
    /*field1*/
    u32 confusionSelfDmg:1;
    u32 targetNotAffected:1;
    u32 chargingTurn:1;
    u32 fleeFlag:2; // For RunAway and Smoke Ball.
    u32 usedImprisonedMove:1;
    u32 loveImmobility:1;
    u32 usedDisabledMove:1;
    /*field2*/
    u32 usedTauntedMove:1;
    u32 flag2Unknown:1;
    u32 flinchImmobility:1;
    u32 notFirstStrike:1;
    u32 free:4;
    /*field3*/
    u32 field3:8;
    s32 physicalDmg;
    s32 specialDmg;
    u8 physicalBattlerId;
    u8 specialBattlerId;
    u16 fieldE;
};

struct PACKED SpecialStatus
{
    u32 statLowered:1;
    u32 lightningRodRedirected:1;
    u32 restoredBattlerSprite:1;
    u32 intimidatedMon:1;
    u32 traced:1;
    u32 ppNotAffectedByPressure:1;
    u32 flag40:1;
    u32 focusBanded:1;
    s32 dmg;
    s32 physicalDmg;
    s32 specialDmg;
    u8 physicalBattlerId;
    u8 specialBattlerId;
    u8 field12;
    u8 field13;
};

struct PACKED DisableStruct
{
    /*0x00*/ u32 transformedMonPersonality;
    /*0x04*/ u16 disabledMove;
    /*0x06*/ u16 encoredMove;
    /*0x08*/ u8 protectUses;
    /*0x09*/ u8 stockpileCounter;
    /*0x0A*/ u8 substituteHP;
    /*0x0B*/ u8 disableTimer1:4;
    /*0x0B*/ u8 disableTimer2:4;
    /*0x0C*/ u8 encoredMovePos;
    /*0x0D*/ u8 unkD;
    /*0x0E*/ u8 encoreTimer1:4;
    /*0x0E*/ u8 encoreTimer2:4;
    /*0x0F*/ u8 perishSongTimer1:4;
    /*0x0F*/ u8 perishSongTimer2:4;
    /*0x10*/ u8 furyCutterCounter;
    /*0x11*/ u8 rolloutTimer1:4;
    /*0x11*/ u8 rolloutTimer2:4;
    /*0x12*/ u8 chargeTimer1:4;
    /*0x12*/ u8 chargeTimer2:4;
    /*0x13*/ u8 tauntTimer1:4;
    /*0x13*/ u8 tauntTimer2:4;
    /*0x14*/ u8 bankPreventingEscape;
    /*0x15*/ u8 battlerWithSureHit;
    /*0x16*/ u8 isFirstTurn;
    /*0x17*/ u8 unk17;
    /*0x18*/ u8 truantCounter:1;
    /*0x18*/ u8 unk18_a:3;
    /*0x18*/ u8 mimickedMoves:4;
    /*0x19*/ u8 rechargeCounter;
    /*0x1A*/ u8 unk1A[2];
};

extern u16 gBattleTypeFlags;
extern struct BattlePokemon gBattleMons[4];
extern u16 gCurrentMove;
extern u8 gCritMultiplier;
extern u16 gBattleWeather;
extern struct BattleEnigmaBerry gEnigmaBerries[];
extern u16 gBattleMovePower;
extern u16 gTrainerBattleOpponent;
extern const u8 gHoldEffectToType[17][2];
extern const u8 gStatStageRatios[13][2];
extern struct ResourceFlags gBattleFlags;
extern u32 gBattleControllerExecFlags;
extern struct BattleStruct gBattleStruct;
extern u8 gMoveResultFlags;
extern u8 gActiveBattler;
extern u8 gBattlerTarget;
extern u8 gBattlerAttacker;
extern struct ProtectStruct gProtectStructs[MAX_BATTLERS_COUNT];
extern struct SpecialStatus gSpecialStatuses[MAX_BATTLERS_COUNT];
extern struct DisableStruct gDisableStructs[MAX_BATTLERS_COUNT];
extern const u8 *gBattlescriptCurrInstr;
extern s32 gBattleMoveDamage;
extern u32 gHitMarker;
extern s32 gHpDealt;
extern s32 gTakenDmg[4];
extern u8 gTakenDmgByBattler[4];
extern u8 BattleScript_SubstituteFade[];

extern const u8 gBattleMoveSplit[NUM_MOVES];

u8 GetBattlerSide(u8);
u8 AbilityBattleEffects(u8 caseID, u8 bank, u8 ability, u8 special, u16 move);
u8 GetBattlerForBattleScript(u8 bankValue);
void BattleScriptPushCursor(void);

void BtlController_EmitSetMonData(u8 a, u8 request, u8 c, u8 bytes, void *data); // 0x2
void MarkBattlerForControllerExec(u8);
