#include "decap.h"
#include "file.h"

int main(int argc, char *argv[])
{
    if (argc < 3 || argc > 4)
    {
        fprintf(stderr, "Usage: %s ROM_FILE OUTPUT_FILE\n", argv[0]);
        return 1;
    }

    File f = File(argv[1]);

    f.ProcessString(0x40f81a, 0xFF); // Exp. Points
    f.ProcessString(0x40f826, 0xFF); // Next Lv.
    f.ProcessString(0x40e6e4, 0xFF); // Close Bag
    f.ProcessString(0x40df7c, 0xFF); // Main Menu - Player
    f.ProcessString(0x40df83, 0xFF); // Main Menu - Pokedex
    f.ProcessString(0x40df8b, 0xFF); // Main Menu - Time
    f.ProcessString(0x40df90, 0xFF); // Main Menu - Badge
    f.ProcessString(0x42c983, 0xFF); // Save - Player
    f.ProcessString(0x42c992, 0xFF); // Save - Pokedex
    f.ProcessString(0x42c99a, 0xFF); // Save - Time
    f.ProcessString(0x42c98a, 0xFF); // Save - Badge
    f.ProcessString(0x40dcd0, 0xFF); // Main Menu - New Game
    f.ProcessString(0x40dcd9, 0xFF); // Main Menu - Continue
    f.ProcessString(0x40dce2, 0xFF); // Main Menu - Options

    f.ProcessStringArray(0x1f716c, 11, 412); // Species names
    // f.ProcessStringArray(0x1f8320, 13, 355); // Move names
    f.ProcessStringArray(0x1fa248, 13, 78); // Ability names
    f.ProcessStringArray(0x1f0208, 13, 58); // Trainer class names
    f.ProcessStringArray(0x3c5564, 14, 349, 44); // Item names

    f.ProcessStringPointerArray(0x376d74, 2, 8); // Yes/No
    f.ProcessStringPointerArray(0x1e79b0, 2, 8); // Boy/Girl
    f.ProcessStringPointerArray(0x1e79c0, 5, 8); // Male preset names
    f.ProcessStringPointerArray(0x1e79e8, 5, 8); // Female preset names
    f.ProcessStringPointerArray(0x3c1004, 25); // Nature names
    f.ProcessStringPointerArray(0x3c1068, 8); // Summary Screen headers
    f.ProcessStringPointerArray(0x39f494, 10, 8); // Party menu options
    f.ProcessStringPointerArray(0x376d24, 10, 8); // Start menu options
    f.ProcessStringPointerArray(0x3e73c4 + 4, 88, 8); // Map names

    f.SetWhitelist(&WhitelistEntries);
    f.ProcessStringPointerArray(0x376d04, 6); // Stat labels
    f.ProcessStringPointerArray(0x3c5564 + 20, 349, 44); // Item descriptions
    f.ProcessStringPointerArray(0x1fa110, 78); // Ability descriptions
    f.ProcessStringPointerArray(0x3c09d8, 354); // Move descriptions

    f.Save(argv[2]);

    return 0;
}