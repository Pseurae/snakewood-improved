from charmap import Charmap
from struct import unpack
from constants import trainers

charmap = Charmap()

def decapitalize(s: str):
    return s.title()

def process_single_string(f, offset: int, length: int=0xff):
    f.seek(offset)
    return charmap.decode(f.read(length))

def process_string_array(f, offset: int, length: int = 0xff, count: int = 0xff, stride: int = None):
    f.seek(offset)
    for _ in range(count):
        yield charmap.decode(f.read(length))
        if stride is not None:
            f.read(stride - length)

def process_string_pointer_array(f, offset: int, count: int, stride: int = 4):
    currentOffset = offset

    for _ in range(count):
        f.seek(currentOffset)
        ptr: int = unpack(r"<I", f.read(4))[0] - 0x8000000
        yield (ptr, process_single_string(f, ptr))
        currentOffset += stride
    
if __name__ == "__main__":
    charmap.parseCharmap("charmap.txt")
    f = open("snakewood_decapped.gba", "rb")

    values = []
    max_len = 0

    offsets = (0x40f81a,)

    for offset in offsets:
        val = process_single_string(f, offset)
        max_len = max(max_len, len(val))
        values.append((offset, val))

    # for ptr, val in process_string_pointer_array(f, 0x3e73c4 + 4, 88, 8):
    #     max_len = max(max_len, len(val))
    #     values.append((ptr, val))

    for ptr, val in values:
        spacing = ' ' * (max_len - len(val))
        print(f"@decap {hex(ptr + 0x8000000)}, \"{val}\"{spacing} // {val}")
