offsetNames = { 
}

offsetsToCheck = [
]

def add_offset_to_check(name: str, offset: int, size: int = 1):
    assert size > 0
    for i in range(size):
        offsetsToCheck.append(offset + i)
        offsetNames[offset + i] = name if i == 0 else f"{name} + {i}"

def convert_to_pointer(b):
    return int.from_bytes(b, "little")

if __name__ == "__main__":
    # add_offset_to_check("gBattleMoves", 0x81fb12c, 12)
    # add_offset_to_check("gMoveNames", 0x81f8320)
    # add_offset_to_check("gBattleAnims_Moves", 0x81c7168)
    # add_offset_to_check("gMoveDescriptions", 0x83c09d8)
    add_offset_to_check("gTrainers", 0x81f04fc, 40)

    rom = open("snakewood.gba", "rb")
    rom.seek(192)

    result = { }

    while data := rom.read(4):
        offset = convert_to_pointer(data)
        if offset in offsetsToCheck:
            result.setdefault(offsetNames[offset], []).append(hex(0x8000000 + rom.tell() - 4))

    # print(result)
    for sym, offsets in result.items():
        for off in offsets:
            print(f".org {off} :: .word {sym}")

    rom.close()