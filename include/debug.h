#pragma once

#define MGBA_LOG_FATAL (0)
#define MGBA_LOG_ERROR (1)
#define MGBA_LOG_WARN  (2)
#define MGBA_LOG_INFO  (3)
#define MGBA_LOG_DEBUG (4)

#define LOG_HANDLER    LOG_HANDLER_MGBA_PRINT

bool32 MgbaOpen(void);
void MgbaClose(void);
void MgbaPrintf(s32 level, const char *pBuf, ...);

#define DebugPrintf(pBuf, ...)             MgbaPrintf(MGBA_LOG_INFO, pBuf, ##__VA_ARGS__)
#define DebugPrintfLevel(level, pBuf, ...) MgbaPrintf(level, pBuf, ##__VA_ARGS__)
