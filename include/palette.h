#pragma once

extern u16 gPlttBufferUnfaded[];
extern u16 gPlttBufferFaded[];

void LONG_CALL LoadCompressedObjectPalette(const void *src);
bool8 LONG_CALL BeginNormalPaletteFade(u32 selectedPalettes, s8 delay, u8 startY, u8 targetY, u16 blendColor);
void LONG_CALL LoadPalette(const void *, u16, u16);
void LONG_CALL LoadCompressedPalette(const void *, u16, u16);
void LONG_CALL TransferPlttBuffer(void);

struct PaletteFadeControl
{
    /*0x00*/    u32 multipurpose1;
    /*0x04*/    u8 delayCounter:6;
    /*0x05*/    u16 y:5; // blend coefficient
    /*0x05-06*/ u16 targetY:5; // target blend coefficient
    /*0x07*/    u16 blendColor:15;
    /*0x07*/    u16 active:1;
    /*0x08*/    u16 multipurpose2:6;
    /*0x08*/    u16 yDec:1; // whether blend coefficient is decreasing
    /*0x08*/    u16 bufferTransferDisabled:1;
    /*0x09*/    u16 mode:2;
    /*0x09*/    u16 shouldResetBlendRegisters:1;
    /*0x09*/    u16 hardwareFadeFinishing:1;
    /*0x09-0a*/ u16 softwareFadeFinishingCounter:5;
    /*0x0a*/    u16 softwareFadeFinishing:1;
    /*0x0a*/    u16 objPaletteToggle:1;
    /*0x0a*/    u8 deltaY:4; // rate of change of blend coefficient
};

extern struct PaletteFadeControl gPaletteFade;