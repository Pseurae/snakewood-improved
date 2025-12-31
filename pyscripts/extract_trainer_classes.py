from charmap import Charmap
from struct import unpack
from constants import abilities

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

    for name in process_string_array(f, 0x1f0208, 13, 58):
        name = process_class_name(name)

        if max_len < len(name):
            max_len = len(name)

        names.append(name)

    for i, name in enumerate(names):
        class_name = f"TRAINER_CLASS_{name}"
        spacing = ' ' * (max_len - len(name))
        print(f"#define {class_name}{spacing}\t{i}")
