#!/usr/bin/env make

ifeq ($(strip $(DEVKITARM)),)
$(error "Please set DEVKITARM in your environment. export DEVKITARM=<path to>devkitARM")
endif

include $(DEVKITARM)/base_tools

SRC_FILES ?= $(wildcard src/*.c)
OBJ_FILES ?= $(SRC_FILES:src/%.c=build/src/%.o)

CFLAGS = -O2 -Iinclude -mlong-calls -Wall -Wextra -mthumb -mno-thumb-interwork -fno-inline -fno-builtin -std=gnu11 -mabi=apcs-gnu -mcpu=arm7tdmi -march=armv4t -mtune=arm7tdmi -x c -c -MMD $(EXTRA_CFLAGS)

LD = $(PREFIX)ld
LDFLAGS = --relocatable -T rom.ld $(EXTRA_LDFLAGS)

ARMIPS := armips
PYTHON := python3

.DEFAULT_GOAL = all

.PHONY: all clean

all: test.gba
	$(ARMIPS) main.asm

test.gba: snakewood.gba build/linked.o

clean:
	rm -rf build

build/src/%.o: src/%.c Makefile
	@mkdir -p build/src
	$(CC) $(CFLAGS) -c $< -o $@

build/linked.o: $(OBJ_FILES) rom.ld
	@mkdir -p build
	@echo "$(LD) $(LDFLAGS) -Map build/linked.map -o $@ <objects> <libs>"
	@$(LD) $(LDFLAGS) -Map build/linked.map -o $@ $(OBJ_FILES)

-include $(SRC_FILES:src/%.c=build/src/%.d)