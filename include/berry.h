#pragma once

#include "types.h"

struct BattleEnigmaBerry
{
    /*0x00*/ u8 name[7];
    /*0x07*/ u8 holdEffect;
    /*0x08*/ u8 itemEffect[18];
    /*0x1A*/ u8 holdEffectParam;
};