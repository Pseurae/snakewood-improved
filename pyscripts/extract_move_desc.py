from constants.moves import names

def iter_movedesc_ptrs(rom):
    for i in range(355 - 1):
        yield hex(int.from_bytes(rom.read(4), 'little'))


if __name__ == "__main__":
    movenames = []

    rom = open("snakewood.gba", "rb")
    rom.seek(0x3c09d8)

    for k, v in zip(names[1:], iter_movedesc_ptrs(rom)):
        print(f"[{k}] = (const u8 *){v},")

    rom.close()

