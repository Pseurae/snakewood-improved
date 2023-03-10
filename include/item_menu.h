#pragma once

#include "types.h"

struct PACKED ItemSlot
{
    u16 itemId;
    u16 quantity;
};

struct PocketScrollState
{
    u8 cursorPos;
    u8 scrollTop;
    u8 numSlots;
    u8 cursorMax;
};

#define BAG_ITEMS_COUNT 60

extern struct ItemSlot *gCurrentBagPocketItemSlots;
extern struct PocketScrollState gBagPocketScrollStates[5];
extern s8 sCurrentBagPocket;
extern struct ItemSlot gExpandedItemPockets[BAG_ITEMS_COUNT];

u8 *HighlightSelectedOption(u8 taskId, u8 *text, u8 itemSlot);
bool8 PrintCancelOption(u8 itemPos, int b);

