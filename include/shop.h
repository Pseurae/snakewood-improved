#pragma once

struct MartInfo
{
    /* 0x0 */ void (*callback)(void);
    /* 0x4 */ const u16 *itemList;
    /* 0x8 */ u8 itemCount;    // how many unique items are there for sale?
    /* 0x9 */ u8 cursor;       // this shows the on-screen true index of the cursor and not the current item selected.
    /* 0xA */ u8 numChoices;   // how many options does the mart have? can be either 2 or 1 (BUY/SELL vs BUY)
    /* 0xB */ u8 choicesAbove; // when your cursor is far down, there are choices that have scrolled up past the top.
                               // this is the count of that.
    /* 0xC */ u8
        martType; // 0-2. 0 is normal mart while 1-2 seem to be decor shops or non-stackable purchases in general.
    /* 0xD */ u8 curItemCount; // if you are selling an item, this is the count of the current item stack you have.
};

extern struct MartInfo gMartInfo;
