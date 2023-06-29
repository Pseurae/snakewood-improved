; New Features
; ------------

; Implements the Physical-Special Split feature.
.definelabel PS_SPLIT, 1

; Expands Item Pocket to hold 60 different items, and maximum item amount is set to 999.
.definelabel BAG_EXPANSION, 1

; B/W Repel reuse prompt when current one runs out.
.definelabel REPEL_PROMPT, 1

; TMs do not break after use and are treated like HMs. (PKMN can't hold it, can't sell it or toss it)
.definelabel REUSABLE_TMS, 1

; HMs can be used in the field if the player has the required badge and a mon in the party which can learn the move.
; If an HM has been taught to a mon, the behaviour stays the same as in vanilla.
.definelabel NEW_HM_SYSTEM, 1

; Fixes and Small Modifications
; -----------------------------

; Replaces the sharp RS colors with softer, less eye-burning ones.
.definelabel SOFTER_TEXT_COLORS, 1

; Reverts back to the vanilla RS Golbat sprite.
.definelabel GOLBAT_SPRITE_REVERT, 1

; Allows summary screen to wrap around the ends of the player party.
.definelabel WRAPPING_SUMMARY, 1

; This allows the SS Cangrejo elevator to be powered by any Electric move than just Thunder-Shock.
; Modifies the script to prompt the use of the move, and removes the Ditto key script.
.definelabel SS_CANGREJO_ELEVATOR, 1

; Field Moves have colored options like Emerald and FRLG.
.definelabel COLORED_FIELD_MOVES, 1

; Bugfixes
; --------

; Fixes the tile corruption brought on by the Truck shake script.
.definelabel LITTLEROOT_TILES, 1

; Fixes the issue where when the screen fades in a map of "Shade" weather, 
; the colors gets progressively darker and darker.
; (Using the Medical Supplies in Petalburg Woods and Island of Calm)
.definelabel SHADE_FADESCREEN, 1

; Fix `showpokepic` command's issue with loading the pokemon sprite palette.
.definelabel OW_MON_PIC, 1

; Fix the whitespace on Item names.
.definelabel ITEM_NAMES, 1

; Fix the overflowing of Item descriptions in the description box.
.definelabel ITEM_DESCRIPTIONS, 1

; Replace the fucked up type icons with default ones and
; remove the "Disease" type.
.definelabel FIX_POKEMON_TYPES, 1

; When you lose your first match with Senex in the Dept. Store, the game gets
; softlocked as you lose the chance to retrieve HM08 (Dive).
; Enable this to allow the rematch with Senex when you lose.
.definelabel ALLOW_SENEX_REMATCH, 1

; Shop menus opened outside the PokeMart have the border tiles of the money box get erased on scrolling.
; Enabling this fixes the issue.
.definelabel SHOP_MONEYBOX_FIX, 1

; Fix event movements.
.definelabel EVENT_MOVEMENTS, 1

; Enable this to display the Meteor battle sprite instead of the gross glitched out Charizard in Granite Caves.
.definelabel SHOW_METEOR_PORTRAIT, 1
