CC = gcc
CFLAGS = -Wall -Werror -std=gnu99 -O2

SRCS = elfedit.c

HEADERS := elfedit.h elf.h vector.h

.PHONY: all clean

all: elfedit
	@:

elfedit: $(SRCS) $(HEADERS)
	$(CC) $(CFLAGS) $(SRCS) -o $@ $(LDFLAGS)

clean:
	$(RM) elfedit elfedit.exe
