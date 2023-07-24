#include "types.h"
#include "bios.h"
#include "item_menu.h"

extern void *__savegame_start;
extern void *__savegame_end;

void ClearSavefileSpace(void)
{
    CpuFastFill16(0x0, __savegame_start, (int)(__savegame_end - __savegame_start));
}