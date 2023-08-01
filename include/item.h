#pragma once

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

u16 LONG_CALL SanitizeItemId(u16 itemId);
u16 LONG_CALL ItemIdToBattleMoveId(u16 itemId);
u8 LONG_CALL ItemId_GetHoldEffect(u16 itemId);
u8 LONG_CALL ItemId_GetHoldEffectParam(u16 itemId);
bool8 LONG_CALL CheckBagHasItem(u16 itemId, u16 count);
const u8 LONG_CALL *ItemId_GetName(u16 itemId);
const u8 LONG_CALL *ItemId_GetDescription(u16 itemId);
bool8 LONG_CALL RemoveBagItem(u16 itemId, u16 count);
bool8 LONG_CALL ItemIsMail(u16);
ItemUseFunc LONG_CALL ItemId_GetFieldFunc(u16 itemId);

extern const struct Item gItems[];
