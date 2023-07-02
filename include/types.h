#pragma once

#include <stdint.h>

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

typedef signed char s8;
typedef signed short s16;
typedef signed int s32;

typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;

typedef volatile s8 vs8;
typedef volatile s16 vs16;
typedef volatile s32 vs32;

typedef u8 bool8;
typedef u16 bool16;
typedef u32 bool32;

struct Coords16
{
    s16 x;
    s16 y;
};

struct UCoords16
{
    u16 x;
    u16 y;
};

#define PACKED __attribute__((packed))
#define NAKED  __attribute__((naked))

typedef void (*MainCallback)(void);

#define TRUE               1
#define FALSE              0

#define NULL               0x0

#define ARRAY_COUNT(array) (sizeof(array) / sizeof((array)[0]))
