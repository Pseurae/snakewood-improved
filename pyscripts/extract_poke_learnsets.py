from constants import moves

character_map = {}
end_char = None

def open_charmap():
    global end_char
    f = open("charmap.tbl", "r")
    for line in f.readlines():
        if not line.strip(): continue
        if line.startswith("/"):
            end_char = int("0x" + line[1:].strip(), 16)
            continue

        try:
            c, r = line.split("=")
            c, r = c.strip(), r[0]

            character_map[int("0x" + c, 16)] = r
        except Exception as e:
            print(line, e)

def iter_pokenames(rom):
    for i in range(412):
        raw_pokename = rom.read(11)
        pokename = ""

        for j in raw_pokename:
            if j in character_map:
                pokename += character_map[j]
            if j == end_char:
                break

        yield pokename

pokenames = []

import re

if __name__ == "__main__":
    open_charmap()

    rom = open("snakewood.gba", "rb")

    rom.seek(0x1f716c)
    for i in iter_pokenames(rom):
        i = i.title()
        i = re.sub(r'[-\s]', '', i)
        pokenames.append(i)

    result = open("learnsets.txt", "w")
    varnames = []

    for i in range(1, 412):
        rom.seek(0x207bc8 + i * 4)
        rom.seek(int.from_bytes(rom.read(4), 'little') - 0x8000000)

        name = f"Species{i}" if pokenames[i] == "?" else pokenames[i]
        name = name.replace("♀", "F")
        name = name.replace("♂", "M")

        varname = f"g{name}LevelUpLearnset"
        varnames.append(varname)

        result.write(f"const u16 {varname}[] = {{\n")

        while (learned_move_data := int.from_bytes(rom.read(2), 'little')) != 0xffff:
            learned_move = learned_move_data & 0b111111111
            learned_lvl = learned_move_data >> 9

            result.write(f"\tLEVEL_UP_MOVE({learned_lvl:>2}, {moves[learned_move]}),\n")

        result.write(f"\tLEVEL_UP_END\n}};\n\n")

    result.write(".org 0x8207bc8\n")
    result.write(f"\t.word {varnames[0]}\n")
    for i in varnames:
        result.write(f"\t.word {i}\n")
