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

def iter_movedesc_ptrs(rom):
    for i in range(355 - 1):
        yield hex(int.from_bytes(rom.read(4), 'little'))


if __name__ == "__main__":
    open_charmap()

    movenames = []

    rom = open("snakewood.gba", "rb")
    rom.seek(0x3c09d8)

    for k, v in zip(moves[1:], iter_movedesc_ptrs(rom)):
        print(f"[{k}] = (const u8 *){v},")

    rom.close()

