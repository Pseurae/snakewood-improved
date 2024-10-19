from constants.moves import names
from charmap import Charmap

charmap = Charmap()

def iter_moves(rom):
    for i in range(355):
        raw_movename = rom.read(13)
        yield charmap.decode(raw_movename)

if __name__ == "__main__":
    charmap.parseCharmap("charmap.txt")
    movenames = []

    rom = open("snakewood.gba", "rb")
    rom.seek(0x1F8320)

    for k, v in zip(names, iter_moves(rom)):
        print(f"[{k}] = _(\"{v}\"),")

    rom.close()

