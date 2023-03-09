#include "types.h"
#include "item.h"

u8 ItemId_GetImportance(u16 itemId)
{
    itemId = SanitizeItemId(itemId);

    if (gItems[itemId].pocket == POCKET_TM_HM)
        return ITEM_IMPORTANT;

    return gItems[itemId].importance;
}