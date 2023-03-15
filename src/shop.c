#include "types.h"
#include "shop.h"
#include "decoration.h"
#include "item.h"
#include "menu.h"
#include "text.h"

extern const u8 gOtherText_QuitShopping[];

void Shop_PrintItemDescText(void)
{
    const u8 *text;

    if (gMartInfo.choicesAbove + gMartInfo.cursor != gMartInfo.itemCount)
    {
        if (gMartInfo.martType == 0)
        {
            text = ItemId_GetDescription(gMartInfo.itemList[gMartInfo.choicesAbove + gMartInfo.cursor]);
        }
        else
        {
            text = gDecorations[gMartInfo.itemList[gMartInfo.choicesAbove + gMartInfo.cursor]].description;
        }
    }
    else
    {
        text = gOtherText_QuitShopping;
    }

    Menu_EraseWindowRect(0, 13, 13, 19);
    PrintStringWithNewlines(gMenuWindowPtr, NULL, text, gMenuTextTileOffset, 0x4, 0x68, 0, 0);
}
