#pragma once

enum
{
    PLAYER_AVATAR_STATE_NORMAL,
    PLAYER_AVATAR_STATE_MACH_BIKE,
    PLAYER_AVATAR_STATE_ACRO_BIKE,
    PLAYER_AVATAR_STATE_SURFING,
    PLAYER_AVATAR_STATE_UNDERWATER,
    PLAYER_AVATAR_STATE_FIELD_MOVE,
    PLAYER_AVATAR_STATE_FISHING,
    PLAYER_AVATAR_STATE_WATERING,
};

struct PlayerAvatar /* 0x202E858 */
{
    /*0x00*/ u8 flags;
    /*0x01*/ u8 unk1;         // used to be named bike, but its definitely not that. seems to be some transition flags
    /*0x02*/ u8 runningState; // this is a static running state. 00 is not moving, 01 is turn direction, 02 is moving.
    /*0x03*/ u8 tileTransitionState; // this is a transition running state: 00 is not moving, 01 is transition between
                                     // tiles, 02 means you are on the frame in which you have centered on a tile but
                                     // are about to keep moving, even if changing directions. 2 is also used for a
                                     // ledge hop, since you are transitioning.
    /*0x04*/ u8 spriteId;
    /*0x05*/ u8 objectEventId;
    /*0x06*/ bool8 preventStep;
    /*0x07*/ u8 gender;
    /*0x08*/ u8 acroBikeState; // 00 is normal, 01 is turning, 02 is standing wheelie, 03 is hopping wheelie
    /*0x09*/ u8
        newDirBackup; // during bike movement, the new direction as opposed to player's direction is backed up here.
    /*0x0A*/ u8 bikeFrameCounter; // on the mach bike, when this value is 1, the bike is moving but not accelerating yet
                                  // for 1 tile. on the acro bike, this acts as a timer for acro bike.
    /*0x0B*/ u8 bikeSpeed;
    // acro bike only
    /*0x0C*/ u32 directionHistory;     // up/down/left/right history is stored in each nybble, but using the field
                                       // directions and not the io inputs.
    /*0x10*/ u32 abStartSelectHistory; // same as above but for A + B + start + select only
                                       // these two are timer history arrays which [0] is the active timer for acro
                                       // bike. every element is backed up to the next element upon update.
    /*0x14*/ u8 dirTimerHistory[8];
    /*0x1C*/ u8 abStartSelectTimerHistory[8];
};

extern struct PlayerAvatar gPlayerAvatar;

u8 LONG_CALL CheckForPlayerAvatarCollision(u8 direction);
void LONG_CALL SetPlayerAvatarStateMask(u8 a);
void LONG_CALL StopPlayerAvatar(void);
void LONG_CALL PlayerFreeze(void);
void LONG_CALL PlayerGoSpeed1(u8 a);
void LONG_CALL PlayerGoSpeed2(u8 a);
void LONG_CALL PlayerRideWaterCurrent(u8 a);
void LONG_CALL PlayerGoSpeed4(u8 a);
void LONG_CALL PlayerOnBikeCollide(u8);
void LONG_CALL PlayerNotOnBikeCollide(u8);
void LONG_CALL PlayerFaceDirection(u8 a);
void LONG_CALL PlayerTurnInPlace(u8 a);
void LONG_CALL PlayerJumpLedge(u8 a);
void LONG_CALL PlayerRun(u8 a);
bool8 LONG_CALL IsRunningDisallowed(u8 tile);

#define PLAYER_AVATAR_FLAG_ON_FOOT    (1 << 0)
#define PLAYER_AVATAR_FLAG_MACH_BIKE  (1 << 1)
#define PLAYER_AVATAR_FLAG_ACRO_BIKE  (1 << 2)
#define PLAYER_AVATAR_FLAG_SURFING    (1 << 3)
#define PLAYER_AVATAR_FLAG_UNDERWATER (1 << 4)
#define PLAYER_AVATAR_FLAG_5          (1 << 5)
#define PLAYER_AVATAR_FLAG_6          (1 << 6)
#define PLAYER_AVATAR_FLAG_DASH       (1 << 7)
