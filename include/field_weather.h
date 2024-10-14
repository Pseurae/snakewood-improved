#pragma once

struct Weather
{
    union
    {
        struct
        {
            void *rainSprites[24];
            void *snowflakeSprites[101];
            void *cloudSprites[3];
        } s1;
        struct
        {
            u8 filler0[0xA0];
            void *fog1Sprites[20];
            void *ashSprites[20];
            void *fog2Sprites[20];
            void *sandstormSprites1[20];
            void *sandstormSprites2[5];
        } s2;
    } sprites;
    u8 gammaShifts[19][32];
    u8 altGammaShifts[19][32];
    s8 gammaIndex;
    s8 gammaTargetIndex;
    u8 gammaStepDelay;
    u8 gammaStepFrameCounter;
    u16 fadeDestColor;
    u8 palProcessingState;
    u8 fadeScreenCounter;
    bool8 readyForInit;
    u8 taskId;
    u8 fadeInFirstFrame;
    u8 fadeInTimer;
    u16 initStep;
    u16 finishStep;
    u8 currWeather;
    u8 nextWeather;
    u8 weatherGfxLoaded;
    bool8 weatherChangeComplete;
    u8 weatherPicSpritePalIndex;
    u8 altGammaSpritePalIndex;
    u16 unknown_6D6;
    u8 unknown_6D8;
    u8 unknown_6D9;
    u8 rainSpriteCount;
    u8 unknown_6DB;
    u8 unknown_6DC;
    u8 rainStrength;
    /*0x6DE*/ u8 cloudSpritesCreated;
    u8 filler_6DF[1];
    u16 unknown_6E0;
    u16 unknown_6E2;
    u8 snowflakeSpriteCount;
    u8 unknown_6E5;
    u16 unknown_6E6;
    u16 thunderCounter;
    u8 unknown_6EA;
    u8 unknown_6EB;
    u8 unknown_6EC;
    u8 unknown_6ED;
    u16 fog1ScrollPosX;
    u16 unknown_6F0;
    u16 unknown_6F2;
    u8 lightenedFogSpritePals[6];
    u8 lightenedFogSpritePalsCount;
    u8 fog1SpritesCreated;
    u16 unknown_6FC;
    u16 unknown_6FE;
    u8 ashSpritesCreated;
    u8 filler_701[3];
    u32 unknown_704;
    u32 unknown_708;
    u8 filler_70C[2];
    u16 unknown_70E;
    u16 unknown_710;
    u16 unknown_712;
    u16 unknown_714;
    u8 sandstormSprites1Created;
    u8 sandstormSprites2Created;
    u16 unknown_718;
    u16 unknown_71A;
    u16 unknown_71C;
    u16 unknown_71E;
    u16 unknown_720;
    u16 unknown_722;
    u8 fog2SpritesCreated;
    u8 filler_725[1];
    u16 unknown_726;
    u16 unknown_728;
    u16 unknown_72A;
    u16 unknown_72C;
    u8 unknown_72E;
    u8 filler_72F;
    u16 currBlendEVA;
    u16 currBlendEVB;
    u16 targetBlendEVA;
    u16 targetBlendEVB;
    u8 blendUpdateCounter;
    u8 blendFrameCounter;
    u8 blendDelay;
    u8 filler_73B[0x3C - 0x3B];
    s16 unknown_73C;
    s16 unknown_73E;
    s16 unknown_740;
    s16 unknown_742;
    u8 filler_744[0xD - 4];
    s8 loadDroughtPalsIndex;
    u8 loadDroughtPalsOffset;
};

struct WeatherCallbacks
{
    void (*initVars)(void);
    void (*main)(void);
    void (*initAll)(void);
    bool8 (*finish)(void);
};

enum
{
    FADE_FROM_BLACK,
    FADE_TO_BLACK,
    FADE_FROM_WHITE,
    FADE_TO_WHITE,
};

void LONG_CALL Weather_SetBlendCoeffs(u8, u8);
void LONG_CALL SetRainStrengthFromSoundEffect(u16 soundEffect);
void LONG_CALL PreservePaletteInWeather(u8 preservedPalIndex);
void LONG_CALL FadeScreen(u8, u8);

extern const struct WeatherCallbacks gWeatherFuncs[];
extern struct Weather *const gWeatherPtr;
extern void (*const gWeatherPalStateFuncs[4])(void);
