if __name__ == "__main__":
    rom = open("snakewood.gba", "rb")
    start = 0x8866C0
    free_space = 0

    rom.seek(start)

    while (byte := rom.read(1)[0]):
        if byte == 0xFF: 
            if start == -1: start = rom.tell()
            free_space += 1
        else:
            if start != -1:
                print(f"{hex(start)} : {hex(free_space)}")
                free_space = 0
                start = -1
