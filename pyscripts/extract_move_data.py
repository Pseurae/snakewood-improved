from constants import targets, moves, types, effects, flags
from struct import unpack

def fast_log(x):
    result = 0
    while x := (x >> 1): pass
    return result

def iter_movedesc_ptrs(rom):
    for i in range(355):
        yield unpack("<BBBBBBBbB", rom.read(9))
        rom.read(3)

def get_flags(f):
    if not f: return 0

    result = []
    i = 0

    while f > 0:
        if f & 1:
            result.append(flags[i])
        i += 1
        f >>= 1

    return " | ".join(result)
        

if __name__ == "__main__":
    rom = open("snakewood.gba", "rb")
    rom.seek(0x1fb12c)

    f = open("movedata.txt", "w")

    for name, data in zip(moves, iter_movedesc_ptrs(rom)):
        f.write(
f"""[{name}] = {{
    .effect = {effects[data[0]]},
    .power = {data[1]},
    .type = {types[data[2]]},
    .accuracy = {data[3]},
    .pp = {data[4]},
    .secondaryEffectChance = {data[5]},
    .target = {targets[fast_log(data[6])]},
    .priority = {data[7]},
    .flags = {get_flags(data[8])},
}},\n\n"""
)

    f.close()
    rom.close()

