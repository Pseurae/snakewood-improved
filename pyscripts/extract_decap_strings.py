from charmap import Charmap
from struct import unpack
from constants import items

charmap = Charmap()

def decapitalize(s: str):
    return s.title()

def process_single_string(f, offset: int, length: int=0xff):
    f.seek(offset)
    return decapitalize(charmap.decode(f.read(length)))

def process_string_array(f, offset: int, length: int = 0xff, count: int = 0xff, stride: int = None):
    f.seek(offset)
    for _ in range(count):
        yield charmap.decode(f.read(length))
        if stride is not None:
            f.read(stride - length)

def process_string_pointer_array(f, offset: int, count: int, stride: int):
    currentOffset = offset

    for _ in range(count):
        f.seek(currentOffset)
        ptr: int = unpack(r"<I", f.read(4))[0] - 0x8000000
        yield process_single_string(f, ptr)
        currentOffset += stride
    
if __name__ == "__main__":
    charmap.parseCharmap("charmap.txt")
    f = open("snakewood_decapped.gba", "rb")

    for i, name in enumerate(process_string_array(f, 0x3c5564, 14, 349, 44)):
        print(f"@decap_item_name {items.names[i]}, \"{name}\"")
