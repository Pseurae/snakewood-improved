def iter_moveanim_ptrs(rom):
    for i in range(355):
        yield hex(int.from_bytes(rom.read(4), 'little'))


if __name__ == "__main__":
    movenames = []

    rom = open("snakewood.gba", "rb")
    rom.seek(0x1C7168)

    print("gBattleAnims_Moves::")
    for v in iter_moveanim_ptrs(rom):
        print(f"    .4byte {v}")

    rom.close()

