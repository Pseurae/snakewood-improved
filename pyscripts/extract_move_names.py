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

def iter_moves(rom):
    for i in range(355):
        raw_movename = rom.read(13)
        movename = ""

        for j in raw_movename:
            if j in character_map:
                movename += character_map[j]
            if j == end_char:
                break

        yield movename

if __name__ == "__main__":
    open_charmap()

    movenames = []

    rom = open("snakewood.gba", "rb")
    rom.seek(0x1F8320)

    for k, v in zip(moves, iter_moves(rom)):
        print(f"[{k}] = _(\"{v}\"),")

    rom.close()

