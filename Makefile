#!/usr/bin/env make

INPUT := snakewood.gba
OUTPUT := output.gba

ifeq ($(strip $(DEVKITARM)),)
$(error "Please set DEVKITARM in your environment. export DEVKITARM=<path to>devkitARM")
endif

include $(DEVKITARM)/base_tools

ifeq ($(OS),Windows_NT)
EXE := .exe
else
EXE :=
endif

SRC_FILES ?= $(wildcard src/*.c)
ASM_FILES ?= $(wildcard assembly/*.s assembly/*/*.s)

SRC_OBJS := $(SRC_FILES:src/%.c=build/src/%.o)
ASM_OBJS := $(ASM_FILES:assembly/%.s=build/assembly/%.o)

OBJ_FILES ?= $(SRC_OBJS) $(ASM_OBJS)

CFLAGS = -Wall -std=c99 -O2 -Iinclude -g -mthumb -mno-thumb-interwork -march=armv4t -mcpu=arm7tdmi -mtune=arm7tdmi -x c -c -Wparentheses -Wno-unused -Werror

AS := $(PREFIX)as
ASFLAGS  := -mthumb -I assembly -I include

LD = $(PREFIX)ld
LDFLAGS = -i rom.ld -T linker.ld

ARMIPS := ./armips
ARMIPSFLAGS := -strequ INPUT_FILE $(INPUT) -strequ OUTPUT_FILE $(OUTPUT)

ELFEDIT := tools/elfedit/elfedit$(EXE)
PREPROC := tools/preproc/preproc$(EXE)
SCANINC := tools/scaninc/scaninc$(EXE)

.DEFAULT_GOAL = all

MAKEFLAGS += --no-print-directory

.SUFFIXES:

.SECONDARY:

.DELETE_ON_ERROR:

.SECONDEXPANSION:

.PHONY: all clean tools clean_tools

ifeq (,$(filter-out all,$(MAKECMDGOALS)))
$(shell $(MAKE) tools > /dev/null)
include $(OBJ_FILES:%.o=%.d)
endif

all: $(OUTPUT)
	@$(ARMIPS) $(ARMIPSFLAGS) main.asm -sym2 output.map
	@echo "$(ARMIPS) <flags> main.asm -sym2 output.map"

$(OUTPUT): $(INPUT) build/linked_processed.o

format:
	@find . -not -path "./tools/*" -name *.c -o -not -path "./tools/*" -name *.h | xargs clang-format -i
	@echo "Done."

tools:
	@$(MAKE) -C tools/elfedit
	@$(MAKE) -C tools/preproc
	@$(MAKE) -C tools/scaninc

clean_tools:
	@$(MAKE) -C tools/elfedit clean
	@$(MAKE) -C tools/preproc clean
	@$(MAKE) -C tools/scaninc clean

clean: clean_tools
	rm -rf build

build/assembly/%.d: assembly/%.s
	@mkdir -p $(dir $@)
	@echo "build/assembly/$*.o : \\" > $@
	@$(SCANINC) $< | awk '{print $$0 " \\"}' >> $@

build/assembly/%.o: assembly/%.s build/assembly/%.d
	@echo "$(AS) <flags> -o $@ $<"
	@$(PREPROC) $< charmap.txt | $(CC) -w -E - | $(AS) $(ASFLAGS) -o $@

build/src/%.d: src/%.c
	@mkdir -p $(dir $@)
	@echo "build/src/$*.o : \\" > $@
	@$(SCANINC) -I include $< | awk '{print $$0 " \\"}' >> $@

build/src/%.o: src/%.c build/src/%.d
	@echo "$(CC) <flags> -c $< -o $@"
	@$(PREPROC) $< charmap.txt | $(CC) $(CFLAGS) -o $@ -

build/linked.o: $(OBJ_FILES) linker.ld rom.ld linker/**.ld
	@mkdir -p build
	@echo "$(LD) $(LDFLAGS) -Map build/linked.map -o $@ <objects> <libs>"
	@$(LD) $(LDFLAGS) -Map build/linked.map -o $@ $(OBJ_FILES)

build/linked_processed.o: build/linked.o
	@$(ELFEDIT) $< $@ savemap.txt
