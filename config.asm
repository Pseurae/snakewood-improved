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

; Implement an Emerald Style Save Prompt with colored fields.
.definelabel EMERALD_SAVE_PROMPT, 1

; Enable this to have shadows on NPCs like in HGSS.
.definelabel OW_EVENT_SHADOWS, 1

; Nature based colored stats in the Summary Screen.
.definelabel COLORED_STATS, 1

; WIP
; Use items repeatedly without going back to the bag each time.
.definelabel REPEATED_ITEM, 1

; On some emulators, the game just crashes on a white screen when the wrong
; save file type is selected.
; Enable this to show an error screen when loaded with the wrong save file type.
.definelabel WRONG_SAVE_TYPE_ERROR, 1

; Allows for multiple key items to be registered and used from a list.
.definelabel MULTIPLE_REGISTERED_ITEMS, 1

; Give Exp Points on capturing a Pokemon.
.definelabel EXP_ON_CAPTURE, 1

; Autorunning shoes like in HGSS.
.definelabel AUTORUN, 1

; Doubles Exp. Points gained after battles.
.definelabel MORE_EXP, 1

; New "Snakewood" logo
.definelabel NEW_TITLE_SCREEN, 1

; New Game speech uses the dialogue box instead of the normal menu box.
.definelabel BIRCH_SPEECH_DBOX, 1

; Adds a Nature Changer NPC in Verdanturf's Endless Plains.
.definelabel NATURE_CHANGER, 1

; Adds a Ability Changer NPC in New Mauville.
.definelabel ABILITY_CHANGER, 1

; Adds new moves to complement the P/S Split.
.definelabel NEW_MOVES, 1

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
; Enable this to fix the issue.
.definelabel SHOP_MONEYBOX_FIX, 1

; Fix event movements.
.definelabel EVENT_MOVEMENTS, 1

; Enable this to display the Meteor battle sprite instead of the gross glitched out Charizard in Granite Caves.
.definelabel SHOW_METEOR_PORTRAIT, 1

; If you are defeated in battle in Necropolis and hadn't used the Center in the Sootopolis before heading out,
; you're forced to make your way back as you use Fly to get there.
; Enable this to explicitly set a respawn point in Sootopolis City when heading off to Sootopolis Heights.
.definelabel NECROPOLIS_RESPAWN, 1 

; If you don't catch Roclobster from the dive spot in Dewford, you can't
; legally obtain the "Hard Disk Solo" and thus, cannot visit the Gym Island.
; Enable this to receive the item after the Roclobster battle.
.definelabel NEW_ROCLOBSTER_SCRIPT, 1

; Fix the female trainer OW sprites.
.definelabel FIX_FEMALE_MC_OW_SPRITES, 1

; Change Birch chase script with the default Ruby one.
.definelabel REPLACE_BIRCH_CHASE_SCRIPT, 1