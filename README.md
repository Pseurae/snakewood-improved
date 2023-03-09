# Snakewood Improved
A collection of patches for Pokémon Snakewood attempting to bring the 2013 released hack to modern rom-hacking standards.

As of now, it's only usable through Mac and Linux. WSL(2) should most probably work, but know that this hasn't been tested yet.

This is a WIP project and as such, should used at your own discretion. 

### Save Compatibility
This patch is mostly compatible with vanilla saves. The bag expansion patch **will** clear all your items in the "Items" pocket (only the "Items" pocket), but everything else will be the same.

## Features
- Physical/Special Split
- Reusable TMs
- Repel Reuse Prompts
- Wrapping Summary Screens
- Bag Expansion
- HMs Usage without sacrificing a move slot

## Bugfixes
- Eggs show up as Disease types in the summary screen
- Tile corruption in Littleroot Town on spawn

## WIP
- Fixing improper item names

## How to use (Mac and Linux)
1. Install devkitPro with instructions [here](https://devkitpro.org/wiki/Getting_Started).
2. Export `${DEVKITARM}/bin/` to your PATH variable.
3. Download [armips](https://github.com/Kingcom/armips) and place a copy of the executable
3. Get a copy of Pokémon Snakewood, renamed to `snakewood.gba` and place it in current directory.
4. Run `make`.

A `output.gba` will be created as your patched file.
