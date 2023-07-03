#pragma once

#include "types.h"

void CpuFastSet(const void *src, void *dest, u32 control);
void LZ77UnCompVram(const void *src, void *dest);

#define CPU_FAST_SET_SRC_FIXED       0x01000000
#define CpuFastCopy(src, dest, size) CpuFastSet(src, dest, ((size) / (32 / 8) & 0x1FFFFF))
#define CpuFastFill(value, dest, size)                                                                                 \
    {                                                                                                                  \
        vu32 tmp = (vu32)(value);                                                                                      \
        CpuFastSet((void *)&tmp, dest, CPU_FAST_SET_SRC_FIXED | ((size) / (32 / 8) & 0x1FFFFF));                       \
    }

#define DmaSet(dmaNum, src, dest, control)        \
{                                                 \
    vu32 *dmaRegs = (vu32 *)REG_ADDR_DMA##dmaNum; \
    dmaRegs[0] = (vu32)(src);                     \
    dmaRegs[1] = (vu32)(dest);                    \
    dmaRegs[2] = (vu32)(control);                 \
    dmaRegs[2];                                   \
}

#define DMA_FILL(dmaNum, value, dest, size, bit)                                              \
{                                                                                             \
    vu##bit tmp = (vu##bit)(value);                                                           \
    DmaSet(dmaNum,                                                                            \
           &tmp,                                                                              \
           dest,                                                                              \
           (DMA_ENABLE | DMA_START_NOW | DMA_##bit##BIT | DMA_SRC_FIXED | DMA_DEST_INC) << 16 \
         | ((size)/(bit/8)));                                                                 \
}

#define DmaFill16(dmaNum, value, dest, size) DMA_FILL(dmaNum, value, dest, size, 16)
#define DmaFill32(dmaNum, value, dest, size) DMA_FILL(dmaNum, value, dest, size, 32)
