#include "types.h"
#include "bios.h"
#include "debug.h"
#include "field_weather.h"
#include "main.h"
#include "menu.h"
#include "palette.h"
#include "pokemon.h"
#include "pokemon_pic.h"
#include "stats_viewer.h"
#include "scanline_effect.h"
#include "script.h"
#include "sound.h"
#include "string_util.h"
#include "task.h"
#include "constants/gba.h"
#include "constants/pokemon.h"
#include "constants/songs.h"
#include "constants/species.h"

const u8 sText_HP[] = _("HP");
const u8 sText_Attack[] = _("Attack");
const u8 sText_Defense[] = _("Defense");
const u8 sText_Speed[] = _("Speed");
const u8 sText_SpAtk[] = _("Sp. Atk");
const u8 sText_SpDef[] = _("Sp. Def");

extern const u8 OtherText_MaleSymbol[];
extern const u8 OtherText_FemaleSymbol[];

static EWRAM_DATA struct StatsViewer
{
    u8 monSpriteId;
    u8 selectedMon;
    MainCallback exitCallback;
} sStatsViewer = { MAX_SPRITES, 0, NULL };

static bool8 SetupStatsViewer(void);
static void CB2_StatsViewer(void);
static void CB2_StatsViewerRun(void);
static void VBlank_StatsViewerRun(void);
static void Task_StatsViewer_UpdateScreen(u8 taskId);
static void Task_StatsViewer_HandleInput(u8 taskId);
static void Task_StatsViewer_ChangePokemon(u8 taskId);
static void StatsViewer_PrintStatLabels(void);

extern const u8 gOtherText_TwoDashes[];

static const u8 *sText_StatLabels[] = {
    sText_HP,
    sText_Attack,
    sText_Defense,
    sText_SpAtk,
    sText_SpDef,
    sText_Speed,
};

static void StatsViewer_PrintPokemonBaseStats(struct Pokemon *mon)
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

static void StatsViewer_PrintPokemonIV(struct Pokemon *mon)
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

static void StatsViewer_PrintPokemonEV(struct Pokemon *mon)
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

static void StatsViewer_PrintPokemonEmpty(u8 x)
{
    for (u8 i = 0; i < 6; ++i)
    {
        MenuPrint_RightAligned(gOtherText_TwoDashes, x, 4 + i * 2);
    }
}

static void StatsViewer_PrintPokemonCount(void)
{
    u8 *ptr = gStringVar4;
    ptr = ConvertIntToDecimalString(ptr, sStatsViewer.selectedMon + 1);
    *(ptr++) = CHAR_SPACE;
    *(ptr++) = CHAR_SLASH;
    *(ptr++) = CHAR_SPACE;
    ptr = ConvertIntToDecimalString(ptr, gPlayerPartyCount);
    MenuPrint_Centered(gStringVar4, 4, 17, StringLength(gStringVar4));
}

static void StatsViewer_PrintPokemonInfo(void)
{
    u8 *ptr;
    struct Pokemon *mon = &gPlayerParty[sStatsViewer.selectedMon];

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

        StatsViewer_PrintPokemonBaseStats(mon);
        StatsViewer_PrintPokemonIV(mon);
        StatsViewer_PrintPokemonEV(mon);
    }
    else
    {
        Menu_BlankWindowRect(1, 3, 10, 6);
        StatsViewer_PrintPokemonEmpty(20);
        StatsViewer_PrintPokemonEmpty(24);
        StatsViewer_PrintPokemonEmpty(28);
    }
}

void GoToStatsViewer(MainCallback exitCallback)
{
    sStatsViewer.exitCallback = exitCallback;
    SetMainCallback2(CB2_StatsViewer);
}

void GoToStatsViewerFromOverworld(void)
{
    GoToStatsViewer(CB2_ReturnToField);
}

void GoToStatsViewerFromBag(void)
{
    GoToStatsViewer((MainCallback)(0x80A53F8 | 1));
}

static void StatsViewer_DrawMonSprite(void)
{
    struct Pokemon *mon = &gPlayerParty[sStatsViewer.selectedMon];
    u16 species = GetMonData(mon, MON_DATA_SPECIES);
    sStatsViewer.monSpriteId = CreateMonSprite_PicBox(species, 38, 96, 0);

    if (sStatsViewer.monSpriteId != MAX_SPRITES)
    {
        gSprites[sStatsViewer.monSpriteId].callback = SpriteCallbackDummy;
        gSprites[sStatsViewer.monSpriteId].oam.priority = 0;

        u8 markings = GetMonData(mon, MON_DATA_MARKINGS);
        StartSpriteAnim(&gSprites[sStatsViewer.monSpriteId], markings);
    }
}

static void StatsViewer_BlankStats(void)
{
    Menu_BlankWindowRect(16, 4, 29, 14);
}

#define tState data[0]
#define tDelay data[1]

static void StatsViewer_ChangePokemon(u8 taskId)
{
    gTasks[taskId].tState = 0;
    gTasks[taskId].tDelay = 3;
    gTasks[taskId].func = Task_StatsViewer_ChangePokemon;
}

static void Task_StatsViewer_ChangePokemon(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    switch (tState)
    {
    case 0:
        if (sStatsViewer.monSpriteId != MAX_SPRITES)
            FreeResourcesAndDestroySprite(&gSprites[sStatsViewer.monSpriteId]);
        tState++;
        break;
    case 1:
        StatsViewer_DrawMonSprite();
        tState++;
        break;
    case 2:
        StatsViewer_BlankStats();
        tState++;
        break;
    case 3:
        StatsViewer_PrintStatLabels();
        StatsViewer_PrintPokemonCount();
        StatsViewer_PrintPokemonInfo();
        tState++;
        break;
    case 4:
        tDelay--;
        if (tDelay <= 0)
            tState++;
        break;
    default:
        gTasks[taskId].func = Task_StatsViewer_HandleInput;
        break;
    }
}

static void Task_StatsViewer_Close(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    switch (tState)
    {
    case 0:
        BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
        tState++;
        break;
    case 1:
        if (!gPaletteFade.active)
            tState++;
        break;
    case 2:
        FreeResourcesAndDestroySprite(&gSprites[sStatsViewer.monSpriteId]);
        tState++;
        break;
    default:
        if (sStatsViewer.exitCallback) SetMainCallback2(sStatsViewer.exitCallback);
        DestroyTask(taskId);
        break;
    }
}

static void Task_StatsViewer_HandleInput(u8 taskId)
{
    u8 lastSelectedMon = sStatsViewer.selectedMon;

    if (gPaletteFade.active)
        return;
    if (gMain.newKeys & DPAD_DOWN)
    {
        sStatsViewer.selectedMon =
            (sStatsViewer.selectedMon + 1) > (gPlayerPartyCount - 1) ? 0 : sStatsViewer.selectedMon + 1;
        if (sStatsViewer.selectedMon != lastSelectedMon)
            StatsViewer_ChangePokemon(taskId);
        PlaySE(SE_SELECT);
    }
    else if (gMain.newKeys & DPAD_UP)
    {
        sStatsViewer.selectedMon =
            (sStatsViewer.selectedMon - 1) < 0 ? (gPlayerPartyCount - 1) : sStatsViewer.selectedMon - 1;
        if (sStatsViewer.selectedMon != lastSelectedMon)
            StatsViewer_ChangePokemon(taskId);
        PlaySE(SE_SELECT);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        gTasks[taskId].tState = 0;
        gTasks[taskId].func = Task_StatsViewer_Close;
    }
}

#undef tState
#undef tDelay

static void StatsViewer_PrintStatTypeLabels(void)
{
    MenuPrint_RightAligned(sText_BaseLabel, 20, 2);
    MenuPrint_RightAligned(sText_IVLabel, 24, 2);
    MenuPrint_RightAligned(sText_EVLabel, 28, 2);
}

static void StatsViewer_PrintStatLabels(void)
{
    struct Pokemon *mon = &gPlayerParty[sStatsViewer.selectedMon];
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

ALIGNED(4) static const u8 sStatsViewer_Tiles[] = INCBIN_U8("assets/stats_viewer.4bpp.lz");
ALIGNED(4) static const u8 sStatsViewer_Tilemap[] = INCBIN_U8("assets/stats_viewer.bin.lz");
ALIGNED(4) static const u8 sStatsViewer_Pal[] = INCBIN_U8("assets/stats_viewer.gbapal.lz");

const struct WindowTemplate sWindowTemplate_StatsViewer = {
    0,                      // BG number
    2,                      // BG character base block
    31,                     // BG screen base block
    0,                      // BG priority
    15,                     // palette number
    TEXT_COLOR_DARK_GREY,   // foreground color
    TEXT_COLOR_TRANSPARENT, // background color
    TEXT_COLOR_LIGHT_GREY,  // shadow color
    3,                      // font
    2,                      // text mode
    0,                      // spacing
    0,                      // tilemap left coordinate
    0,                      // tilemap top coordinate
    30,                     // width
    20,                     // height
    BG_CHAR_ADDR(2),        // tile data
    BG_SCREEN_ADDR(31),     // tilemap
};

void LONG_CALL sub_80F9368(void);

static bool8 SetupStatsViewer(void)
{
    u8 spriteId;
    switch (gMain.state)
    {
    case 0:
        SetVBlankHBlankCallbacksToNull();
        ResetSpriteData();
        sub_80F9368();
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
        DmaFill32(3, 0, OAM, OAM_SIZE);
        DmaFill16(3, 0, PLTT, PLTT_SIZE);
        ClearTilemapBuffers();
        gMain.state++;
        break;
    case 4:
        Text_LoadWindowTemplate(&sWindowTemplate_StatsViewer);
        InitMenuWindow(&sWindowTemplate_StatsViewer);
        // Menu_BlankWindowRect(0, 0, 29, 19);
        LZDecompressVram(sStatsViewer_Tiles, (void *)(BG_CHAR_ADDR(0)));
        LZDecompressVram(sStatsViewer_Tilemap, (void *)(BG_SCREEN_ADDR(8)));
        LoadCompressedPalette(sStatsViewer_Pal, 0x0, 32);
        REG_BG1CNT = BGCNT_PRIORITY(1) | BGCNT_TXT256x256 | BGCNT_CHARBASE(0) | BGCNT_SCREENBASE(8);
        gMain.state++;
        break;
    case 5:
        StatsViewer_DrawMonSprite();
        StatsViewer_PrintStatTypeLabels();
        StatsViewer_PrintStatLabels();
        StatsViewer_PrintPokemonCount();

        StatsViewer_PrintPokemonInfo();
        gMain.state++;
        break;
    default:
        BeginNormalPaletteFade(0xffffffff, 0, 16, 0, RGB_BLACK);
        gPaletteFade.bufferTransferDisabled = FALSE;

        REG_BG1HOFS = 0;
        REG_BG1VOFS = 0;

        CreateTask(Task_StatsViewer_HandleInput, 0x0);
        SetVBlankCallback(VBlank_StatsViewerRun);
        SetMainCallback2(CB2_StatsViewerRun);
        return TRUE;
    }

    return FALSE;
}

static void CB2_StatsViewer(void)
{
    while (SetupStatsViewer() != TRUE)
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