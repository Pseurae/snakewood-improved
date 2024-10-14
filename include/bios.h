#pragma once

#include <stddef.h>

void LONG_CALL CpuSet(const void *src, void *dest, u32 control);
void LONG_CALL CpuFastSet(const void *src, void *dest, u32 control);
void LONG_CALL LZ77UnCompVram(const void *src, void *dest);

#define CPU_FILL(value, dest, size, bit)                                                                               \
    {                                                                                                                  \
        vu##bit tmp = (vu##bit)(value);                                                                                \
        CpuSet((void *)&tmp, dest, CPU_SET_##bit##BIT | CPU_SET_SRC_FIXED | ((size) / (bit / 8) & 0x1FFFFF));          \
    }

#define CpuFill16(value, dest, size)   CPU_FILL(value, dest, size, 16)
#define CpuFill32(value, dest, size)   CPU_FILL(value, dest, size, 32)

#define CPU_COPY(src, dest, size, bit) CpuSet(src, dest, CPU_SET_##bit##BIT | ((size) / (bit / 8) & 0x1FFFFF))

#define CpuCopy16(src, dest, size)     CPU_COPY(src, dest, size, 16)
#define CpuCopy32(src, dest, size)     CPU_COPY(src, dest, size, 32)

#define CPU_FAST_SET_SRC_FIXED         0x01000000
#define CpuFastFill(value, dest, size)                                                                                 \
    {                                                                                                                  \
        vu32 tmp = (vu32)(value);                                                                                      \
        CpuFastSet((void *)&tmp, dest, CPU_FAST_SET_SRC_FIXED | ((size) / (32 / 8) & 0x1FFFFF));                       \
    }

#define CpuFastFill16(value, dest, size) CpuFastFill(((value) << 16) | (value), (dest), (size))
#define CpuFastCopy(src, dest, size)     CpuFastSet(src, dest, ((size) / (32 / 8) & 0x1FFFFF))

#define DmaSet(dmaNum, src, dest, control)                                                                             \
    {                                                                                                                  \
        vu32 *dmaRegs = (vu32 *)REG_ADDR_DMA##dmaNum;                                                                  \
        dmaRegs[0] = (vu32)(src);                                                                                      \
        dmaRegs[1] = (vu32)(dest);                                                                                     \
        dmaRegs[2] = (vu32)(control);                                                                                  \
        dmaRegs[2];                                                                                                    \
    }

#define DMA_FILL(dmaNum, value, dest, size, bit)                                                                       \
    {                                                                                                                  \
        vu##bit tmp = (vu##bit)(value);                                                                                \
        DmaSet(dmaNum,                                                                                                 \
            &tmp,                                                                                                      \
            dest,                                                                                                      \
            (DMA_ENABLE | DMA_START_NOW | DMA_##bit##BIT | DMA_SRC_FIXED | DMA_DEST_INC) << 16                         \
                | ((size) / (bit / 8)));                                                                               \
    }

#define DmaFill16(dmaNum, value, dest, size) DMA_FILL(dmaNum, value, dest, size, 16)
#define DmaFill32(dmaNum, value, dest, size) DMA_FILL(dmaNum, value, dest, size, 32)

#define DmaClearLarge(dmaNum, dest, size, block, bit)                                                                  \
    {                                                                                                                  \
        void *_dest = dest;                                                                                            \
        u32 _size = size;                                                                                              \
        while (1)                                                                                                      \
        {                                                                                                              \
            DmaFill##bit(dmaNum, 0, _dest, (block));                                                                   \
            _dest += (block);                                                                                          \
            _size -= (block);                                                                                          \
            if (_size <= (block))                                                                                      \
            {                                                                                                          \
                DmaFill##bit(dmaNum, 0, _dest, _size);                                                                 \
                break;                                                                                                 \
            }                                                                                                          \
        }                                                                                                              \
    }
