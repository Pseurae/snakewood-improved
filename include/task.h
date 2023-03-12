#pragma once

#define NUM_TASKS 16

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

u8 CreateTask(TaskFunc func, u8 priority);
bool8 FuncIsActiveTask(TaskFunc func);
u8 FindTaskIdByFunc(TaskFunc func);
u8 DestroyTask(u8 taskId);
