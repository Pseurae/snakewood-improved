#pragma once

extern u8 gPartyMenuUseExitCallback;

#define pmStatGrowths      data
#define pmSetupState       data[0]
#define pmMonIndex         data[1]
#define pmUnk268           data[2]
#define pmUnk272           data[7]
#define pmUnk27E           data[13]
#define pmUnk280           data[14]
#define pmUnk282           data[15]

struct Unk201B000
{
    struct Pokemon unk0[6];
    u8 menuType;
    u8 promptTextId;
    TaskFunc menuHandler;
    u8 menuHandlerTaskId;
    u8 unk261;
    u8 unk262; // Never read
    u8 unk263;
    s16 data[16];
};

struct PartyMenu
{
    /*0x00*/ struct Pokemon *pokemon;
    /*0x04*/ u8 unk4;
    /*0x05*/ u8 primarySelectedMonIndex;
    /*0x06*/ u16 secondarySelectedIndex;
    /*0x08*/ u16 unk8;
    /*0x0A*/ u8 pad_0A[2];
    /*0x0C*/ s32 unkC;
    /*0x10*/ TaskFunc unk10;
    /*0x14*/ TaskFunc unk14;
};

extern struct Unk201B000 gPartyMenu2;
extern struct PartyMenu gPartyMenu;

u8 *GetMonNickname(struct Pokemon *pokemon, u8 *stringBuffer);
bool8 IsBlueYellowRedFlute(u16);
u8 GetMonStatusAndPokerus(struct Pokemon *mon);
void sub_806F8AC(u8 taskId);
void sub_806E8D0(u8 taskId, u16 b, TaskFunc c);
bool8 IsMedicineIneffective(struct Pokemon *pkmn, u16 item);
bool8 IsHPRecoveryItem(u16 item);
bool8 ExecuteTableBasedItemEffect__(u8, u16, u8);
void GetMedicineItemEffectMessage(u16);
void TryPrintPartyMenuMonNickname(u8 monIndex, struct Pokemon *pokemon);
void PartyMenuUpdateLevelOrStatus(struct Pokemon *, u8);
void Task_ClosePartyMenuAfterText(u8 taskId);
u8 DisplayPartyMenuMessage(const u8 *message, u8 noClearAfter);
void PrintPartyMenuPromptText(u8 textId, u8 b);
void ReturnToBagFromPartyMenu(u8 taskId);

void HandleItemUsePartyMenu(u8 taskID);
u8 GetItemEffectType(u16 item);
void PartyMenuEraseMsgBoxAndFrame(void);

