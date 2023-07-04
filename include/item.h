#pragma once

#include "types.h"

enum
{
    POCKET_ITEMS = 1,
    POCKET_POKE_BALLS,
    POCKET_TM_HM,
    POCKET_BERRIES,
    POCKET_KEY_ITEMS,
};

enum
{
    ITEM_COMMON = 0,
    ITEM_IMPORTANT,
    ITEM_SOMEONEELSE
};

typedef void (*ItemUseFunc)(u8);

struct Item
{
    u8 name[14];
    u16 itemId;
    u16 price;
    u8 holdEffect;
    u8 holdEffectParam;
    const u8 *description;
    u8 importance;
    u8 exitsBagOnUse; // unused, but items which have this field set to 1 all
                      // exit the Bag when they are used.
    u8 pocket;
    u8 type;
    ItemUseFunc fieldUseFunc;
    u8 battleUsage;
    ItemUseFunc battleUseFunc;
    u8 secondaryId;
};

u16 SanitizeItemId(u16 itemId);
u16 ItemIdToBattleMoveId(u16 itemId);
u8 ItemId_GetHoldEffect(u16 itemId);
u8 ItemId_GetHoldEffectParam(u16 itemId);
bool8 CheckBagHasItem(u16 itemId, u16 count);
const u8 *ItemId_GetName(u16 itemId);
const u8 *ItemId_GetDescription(u16 itemId);
bool8 RemoveBagItem(u16 itemId, u16 count);
bool8 ItemIsMail(u16);
ItemUseFunc ItemId_GetFieldFunc(u16 itemId);

extern const struct Item gItems[];
