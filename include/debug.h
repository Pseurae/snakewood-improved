#pragma once

#define MGBA_LOG_FATAL  (0)
#define MGBA_LOG_ERROR  (1)
#define MGBA_LOG_WARN   (2)
#define MGBA_LOG_INFO   (3)
#define MGBA_LOG_DEBUG  (4)

#define LOG_HANDLER LOG_HANDLER_MGBA_PRINT

bool32 MgbaOpen(void);
void MgbaClose(void);
void MgbaPrintf(s32 level, const char *pBuf, ...);
void MgbaAssert(const char *pFile, s32 nLine, const char *pExpression, bool32 nStopProgram);

#define DebugPrintf(pBuf, ...) MgbaPrintf(MGBA_LOG_INFO, pBuf, ## __VA_ARGS__)
#define DebugAssert(pFile, nLine, pExpression, nStopProgram) MgbaAssert(pFile, nLine, pExpression, nStopProgram)
#define DebugPrintfLevel(level, pBuf, ...) MgbaPrintf(level, pBuf, ## __VA_ARGS__)

#define AGB_ASSERT(exp) (exp) ? ((void*)0) : DebugAssert(__FILE__, __LINE__, #exp, TRUE)
#define AGB_WARNING(exp) (exp) ? ((void*)0) : DebugAssert(__FILE__, __LINE__, #exp, FALSE)

#define AGB_WARNING_EX(exp, file, line) (exp) ? ((void *)0) : DebugAssert(file, line, #exp, FALSE);
#define AGB_ASSERT_EX(exp, file, line) (exp) ? ((void *)0) : DebugAssert(file, line, #exp, TRUE);
