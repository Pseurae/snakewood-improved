#pragma once

#include "types.h"

enum StringConvertMode
{
    STR_CONV_MODE_LEFT_ALIGN,
    STR_CONV_MODE_RIGHT_ALIGN,
    STR_CONV_MODE_LEADING_ZEROS
};

u8 *ConvertIntToDecimalString(u8 *dest, s32 value);
u8 *ConvertIntToDecimalStringN(u8 *dest, s32 value, enum StringConvertMode mode, u8 n);
u8 *StringCopy(u8 *dest, const u8 *src);
u8 *StringExpandPlaceholders(u8 *dest, const u8 *src);
u16 StringLength(const u8 *str);
