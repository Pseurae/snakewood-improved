#ifndef ELFEDIT_H
#define ELFEDIT_H

#include "elf.h"
#include "vector.h"
#include <fcntl.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>

#define MAGIC_NUMBER "\177ELF"

typedef struct s_sections {
    Elf32_Half symtab;
    Elf32_Half ewram;
} t_sections;

typedef struct s_symbols {
    sb_vector(Elf32_Sym *) ewram;
} t_symbols;

typedef struct s_elf
{
    Elf32_Ehdr *ehdr;
    Elf32_Shdr *shdr;
    unsigned int len;
    const char *strtab;
    void *end;
    t_sections sections;
    t_symbols symbols;
} t_elf;

#endif // ELFEDIT_H