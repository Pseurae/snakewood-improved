SECTIONS {
    .text :
    ALIGN(4)
    {
        *(.text);
    }

    .rodata :
    ALIGN(4)
    {
        *(.rodata);
    }

    /* Discard everything not specifically mentioned above. */
    /DISCARD/ :
    {
        *(*);
    }
}