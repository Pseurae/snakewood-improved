#pragma once

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

#define BAG_ITEMS_COUNT        60
#define REGISTERED_ITEMS_COUNT 5

extern struct ItemSlot *gCurrentBagPocketItemSlots;
extern struct PocketScrollState gBagPocketScrollStates[5];
extern s8 sCurrentBagPocket;
extern struct ItemSlot gExpandedItemPockets[BAG_ITEMS_COUNT];
extern u16 gRegisteredItems[REGISTERED_ITEMS_COUNT];
extern u8 gLastUsedRegisteredItem;

u8 *HighlightSelectedOption(u8 taskId, u8 *text, u8 itemSlot);
bool8 PrintCancelOption(u8 itemPos, int b);

void DrawSelectIcon(u32 itemPos);
void MoveSelectIcon(u8 itemPos);
void EraseSelectIcon(u8 itemPos);

void ItemListMenu_InitMenu(void);

extern const u8 Event_NoRegisteredItem[];
