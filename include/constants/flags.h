#pragma once

// temporary flags
// These temporary flags are are cleared every time a map is loaded. They are used
// for things like shortening an NPCs introduction text if the player already spoke
// to them once.
#define FLAG_TEMP_1  0x1
#define FLAG_TEMP_2  0x2
#define FLAG_TEMP_3  0x3
#define FLAG_TEMP_4  0x4
#define FLAG_TEMP_5  0x5
#define FLAG_TEMP_6  0x6
#define FLAG_TEMP_7  0x7
#define FLAG_TEMP_8  0x8
#define FLAG_TEMP_9  0x9
#define FLAG_TEMP_A  0xA
#define FLAG_TEMP_B  0xB
#define FLAG_TEMP_C  0xC
#define FLAG_TEMP_D  0xD
#define FLAG_TEMP_E  0xE
#define FLAG_TEMP_F  0xF
#define FLAG_TEMP_10 0x10
#define FLAG_TEMP_11 0x11
#define FLAG_TEMP_12 0x12
#define FLAG_TEMP_13 0x13
#define FLAG_TEMP_14 0x14
#define FLAG_TEMP_15 0x15
#define FLAG_TEMP_16 0x16
#define FLAG_TEMP_17 0x17
#define FLAG_TEMP_18 0x18
#define FLAG_TEMP_19 0x19
#define FLAG_TEMP_1A 0x1A
#define FLAG_TEMP_1B 0x1B
#define FLAG_TEMP_1C 0x1C
#define FLAG_TEMP_1D 0x1D
#define FLAG_TEMP_1E 0x1E
#define FLAG_TEMP_1F 0x1F
// FLAG_TEMP_20 was supposed to be used as a temporary flag (see above), but there
// was either an oversight or off-by-one error.
#define FLAG_TEMP_20           0x20
#define FLAG_VICTORY_ROAD_ROCK FLAG_TEMP_20

// scripts
#define FLAG_SET_WALL_CLOCK                    0x51
#define FLAG_RESCUED_BIRCH                     0x52

#define FLAG_LINK_CONTEST_ROOM_POKEBALL        0x56
#define FLAG_MET_RIVAL_MOM                     0x57
#define FLAG_BIRCH_AIDE_MET                    0x58
#define FLAG_DECLINED_BIKE                     0x59
#define FLAG_RECEIVED_BIKE                     0x5A

#define FLAG_RECEIVED_WAILMER_PAIL             0x5E
#define FLAG_RECEIVED_POKEBLOCK_CASE           0x5F
#define FLAG_RECEIVED_SECRET_POWER             0x60

#define FLAG_TV_EXPLAINED                      0x62
#define FLAG_MAUVILLE_GYM_BARRIERS_STATE       0x63
#define FLAG_MOSSDEEP_GYM_SWITCH_1             0x64
#define FLAG_MOSSDEEP_GYM_SWITCH_2             0x65
#define FLAG_MOSSDEEP_GYM_SWITCH_3             0x66
#define FLAG_MOSSDEEP_GYM_SWITCH_4             0x67

#define FLAG_OCEANIC_MUSEUM_MET_REPORTER       0x69
#define FLAG_RECEIVED_HM04                     0x6A
#define FLAG_RECEIVED_HM06                     0x6B

#define FLAG_RECEIVED_HM05                     0x6D
#define FLAG_RECEIVED_HM02                     0x6E
#define FLAG_MT_PYRE_ORB_STOLEN                0x6F
#define FLAG_EVIL_TEAM_ESCAPED_IN_SUBMARINE    0x70
#define FLAG_LEGENDARY_BATTLE_COMPLETED        0x71 // defeated or caught Groudon/Kyogre in Cave of Origin

#define FLAG_RECEIVED_METEORITE                0x73
#define FLAG_ADVENTURE_STARTED                 0x74 // received pokedex and set loose

#define FLAG_MET_HIDDEN_POWER_GIVER            0x76

#define FLAG_RECEIVED_TM31                     0x79
#define FLAG_RECEIVED_HM03                     0x7A
#define FLAG_RECEIVED_HM08                     0x7B

#define FLAG_DEFEATED_WALLY_VICTORY_ROAD       0x7E
#define FLAG_MET_PRETTY_PETAL_SHOP_OWNER       0x7F

#define FLAG_LEGEND_ESCAPED_SEAFLOOR_CAVERN    0x81
#define FLAG_DEFEATED_RIVAL_ROUTE103           0x82
#define FLAG_RECEIVED_DOLL_LANETTE             0x83
#define FLAG_RECEIVED_POTION_OLDALE            0x84
#define FLAG_RECEIVED_AMULET_COIN              0x85
#define FLAG_PENDING_DAYCARE_EGG               0x86
#define FLAG_THANKED_FOR_PLAYING_WITH_WALLY    0x87

#define FLAG_RECEIVED_HM01                     0x89

#define FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY     0x8B
#define FLAG_RECEIVED_6_SODA_POP               0x8C
#define FLAG_DEFEATED_SEASHORE_HOUSE_TRAINERS  0x8D
#define FLAG_DEVON_GOODS_STOLEN                0x8E
#define FLAG_RECOVERED_DEVON_GOODS             0x8F
#define FLAG_RETURNED_DEVON_GOODS              0x90

#define FLAG_MR_BRINEY_SAILING_INTRO           0x93
#define FLAG_DOCK_REJECTED_DEVON_GOODS         0x94
#define FLAG_DELIVERED_DEVON_GOODS             0x95
#define FLAG_RECEIVED_CONTEST_PASS             0x96
#define FLAG_RECEIVED_CASTFORM                 0x97
#define FLAG_RECEIVED_SUPER_ROD                0x98
#define FLAG_RUSTBORO_NPC_TRADE_COMPLETED      0x99
#define FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED    0x9A
#define FLAG_FORTREE_NPC_TRADE_COMPLETED       0x9B

#define FLAG_UNKNOWN_9F                        0x9F
#define FLAG_COOL_PAINTING_MADE                0xA0
#define FLAG_BEAUTY_PAINTING_MADE              0xA1
#define FLAG_CUTE_PAINTING_MADE                0xA2
#define FLAG_SMART_PAINTING_MADE               0xA3
#define FLAG_TOUGH_PAINTING_MADE               0xA4
#define FLAG_RECEIVED_TM39                     0xA5
#define FLAG_RECEIVED_TM08                     0xA6
#define FLAG_RECEIVED_TM34                     0xA7
#define FLAG_RECEIVED_TM50                     0xA8
#define FLAG_RECEIVED_TM42                     0xA9
#define FLAG_RECEIVED_TM40                     0xAA
#define FLAG_RECEIVED_TM04                     0xAB
#define FLAG_RECEIVED_TM03                     0xAC
#define FLAG_DECORATION_1                      0xAD
#define FLAG_DECORATION_2                      0xAE
#define FLAG_DECORATION_3                      0xAF
#define FLAG_DECORATION_4                      0xB0
#define FLAG_DECORATION_5                      0xB1
#define FLAG_DECORATION_6                      0xB2
#define FLAG_DECORATION_7                      0xB3
#define FLAG_DECORATION_8                      0xB4
#define FLAG_DECORATION_9                      0xB5
#define FLAG_DECORATION_10                     0xB6
#define FLAG_DECORATION_11                     0xB7
#define FLAG_DECORATION_12                     0xB8
#define FLAG_DECORATION_13                     0xB9
#define FLAG_DECORATION_14                     0xBA
#define FLAG_DECORATION_15                     0xBB
#define FLAG_RECEIVED_POKENAV                  0xBC
#define FLAG_DELIVERED_STEVEN_LETTER           0xBD
#define FLAG_DEFEATED_WALLY_MAUVILLE           0xBE

#define FLAG_RECEIVED_SUN_STONE_MOSSDEEP       0xC0
#define FLAG_WALLY_SPEECH                      0xC1
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1     0xC2
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2     0xC3
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3     0xC4
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4     0xC5
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5     0xC6
#define FLAG_RUSTURF_TUNNEL_OPENED             0xC7
#define FLAG_RECEIVED_RED_SCARF                0xC8
#define FLAG_RECEIVED_BLUE_SCARF               0xC9
#define FLAG_RECEIVED_PINK_SCARF               0xCA
#define FLAG_RECEIVED_GREEN_SCARF              0xCB
#define FLAG_RECEIVED_YELLOW_SCARF             0xCC

#define FLAG_ENCOUNTERED_LATIAS_OR_LATIOS      0xCE

#define FLAG_RECEIVED_BASEMENT_KEY             0xD0
#define FLAG_RECEIVED_TM24                     0xD1

#define FLAG_RECEIVED_RED_OR_BLUE_ORB          0xD4
#define FLAG_RECEIVED_PREMIER_BALL_RUSTBORO    0xD5

#define FLAG_ROUTE104_PROTOTYPE_COMPLETED_1    0xD7
#define FLAG_ROUTE104_PROTOTYPE_COMPLETED_2    0xD8
#define FLAG_MET_DIVING_TREASURE_HUNTER        0xD9
#define FLAG_MET_WAILMER_TRAINER               0xDA
#define FLAG_EVIL_LEADER_PLEASE_STOP           0xDB

#define FLAG_RECEIVED_GO_GOGGLES               0xDD
#define FLAG_WINGULL_SENT_ON_ERRAND            0xDE
#define FLAG_RECEIVED_MENTAL_HERB              0xDF
#define FLAG_WINGULL_DELIVERED_MAIL            0xE0
#define FLAG_RECEIVED_20_COINS                 0xE1
#define FLAG_RECEIVED_STARTER_DOLL             0xE2
#define FLAG_RECEIVED_GOOD_ROD                 0xE3
#define FLAG_REGI_DOORS_OPENED                 0xE4
#define FLAG_RECEIVED_TM27                     0xE5
#define FLAG_RECEIVED_TM36                     0xE6
#define FLAG_RECEIVED_TM05                     0xE7
#define FLAG_RECEIVED_TM19                     0xE8

#define FLAG_RECEIVED_TM44                     0xEA
#define FLAG_RECEIVED_TM45                     0xEB
#define FLAG_RECEIVED_GLASS_ORNAMENT           0xEC
#define FLAG_RECEIVED_SILVER_SHIELD            0xED
#define FLAG_RECEIVED_GOLD_SHIELD              0xEE
#define FLAG_USED_STORAGE_KEY                  0xEF
#define FLAG_USED_ROOM_1_KEY                   0xF0
#define FLAG_USED_ROOM_2_KEY                   0xF1
#define FLAG_USED_ROOM_4_KEY                   0xF2
#define FLAG_USED_ROOM_6_KEY                   0xF3
#define FLAG_MET_PROF_COSMO                    0xF4
#define FLAG_RECEIVED_WAILMER_DOLL             0xF5
#define FLAG_RECEIVED_CHESTO_BERRY_ROUTE104    0xF6
#define FLAG_DEFEATED_SS_TIDAL_TRAINERS        0xF7
#define FLAG_RECEIVED_SPELON_BERRY             0xF8
#define FLAG_RECEIVED_PAMTRE_BERRY             0xF9
#define FLAG_RECEIVED_WATMEL_BERRY             0xFA
#define FLAG_RECEIVED_DURIN_BERRY              0xFB
#define FLAG_RECEIVED_BELUE_BERRY              0xFC

#define FLAG_RECEIVED_CHARCOAL                 0xFE
#define FLAG_LATIOS_OR_LATIAS_ROAMING          0xFF
#define FLAG_RECEIVED_REPEAT_BALL              0x100
#define FLAG_RECEIVED_OLD_ROD                  0x101
#define FLAG_RECEIVED_COIN_CASE                0x102
#define FLAG_RETURNED_RED_OR_BLUE_ORB          0x103
#define FLAG_RECEIVED_TM49                     0x104
#define FLAG_RECEIVED_TM28                     0x105
#define FLAG_RECEIVED_TM09                     0x106
#define FLAG_ENTERED_ELITE_FOUR                0x107
#define FLAG_RECEIVED_TM10                     0x108
#define FLAG_RECEIVED_TM41                     0x109
#define FLAG_RECEIVED_LAVARIDGE_EGG            0x10A
#define FLAG_RECEIVED_FOSSIL_MON               0x10B
#define FLAG_SECRET_BASE_REGISTRY_ENABLED      0x10C
#define FLAG_RECEIVED_TM46                     0x10D
#define FLAG_CONTEST_SKETCH_CREATED            0x10E
#define FLAG_EVIL_TEAM_ESCAPED_STERN_SPOKE     0x10F
#define FLAG_RECEIVED_EXP_SHARE                0x110
#define FLAG_POKERUS_EXPLAINED                 0x111
#define FLAG_RECEIVED_RUNNING_SHOES            0x112
#define FLAG_RECEIVED_QUICK_CLAW               0x113
#define FLAG_RECEIVED_KINGS_ROCK               0x114
#define FLAG_RECEIVED_MACHO_BRACE              0x115
#define FLAG_RECEIVED_SOOTHE_BELL              0x116
#define FLAG_RECEIVED_WHITE_HERB               0x117
#define FLAG_RECEIVED_SOFT_SAND                0x118

#define FLAG_RECEIVED_CLEANSE_TAG              0x11A
#define FLAG_RECEIVED_FOCUS_BAND               0x11B
#define FLAG_DECLINED_WALLY_BATTLE_MAUVILLE    0x11C
#define FLAG_RECEIVED_DEVON_SCOPE              0x11D
#define FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE    0x11E
#define FLAG_MET_DEVON_EMPLOYEE                0x11F
#define FLAG_MET_RIVAL_RUSTBORO                0x120
#define FLAG_RECEIVED_SILK_SCARF               0x121
#define FLAG_NOT_READY_FOR_BATTLE_ROUTE120     0x122
#define FLAG_RECEIVED_SS_TICKET                0x123
#define FLAG_MET_RIVAL_LILYCOVE                0x124
#define FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE 0x125
#define FLAG_EXCHANGED_SCANNER                 0x126
#define FLAG_KECLEON_FLED_FORTREE              0x127
#define FLAG_PETALBURG_MART_EXPANDED_ITEMS     0x128
#define FLAG_RECEIVED_MIRACLE_SEED             0x129
#define FLAG_RECEIVED_BELDUM                   0x12A
#define FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK     0x12B
#define FLAG_MET_FANCLUB_YOUNGER_BROTHER       0x12C
#define FLAG_RIVAL_LEFT_FOR_ROUTE103           0x12D
#define FLAG_OMIT_DIVE_FROM_STEVEN_LETTER      0x12E

// hidden item flags
#define FLAG_HIDDEN_ITEMS_START      0x258
#define FLAG_HIDDEN_ITEM_0           0x258
#define FLAG_HIDDEN_ITEM_1           0x259
#define FLAG_HIDDEN_ITEM_2           0x25A
#define FLAG_HIDDEN_ITEM_3           0x25B
#define FLAG_HIDDEN_ITEM_4           0x25C
#define FLAG_HIDDEN_ITEM_5           0x25D
#define FLAG_HIDDEN_ITEM_6           0x25E
#define FLAG_HIDDEN_ITEM_7           0x25F
#define FLAG_HIDDEN_ITEM_8           0x260
#define FLAG_HIDDEN_ITEM_9           0x261
#define FLAG_HIDDEN_ITEM_A           0x262
#define FLAG_HIDDEN_ITEM_B           0x263
#define FLAG_HIDDEN_ITEM_C           0x264
#define FLAG_HIDDEN_ITEM_D           0x265
#define FLAG_HIDDEN_ITEM_E           0x266
#define FLAG_HIDDEN_ITEM_F           0x267
#define FLAG_HIDDEN_ITEM_10          0x268
#define FLAG_HIDDEN_ITEM_11          0x269
#define FLAG_HIDDEN_ITEM_12          0x26A
#define FLAG_HIDDEN_ITEM_13          0x26B
#define FLAG_HIDDEN_ITEM_14          0x26C
#define FLAG_HIDDEN_ITEM_15          0x26D
#define FLAG_HIDDEN_ITEM_16          0x26E
#define FLAG_HIDDEN_ITEM_17          0x26F
#define FLAG_HIDDEN_ITEM_18          0x270
#define FLAG_HIDDEN_ITEM_19          0x271
#define FLAG_HIDDEN_ITEM_1A          0x272
#define FLAG_HIDDEN_ITEM_1B          0x273
#define FLAG_HIDDEN_ITEM_1C          0x274
#define FLAG_HIDDEN_ITEM_1D          0x275
#define FLAG_HIDDEN_ITEM_1E          0x276
#define FLAG_HIDDEN_ITEM_1F          0x277
#define FLAG_HIDDEN_ITEM_20          0x278
#define FLAG_HIDDEN_ITEM_21          0x279
#define FLAG_HIDDEN_ITEM_22          0x27A
#define FLAG_HIDDEN_ITEM_23          0x27B
#define FLAG_HIDDEN_ITEM_24          0x27C
#define FLAG_HIDDEN_ITEM_25          0x27D
#define FLAG_HIDDEN_ITEM_26          0x27E
#define FLAG_HIDDEN_ITEM_27          0x27F
#define FLAG_HIDDEN_ITEM_28          0x280
#define FLAG_HIDDEN_ITEM_29          0x281
#define FLAG_HIDDEN_ITEM_2A          0x282
#define FLAG_HIDDEN_ITEM_2B          0x283
#define FLAG_HIDDEN_ITEM_2C          0x284
#define FLAG_HIDDEN_ITEM_2D          0x285
#define FLAG_HIDDEN_ITEM_2E          0x286
#define FLAG_HIDDEN_ITEM_2F          0x287
#define FLAG_HIDDEN_ITEM_30          0x288
#define FLAG_HIDDEN_ITEM_31          0x289
#define FLAG_HIDDEN_ITEM_32          0x28A
#define FLAG_HIDDEN_ITEM_33          0x28B
#define FLAG_HIDDEN_ITEM_34          0x28C
#define FLAG_HIDDEN_ITEM_35          0x28D
#define FLAG_HIDDEN_ITEM_36          0x28E
#define FLAG_HIDDEN_ITEM_37          0x28F
#define FLAG_HIDDEN_ITEM_38          0x290
#define FLAG_HIDDEN_ITEM_39          0x291
#define FLAG_HIDDEN_ITEM_3A          0x292
#define FLAG_HIDDEN_ITEM_3B          0x293
#define FLAG_HIDDEN_ITEM_3C          0x294
#define FLAG_HIDDEN_ITEM_3D          0x295
#define FLAG_HIDDEN_ITEM_3E          0x296
#define FLAG_HIDDEN_ITEM_3F          0x297
#define FLAG_HIDDEN_ITEM_40          0x298
#define FLAG_HIDDEN_ITEM_41          0x299
#define FLAG_HIDDEN_ITEM_42          0x29A
#define FLAG_HIDDEN_ITEM_43          0x29B
#define FLAG_HIDDEN_ITEM_44          0x29C
#define FLAG_HIDDEN_ITEM_45          0x29D
#define FLAG_HIDDEN_ITEM_46          0x29E
#define FLAG_HIDDEN_ITEM_47          0x29F
#define FLAG_HIDDEN_ITEM_48          0x2A0
#define FLAG_HIDDEN_ITEM_49          0x2A1
#define FLAG_HIDDEN_ITEM_4A          0x2A2
#define FLAG_HIDDEN_ITEM_4B          0x2A3
#define FLAG_HIDDEN_ITEM_4C          0x2A4
#define FLAG_HIDDEN_ITEM_4D          0x2A5
#define FLAG_HIDDEN_ITEM_4E          0x2A6
#define FLAG_HIDDEN_ITEM_4F          0x2A7
#define FLAG_HIDDEN_ITEM_50          0x2A8
#define FLAG_HIDDEN_ITEM_51          0x2A9
#define FLAG_HIDDEN_ITEM_52          0x2AA
#define FLAG_HIDDEN_ITEM_53          0x2AB
#define FLAG_HIDDEN_ITEM_54          0x2AC
#define FLAG_HIDDEN_ITEM_55          0x2AD
#define FLAG_HIDDEN_ITEM_56          0x2AE
#define FLAG_HIDDEN_ITEM_57          0x2AF
#define FLAG_HIDDEN_ITEM_58          0x2B0
#define FLAG_HIDDEN_ITEM_59          0x2B1
#define FLAG_HIDDEN_ITEM_5A          0x2B2
#define FLAG_HIDDEN_ITEM_5B          0x2B3
#define FLAG_HIDDEN_ITEM_5C          0x2B4
#define FLAG_HIDDEN_ITEM_5D          0x2B5
#define FLAG_HIDDEN_ITEM_5E          0x2B6
#define FLAG_HIDDEN_ITEM_5F          0x2B7
#define FLAG_HIDDEN_ITEM_BASS_GUITAR 0x2B8
#define FLAG_HIDDEN_ITEM_61          0x2B9

// object event hide/show flags
#define FLAG_HIDE_BIRCH_STARTERS_BAG                  0x2BC

#define FLAG_HIDE_BIRCH_BATTLE_POOCHYENA              0x2D0
#define FLAG_HIDE_BIRCH_IN_LAB                        0x2D1
#define FLAG_HIDE_MAY_UPSTAIRS                        0x2D2
#define FLAG_HIDE_RIVAL_ROUTE103                      0x2D3
#define FLAG_HIDE_DEVON_PETALBURG_WOODS               0x2D4
#define FLAG_HIDE_EVIL_TEAM_PETALBURG_WOODS           0x2D5
#define FLAG_HIDE_WALLY_PETALBURG                     0x2D6
#define FLAG_HIDE_STEVENS_LETTER                      0x2D7
#define FLAG_HIDE_WALLY_MOM_PETALBURG_1               0x2D8

#define FLAG_HIDE_GRUNT_RUSTBORO                      0x2DB
#define FLAG_HIDE_DEVON_RUSTBORO                      0x2DC
#define FLAG_HIDE_SLEEPING_MON_SEAFLOOR_CAVERN        0x2DD
#define FLAG_HIDE_NORMAN_LITTLEROOT                   0x2DE

#define FLAG_UNKNOWN_2E1                              0x2E1
#define FLAG_HIDE_MR_BRINEY_ROUTE104                  0x2E2
#define FLAG_HIDE_MR_BRINEY_ROUTE104_HOUSE            0x2E3
#define FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN              0x2E4
#define FLAG_HIDE_MR_BRINEY_ROUTE109                  0x2E5
#define FLAG_HIDE_MR_BRINEY_BOAT_ROUTE104             0x2E6
#define FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD              0x2E7
#define FLAG_HIDE_MR_BRINEY_BOAT_ROUTE109             0x2E8

#define FLAG_UNKNOWN_2EB                              0x2EB
#define FLAG_UNKNOWN_2EC                              0x2EC
#define FLAG_UNKNOWN_2ED                              0x2ED
#define FLAG_HIDE_POOCHYENA_ROUTE101                  0x2EE
#define FLAG_HIDE_WALLY_DEFEATED_VICTORY_ROAD         0x2EF
#define FLAG_HIDE_MOM_LITTLEROOT                      0x2F0

#define FLAG_HIDE_MACHOKE_MOVER_1                     0x2F2
#define FLAG_HIDE_MACHOKE_MOVER_2                     0x2F3
#define FLAG_UNKNOWN_2F4                              0x2F4
#define FLAG_HIDE_MOM_UPSTAIRS                        0x2F5
#define FLAG_HIDE_BRENDAN_MOM_DOWNSTAIRS              0x2F6
#define FLAG_HIDE_MAY_MOM_DOWNSTAIRS                  0x2F7
#define FLAG_HIDE_BRENDAN_UPSTAIRS                    0x2F8
#define FLAG_HIDE_MOVING_TRUCK_BRENDAN                0x2F9
#define FLAG_HIDE_MOVING_TRUCK_MAY                    0x2FA

#define FLAG_HIDE_VICTOR_WINSTRATE                    0x300
#define FLAG_HIDE_VICTORIA_WINSTRATE                  0x301
#define FLAG_HIDE_VIVI_WINSTRATE                      0x302
#define FLAG_HIDE_VICKI_WINSTRATE                     0x303
#define FLAG_HIDE_NORMAN_PETALBURG_GYM                0x304
#define FLAG_HIDE_RAYQUAZA                            0x305
#define FLAG_HIDE_LILYCOVE_CONTEST_ATTENDENT_1        0x306
#define FLAG_HIDE_LILYCOVE_MUSEUM_CURATOR             0x307
#define FLAG_HIDE_LILYCOVE_MUSEUM_PAINTING_LADY       0x308
#define FLAG_HIDE_LILYCOVE_MUSEUM_PAINTING_GIRL       0x309
#define FLAG_HIDE_LILYCOVE_MUSEUM_PAINTING_MAN        0x30A
#define FLAG_HIDE_LILYCOVE_MUSEUM_PAINTER             0x30B
#define FLAG_HIDE_LILYCOVE_MUSEUM_VISITORS            0x30C
#define FLAG_HIDE_PETALBURG_GYM_GUIDE                 0x30D
#define FLAG_UNKNOWN_30E                              0x30E
#define FLAG_UNKNOWN_30F                              0x30F
#define FLAG_HIDE_BRENDAN_MOM                         0x310
#define FLAG_HIDE_MAY_MOM                             0x311

#define FLAG_HIDE_FANCLUB_OLD_LADY                    0x315
#define FLAG_HIDE_FANCLUB_BOY                         0x316
#define FLAG_HIDE_FANCLUB_LITTLE_BOY                  0x317
#define FLAG_HIDE_FANCLUB_LADY                        0x318

#define FLAG_HIDE_GABBY_AND_TY_ROUTE111_1             0x31C
#define FLAG_HIDE_GABBY_AND_TY_ROUTE118_1             0x31D
#define FLAG_HIDE_GABBY_AND_TY_ROUTE120_1             0x31E
#define FLAG_HIDE_GABBY_AND_TY_ROUTE111_2             0x31F
#define FLAG_HIDE_CONTEST_REPORTER_FALLARBOR          0x320
#define FLAG_HIDE_CONTEST_REPORTER_VERDANTURF         0x321
#define FLAG_HIDE_CONTEST_REPORTER_LILYCOVE           0x322
#define FLAG_HIDE_CONTEST_REPORTER_SLATEPORT          0x323
#define FLAG_HIDE_WALLY_MAUVILLE                      0x324
#define FLAG_HIDE_WALLY_FATHER_MAUVILLE               0x325
#define FLAG_HIDE_WALLY_WANDAS_HOUSE                  0x326
#define FLAG_HIDE_BOYFRIEND_RUSTURF_TUNNEL            0x327
#define FLAG_HIDE_BOYFRIEND_WANDAS_HOUSE              0x328
#define FLAG_HIDE_WALLY_FATHER_WANDAS_HOUSE           0x329

#define FLAG_HIDE_WALLY_FATHER_PETALBURG              0x32B
#define FLAG_HIDE_WALLY_MOTHER_PETALBURG              0x32C
#define FLAG_HIDE_LOST_GLASSES_MAN                    0x32D
#define FLAG_HIDE_RIVAL_RUSTBORO                      0x32E
#define FLAG_HIDE_WALLACE_SOOTOPOLIS_GYM              0x32F
#define FLAG_HIDE_WALLACE_SOOTOPOLIS                  0x330

#define FLAG_HIDE_GRUNTS_BLOCKING_CABLE_CAR           0x333

#define FLAG_HIDE_GRUNT_1_BLOCKING_HIDEOUT            0x335
#define FLAG_HIDE_GRUNT_2_BLOCKING_HIDEOUT            0x336
#define FLAG_UNKNOWN_337                              0x337

#define FLAG_HIDE_LEGEND_MON_CAVE_OF_ORIGIN           0x339

#define FLAG_HIDE_EVIL_LEADER_SEAFLOOR_CAVERN         0x33C
#define FLAG_HIDE_OTHER_LEADER_SEAFLOOR_CAVERN        0x33D

#define FLAG_HIDE_OTHER_TEAM_GRUNTS_SEAFLOOR_CAVERN   0x33F

#define FLAG_HIDE_STEVEN_GRANITE_CAVE                 0x341
#define FLAG_HIDE_STEVEN_ROUTE128                     0x342
#define FLAG_HIDE_GABBY_AND_TY_SLATEPORT              0x343

#define FLAG_HIDE_STERN_SLATEPORT                     0x348
#define FLAG_HIDE_STERN_SLATEPORT_HARBOR              0x349

#define FLAG_UNKNOWN_34B                              0x34B
#define FLAG_UNKNOWN_34C                              0x34C
#define FLAG_HIDE_GRUNT_1_SLATEPORT_HARBOR            0x34D
#define FLAG_HIDE_GRUNT_2_SLATEPORT_HARBOR            0x34E
#define FLAG_UNKNOWN_34F                              0x34F
#define FLAG_HIDE_SUBMARINE_SHADOW_SLATEPORT_HARBOR   0x350
#define FLAG_HIDE_MAY_PICHU_DOLL                      0x351

#define FLAG_HIDE_RIVAL_ROUTE119                      0x353
#define FLAG_HIDE_GRUNTS_LILYCOVE                     0x354

#define FLAG_HIDE_SOOTOPOLIS_RESIDENTS                0x356
#define FLAG_HIDE_CAVE_OF_ORIGIN_ENTRANCE_WOMAN_1     0x357
#define FLAG_HIDE_CAVE_OF_ORIGIN_ENTRANCE_WOMAN_2     0x358

#define FLAG_HIDE_WALLY_BATTLE_VICTORY_ROAD           0x35A
#define FLAG_HIDE_AWAKENED_MON_SEAFLOOR_CAVERN        0x35B
#define FLAG_HIDE_SS_TIDAL_SLATEPORT_HARBOR           0x35C
#define FLAG_HIDE_SS_TIDAL_LILYCOVE_HARBOR            0x35D

#define FLAG_HIDE_WALLY_PETALBURG_GYM                 0x362
#define FLAG_UNKNOWN_363                              0x363
#define FLAG_HIDE_FAT_MAN_LITTLEROOT                  0x364
#define FLAG_HIDE_BRINEY_SLATEPORT_SHIPYARD           0x365
#define FLAG_HIDE_LANETTE                             0x366
#define FLAG_HIDE_LANETTE_FALLARBOR                   0x367
#define FLAG_HIDE_TRICKMASTER_ENTRANCE                0x368

#define FLAG_HIDE_MT_CHIMNEY_PEOPLE                   0x36D
#define FLAG_HIDE_GRUNT_RUSTURF_TUNNEL                0x36E
#define FLAG_HIDE_BRINEY_RUSTURF_TUNNEL               0x36F
#define FLAG_HIDE_PEEKO_RUSTURF_TUNNEL                0x370
#define FLAG_HIDE_PEEKO_BRINEY_HOUSE                  0x371
#define FLAG_HIDE_EVIL_TEAM_SLATEPORT                 0x372
#define FLAG_HIDE_EVIL_TEAM_OCEANIC_MUSEUM            0x373
#define FLAG_HIDE_GRUNT_1_OCEANIC_MUSEUM_2F           0x374
#define FLAG_HIDE_GRUNT_2_OCEANIC_MUSEUM_2F           0x375
#define FLAG_HIDE_EVIL_TEAM_LEADER_OCEANIC_MUSEUM_2F  0x376
#define FLAG_HIDE_STERN_OCEANIC_MUSEUM_2F             0x377
#define FLAG_HIDE_BATTLE_TOWER_OPPONENT               0x378
#define FLAG_HIDE_RIVAL_BIRCH_LAB                     0x379
#define FLAG_HIDE_EVIL_TEAM_WEATHER_INSTITUTE         0x37A
#define FLAG_HIDE_BRINEY_ROUTE116                     0x37B
#define FLAG_HIDE_WEATHER_INSTITUTE_WORKERS_1F        0x37C
#define FLAG_HIDE_WEATHER_INSTITUTE_WORKERS_2F        0x37D
#define FLAG_HIDE_TUNNER_DIGGER_ROUTE116              0x37E
#define FLAG_HIDE_ARTIST_LILCOVE_CONTEST              0x37F
#define FLAG_UNKNOWN_BIRCH_380                        0x380 // TODO: what should this be called?
#define FLAG_HIDE_BIRCH_ROUTE101                      0x381
#define FLAG_HIDE_BIRCH_ROUTE103                      0x382
#define FLAG_HIDE_TRICKMASTER_END                     0x383
#define FLAG_HIDE_EVIL_TEAM_ROUTE110                  0x384
#define FLAG_HIDE_GABBY_AND_TY_ROUTE118_2             0x385
#define FLAG_HIDE_GABBY_AND_TY_ROUTE120_2             0x386
#define FLAG_HIDE_GABBY_AND_TY_ROUTE111_3             0x387
#define FLAG_HIDE_GABBY_AND_TY_ROUTE118_3             0x388
#define FLAG_HIDE_WORKERS_SLATEPORT_HARBOR            0x389
#define FLAG_HIDE_FLOWER_SHOP_WORKER_OUTSIDE          0x38A
#define FLAG_HIDE_AZURILL_FALLARBOR                   0x38B
#define FLAG_HIDE_FERRY_ATTENDANT_LILYCOVE            0x38C
#define FLAG_HIDE_FERRY_SAILOR_LILYCOVE               0x38D
#define FLAG_HIDE_LATIOS_OR_LATIAS_FLYING             0x38E
#define FLAG_HIDE_LATIOS_OR_LATIAS_STATIONARY         0x38F
#define FLAG_HIDE_WATTSON_MAUVILLE                    0x390
#define FLAG_HIDE_WATTSON_MAUVILLE_GYM                0x391
#define FLAG_HIDE_GRUNTS_ROUTE121                     0x392
#define FLAG_UNKNOWN_393                              0x393
#define FLAG_HIDE_LEADER_MT_PYRE_SUMMIT               0x394
#define FLAG_HIDE_GRUNTS_MT_PYRE_SUMMIT               0x395
#define FLAG_HIDE_REPORTER_BATTLE_TOWER               0x396
#define FLAG_HIDE_RIVAL_ROUTE110                      0x397
#define FLAG_HIDE_RIVAL_CHAMPIONS_ROOM                0x398
#define FLAG_HIDE_BIRCH_CHAMPIONS_ROOM                0x399
#define FLAG_HIDE_RIVAL_ON_BIKE_ROUTE110              0x39A
#define FLAG_HIDE_RIVAL_ROUTE119_ON_BIKE              0x39B
#define FLAG_HIDE_GRUNTS_HIDEOUTS                     0x39C
#define FLAG_HIDE_LILYCOVE_MOTEL_PEOPLE               0x39D
#define FLAG_HIDE_EVIL_TEAM_MT_CHIMNEY                0x39E
#define FLAG_HIDE_OTHER_TEAM_MT_CHIMNEY               0x39F
#define FLAG_HIDE_PROF_COSMO_FALLARBOR                0x3A0
#define FLAG_HIDE_RIVAL_LAVARIDGE_1                   0x3A1
#define FLAG_HIDE_RIVAL_LAVARIDGE_2                   0x3A2
#define FLAG_HIDE_RUSTURF_TUNNEL_ROCK_1               0x3A3
#define FLAG_HIDE_RUSTURF_TUNNEL_ROCK_2               0x3A4
#define FLAG_HIDE_WINGULL_FORTREE_HOUSE               0x3A5
#define FLAG_HIDE_WINGULL_MOSSDEEP_HOUSE              0x3A6
#define FLAG_HIDE_REGIROCK                            0x3A7
#define FLAG_HIDE_REGICE                              0x3A8
#define FLAG_HIDE_REGISTEEL                           0x3A9
#define FLAG_HIDE_GRUNTS_METEOR_FALLS_1F              0x3AA
#define FLAG_HIDE_OTHER_TEAM_METEOR_FALLS_1F          0x3AB
#define FLAG_HIDE_SLUDGE_BOMB_MAN_DEWFORD_HALL        0x3AC
#define FLAG_HIDE_AWARD_MAN_BATTLE_TOWER              0x3AD
#define FLAG_HIDE_PROF_COSMO_METEOR_FALLS             0x3AE
#define FLAG_HIDE_SUBMARINE_SHADOW_HIDEOUT            0x3AF
#define FLAG_HIDE_EVIL_LEADER_ROUTE128                0x3B0
#define FLAG_HIDE_OTHER_LEADER_ROUTE128               0x3B1
#define FLAG_HIDE_EVIL_TEAM_GRUNTS_SEAFLOOR_CAVERN    0x3B2
#define FLAG_HIDE_DEVON_EMPLOYEE_ROUTE116             0x3B3
#define FLAG_HIDE_TM_SALESMAN_SLATEPORT               0x3B4
#define FLAG_HIDE_EMPLOYEE_DEVON_CORP_3F              0x3B5
#define FLAG_HIDE_BRINEY_AND_PEEKO_SS_TIDAL           0x3B6
#define FLAG_HIDE_TM_49_GIVER_SS_TIDAL                0x3B7
#define FLAG_HIDE_TOOK_SHOAL_SALT_1                   0x3B8
#define FLAG_HIDE_TOOK_SHOAL_SALT_2                   0x3B9
#define FLAG_HIDE_TOOK_SHOAL_SALT_3                   0x3BA
#define FLAG_HIDE_TOOK_SHOAL_SALT_4                   0x3BB
#define FLAG_HIDE_TOOK_SHOAL_SHELL_1                  0x3BC
#define FLAG_HIDE_TOOK_SHOAL_SHELL_2                  0x3BD
#define FLAG_HIDE_TOOK_SHOAL_SHELL_3                  0x3BE
#define FLAG_HIDE_TOOK_SHOAL_SHELL_4                  0x3BF
#define FLAG_HIDE_SECRET_POWER_MAN                    0x3C0
#define FLAG_HIDE_OCEANIC_MUSEUM_VISITORS             0x3C1
#define FLAG_HIDE_ROOFTOP_LADY_LILYCOVE_MART          0x3C2
#define FLAG_HIDE_ROOT_FOSSIL                         0x3C3
#define FLAG_HIDE_CLAW_FOSSIL                         0x3C4
#define FLAG_HIDE_SCARED_GRUNT_OCEANIC_MUSEUM         0x3C5
#define FLAG_HIDE_STEVEN_ROUTE118                     0x3C6
#define FLAG_HIDE_STEVEN_STEVENS_HOUSE                0x3C7
#define FLAG_HIDE_BELDUM_BALL_STEVENS_HOUSE           0x3C8
#define FLAG_HIDE_KECLEON_FORTREE                     0x3C9
#define FLAG_HIDE_KECLEON_ROUTE120_1                  0x3CA
#define FLAG_HIDE_RIVAL_LILYCOVE_MART                 0x3CB
#define FLAG_HIDE_STEVEN_ROUTE120                     0x3CC
#define FLAG_HIDE_STEVEN_SOOTOPOLIS                   0x3CD
#define FLAG_HIDE_VOLTORB_1_NEW_MAUVILLE              0x3CE
#define FLAG_HIDE_VOLTORB_2_NEW_MAUVILLE              0x3CF
#define FLAG_HIDE_VOLTORB_3_NEW_MAUVILLE              0x3D0
#define FLAG_HIDE_ELECTRODE_1_HIDEOUT                 0x3D1
#define FLAG_HIDE_ELECTRODE_2_HIDEOUT                 0x3D2
#define FLAG_HIDE_RIVAL_OLDALE_TOWN                   0x3D3
#define FLAG_HIDE_UNDERWATER_SUBMARINE_INTERACTION    0x3D4
#define FLAG_HIDE_KECLEON_ROUTE120_2                  0x3D5
#define FLAG_HIDE_KECLEON_ROUTE120_3                  0x3D6
#define FLAG_HIDE_GIRLFRIEND_RUSTURF_TUNNEL           0x3D7
#define FLAG_HIDE_GIRLFRIEND_WANDAS_HOUSE             0x3D8
#define FLAG_HIDE_KECLEON_ROUTE120_4                  0x3D9
#define FLAG_HIDE_KECLEON_ROUTE120_5                  0x3DA
#define FLAG_HIDE_KECLEON_ROUTE120_6                  0x3DB
#define FLAG_HIDE_KECLEON_ROUTE120_7                  0x3DC
#define FLAG_HIDE_KECLEON_ROUTE119_1                  0x3DD
#define FLAG_HIDE_KECLEON_ROUTE119_2                  0x3DE
#define FLAG_HIDE_BOY_ROUTE101                        0x3DF

#define FLAG_ITEM_ROUTE102_1                          0x3E8
#define FLAG_ITEM_ROUTE116_1                          0x3E9
#define FLAG_ITEM_ROUTE104_1                          0x3EA
#define FLAG_ITEM_ROUTE105_1                          0x3EB
#define FLAG_ITEM_ROUTE106_1                          0x3EC
#define FLAG_ITEM_ROUTE109_1                          0x3ED
#define FLAG_ITEM_ROUTE110_1                          0x3EE
#define FLAG_ITEM_ROUTE110_2                          0x3EF
#define FLAG_ITEM_ROUTE111_1                          0x3F0
#define FLAG_ITEM_ROUTE111_2                          0x3F1
#define FLAG_ITEM_ROUTE111_3                          0x3F2
#define FLAG_ITEM_ROUTE112_1                          0x3F3
#define FLAG_ITEM_ROUTE113_1                          0x3F4
#define FLAG_ITEM_ROUTE113_2                          0x3F5
#define FLAG_ITEM_ROUTE114_1                          0x3F6
#define FLAG_ITEM_ROUTE114_2                          0x3F7
#define FLAG_ITEM_ROUTE115_1                          0x3F8
#define FLAG_ITEM_ROUTE115_2                          0x3F9
#define FLAG_ITEM_ROUTE115_3                          0x3FA
#define FLAG_ITEM_ROUTE116_2                          0x3FB
#define FLAG_ITEM_ROUTE116_3                          0x3FC
#define FLAG_ITEM_ROUTE116_4                          0x3FD
#define FLAG_ITEM_ROUTE117_1                          0x3FE
#define FLAG_ITEM_ROUTE117_2                          0x3FF
#define FLAG_ITEM_ROUTE119_1                          0x400
#define FLAG_ITEM_ROUTE119_2                          0x401
#define FLAG_ITEM_ROUTE119_3                          0x402
#define FLAG_ITEM_ROUTE119_4                          0x403
#define FLAG_ITEM_ROUTE119_5                          0x404
#define FLAG_ITEM_ROUTE119_6                          0x405
#define FLAG_ITEM_ROUTE120_1                          0x406
#define FLAG_ITEM_ROUTE120_2                          0x407
#define FLAG_ITEM_ROUTE123_1                          0x408
#define FLAG_ITEM_ROUTE123_2                          0x409
#define FLAG_ITEM_ROUTE127_1                          0x40A
#define FLAG_ITEM_ROUTE127_2                          0x40B
#define FLAG_ITEM_ROUTE132_1                          0x40C
#define FLAG_ITEM_ROUTE133_1                          0x40D
#define FLAG_ITEM_ROUTE133_2                          0x40E
#define FLAG_ITEM_PETALBURG_1                         0x40F
#define FLAG_ITEM_PETALBURG_2                         0x410
#define FLAG_ITEM_RUSTBORO_1                          0x411
#define FLAG_ITEM_LILYCOVE_1                          0x412
#define FLAG_ITEM_MOSSDEEP_1                          0x413
#define FLAG_ITEM_METEOR_FALLS_1F_1R_1                0x414
#define FLAG_ITEM_METEOR_FALLS_1F_1R_2                0x415
#define FLAG_ITEM_METEOR_FALLS_1F_1R_3                0x416
#define FLAG_ITEM_METEOR_FALLS_1F_1R_4                0x417
#define FLAG_ITEM_RUSTURF_TUNNEL_1                    0x418
#define FLAG_ITEM_RUSTURF_TUNNEL_2                    0x419
#define FLAG_ITEM_GRANITE_CAVE_1F_1                   0x41A
#define FLAG_ITEM_GRANITE_CAVE_B1F_1                  0x41B
#define FLAG_ITEM_MT_PYRE_5F_1                        0x41C
#define FLAG_ITEM_GRANITE_CAVE_B2F_1                  0x41D
#define FLAG_ITEM_GRANITE_CAVE_B2F_2                  0x41E
#define FLAG_ITEM_PETALBURG_WOODS_1                   0x41F
#define FLAG_ITEM_PETALBURG_WOODS_2                   0x420
#define FLAG_ITEM_ROUTE104_2                          0x421
#define FLAG_ITEM_PETALBURG_WOODS_3                   0x422
#define FLAG_ITEM_CAVE_OF_ORIGIN_B3F_1                0x423
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_1_1              0x424
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_2_1              0x425
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_2_2              0x426
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_3_1              0x427
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_3_2              0x428
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_4_1              0x429
#define FLAG_ITEM_ROUTE124_1                          0x42A
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_6_1              0x42B
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_7_1              0x42C
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_8_1              0x42D
#define FLAG_ITEM_JAGGED_PASS_1                       0x42E
#define FLAG_ITEM_AQUA_HIDEOUT_B1F_1                  0x42F
#define FLAG_ITEM_AQUA_HIDEOUT_B2F_1                  0x430
#define FLAG_ITEM_MT_PYRE_EXTERIOR_1                  0x431
#define FLAG_ITEM_MT_PYRE_EXTERIOR_2                  0x432
#define FLAG_ITEM_NEW_MAUVILLE_INSIDE_1               0x433
#define FLAG_ITEM_NEW_MAUVILLE_INSIDE_2               0x434
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOMS_1 0x435
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOMS_2 0x436
#define FLAG_ITEM_SCORCHED_SLAB_1                     0x437
#define FLAG_ITEM_METEOR_FALLS_B1F_2R_1               0x438
#define FLAG_ITEM_SHOAL_CAVE_LOW_TIDE_ENTRANCE_1      0x439
#define FLAG_ITEM_SHOAL_CAVE_LOW_TIDE_INNER_ROOM_1    0x43A
#define FLAG_ITEM_SHOAL_CAVE_LOW_TIDE_STAIRS_ROOM_1   0x43B
#define FLAG_ITEM_VICTORY_ROAD_1F_1                   0x43C
#define FLAG_ITEM_VICTORY_ROAD_1F_2                   0x43D
#define FLAG_ITEM_VICTORY_ROAD_B1F_1                  0x43E
#define FLAG_ITEM_VICTORY_ROAD_B1F_2                  0x43F
#define FLAG_ITEM_VICTORY_ROAD_B2F_1                  0x440
#define FLAG_ITEM_MT_PYRE_6F_1                        0x441
#define FLAG_ITEM_SEAFLOOR_CAVERN_ROOM_9_1            0x442
#define FLAG_ITEM_FIERY_PATH_1                        0x443
#define FLAG_ITEM_ROUTE124_2                          0x444
#define FLAG_ITEM_ROUTE124_3                          0x445
#define FLAG_ITEM_SAFARI_ZONE_NORTHWEST_1             0x446
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_1F_1           0x447
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_B1F_1          0x448
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_2_B1F_1        0x449
#define FLAG_ITEM_ABANDONED_SHIP_ROOM_B1F_1           0x44A
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_2_1F_1         0x44B
#define FLAG_ITEM_ABANDONED_SHIP_CAPTAINS_OFFICE_1    0x44C
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOMS_3 0x44D
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOMS_4 0x44E
#define FLAG_ITEM_ROUTE121_1                          0x44F
#define FLAG_ITEM_ROUTE123_3                          0x450
#define FLAG_ITEM_ROUTE126_1                          0x451
#define FLAG_ITEM_ROUTE119_7                          0x452
#define FLAG_ITEM_ROUTE120_3                          0x453
#define FLAG_ITEM_ROUTE120_4                          0x454
#define FLAG_ITEM_ROUTE123_4                          0x455
#define FLAG_ITEM_NEW_MAUVILLE_INSIDE_3               0x456
#define FLAG_ITEM_FIERY_PATH_2                        0x457
#define FLAG_ITEM_SHOAL_CAVE_LOW_TIDE_ICE_ROOM_1      0x458
#define FLAG_ITEM_SHOAL_CAVE_LOW_TIDE_ICE_ROOM_2      0x459
#define FLAG_ITEM_ROUTE103_1                          0x45A
#define FLAG_ITEM_ROUTE104_3                          0x45B
#define FLAG_ITEM_MAUVILLE_1                          0x45C
#define FLAG_ITEM_PETALBURG_WOODS_4                   0x45D
#define FLAG_ITEM_ROUTE115_4                          0x45E
#define FLAG_ITEM_SAFARI_ZONE_NORTHEAST_1             0x45F
#define FLAG_ITEM_MT_PYRE_3F_1                        0x460
#define FLAG_ITEM_ROUTE118_1                          0x461
#define FLAG_ITEM_NEW_MAUVILLE_INSIDE_4               0x462
#define FLAG_ITEM_NEW_MAUVILLE_INSIDE_5               0x463
#define FLAG_ITEM_AQUA_HIDEOUT_B1F_2                  0x464
#define FLAG_ITEM_MAGMA_HIDEOUT_B1F_1                 0x465
#define FLAG_ITEM_MAGMA_HIDEOUT_B1F_2                 0x466
#define FLAG_ITEM_MAGMA_HIDEOUT_B2F_1                 0x467

#define FLAG_ITEM_MT_PYRE_2F_1                        0x469
#define FLAG_ITEM_MT_PYRE_4F_1                        0x46A
#define FLAG_ITEM_SAFARI_ZONE_SOUTHWEST               0x46B
#define FLAG_ITEM_AQUA_HIDEOUT_B1F_3                  0x46C
#define FLAG_ITEM_MOSSDEEP_STEVENS_HOUSE_HM08         0x46D
#define FLAG_ITEM_MAGMA_HIDEOUT_B1F_3                 0x46E
#define FLAG_ITEM_ROUTE104_4                          0x46F

#define FLAG_DEFEATED_RUSTBORO_GYM                    0x4B1

#define FLAG_DEFEATED_DEWFORD_GYM                     0x4B4

#define FLAG_DEFEATED_MAUVILLE_GYM                    0x4B8

#define FLAG_DEFEATED_LAVARIDGE_GYM                   0x4BD

#define FLAG_DEFEATED_PETALBURG_GYM                   0x4C1

#define FLAG_DEFEATED_FORTREE_GYM                     0x4C9

#define FLAG_DEFEATED_MOSSDEEP_GYM                    0x4CD

#define FLAG_DEFEATED_SOOTOPOLIS_GYM                  0x4D4

#define FLAG_DEFEATED_ELITE_4_SYDNEY                  0x4DD
#define FLAG_DEFEATED_ELITE_4_PHOEBE                  0x4DE
#define FLAG_DEFEATED_ELITE_4_GLACIA                  0x4DF
#define FLAG_DEFEATED_ELITE_4_DRAKE                   0x4E0

#define TRAINER_FLAG_START                            0x500

// SYSTEM FLAGS

#define NUMBER_OF_TRAINERS    693
#define SYSTEM_FLAGS          (TRAINER_FLAG_START + NUMBER_OF_TRAINERS + 0x4B) // 0x800

#define FLAG_SYS_POKEMON_GET  (SYSTEM_FLAGS + 0x00)
#define FLAG_SYS_POKEDEX_GET  (SYSTEM_FLAGS + 0x01)
#define FLAG_SYS_POKENAV_GET  (SYSTEM_FLAGS + 0x02)
#define FLAG_SYS_GAME_CLEAR   (SYSTEM_FLAGS + 0x04)
#define FLAG_SYS_CHAT_USED    (SYSTEM_FLAGS + 0x05)
#define FLAG_SYS_HIPSTER_MEET (SYSTEM_FLAGS + 0x06)

// badges
#define FLAG_BADGE01_GET (SYSTEM_FLAGS + 0x07)
#define FLAG_BADGE02_GET (SYSTEM_FLAGS + 0x08)
#define FLAG_BADGE03_GET (SYSTEM_FLAGS + 0x09)
#define FLAG_BADGE04_GET (SYSTEM_FLAGS + 0x0A)
#define FLAG_BADGE05_GET (SYSTEM_FLAGS + 0x0B)
#define FLAG_BADGE06_GET (SYSTEM_FLAGS + 0x0C)
#define FLAG_BADGE07_GET (SYSTEM_FLAGS + 0x0D)
#define FLAG_BADGE08_GET (SYSTEM_FLAGS + 0x0E)

// cities and towns
#define FLAG_VISITED_LITTLEROOT_TOWN       (SYSTEM_FLAGS + 0x0F)
#define FLAG_VISITED_OLDALE_TOWN           (SYSTEM_FLAGS + 0x10)
#define FLAG_VISITED_DEWFORD_TOWN          (SYSTEM_FLAGS + 0x11)
#define FLAG_VISITED_LAVARIDGE_TOWN        (SYSTEM_FLAGS + 0x12)
#define FLAG_VISITED_FALLARBOR_TOWN        (SYSTEM_FLAGS + 0x13)
#define FLAG_VISITED_VERDANTURF_TOWN       (SYSTEM_FLAGS + 0x14)
#define FLAG_VISITED_PACIFIDLOG_TOWN       (SYSTEM_FLAGS + 0x15)
#define FLAG_VISITED_PETALBURG_CITY        (SYSTEM_FLAGS + 0x16)
#define FLAG_VISITED_SLATEPORT_CITY        (SYSTEM_FLAGS + 0x17)
#define FLAG_VISITED_MAUVILLE_CITY         (SYSTEM_FLAGS + 0x18)
#define FLAG_VISITED_RUSTBORO_CITY         (SYSTEM_FLAGS + 0x19)
#define FLAG_VISITED_FORTREE_CITY          (SYSTEM_FLAGS + 0x1A)
#define FLAG_VISITED_LILYCOVE_CITY         (SYSTEM_FLAGS + 0x1B)
#define FLAG_VISITED_MOSSDEEP_CITY         (SYSTEM_FLAGS + 0x1C)
#define FLAG_VISITED_SOOTOPOLIS_CITY       (SYSTEM_FLAGS + 0x1D)
#define FLAG_VISITED_EVER_GRANDE_CITY      (SYSTEM_FLAGS + 0x1E)

#define FLAG_SYS_USE_FLASH                 (SYSTEM_FLAGS + 0x28)
#define FLAG_SYS_USE_STRENGTH              (SYSTEM_FLAGS + 0x29)
#define FLAG_SYS_WEATHER_CTRL              (SYSTEM_FLAGS + 0x2A)
#define FLAG_SYS_CYCLING_ROAD              (SYSTEM_FLAGS + 0x2B)
#define FLAG_SYS_SAFARI_MODE               (SYSTEM_FLAGS + 0x2C)
#define FLAG_SYS_CRUISE_MODE               (SYSTEM_FLAGS + 0x2D)

#define FLAG_SYS_TV_HOME                   (SYSTEM_FLAGS + 0x30)
#define FLAG_SYS_TV_WATCH                  (SYSTEM_FLAGS + 0x31)
#define FLAG_SYS_TV_START                  (SYSTEM_FLAGS + 0x32)
#define FLAG_SYS_POPWORD_INPUT             (SYSTEM_FLAGS + 0x33)
#define FLAG_SYS_MIX_RECORD                (SYSTEM_FLAGS + 0x34)
#define FLAG_SYS_CLOCK_SET                 (SYSTEM_FLAGS + 0x35)
#define FLAG_SYS_NATIONAL_DEX              (SYSTEM_FLAGS + 0x36)
#define FLAG_SYS_CAVE_SHIP                 (SYSTEM_FLAGS + 0x37)
#define FLAG_SYS_CAVE_WONDER               (SYSTEM_FLAGS + 0x38)
#define FLAG_SYS_CAVE_BATTLE               (SYSTEM_FLAGS + 0x39)
#define FLAG_SYS_SHOAL_TIDE                (SYSTEM_FLAGS + 0x3A)
#define FLAG_SYS_RIBBON_GET                (SYSTEM_FLAGS + 0x3B)

#define FLAG_LANDMARK_FLOWER_SHOP          (SYSTEM_FLAGS + 0x3C)
#define FLAG_LANDMARK_MR_BRINEY_HOUSE      (SYSTEM_FLAGS + 0x3D)
#define FLAG_LANDMARK_ABANDONED_SHIP       (SYSTEM_FLAGS + 0x3E)
#define FLAG_LANDMARK_SEASHORE_HOUSE       (SYSTEM_FLAGS + 0x3F)
#define FLAG_LANDMARK_NEW_MAUVILLE         (SYSTEM_FLAGS + 0x40)
#define FLAG_LANDMARK_OLD_LADY_REST_SHOP   (SYSTEM_FLAGS + 0x41)
#define FLAG_LANDMARK_TRICK_HOUSE          (SYSTEM_FLAGS + 0x42)
#define FLAG_LANDMARK_WINSTRATE_FAMILY     (SYSTEM_FLAGS + 0x43)
#define FLAG_LANDMARK_GLASS_WORKSHOP       (SYSTEM_FLAGS + 0x44)
#define FLAG_LANDMARK_LANETTES_HOUSE       (SYSTEM_FLAGS + 0x45)
#define FLAG_LANDMARK_POKEMON_DAYCARE      (SYSTEM_FLAGS + 0x46)
#define FLAG_LANDMARK_SEAFLOOR_CAVERN      (SYSTEM_FLAGS + 0x47)
#define FLAG_LANDMARK_BATTLE_TOWER         (SYSTEM_FLAGS + 0x48)
#define FLAG_LANDMARK_SOUTHERN_ISLAND      (SYSTEM_FLAGS + 0x49)
#define FLAG_LANDMARK_FIERY_PATH           (SYSTEM_FLAGS + 0x4A)

#define FLAG_SYS_PC_LANETTE                (SYSTEM_FLAGS + 0x4B)
#define FLAG_SYS_EXDATA_ENABLE             (SYSTEM_FLAGS + 0x4C)
#define FLAG_SYS_ENC_UP_ITEM               (SYSTEM_FLAGS + 0x4D)
#define FLAG_SYS_ENC_DOWN_ITEM             (SYSTEM_FLAGS + 0x4E)
#define FLAG_SYS_BRAILLE_DIG               (SYSTEM_FLAGS + 0x4F)
#define FLAG_SYS_BRAILLE_STRENGTH          (SYSTEM_FLAGS + 0x50)
#define FLAG_SYS_BRAILLE_WAIT              (SYSTEM_FLAGS + 0x51)
#define FLAG_SYS_BRAILLE_FLY               (SYSTEM_FLAGS + 0x52)
#define FLAG_SYS_HAS_EON_TICKET            (SYSTEM_FLAGS + 0x53)
#define FLAG_SYS_POKEMON_LEAGUE_FLY        (SYSTEM_FLAGS + 0x54)

#define FLAG_LANDMARK_ISLAND_CAVE          (SYSTEM_FLAGS + 0x55)
#define FLAG_LANDMARK_DESERT_RUINS         (SYSTEM_FLAGS + 0x56)
#define FLAG_LANDMARK_FOSSIL_MANIACS_HOUSE (SYSTEM_FLAGS + 0x57)
#define FLAG_LANDMARK_SCORCHED_SLAB        (SYSTEM_FLAGS + 0x58)
#define FLAG_LANDMARK_ANCIENT_TOMB         (SYSTEM_FLAGS + 0x59)
#define FLAG_LANDMARK_TUNNELERS_REST_HOUSE (SYSTEM_FLAGS + 0x5A)
#define FLAG_LANDMARK_HUNTERS_HOUSE        (SYSTEM_FLAGS + 0x5B)
#define FLAG_LANDMARK_SEALED_CHAMBER       (SYSTEM_FLAGS + 0x5C)

#define FLAG_SYS_TV_LATI                   (SYSTEM_FLAGS + 0x5D)

#define FLAG_LANDMARK_SKY_PILLAR           (SYSTEM_FLAGS + 0x5E)

#define FLAG_SYS_SHOAL_ITEM                (SYSTEM_FLAGS + 0x5F)
#define FLAG_SYS_B_DASH                    (SYSTEM_FLAGS + 0x60) // got Running Shoes
#define FLAG_SYS_CTRL_OBJ_DELETE           (SYSTEM_FLAGS + 0x61)
#define FLAG_SYS_RESET_RTC_ENABLE          (SYSTEM_FLAGS + 0x62)

#define FLAG_LANDMARK_BERRY_MASTERS_HOUSE  (SYSTEM_FLAGS + 0x63)

// Daily Flags. These 64 flags are cleared once per day.
#define DAILY_FLAGS_START                               (SYSTEM_FLAGS + 0xC0)

#define FLAG_DAILY_RECEIVED_BERRY_FALLARBOR             (SYSTEM_FLAGS + 0xC1)
#define FLAG_DAILY_UNKNOWN_8C2                          (SYSTEM_FLAGS + 0xC2)

#define FLAG_DAILY_PICKED_LOTTO_TICKET                  (SYSTEM_FLAGS + 0xCA)
#define FLAG_DAILY_RECEIVED_BERRY_ROUTE114              (SYSTEM_FLAGS + 0xCB)
#define FLAG_DAILY_RECEIVED_BERRY_ROUTE111              (SYSTEM_FLAGS + 0xCC)
#define FLAG_DAILY_RECEIVED_BERRY_FROM_BERRYMASTER      (SYSTEM_FLAGS + 0xCD)
#define FLAG_DAILY_RECEIVED_BERRY_ROUTE120              (SYSTEM_FLAGS + 0xCE)
#define FLAG_DAILY_RECEIVED_BERRY_LILYCOVE              (SYSTEM_FLAGS + 0xCF)
#define FLAG_DAILY_RECEIVED_BERRY_FLOWER_SHOP           (SYSTEM_FLAGS + 0xD0)
#define FLAG_DAILY_RECEIVED_BERRY_FROM_BERRYMASTER_WIFE (SYSTEM_FLAGS + 0xD1)
#define FLAG_DAILY_RECEIVED_BERRY_SOOTOPOLIS            (SYSTEM_FLAGS + 0xD2)
// Daily flags end at 0x8FF

// SPECIAL FLAGS

#define FLAG_HIDE_MAP_NAME_POPUP   0x4000
#define FLAG_DONT_TRANSITION_MUSIC 0x4001
