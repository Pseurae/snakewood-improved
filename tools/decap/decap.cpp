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
    f.ProcessStringArray(0x1f716c, 11, 412); // Species names
    f.ProcessStringArray(0x1f8320, 13, 355); // Move names
    f.ProcessStringArray(0x1fa248, 13, 78); // Ability names
    f.ProcessStringArray(0x1f0208, 13, 58); // Trainer class names

    f.ProcessStringPointerArray(0x3c1004, 25); // Nature names
    f.ProcessStringPointerArray(0x3c1068, 8); // Summary Screen headers
    f.ProcessStringPointerArray(0x39f494, 10, 8); // Party menu options
    f.ProcessStringPointerArray(0x1fa110, 78); // Ability descriptions
    f.ProcessStringPointerArray(0x3e73c4 + 4, 88, 8); // Map names

    f.Save(argv[2]);

    return 0;
}