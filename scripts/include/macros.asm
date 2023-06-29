FALSE equ 0
TRUE equ 1

TRAINER_BATTLE_SINGLE equ 0
TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC equ 1
TRAINER_BATTLE_CONTINUE_SCRIPT equ 2
TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT equ 3
TRAINER_BATTLE_DOUBLE equ 4
TRAINER_BATTLE_REMATCH equ 5
TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE equ 6
TRAINER_BATTLE_REMATCH_DOUBLE equ 7
TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE_NO_MUSIC equ 8

.macro map, map_id
.byte map_id >> 8    ; map group
.byte map_id & 0xFF  ; map num
.endmacro

.macro s_nop
.byte 0x00
.endmacro

.macro s_nop1
.byte 0x01
.endmacro

.macro s_end
.byte 0x02
.endmacro

.macro s_return
.byte 0x03
.endmacro

.macro s_call, destination
.byte 0x04
.word destination
.endmacro

.macro s_goto, destination
.byte 0x05
.word destination
.endmacro

.macro s_goto_if, condition, destination
.byte 0x06
.byte condition
.word destination
.endmacro

.macro s_call_if, condition, destination
.byte 0x07
.byte condition
.word destination
.endmacro

.macro s_gotostd, function
.byte 0x08
.byte function
.endmacro

STD_OBTAIN_ITEM equ 0
STD_FIND_ITEM equ 1
STD_OBTAIN_DECORATION equ 7
STD_REGISTER_MATCH_CALL equ 8

.macro s_callstd, function
.byte 0x09
.byte function
.endmacro

.macro s_gotostd_if, condition, function
.byte 0x0a
.byte condition
.byte function
.endmacro

.macro s_callstd_if, condition, function
.byte 0x0b
.byte condition
.byte function
.endmacro

.macro s_gotoram
.byte 0x0c
.endmacro

.macro s_killscript
.byte 0x0d
.endmacro

.macro s_setmysteryeventstatus, value
.byte 0x0e
.byte value
.endmacro

.macro s_loadword, destination, value
.byte 0x0f
.byte destination
.word value
.endmacro

.macro s_loadbyte, destination, value
.byte 0x10
.byte destination
.byte value
.endmacro

.macro s_writebytetoaddr, value, offset
.byte 0x11
.byte value
.word offset
.endmacro

.macro s_loadbytefromaddr, destination, source
.byte 0x12
.byte destination
.word source
.endmacro

.macro s_setptrbyte, source, destination
.byte 0x13
.byte source
.word destination
.endmacro

.macro s_copylocal, destination, source
.byte 0x14
.byte destination
.byte source
.endmacro

.macro s_copybyte, destination, source
.byte 0x15
.word destination
.word source
.endmacro

.macro s_setvar, destination, value
.byte 0x16
.halfword destination
.halfword value
.endmacro

.macro s_addvar, destination, value
.byte 0x17
.halfword destination
.halfword value
.endmacro

.macro s_subvar, destination, value
.byte 0x18
.halfword destination
.halfword value
.endmacro

.macro s_copyvar, destination, source
.byte 0x19
.halfword destination
.halfword source
.endmacro

.macro s_setorcopyvar, destination, source
.byte 0x1a
.halfword destination
.halfword source
.endmacro

.macro s_compare_local_to_local, byte1, byte2
.byte 0x1b
.byte byte1
.byte byte2
.endmacro

.macro s_compare_local_to_value, a, b
.byte 0x1c
.byte a
.byte b
.endmacro

.macro s_compare_local_to_addr, a, b
.byte 0x1d
.byte a
.word b
.endmacro

.macro s_compare_addr_to_local, a, b
.byte 0x1e
.word a
.byte b
.endmacro

.macro s_compare_addr_to_value, a, b
.byte 0x1f
.word a
.byte b
.endmacro

.macro s_compare_addr_to_addr, a, b
.byte 0x20
.word a
.word b
.endmacro

.macro s_compare_var_to_value, var, value
.byte 0x21
.halfword var
.halfword value
.endmacro

.macro s_compare_var_to_var, var1, var2
.byte 0x22
.halfword var1
.halfword var2
.endmacro

.macro s_compare, var, arg
.if ((arg >= VARS_START && arg <= VARS_END) || (arg >= SPECIAL_VARS_START && arg <= SPECIAL_VARS_END))
    s_compare_var_to_var var, arg
.else
    s_compare_var_to_value var, arg
.endif
.endmacro

.macro s_callnative, func
.byte 0x23
.word func
.endmacro

.macro s_gotonative, func
.byte 0x24
.word func
.endmacro

.macro s_special, function
.byte 0x25
.halfword SPECIAL_\function
.endmacro

.macro s_specialvar, output, function
.byte 0x26
.halfword output
.halfword SPECIAL_\function
.endmacro

.macro s_waitstate
.byte 0x27
.endmacro

.macro s_delay, time
.byte 0x28
.halfword time
.endmacro

.macro s_setflag, a
.byte 0x29
.halfword a
.endmacro

.macro s_clearflag, a
.byte 0x2a
.halfword a
.endmacro

.macro s_checkflag, a
.byte 0x2b
.halfword a
.endmacro

.macro s_initclock, hour, minute
.byte 0x2c
.halfword hour
.halfword minute
.endmacro

.macro s_dotimebasedevents
.byte 0x2d
.endmacro

.macro s_gettime
.byte 0x2e
.endmacro

.macro s_playse, sound_number
.byte 0x2f
.halfword sound_number
.endmacro

.macro s_waitse
.byte 0x30
.endmacro

.macro s_playfanfare, fanfare_number
.byte 0x31
.halfword fanfare_number
.endmacro

.macro s_waitfanfare
.byte 0x32
.endmacro

.macro s_playbgm, song_number, unknown
.byte 0x33
.halfword song_number
.byte unknown
.endmacro

.macro s_savebgm, song_number
.byte 0x34
.halfword song_number
.endmacro

.macro s_fadedefaultbgm
.byte 0x35
.endmacro

.macro s_fadenewbgm, song_number
.byte 0x36
.halfword song_number
.endmacro

.macro s_fadeoutbgm, speed
.byte 0x37
.byte speed
.endmacro

.macro s_fadeinbgm, speed
.byte 0x38
.byte speed
.endmacro

.macro s_warp, map_, warp, X, Y
.byte 0x39
map map_
.byte warp
.halfword X
.halfword Y
.endmacro

.macro s_warpsilent, map_, warp, X, Y
.byte 0x3a
map map_
.byte warp
.halfword X
.halfword Y
.endmacro

.macro s_warpdoor, map_, warp, X, Y
.byte 0x3b
map map_
.byte warp
.halfword X
.halfword Y
.endmacro

.macro s_warphole, map_
.byte 0x3c
map map_
.endmacro

.macro s_warpteleport, map_, warp, X, Y
.byte 0x3d
map map_
.byte warp
.halfword X
.halfword Y
.endmacro

.macro s_setwarp, map_, warp, X, Y
.byte 0x3e
map map_
.byte warp
.halfword X
.halfword Y
.endmacro

.macro s_setdynamicwarp, map_, warp, X, Y
.byte 0x3f
map map_
.byte warp
.halfword X
.halfword Y
.endmacro

.macro s_setdivewarp, map_, warp, X, Y
.byte 0x40
map map_
.byte warp
.halfword X
.halfword Y
.endmacro

.macro s_setholewarp, map_, warp, X, Y
.byte 0x41
map map_
.byte warp
.halfword X
.halfword Y
.endmacro

.macro s_getplayerxy, X, Y
.byte 0x42
.halfword X
.halfword Y
.endmacro

.macro s_getpartysize
.byte 0x43
.endmacro

.macro s_additem, index, quantity
.byte 0x44
.halfword index
.halfword quantity
.endmacro

.macro s_removeitem, index, quantity
.byte 0x45
.halfword index
.halfword quantity
.endmacro

.macro s_checkitemspace, index, quantity
.byte 0x46
.halfword index
.halfword quantity
.endmacro

.macro s_checkitem, index, quantity
.byte 0x47
.halfword index
.halfword quantity
.endmacro

.macro s_checkitemtype, index
.byte 0x48
.halfword index
.endmacro

.macro s_addpcitem, index, quantity
.byte 0x49
.halfword index
.halfword quantity
.endmacro

.macro s_checkpcitem, index, quantity
.byte 0x4a
.halfword index
.halfword quantity
.endmacro

.macro s_adddecoration, decoration
.byte 0x4b
.halfword decoration
.endmacro

.macro s_removedecoration, decoration
.byte 0x4c
.halfword decoration
.endmacro

.macro s_checkdecor, decoration
.byte 0x4d
.halfword decoration
.endmacro

.macro s_checkdecorspace, decoration
.byte 0x4e
.halfword decoration
.endmacro

.macro s_applymovement, index, movements
.byte 0x4f
.halfword index
.word movements
.endmacro

.macro s_applymovement_at, index, movements, map
.byte 0x50
.halfword index
.word movements
map map
.endmacro

.macro s_waitmovement, index
.byte 0x51
.halfword index
.endmacro

.macro s_waitmovement_at, index, map
.byte 0x52
.halfword index
map map
.endmacro

.macro s_removeobject, index
.byte 0x53
.halfword index
.endmacro

.macro s_removeobjectat, index, map
.byte 0x54
.halfword index
map map
.endmacro

.macro s_addobject, index
.byte 0x55
.halfword index
.endmacro

.macro s_addobjectat, index, map
.byte 0x56
.halfword index
map map
.endmacro

.macro s_setobjectxy, index, x, y
.byte 0x57
.halfword index
.halfword x
.halfword y
.endmacro

.macro s_showobjectat, index, map
.byte 0x58
.halfword index
map map
.endmacro

.macro s_hideobjectat, index, map
.byte 0x59
.halfword index
map map
.endmacro

.macro s_faceplayer
.byte 0x5a
.endmacro

.macro s_turnobject, index, direction
.byte 0x5b
.halfword index
.byte direction
.endmacro

.macro s_trainerbattle, type, trainer, local_id, pointer1, pointer2, pointer3, pointer4
.byte 0x5c
.byte type
.halfword trainer
.halfword local_id
.if type == TRAINER_BATTLE_SINGLE
    .word pointer1     
    .word pointer2 
.elseif type == TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC
    .word pointer1     
    .word pointer2     
    .word pointer3 
.elseif type == TRAINER_BATTLE_CONTINUE_SCRIPT
    .word pointer1     
    .word pointer2     
    .word pointer3 
.elseif type == TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT
    .word pointer1 
.elseif type == TRAINER_BATTLE_DOUBLE
    .word pointer1     
    .word pointer2     
    .word pointer3 
.elseif type == TRAINER_BATTLE_REMATCH
    .word pointer1     
    .word pointer2 
.elseif type == TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE
    .word pointer1     
    .word pointer2     
    .word pointer3     
    .word pointer4 
.elseif type == TRAINER_BATTLE_REMATCH_DOUBLE
    .word pointer1     
    .word pointer2     
    .word pointer3 
.elseif type == TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE_NO_MUSIC
    .word pointer1     
    .word pointer2     
    .word pointer3     
    .word pointer4 
.endif
.endmacro

.macro s_trainerbattle_single, trainer, intro_text, lose_text, event_script, music
.if event_script == FALSE
s_trainerbattle TRAINER_BATTLE_SINGLE, trainer, 0, intro_text, lose_text, 0, 0
.elseif music == TRUE
s_trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, trainer, 0, intro_text, lose_text, event_script, 0
.else
s_trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC, trainer, 0, intro_text, lose_text, event_script, 0
.endif
.endmacro

.macro s_trainerbattle_double, trainer, intro_text, lose_text, not_enough_pkmn_text, event_script, music
.if event_script == FALSE
s_trainerbattle TRAINER_BATTLE_DOUBLE, trainer, 0, intro_text, lose_text, not_enough_pkmn_text, 0
.elseif music == TRUE
s_trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE, trainer, 0, intro_text, lose_text, not_enough_pkmn_text, event_script
.else
s_trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE_NO_MUSIC, trainer, 0, intro_text, lose_text, not_enough_pkmn_text, event_script
.endif
.endmacro

.macro s_trainerbattle_rematch, trainer, intro_text, lose_text
s_trainerbattle TRAINER_BATTLE_REMATCH, trainer, 0, intro_text, lose_text, 0, 0
.endmacro

.macro s_trainerbattle_rematch_double, trainer, intro_text, lose_text, not_enough_pkmn_text
s_trainerbattle TRAINER_BATTLE_REMATCH_DOUBLE, trainer, 0, intro_text, lose_text, not_enough_pkmn_text, 0
.endmacro

.macro s_trainerbattle_no_intro, trainer, lose_text
s_trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, trainer, 0, lose_text, 0, 0, 0
.endmacro

.macro s_trainerbattlebegin
.byte 0x5d
.endmacro

.macro s_gotopostbattlescript
.byte 0x5e
.endmacro

.macro s_gotobeatenscript
.byte 0x5f
.endmacro

.macro s_checktrainerflag, trainer
.byte 0x60
.halfword trainer
.endmacro

.macro s_settrainerflag, trainer
.byte 0x61
.halfword trainer
.endmacro

.macro s_cleartrainerflag, trainer
.byte 0x62
.halfword trainer
.endmacro

.macro s_setobjectxyperm, index, x, y
.byte 0x63
.halfword index
.halfword x
.halfword y
.endmacro

.macro s_moveobjectoffscreen, index
.byte 0x64
.halfword index
.endmacro

.macro s_setobjectmovementtype, word, byte
.byte 0x65
.halfword word
.byte byte
.endmacro

.macro s_waitmessage
.byte 0x66
.endmacro

.macro s_message, text
.byte 0x67
.word text
.endmacro

.macro s_closemessage
.byte 0x68
.endmacro

.macro s_lockall
.byte 0x69
.endmacro

.macro s_lock
.byte 0x6a
.endmacro

.macro s_releaseall
.byte 0x6b
.endmacro

.macro s_release
.byte 0x6c
.endmacro

.macro s_waitbuttonpress
.byte 0x6d
.endmacro

.macro s_yesnobox, x, y
.byte 0x6e
.byte x
.byte y
.endmacro

.macro s_multichoice, x, y, list, b
.byte 0x6f
.byte x
.byte y
.byte list
.byte b
.endmacro

.macro s_multichoicedefault, x, y, list, default, b
.byte 0x70
.byte x
.byte y
.byte list
.byte default
.byte b
.endmacro

.macro s_multichoicegrid, x, y, list, per_row, B
.byte 0x71
.byte x
.byte y
.byte list
.byte per_row
.byte B
.endmacro

.macro s_drawbox, byte1, byte2, byte3, byte4
.byte 0x72
.byte byte1
.byte byte2
.byte byte3
.byte byte4
.endmacro

.macro s_erasebox, byte1, byte2, byte3, byte4
.byte 0x73
.byte byte1
.byte byte2
.byte byte3
.byte byte4
.endmacro

.macro s_drawboxtext, byte1, byte2, byte3, byte4
.byte 0x74
.byte byte1
.byte byte2
.byte byte3
.byte byte4
.endmacro

.macro s_showmonpic, species, x, y
.byte 0x75
.halfword species
.byte x
.byte y
.endmacro

.macro s_hidemonpic 
.byte 0x76
.endmacro

.macro s_showcontestwinner, a
.byte 0x77
.byte a
.endmacro

.macro s_braillemessage, text
.byte 0x78
.word text
.endmacro

.macro s_givemon, species, level, item
.byte 0x79
.halfword species
.byte level
.halfword item
.word 0x0
.word 0x0
.byte 0
.endmacro

.macro s_giveegg, species
.byte 0x7a
.halfword species
.endmacro

.macro s_setmonmove, index, slot, move
.byte 0x7b
.byte index
.byte slot
.halfword move
.endmacro

.macro s_checkpartymove, index
.byte 0x7c
.halfword index
.endmacro

.macro s_bufferspeciesname, out, species
.byte 0x7d
.byte out
.halfword species
.endmacro

.macro s_bufferleadmonspeciesname, out
.byte 0x7e
.byte out
.endmacro

.macro s_bufferpartymonnick, out, slot
.byte 0x7f
.byte out
.halfword slot
.endmacro

.macro s_bufferitemname, out, item
.byte 0x80
.byte out
.halfword item
.endmacro

.macro s_bufferdecorationname, out, decoration
.byte 0x81
.byte out
.halfword decoration
.endmacro

.macro s_buffermovename, out, move
.byte 0x82
.byte out
.halfword move
.endmacro

.macro s_buffernumberstring, out, input
.byte 0x83
.byte out
.halfword input
.endmacro

.macro s_bufferstdstring, out, index
.byte 0x84
.byte out
.halfword index
.endmacro

.macro s_bufferstring, out, offset
.byte 0x85
.byte out
.word offset
.endmacro

.macro s_pokemart, products
.byte 0x86
.word products
.endmacro

.macro s_pokemartdecoration, products
.byte 0x87
.word products
.endmacro

.macro s_pokemartdecoration2, products
.byte 0x88
.word products
.endmacro

.macro s_playslotmachine, word
.byte 0x89
.halfword word
.endmacro

.macro s_setberrytree, tree_id, berry, growth_stage
.byte 0x8a
.byte tree_id
.byte berry
.byte growth_stage
.endmacro

.macro s_choosecontestmon 
.byte 0x8b
.endmacro

.macro s_startcontest 
.byte 0x8c
.endmacro

.macro s_showcontestresults 
.byte 0x8d
.endmacro

.macro s_contestlinktransfer 
.byte 0x8e
.endmacro

.macro s_random, limit
.byte 0x8f
.halfword limit
.endmacro

.macro s_addmoney, value, check
.byte 0x90
.word value
.byte check
.endmacro

.macro s_removemoney, value, check
.byte 0x91
.word value
.byte check
.endmacro

.macro s_checkmoney, value, check
.byte 0x92
.word value
.byte check
.endmacro

.macro s_showmoneybox, x, y
.byte 0x93
.byte x
.byte y
.endmacro

.macro s_hidemoneybox, x, y
.byte 0x94
.byte x
.byte y
.endmacro

.macro s_updatemoneybox, x, y
.byte 0x95
.byte x
.byte y
.endmacro

.macro s_getpricereduction, index
.byte 0x96
.halfword index
.endmacro

.macro s_fadescreen, mode
.byte 0x97
.byte mode
.endmacro

.macro s_fadescreenspeed, mode, speed
.byte 0x98
.byte mode
.byte speed
.endmacro

.macro s_setflashradius, word
.byte 0x99
.halfword word
.endmacro

.macro s_animateflash, byte
.byte 0x9a
.byte byte
.endmacro

.macro s_messageautoscroll, pointer
.byte 0x9b
.word pointer
.endmacro

.macro s_dofieldeffect, animation
.byte 0x9c
.halfword animation
.endmacro

.macro s_setfieldeffectargument, argument, param
.byte 0x9d
.byte argument
.halfword param
.endmacro

.macro s_waitfieldeffect, animation
.byte 0x9e
.halfword animation
.endmacro

.macro s_setrespawn, heallocation
.byte 0x9f
.halfword heallocation
.endmacro

.macro s_checkplayergender
.byte 0xa0
.endmacro

.macro s_playmoncry, species, effect
.byte 0xa1
.halfword species
.halfword effect
.endmacro

.macro s_setmetatile, x, y, metatile_number, has_collision
.byte 0xa2
.halfword x
.halfword y
.halfword metatile_number
.halfword has_collision
.endmacro

.macro s_resetweather
.byte 0xa3
.endmacro

.macro s_setweather, type
.byte 0xa4
.halfword type
.endmacro

.macro s_doweather
.byte 0xa5
.endmacro

.macro s_setstepcallback, subroutine
.byte 0xa6
.byte subroutine
.endmacro

.macro s_setmaplayoutindex, index
.byte 0xa7
.halfword index
.endmacro

.macro s_setobjectpriority, index, map_, priority
.byte 0xa8
.halfword index
map map_
.byte priority
.endmacro

.macro s_resetobjectpriority, index, map_
.byte 0xa9
.halfword index
map map_
.endmacro

.macro s_createvobject, sprite, byte2, x, y, elevation, direction
.byte 0xaa
.byte sprite
.byte byte2
.halfword x
.halfword y
.byte elevation
.byte direction
.endmacro

.macro s_turnvobject, index, direction
.byte 0xab
.byte index
.byte direction
.endmacro

.macro s_opendoor, x, y
.byte 0xac
.halfword x
.halfword y
.endmacro

.macro s_closedoor, x, y
.byte 0xad
.halfword x
.halfword y
.endmacro

.macro s_waitdooranim 
.byte 0xae
.endmacro

.macro s_setdooropen, x, y
.byte 0xaf
.halfword x
.halfword y
.endmacro

.macro s_setdoorclosed, x, y
.byte 0xb0
.halfword x
.halfword y
.endmacro

.macro s_addelevmenuitem
.byte 0xb1
.endmacro

.macro s_showelevmenu 
.byte 0xb2
.endmacro

.macro s_checkcoins, count
.byte 0xb3
.halfword count
.endmacro

.macro s_addcoins, count
.byte 0xb4
.halfword count
.endmacro

.macro s_removecoins, count
.byte 0xb5
.halfword count
.endmacro

.macro s_setwildbattle, species, level, item
.byte 0xb6
.halfword species
.byte level
.halfword item
.endmacro

.macro s_dowildbattle
.byte 0xb7
.endmacro

.macro s_setvaddress, pointer
.byte 0xb8
.word pointer
.endmacro

.macro s_vgoto, pointer
.byte 0xb9
.word pointer
.endmacro

.macro s_vcall, pointer
.byte 0xba
.word pointer
.endmacro

.macro s_vgoto_if, byte, pointer
.byte 0xbb
.byte byte
.word pointer
.endmacro

.macro s_vcall_if, byte, pointer
.byte 0xbc
.byte byte
.word pointer
.endmacro

.macro s_vmessage, pointer
.byte 0xbd
.word pointer
.endmacro

.macro s_vloadptr, pointer
.byte 0xbe
.word pointer
.endmacro

.macro s_vbufferstring, byte, pointer
.byte 0xbf
.byte byte
.word pointer
.endmacro

.macro s_showcoinsbox, x, y
.byte 0xc0
.byte x
.byte y
.endmacro

.macro s_hidecoinsbox, x, y
.byte 0xc1
.byte x
.byte y
.endmacro

.macro s_updatecoinsbox, x, y
.byte 0xc2
.byte x
.byte y
.endmacro

.macro s_incrementgamestat, stat
.byte 0xc3
.byte stat
.endmacro

.macro s_setescapewarp, map_, warp, x, y
.byte 0xc4
map map_
.byte warp
.halfword x
.halfword y
.endmacro

.macro s_waitmoncry
.byte 0xc5
.endmacro

.macro s_bufferboxname, out, box
.byte 0xc6
.byte out
.halfword box
.endmacro

.macro s_textcolor, color
.byte 0xc7
.byte color
.endmacro

.macro s_loadhelp, pointer
.byte 0xc8
.word pointer
.endmacro

.macro s_unloadhelp
.byte 0xc9
.endmacro

.macro s_signmsg
.byte 0xca
.endmacro

.macro s_normalmsg
.byte 0xcb
.endmacro

.macro s_comparehiddenvar, a, value
.byte 0xcc
.byte a
.word value
.endmacro


.macro s_goto_if_unset, flag, dest
s_checkflag flag
s_goto_if FALSE, dest
.endmacro

.macro s_goto_if_set, flag, dest
s_checkflag flag
s_goto_if TRUE, dest
.endmacro

.macro s_goto_if_lt, dest 
s_goto_if 0, dest
.endmacro	

.macro s_goto_if_eq, dest 
s_goto_if 1, dest
.endmacro

.macro s_goto_if_gt, dest 
s_goto_if 2, dest
.endmacro

.macro s_goto_if_le, dest 
s_goto_if 3, dest
.endmacro

.macro s_goto_if_ge, dest 
s_goto_if 4, dest
.endmacro

.macro s_goto_if_ne, dest 
s_goto_if 5, dest
.endmacro

.macro s_call_if_unset, flag, dest
s_checkflag flag
s_call_if FALSE, dest
.endmacro

.macro s_call_if_set, flag, dest
s_checkflag flag
s_call_if TRUE, dest
.endmacro

.macro s_call_if_lt, dest 
s_call_if 0, dest
.endmacro

.macro s_call_if_eq, dest 
s_call_if 1, dest
.endmacro

.macro s_call_if_gt, dest 
s_call_if 2, dest
.endmacro

.macro s_call_if_le, dest 
s_call_if 3, dest
.endmacro

.macro s_call_if_ge, dest 
s_call_if 4, dest
.endmacro

.macro s_call_if_ne, dest 
s_call_if 5, dest
.endmacro

.macro s_vgoto_if_eq, dest
vgoto_if TRUE, dest
.endmacro

.macro s_vgoto_if_ne, dest
vgoto_if FALSE, dest
.endmacro

.macro s_vgoto_if_unset, flag, dest
s_checkflag flag
vgoto_if FALSE, dest
.endmacro

.macro s_vgoto_if_set, flag, dest
s_checkflag flag
vgoto_if TRUE, dest
.endmacro

.macro s_goto_if_defeated, trainer, dest
checktrainerflag trainer
goto_if TRUE, dest
.endmacro

.macro s_goto_if_not_defeated, trainer, dest
checktrainerflag trainer
goto_if FALSE, dest
.endmacro

.macro s_call_if_defeated, trainer, dest
checktrainerflag trainer
s_call_if TRUE, dest
.endmacro

.macro s_call_if_not_defeated, trainer, dest
checktrainerflag trainer
s_call_if FALSE, dest
.endmacro

.macro s_switch, var
copyvar VAR_0x8000, var
.endmacro

.macro s_case, condition, dest
compare VAR_0x8000, condition
goto_if_eq dest
.endmacro

MSGBOX_NPC equ 2
MSGBOX_SIGN equ 3
MSGBOX_DEFAULT equ 4
MSGBOX_YESNO equ 5
MSGBOX_AUTOCLOSE equ 6

YES equ 1
NO  equ 0

.macro s_msgbox, text, type
s_loadword 0, text
s_callstd type
.endmacro

.macro s_giveitem, item, amount
s_setorcopyvar VAR_0x8000, item
s_setorcopyvar VAR_0x8001, amount
s_callstd STD_OBTAIN_ITEM
.endmacro

.macro s_finditem, item, amount
s_setorcopyvar VAR_0x8000, item
s_setorcopyvar VAR_0x8001, amount
s_callstd STD_FIND_ITEM
.endmacro

.macro s_givedecoration, decoration
s_setorcopyvar VAR_0x8000, decoration
s_callstd STD_OBTAIN_DECORATION
.endmacro
