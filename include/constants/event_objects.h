#ifndef GUARD_CONSTANTS_EVENT_OBJECTS_H
#define GUARD_CONSTANTS_EVENT_OBJECTS_H

#define NUM_OBJ_EVENT_GFX 218

// These are dynamic object gfx ids.
// They correspond with the values of the VAR_OBJ_GFX_ID_X vars.
// More info about them in include/constants/vars.h
#define OBJ_EVENT_GFX_VARS    240
#define OBJ_EVENT_GFX_VAR_0   (OBJ_EVENT_GFX_VARS + 0x0)
#define OBJ_EVENT_GFX_VAR_1   (OBJ_EVENT_GFX_VARS + 0x1)
#define OBJ_EVENT_GFX_VAR_2   (OBJ_EVENT_GFX_VARS + 0x2)
#define OBJ_EVENT_GFX_VAR_3   (OBJ_EVENT_GFX_VARS + 0x3)
#define OBJ_EVENT_GFX_VAR_4   (OBJ_EVENT_GFX_VARS + 0x4)
#define OBJ_EVENT_GFX_VAR_5   (OBJ_EVENT_GFX_VARS + 0x5)
#define OBJ_EVENT_GFX_VAR_6   (OBJ_EVENT_GFX_VARS + 0x6)
#define OBJ_EVENT_GFX_VAR_7   (OBJ_EVENT_GFX_VARS + 0x7)
#define OBJ_EVENT_GFX_VAR_8   (OBJ_EVENT_GFX_VARS + 0x8)
#define OBJ_EVENT_GFX_VAR_9   (OBJ_EVENT_GFX_VARS + 0x9)
#define OBJ_EVENT_GFX_VAR_A   (OBJ_EVENT_GFX_VARS + 0xA)
#define OBJ_EVENT_GFX_VAR_B   (OBJ_EVENT_GFX_VARS + 0xB)
#define OBJ_EVENT_GFX_VAR_C   (OBJ_EVENT_GFX_VARS + 0xC)
#define OBJ_EVENT_GFX_VAR_D   (OBJ_EVENT_GFX_VARS + 0xD)
#define OBJ_EVENT_GFX_VAR_E   (OBJ_EVENT_GFX_VARS + 0xE)
#define OBJ_EVENT_GFX_VAR_F   (OBJ_EVENT_GFX_VARS + 0xF) // 255

#define SHADOW_SIZE_S         0
#define SHADOW_SIZE_M         1
#define SHADOW_SIZE_L         2
#define SHADOW_SIZE_XL        3

#define TRACKS_NONE           0
#define TRACKS_FOOT           1
#define TRACKS_BIKE_TIRE      2

#define OBJ_KIND_NORMAL       0
#define OBJ_KIND_CLONE        255 // Exclusive to FRLG

#define OBJ_EVENT_ID_FOLLOWER 0xFE
#define OBJ_EVENT_ID_PLAYER   0xFF
#define OBJ_EVENT_ID_CAMERA   0x7F

#endif // GUARD_CONSTANTS_EVENT_OBJECTS_H
