from constants.moves import names as move_names
from constants.pokemon import names as pokemon_names
from constants.items import names as item_names
from struct import unpack
from charmap import Charmap
from collections import Counter
import unicodedata

def strip_accents(s):
   return ''.join(c for c in unicodedata.normalize('NFD', s)
                  if unicodedata.category(c) != 'Mn')

previous_names = Counter()

def name_format(name):
    name = name.title()
    name = name.replace(" ", "")
    name = name.replace("'", "")
    name = name.replace("&", "And")
    name = name.replace(".", "")
    name = name.replace("-", "_")
    name = strip_accents(name)

    return name

def name_to_define(name, i):
    if previous_names[name] > 1:
        return f"{name_format(name).upper()}_{i}"
    return f"{name_format(name).upper()}"

def name_to_varname(name, i):
    if previous_names[name] > 1:
        return f"gTrainerParty_{name_format(name)}{i}"
    return f"gTrainerParty_{name_format(name)}"

struct_names = [
    "TrainerMonNoItemDefaultMoves",
    "TrainerMonNoItemCustomMoves",
    "TrainerMonItemDefaultMoves",
    "TrainerMonItemCustomMoves"
]

if __name__ == "__main__":
    party_data = []

    cm = Charmap()
    cm.parseCharmap("charmap.txt")

    rom = open("snakewood.gba", "rb")
    rom.seek(0x1f04fc)

    trainer_data_file = open('trainer_data.txt', 'w')
    trainer_repoints_file = open('trainer_repoints.txt', 'w')
    trainer_defines_file = open('trainer_defines.txt', 'w')

    for _ in range(694):
        raw_data = rom.read(40)
        pflag, tclass, encountermusic, tpic = unpack(r'<BBBB', raw_data[:4])
        name = cm.decode(raw_data[4:16])
        item1, item2, item3, item4 = unpack(r"<HHHH", raw_data[16:24])
        is_double, aiflags, party_size, party_ptr = unpack(r"<IIII", raw_data[24:])

        party_data.append((rom.tell() - 4, name, previous_names[name], party_ptr, pflag, party_size))
        previous_names[name] += 1

    for i, (roffset, name, count, party_ptr, pflag, party_size) in enumerate(party_data):
        # print(hex(roffset), name, count, hex(party_ptr))
        if party_ptr == 0x0:
            continue

        rom.seek(party_ptr - 0x8000000, 0)

        varname = name_to_varname(name, count + 1)

        trainer_data_file.write(f"const struct {struct_names[pflag]} {varname}[{party_size}] = \n{{")
        trainer_data_file.write("\n")

        match pflag:
            case 0:
                for _ in range(party_size):
                    iv, lvl, species, _ = unpack(r'<HHHH', rom.read(8))
                    trainer_data_file.write(f"""    {{
        .iv = {iv},
        .level = {lvl},
        .species = {pokemon_names[species]},
    }},""")
                    trainer_data_file.write("\n")
            case 1:
                for _ in range(party_size):
                    iv, lvl, species, move1, move2, move3, move4, _ = unpack(r'<HHHHHHHH', rom.read(16))
                    trainer_data_file.write(f"""    {{
        .iv = {iv},
        .level = {lvl},
        .species = {pokemon_names[species]},
        .moves = {{ {move_names[move1]}, {move_names[move2]}, {move_names[move3]}, {move_names[move4]} }},
    }},""")
                    trainer_data_file.write("\n")
            case 2:
                for _ in range(party_size):
                    iv, lvl, species, held_item = unpack(r'<HHHH', rom.read(8))
                    trainer_data_file.write(f"""    {{
        .iv = {iv},
        .level = {lvl},
        .species = {pokemon_names[species]},
        .heldItem = {item_names[held_item]},
    }},""")
                    trainer_data_file.write("\n")
            case 3:
                for _ in range(party_size):
                    iv, lvl, species, held_item, move1, move2, move3, move4 = unpack(r'<HHHHHHHH', rom.read(16))
                    trainer_data_file.write(f"""    {{
        .iv = {iv},
        .level = {lvl},
        .species = {pokemon_names[species]},
        .heldItem = {item_names[held_item]},
        .moves = {{ {move_names[move1]}, {move_names[move2]}, {move_names[move3]}, {move_names[move4]} }},
    }},""")
                    trainer_data_file.write("\n")

        trainer_data_file.write("};\n")
        trainer_data_file.write("\n")

        trainer_repoints_file.write(f".org {hex(0x8000000 + roffset)} :: .word {varname}")
        trainer_repoints_file.write("\n")

        trainer_defines_file.write(f"#define TRAINER_{name_to_define(name, count + 1)} {i}\n")

    trainer_data_file.close()
    trainer_repoints_file.close()
    trainer_defines_file.close()
