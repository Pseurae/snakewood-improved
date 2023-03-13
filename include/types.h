#pragma once

#include <stdint.h>

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;

typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;

typedef volatile uint8_t vu8;
typedef volatile uint16_t vu16;
typedef volatile uint32_t vu32;

typedef volatile int8_t vs8;
typedef volatile int16_t vs16;
typedef volatile int32_t vs32;

typedef u8 bool8;
typedef u16 bool16;
typedef u32 bool32;

#define PACKED __attribute__((packed))
#define NAKED  __attribute__((naked))

typedef void (*MainCallback)(void);

#define TRUE  1
#define FALSE 0

#define NULL  0x0