#include "types.h"
#include "pokemon.h"
#include "task.h"
#include "item.h"
#include "party_menu.h"
#include "item_menu.h"
#include "menu.h"
#include "item_use.h"
#include "sound.h"
#include "text.h"
#include "constants/songs.h"
#include "constants/pokemon.h"
#include "palette.h"

void Task_ItemUseCallback(u8 taskId)
{
    if (GetItemEffectType(gSpecialVar_ItemId) && CheckBagHasItem(gSpecialVar_ItemId, 1))
    {
        Menu_EraseWindowRect(3, 14, 26, 19);
        PrintPartyMenuPromptText(gPartyMenu2.promptTextId, 0);
        gTasks[taskId].func = HandleItemUsePartyMenu;
    }
    else
        ReturnToBagFromPartyMenu(taskId);
}