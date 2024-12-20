# Snakewood Improved
A collection of patches for Pokémon Snakewood attempting to bring the 2013 released hack to modern rom-hacking standards.

This is a **WIP** project and as such, should used at your own discretion. 

See [CHANGES.md](CHANGES.md) for all the new additions.

### Save Compatibility
This patch is mostly compatible with vanilla saves. The bag expansion patch **will** clear all your items in the "Items" pocket (only the "Items" pocket), but everything else will be the same.

## How to use (Mac and Linux)
1. Install devkitPro with instructions [here](https://devkitpro.org/wiki/Getting_Started).
2. Export `${DEVKITARM}/bin/` to your PATH variable.
3. Download [armips](https://github.com/Kingcom/armips) and place a copy of the executable.
3. Get a copy of Pokémon Snakewood, renamed to `snakewood.gba` and place it in current directory.
4. Run `make`.

A `output.gba` will be created as your patched file.

## Credits
- Cutlerine and the Snakewood Team for creating Pokemon Snakewood.  
- PRET for their [decompilation of Pokemon Ruby](https://github.com/pret/pokeruby).  
- Super Versekr Dark for their Exp Points on capturing routine.  
- merpp for pokeemerald's overworld shadow feature.
- Andrea for their P/S Split routine.
