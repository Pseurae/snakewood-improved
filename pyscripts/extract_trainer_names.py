from charmap import Charmap
from constants import trainers

charmap = Charmap()

def process_string_array(f, offset: int, length: int = 0xff, count: int = 0xff, stride: int = None):
    f.seek(offset)
    for _ in range(count):
        yield charmap.decode(f.read(length))
        if stride is not None:
            f.read(stride - length)

def process_class_name(s: str):
    return s.upper().replace("♂", "_M").replace("♀", "_F").replace(" ", "_")

if __name__ == "__main__":
    charmap.parseCharmap("charmap.txt")
    f = open("snakewood_decapped.gba", "rb")

    names = [ ]
    max_len = 0

    for name in process_string_array(f, 0x1f04fc + 4, 12, 694, 40):
        name = name.title()

        if max_len < len(name):
            max_len = len(name)

        names.append(name)

    for i, name in enumerate(names):
        print(f"@decap_trainer_name {trainers.defines[i]}, \"{name}\"")