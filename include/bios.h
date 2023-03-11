#pragma once

void CpuFastSet(const void *src, void *dest, u32 control);

#define CPU_FAST_SET_SRC_FIXED       0x01000000
#define CpuFastCopy(src, dest, size) CpuFastSet(src, dest, ((size) / (32 / 8) & 0x1FFFFF))
#define CpuFastFill(value, dest, size)                                                                                 \
    {                                                                                                                  \
        vu32 tmp = (vu32)(value);                                                                                      \
        CpuFastSet((void *)&tmp, dest, CPU_FAST_SET_SRC_FIXED | ((size) / (32 / 8) & 0x1FFFFF));                       \
    }
