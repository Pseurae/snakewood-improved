#include "types.h"
#include "bios.h"
#include "debug.h"
#include "field_weather.h"
#include "main.h"
#include "menu.h"
#include "palette.h"
#include "pokemon.h"
#include "pokemon_pic.h"
#include "scanline_effect.h"
#include "script.h"
#include "sound.h"
#include "string_util.h"
#include "task.h"
#include "constants/gba.h"
#include "constants/pokemon.h"
#include "constants/songs.h"
#include "constants/species.h"

/*
u16 paletteNum = (gMenuWindowPtr->paletteNum << 12);
SetCursorX(gMenuWindowPtr, 8);
SetCursorY(gMenuWindowPtr, 8);

for (u8 i = 0; i < 3; ++i)
{
    u16 tileNum = GetCursorTileNum(gMenuWindowPtr, 0, 0);
    u32 *tileData = (u32 *)(gMenuWindowPtr->tileData + 32 * tileNum);

    for (u8 y = 0; y < 8; ++y)
        for (u8 x = 0; x < 8; ++x)
        {
            tileData[y] |= (gMenuWindowPtr->foregroundColor << (4 * x));
        }

    *GetCursorTilemapPointerWithOffset(gMenuWindowPtr, 0, 0) = tileNum | paletteNum;
    *GetCursorTilemapPointerWithOffset(gMenuWindowPtr, 0, 1) = tileNum | paletteNum;
    AddToCursorX(gMenuWindowPtr, 8);
}

AddToCursorY(gMenuWindowPtr, 8);
*/

const u8 sText_HP[] = _("HP");
const u8 sText_Attack[] = _("Attack");
const u8 sText_Defense[] = _("Defense");
const u8 sText_Speed[] = _("Speed");
const u8 sText_SpAtk[] = _("Sp. Atk");
const u8 sText_SpDef[] = _("Sp. Def");

extern const u8 OtherText_MaleSymbol[];
extern const u8 OtherText_FemaleSymbol[];

static EWRAM_DATA struct StatViewer
{
    u8 monSpriteId;
    u8 selectedMon;
} sStatViewer = { MAX_SPRITES, 0 };

static bool8 SetupStatViewer(void);
static void CB2_StatsViewer(void);
static void CB2_StatsViewerRun(void);
static void VBlank_StatsViewerRun(void);
static void Task_StatViewer_UpdateScreen(u8 taskId);
static void Task_StatViewer_HandleInput(u8 taskId);
static void Task_StatViewer_ChangePokemon(u8 taskId);
static void StatViewer_PrintStatLabels(void);

extern const u8 gOtherText_TwoDashes[];

static const u8 *sText_StatLabels[] = {
    sText_HP,
    sText_Attack,
    sText_Defense,
    sText_SpAtk,
    sText_SpDef,
    sText_Speed,
};

static void StatViewer_PrintPokemonBaseStats(struct Pokemon *mon)
{
    u16 species = GetMonData(mon, MON_DATA_SPECIES);

    for (u8 i = 0; i < 6; ++i)
    {
        u8 stat;

        switch (i)
        {
        case 0:
            stat = gBaseStats[species].baseHP;
            break;
        case 1:
            stat = gBaseStats[species].baseAttack;
            break;
        case 2:
            stat = gBaseStats[species].baseDefense;
            break;
        case 3:
            stat = gBaseStats[species].baseSpAttack;
            break;
        case 4:
            stat = gBaseStats[species].baseSpDefense;
            break;
        case 5:
            stat = gBaseStats[species].baseSpeed;
            break;
        }

        ConvertIntToDecimalString(gStringVar4, stat);
        MenuPrint_RightAligned(gStringVar4, 20, 4 + i * 2);
    }
}

static const u8 sText_BaseLabel[] = _("Base");
static const u8 sText_IVLabel[] = _("IVs");
static const u8 sText_EVLabel[] = _("EVs");

static void StatViewer_PrintPokemonIV(struct Pokemon *mon)
{
    for (u8 i = 0; i < 6; ++i)
    {
        u8 stat;

        switch (i)
        {
        case 0:
            stat = GetMonData(mon, MON_DATA_HP_IV);
            break;
        case 1:
            stat = GetMonData(mon, MON_DATA_ATK_IV);
            break;
        case 2:
            stat = GetMonData(mon, MON_DATA_DEF_IV);
            break;
        case 3:
            stat = GetMonData(mon, MON_DATA_SPATK_IV);
            break;
        case 4:
            stat = GetMonData(mon, MON_DATA_SPDEF_IV);
            break;
        case 5:
            stat = GetMonData(mon, MON_DATA_SPEED_IV);
            break;
        }

        ConvertIntToDecimalString(gStringVar4, stat);
        MenuPrint_RightAligned(gStringVar4, 24, 4 + i * 2);
    }
}

static void StatViewer_PrintPokemonEV(struct Pokemon *mon)
{
    for (u8 i = 0; i < 6; ++i)
    {
        u8 stat;

        switch (i)
        {
        case 0:
            stat = GetMonData(mon, MON_DATA_HP_EV);
            break;
        case 1:
            stat = GetMonData(mon, MON_DATA_ATK_EV);
            break;
        case 2:
            stat = GetMonData(mon, MON_DATA_DEF_EV);
            break;
        case 3:
            stat = GetMonData(mon, MON_DATA_SPATK_EV);
            break;
        case 4:
            stat = GetMonData(mon, MON_DATA_SPDEF_EV);
            break;
        case 5:
            stat = GetMonData(mon, MON_DATA_SPEED_EV);
            break;
        }

        ConvertIntToDecimalString(gStringVar4, stat);
        MenuPrint_RightAligned(gStringVar4, 28, 4 + i * 2);
    }
}

static void StatViewer_PrintPokemonEmpty(u8 x)
{
    for (u8 i = 0; i < 6; ++i)
    {
        MenuPrint_RightAligned(gOtherText_TwoDashes, x, 4 + i * 2);
    }
}

static void StatViewer_PrintPokemonCount(void)
{
    u8 *ptr = gStringVar4;
    ptr = ConvertIntToDecimalString(ptr, sStatViewer.selectedMon + 1);
    *(ptr++) = CHAR_SPACE;
    *(ptr++) = CHAR_SLASH;
    *(ptr++) = CHAR_SPACE;
    ptr = ConvertIntToDecimalString(ptr, gPlayerPartyCount);
    Menu_PrintText(gStringVar4, 1, 17);
}

static void StatViewer_PrintPokemonInfo(void)
{
    u8 *ptr;
    struct Pokemon *mon = &gPlayerParty[sStatViewer.selectedMon];

    u16 length = GetMonData(mon, MON_DATA_NICKNAME, gStringVar4);
    ptr = gStringVar4 + length;
    *(ptr++) = EXT_CTRL_CODE_BEGIN;
    *(ptr++) = EXT_CTRL_CODE_CLEAR_TO;
    *(ptr++) = POKEMON_NAME_LENGTH * 6;
    *(ptr++) = EOS;

    Menu_PrintText(gStringVar4, 1, 1);

    if (!GetMonData(mon, MON_DATA_IS_EGG))
    {
        u16 species = GetMonData(mon, MON_DATA_SPECIES);
        ptr = gStringVar4;
        *(ptr++) = CHAR_SLASH;
        ptr = StringCopy(ptr, gSpeciesNames[species]);
        *(ptr++) = EXT_CTRL_CODE_BEGIN;
        *(ptr++) = EXT_CTRL_CODE_CLEAR_TO;
        *(ptr++) = (POKEMON_NAME_LENGTH + 1) * 6;
        *(ptr++) = EOS;

        Menu_PrintText(gStringVar4, 1, 3);

        ptr = gStringVar4;
        *(ptr++) = EXT_CTRL_CODE_BEGIN;
        *(ptr++) = EXT_CTRL_CODE_COLOR;

        u8 gender = GetMonGender(mon);
        if (gender)
        {
            *(ptr++) = TEXT_COLOR_BLUE;
            StringCopy(ptr, OtherText_MaleSymbol);
        }
        else
        {
            *(ptr++) = TEXT_COLOR_RED;
            StringCopy(ptr, OtherText_FemaleSymbol);
        }

        Menu_PrintText(gStringVar4, 1, 5);

        u8 level = GetMonData(mon, MON_DATA_LEVEL);
        ptr = gStringVar4;
        *(ptr++) = CHAR_LV;
        ptr = ConvertIntToDecimalString(ptr, level);
        *(ptr++) = EXT_CTRL_CODE_BEGIN;
        *(ptr++) = EXT_CTRL_CODE_CLEAR_TO;
        *(ptr++) = 4 * 6;
        *(ptr++) = EOS;

        Menu_PrintText(gStringVar4, 3, 5);

        StatViewer_PrintPokemonBaseStats(mon);
        StatViewer_PrintPokemonIV(mon);
        StatViewer_PrintPokemonEV(mon);
    }
    else
    {
        Menu_BlankWindowRect(1, 3, 6, 6);
        StatViewer_PrintPokemonEmpty(20);
        StatViewer_PrintPokemonEmpty(24);
        StatViewer_PrintPokemonEmpty(28);
    }
}

void DrawFrameTest(void)
{
    SetMainCallback2(CB2_StatsViewer);
}

static void StatViewer_DrawMonSprite(void)
{
    struct Pokemon *mon = &gPlayerParty[sStatViewer.selectedMon];
    u16 species = GetMonData(mon, MON_DATA_SPECIES);
    sStatViewer.monSpriteId = CreateMonSprite_PicBox(species, 36, 96, 0);

    if (sStatViewer.monSpriteId != MAX_SPRITES)
    {
        gSprites[sStatViewer.monSpriteId].callback = SpriteCallbackDummy;
        gSprites[sStatViewer.monSpriteId].oam.priority = 0;

        u8 markings = GetMonData(mon, MON_DATA_MARKINGS);
        StartSpriteAnim(&gSprites[sStatViewer.monSpriteId], markings);
    }
}

static void StatViewer_BlankStats(void)
{
    Menu_BlankWindowRect(16, 4, 29, 18);
}

#define tState data[0]
#define tDelay data[1]

static void StatViewer_ChangePokemon(u8 taskId)
{
    gTasks[taskId].tState = 0;
    gTasks[taskId].tDelay = 3;
    gTasks[taskId].func = Task_StatViewer_ChangePokemon;
}

static void Task_StatViewer_ChangePokemon(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    switch (tState)
    {
    case 0:
        if (sStatViewer.monSpriteId != MAX_SPRITES)
            FreeResourcesAndDestroySprite(&gSprites[sStatViewer.monSpriteId]);
        tState++;
        break;
    case 1:
        StatViewer_DrawMonSprite();
        tState++;
        break;
    case 2:
        StatViewer_BlankStats();
        tState++;
        break;
    case 3:
        StatViewer_PrintStatLabels();
        StatViewer_PrintPokemonCount();
        StatViewer_PrintPokemonInfo();
        tState++;
        break;
    case 4:
        tDelay--;
        if (tDelay <= 0)
            tState++;
        break;
    default:
        gTasks[taskId].func = Task_StatViewer_HandleInput;
        break;
    }
}

#undef tState
#undef tDelay

static void Task_StatViewer_HandleInput(u8 taskId)
{
    if (gPaletteFade.active)
        return;
    if (gMain.newKeys & DPAD_DOWN)
    {
        sStatViewer.selectedMon =
            (sStatViewer.selectedMon + 1) > (gPlayerPartyCount - 1) ? 0 : sStatViewer.selectedMon + 1;
        StatViewer_ChangePokemon(taskId);
        PlaySE(SE_SELECT);
    }
    else if (gMain.newKeys & DPAD_UP)
    {
        sStatViewer.selectedMon =
            (sStatViewer.selectedMon - 1) < 0 ? (gPlayerPartyCount - 1) : sStatViewer.selectedMon - 1;
        StatViewer_ChangePokemon(taskId);
        PlaySE(SE_SELECT);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        SetMainCallback2(CB2_ReturnToField);
        PlaySE(SE_SELECT);
        DestroyTask(taskId);
    }
}

static void StatViewer_PrintStatTypeLabels(void)
{
    MenuPrint_RightAligned(sText_BaseLabel, 20, 2);
    MenuPrint_RightAligned(sText_IVLabel, 24, 2);
    MenuPrint_RightAligned(sText_EVLabel, 28, 2);
}

static void StatViewer_PrintStatLabels(void)
{
    struct Pokemon *mon = &gPlayerParty[sStatViewer.selectedMon];
    u8 nature = GetNature(mon);
    bool8 isEgg = GetMonData(mon, MON_DATA_IS_EGG);
    u8 *ptr;

    for (u8 i = 0; i < ARRAY_COUNT(sText_StatLabels); ++i)
    {
        if (i > 0 && !isEgg)
        {
            static u8 statIndices[] = { 0, 1, 3, 4, 2 };
            ptr = gStringVar4;
            *(ptr++) = EXT_CTRL_CODE_BEGIN;
            *(ptr++) = EXT_CTRL_CODE_COLOR;

            switch (gNatureStatTable[nature][statIndices[i - 1]])
            {
            case 0:
                *(ptr++) = TEXT_COLOR_DARK_GREY;
                break;
            case 1:
                *(ptr++) = TEXT_COLOR_RED;
                break;
            case -1:
                *(ptr++) = TEXT_COLOR_BLUE;
                break;
            }

            StringCopy(ptr, sText_StatLabels[i]);
        }
        else
        {
            StringCopy(gStringVar4, sText_StatLabels[i]);
        }
        MenuPrint_RightAligned(gStringVar4, 16, 4 + i * 2);
    }
}

static bool8 SetupStatViewer(void)
{
    u8 spriteId;
    switch (gMain.state)
    {
    case 0:
        SetVBlankHBlankCallbacksToNull();
        ResetSpriteData();
        ResetTasks();
        gMain.state++;
        break;
    case 1:
        ScanlineEffect_Stop();
        gMain.state++;
        break;
    case 2:
        ResetPaletteFade();
        gPaletteFade.bufferTransferDisabled = TRUE;
        gMain.state++;
        break;
    case 3:
        DmaFill16(3, 0, VRAM, VRAM_SIZE);
        ClearTilemapBuffers();
        gMain.state++;
        break;
    case 4:
        Text_LoadWindowTemplate(&gWindowTemplate_81E6C3C);
        InitMenuWindow(&gMenuTextWindowTemplate);
        Menu_BlankWindowRect(0, 0, 29, 19);
        gMain.state++;
        break;
    case 5:
        StatViewer_PrintStatTypeLabels();
        StatViewer_PrintStatLabels();
        StatViewer_DrawMonSprite();
        StatViewer_PrintPokemonInfo();
        StatViewer_PrintPokemonCount();
        gMain.state++;
        break;
    default:
        BeginNormalPaletteFade(0xffffffff, 0, 16, 0, RGB_BLACK);
        gPaletteFade.bufferTransferDisabled = FALSE;

        CreateTask(Task_StatViewer_HandleInput, 0x0);
        SetVBlankCallback(VBlank_StatsViewerRun);
        SetMainCallback2(CB2_StatsViewerRun);
        return TRUE;
    }

    return FALSE;
}

static void CB2_StatsViewer(void)
{
    while (SetupStatViewer() != TRUE)
    {
    }
}

static void CB2_StatsViewerRun(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
}

static void VBlank_StatsViewerRun(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}