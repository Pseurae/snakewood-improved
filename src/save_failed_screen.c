#include "types.h"
#include "bios.h"
#include "main.h"
#include "menu.h"
#include "palette.h"
#include "text.h"
#include "constants/gba.h"

static const u8 sText_ErrorText[] = _("{COLOR RED}ERROR\n{COLOR DARK_GREY}Flash memory not detected.\n\nSet your "
                                      "emulator's save type\nsetting to Flash 1MB / 128K\nand reload the rom.");

void FlashNotDetectedScreen(void);

void CB2_FlashNotDetectedScreen(void)
{
    FlashNotDetectedScreen();
    SetMainCallback2(NULL);
}

void FlashNotDetectedScreen(void)
{
    u32 savedIme;

    REG_DISPCNT = 0;
    REG_BG3CNT = 0;
    REG_BG2CNT = 0;
    REG_BG1CNT = 0;
    REG_BG0CNT = 0;
    REG_BG3HOFS = 0;
    REG_BG3VOFS = 0;
    REG_BG2HOFS = 0;
    REG_BG2VOFS = 0;
    REG_BG1HOFS = 0;
    REG_BG1VOFS = 0;
    REG_BG0HOFS = 0;
    REG_BG0VOFS = 0;

    DmaFill16(3, 0, VRAM, VRAM_SIZE);
    DmaFill32(3, 0, OAM, OAM_SIZE);
    DmaFill16(3, 0, PLTT, PLTT_SIZE);

    Text_LoadWindowTemplate(&gWindowTemplate_81E6C3C);
    InitMenuWindow(&gMenuTextWindowTemplate);

    Menu_DrawStdWindowFrame(3, 3, 26, 16);
    Menu_PrintText(sText_ErrorText, 5, 4);

    savedIme = REG_IME;
    REG_IME = 0;
    REG_IE |= INTR_FLAG_VBLANK;
    REG_IME = savedIme;
    REG_DISPSTAT |= DISPSTAT_VBLANK_INTR;

    REG_BLDCNT = 0;
    REG_BLDALPHA = 0;
    REG_BLDY = 0;
    REG_BG3CNT = BGCNT_PRIORITY(3) | BGCNT_CHARBASE(0) | BGCNT_SCREENBASE(6) | BGCNT_16COLOR | BGCNT_TXT512x256;
    REG_DISPCNT = DISPCNT_MODE_0 | DISPCNT_OBJ_1D_MAP | DISPCNT_BG0_ON | DISPCNT_BG3_ON | DISPCNT_OBJ_ON;

    TransferPlttBuffer();
    *(u16 *)PLTT = RGB(17, 18, 31);
    REG_SOUNDCNT_X = 0;
    REG_SOUNDBIAS = 0;
}