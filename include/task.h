#pragma once

#define NUM_TASKS 16
#define TASK_NONE 0xFF

typedef void (*TaskFunc)(u8 taskId);

struct Task
{
    /*0x00*/ TaskFunc func;
    /*0x04*/ bool8 isActive;
    /*0x05*/ u8 prev;
    /*0x06*/ u8 next;
    /*0x07*/ u8 priority;
    /*0x08*/ s16 data[16];
};

extern struct Task gTasks[NUM_TASKS];

u8 LONG_CALL CreateTask(TaskFunc func, u8 priority);
bool8 LONG_CALL FuncIsActiveTask(TaskFunc func);
u8 LONG_CALL FindTaskIdByFunc(TaskFunc func);
u8 LONG_CALL DestroyTask(u8 taskId);
void LONG_CALL TaskDummy(u8 taskId);
void LONG_CALL RunTasks(void);
void LONG_CALL ResetTasks(void);
