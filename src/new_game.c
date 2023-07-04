#include "types.h"
#include "bios.h"
#include "item_menu.h"

void ClearRegisteredItems(void)
{
    CpuFastFill16(0x1, gRegisteredItems, sizeof(gRegisteredItems));
}