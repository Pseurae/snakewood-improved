// .org 0x8056cbc
// set_function_hook r3, LoadDayNightTilesetPalette

// .org 0x805436c :: .word CB2_Overworld | 1
// .org 0x8054464 :: .word CB2_Overworld | 1
// .org 0x80544d8 :: .word CB2_Overworld | 1
// .org 0x8054530 :: .word CB2_Overworld | 1
// .org 0x8054584 :: .word CB2_Overworld | 1
// .org 0x80545e0 :: .word CB2_Overworld | 1
// .org 0x8054630 :: .word CB2_Overworld | 1
// .org 0x8054658 :: .word CB2_Overworld | 1

// .org 0x805be80
// set_function_hook r3, PatchObjectDayNightPalette

// .org 0x80857bc
// set_function_hook r1, FieldEffectScript_LoadFadedPalette

// .org 0x8073a14
// set_function_hook r3, LoadCompressedPalette

// .org 0x8073a58
// set_function_hook r3, LoadPalette

// .org 0x8073a90
// set_function_hook r3, FillPalette