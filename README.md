# Snakewood Improved
A collection of patches for Pokémon Snakewood attempting to bring the 2013 released hack to modern rom-hacking standards.

As of now, it's only usable through Mac and Linux. WSL(2) should most probably work, but know that this hasn't been tested yet.

This is a **WIP** project and as such, should used at your own discretion. 

### Save Compatibility
This patch is mostly compatible with vanilla saves. The bag expansion patch **will** clear all your items in the "Items" pocket (only the "Items" pocket), but everything else will be the same.

## Features
- Physical/Special Split
- Reusable TMs
- Repel Reuse Prompts
- Wrapping Summary Screens
- Bag Expansion
- HMs Usage without sacrificing a move slot

> The following lists may contain spoilers.

## Bugfixes / Changes
- Tile corruption in Littleroot Town on spawn
- Darkening of tiles after a screen fade in
- Readable text colors
- Replace Golbat's sprite
- Fix Shop's window tile corruption
- Field Moves have colored text in the Party Menu
- Disease type removal
- Type icons reverted to default Ruby ones
- Emerald style Save Prompt

<details>

<summary>Reveal: <b>Event Specific</b></summary>

- Fix the palette issue for Meteor's portrait
- Use any Electric moves for SS Cangrejo's elevator event
- Avoid softlock after losing the Senex battle
- Set respawn point in Sootopolis City before heading to Sootopolis Heights

</details>

## WIP
- Fixing improper item names
- Fixing item description overflows

<details>

<summary>Reveal: <b>Event Specific</b></summary>

- Fixed some cutscene event movement issues
  - In Route 101, the first zombie cutscene uses the slide movements
  - In Verdanturf Ruins, both Alicia and Pestilence have their exit movements stop at the edge of the screen
  - In Mauville City, Chloe walks into the Hombone and later into the former Chef

</details>


## How to use (Mac and Linux)
1. Install devkitPro with instructions [here](https://devkitpro.org/wiki/Getting_Started).
2. Export `${DEVKITARM}/bin/` to your PATH variable.
3. Download [armips](https://github.com/Kingcom/armips) and place a copy of the executable
3. Get a copy of Pokémon Snakewood, renamed to `snakewood.gba` and place it in current directory.
4. Run `make`.

A `output.gba` will be created as your patched file.
