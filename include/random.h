#pragma once

u16 LONG_CALL Random16(void);
#define Random32() (Random16() << 16 | Random16())