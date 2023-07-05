#!/usr/bin/env make

ifeq ($(strip $(DEVKITARM)),)
$(error "Please set DEVKITARM in your environment. export DEVKITARM=<path to>devkitARM")
endif

include $(DEVKITARM)/base_tools

SRC_FILES ?= $(wildcard src/*.c)
OBJ_FILES ?= $(SRC_FILES:src/%.c=build/src/%.o)

CFLAGS = -Iinclude -mlong-calls -Wall -Wextra -mthumb -mno-thumb-interwork -fno-inline -fno-builtin -std=gnu11 -mabi=apcs-gnu -mcpu=arm7tdmi -march=armv4t -mtune=arm7tdmi -x c -c -MMD -g -mthumb-interwork -Wimplicit -Wparentheses -Wno-unused -Werror -fno-toplevel-reorder -fno-aggressive-loop-optimizations -Wno-pointer-to-int-cast -Wno-stringop-overflow $(EXTRA_CFLAGS)

LD = $(PREFIX)ld
LDFLAGS = -i rom.ld -T linker.ld $(EXTRA_LDFLAGS)

ARMIPS := armips

.DEFAULT_GOAL = all

.PHONY: all clean

all: test.gba
	$(ARMIPS) main.asm -sym2 output.map

test.gba: snakewood.gba build/linked.o

clean:
	rm -rf build

build/src/%.o: src/%.c Makefile rom.ld
	@mkdir -p build/src
	$(CC) $(CFLAGS) -c $< -o $@

build/linked.o: $(OBJ_FILES) rom.ld linker.ld
	@mkdir -p build
	@echo "$(LD) $(LDFLAGS) -Map build/linked.map -o $@ <objects> <libs>"
	@$(LD) $(LDFLAGS) -Map build/linked.map -o $@ $(OBJ_FILES)

rom.ld: linker/*.ld

-include $(SRC_FILES:src/%.c=build/src/%.d)