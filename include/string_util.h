#pragma once

enum StringConvertMode
{
    STR_CONV_MODE_LEFT_ALIGN,
    STR_CONV_MODE_RIGHT_ALIGN,
    STR_CONV_MODE_LEADING_ZEROS
};

u8 LONG_CALL *ConvertIntToDecimalString(u8 *dest, s32 value);
u8 LONG_CALL *ConvertIntToDecimalStringN(u8 *dest, s32 value, enum StringConvertMode mode, u8 n);
u8 LONG_CALL *StringCopy(u8 *dest, const u8 *src);
u8 LONG_CALL *StringAppend(u8 *dest, const u8 *src);
u8 LONG_CALL *StringExpandPlaceholders(u8 *dest, const u8 *src);
u16 LONG_CALL StringLength(const u8 *str);
