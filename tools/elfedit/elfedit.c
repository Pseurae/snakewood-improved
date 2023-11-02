/*
    Copyright 2023 Pseurae

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the “Software”), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in
    all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
    THE SOFTWARE.
*/

#include "elfedit.h"

#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/types.h>

static int check_file(t_elf *const elf)
{
    if (elf->len < sizeof(Elf32_Ehdr) || memcmp(elf->ehdr, MAGIC_NUMBER, sizeof(MAGIC_NUMBER) - 1))
        return (fprintf(stderr, "File format not recognized\n"), 0);

    if ((void *)(elf->shdr = ((void *)elf->ehdr + elf->ehdr->e_shoff)) > elf->end
        || (void *)(&elf->shdr[elf->ehdr->e_shstrndx]) > elf->end
        || (void *)(elf->strtab = ((const char *)elf->ehdr + elf->shdr[elf->ehdr->e_shstrndx].sh_offset)) > elf->end)
    {
        return (fprintf(stderr, "Invalid file.\n"), 0);
    }
    return (1);
}

int parse_file(char const *const src_file, char const *const dst_file, t_elf *const elf)
{
    int fd;
    unsigned int len;
    void *buf;

    if ((fd = open(src_file, O_RDONLY)) == -1)
    {
        return (fprintf(stderr, "open %s\n", src_file), 0);
    }

    if ((len = lseek(fd, 0, SEEK_END)) == (unsigned int)-1)
    {
        return (fprintf(stderr, "lseek\n"), 0);
    }

    if (!(buf = mmap(NULL, len, PROT_READ, MAP_SHARED, fd, 0)))
    {
        return (fprintf(stderr, "mmap source\n"), 0);
    }

    close(fd);

    if ((fd = open(dst_file, O_RDWR | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)) == -1)
    {
        return (fprintf(stderr, "open %s\n", dst_file), 0);
    }

    if (ftruncate(fd, len) == -1)
    {
        return (fprintf(stderr, "ftruncate %s\n", dst_file), 0);
    }

    if (!(elf->ehdr = mmap(NULL, len, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0)))
    {
        return (fprintf(stderr, "mmap dest\n"), 0);
    }

    memcpy(elf->ehdr, buf, len);

    elf->len = len;
    elf->end = (void *)elf->ehdr + elf->len;

    return (check_file(elf));
}

int modify_ewram_symbols(t_elf *const elf)
{
    for (Elf32_Half i = 0; i < sbcount(elf->symbols.ewram); ++i)
    {
        Elf32_Sym *sym = elf->symbols.ewram[i];
        sym->st_value += elf->shdr[elf->sections.ewram].sh_addr;
        sym->st_shndx = SHN_ABS;
    }
    return 1;
}

int fill_sections(t_elf *const elf)
{
    t_sections *sections = &elf->sections;

    sections->ewram = elf->ehdr->e_shnum;
    sections->symtab = elf->ehdr->e_shnum;

    for (Elf32_Half i = 0; i < elf->ehdr->e_shnum; ++i)
    {
        if ((void *)&elf->shdr[i] > elf->end)
            return (fprintf(stderr, "Invalid file.\n"), 0);

        Elf32_Word name = elf->shdr[i].sh_name;

        if ((void *)(elf->strtab + name) > elf->end)
            return (fprintf(stderr, "Invalid file.\n"), 0);

        if (elf->shdr[i].sh_type == SHT_SYMTAB)
            sections->symtab = i;
        else if (strcmp(".ewram", elf->strtab + name) == 0)
            sections->ewram = i;
    }

    return 1;
}

int fill_symbols(t_elf *const elf)
{
    Elf32_Sym *sym, *symEnd;

    if (elf->sections.symtab == elf->ehdr->e_shnum)
        return (fprintf(stderr, ".symtab section not found\n"), 0);

    if ((void *)(sym = (void *)elf->ehdr + elf->shdr[elf->sections.symtab].sh_offset) > elf->end
        || (void *)(symEnd = (void *)sym + elf->shdr[elf->sections.symtab].sh_size) > elf->end)
        return (fprintf(stderr, "Invalid file.\n"), 0);

    elf->symbols.ewram = NULL;

    for (; sym < symEnd; sym++)
    {
        if (sym->st_shndx != 0 && sym->st_shndx < SHN_LORESERVE)
        {
            if (elf->sections.ewram != elf->ehdr->e_shnum && sym->st_shndx == elf->sections.ewram)
                sbpush(elf->symbols.ewram, sym);
        }
    }

    return 1;
}

int modify_elf(t_elf *const elf)
{
    if (!fill_sections(elf))
        return (fprintf(stderr, "Required sections not found.\n"), 0);

    if (!fill_symbols(elf))
        return 0;

    if (elf->sections.ewram == elf->ehdr->e_shnum || !modify_ewram_symbols(elf))
        return 0;

    return 1;
}

int main(int argc, char *argv[])
{
    t_elf elf;

    if (argc < 3)
        return (fprintf(stderr, "%s INPUT OUTPUT", argv[0]), 1);

    if (!parse_file(argv[1], argv[2], &elf) || !modify_elf(&elf))
        return 1;

    return 0;
}