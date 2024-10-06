#include "types.h"
#include "debug.h"
#include "mini_printf.h"
#include "constants/gba.h"

// hardware extensions for LOG_HANDLER_MGBA_PRINT
#define REG_DEBUG_ENABLE ((vu16*) (0x4FFF780)) // handshake: (w)[0xC0DE] -> (r)[0x1DEA]
#define REG_DEBUG_FLAGS  ((vu16*) (0x4FFF700))
#define REG_DEBUG_STRING ((char*) (0x4FFF600))

#define MGBA_REG_DEBUG_MAX (256)

bool32 MgbaOpen(void)
{
    *REG_DEBUG_ENABLE = 0xC0DE;
    return *REG_DEBUG_ENABLE == 0x1DEA;
}

void MgbaClose(void)
{
    *REG_DEBUG_ENABLE = 0;
}

void MgbaPrintf(s32 level, const char* ptr, ...)
{
    va_list args;

    level &= 0x7;
    va_start(args, ptr);
    mini_vsnprintf(REG_DEBUG_STRING, MGBA_REG_DEBUG_MAX, ptr, args);
    va_end(args);
    *REG_DEBUG_FLAGS = level | 0x100;
}
