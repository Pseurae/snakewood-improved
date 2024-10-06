MEMORY  {
    ewram : ORIGIN = 0x203a400, LENGTH = 0x5bff
    rom : ORIGIN = 0x8000000, LENGTH = 16M
}

SECTIONS {
    .ewram :
    ALIGN(4)
    {
        *(.ewram);
    } > ewram

    __savegame_start = 0x2025420;
    __savegame_end = __savegame_start + 0x314;

    .text :
    ALIGN(4)
    {
        *(.text);
    } > rom = 0xff

    .rodata :
    ALIGN(4)
    {
        *(.rodata);
        *(.rodata.str1.4);
    } > rom = 0xff

    .script_data :
    ALIGN(4)
    {
        *(.script_data);
    } > rom = 0xff

    /* Discard everything not specifically mentioned above. */
    /DISCARD/ :
    {
        *(*);
    }
}