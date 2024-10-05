#pragma once

struct ScriptContext;

typedef bool8 (*ScrCmdFunc)(struct ScriptContext *);

struct ScriptContext
{
    u8 stackDepth;
    u8 mode;
    u8 comparisonResult;
    bool8 (*nativePtr)(void);
    const u8 *scriptPtr;
    const u8 *stack[20];
    ScrCmdFunc *cmdTable;
    ScrCmdFunc *cmdTableEnd;
    u32 data[4];
};

extern struct ScriptContext gScriptContext1;

void LONG_CALL SetupNativeScript(struct ScriptContext *ctx, bool8 (*ptr)(void));
void LONG_CALL ScriptContext1_SetupScript(const u8 *ptr);
void LONG_CALL ScriptContext2_Enable(void);
void LONG_CALL ScriptContext1_Stop(void);
bool8 LONG_CALL ScriptContext2_IsEnabled(void);
void LONG_CALL EnableBothScriptContexts(void);
