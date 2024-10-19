#include "types.h"
#include "battle.h"
#include "constants/items.h"
#include "constants/species.h"

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Rolv1[2] = {
    {
     .iv = 200,
     .level = 40,
     .species = SPECIES_METANG,
     },
    {
     .iv = 200,
     .level = 41,
     .species = SPECIES_METANG,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Theresa[2] = {
    {
     .iv = 0,
     .level = 16,
     .species = SPECIES_SHRIVLSAUR,
     },
    {
     .iv = 0,
     .level = 16,
     .species = SPECIES_CHARMEWORM,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Miguel1[4] = {
    {
     .iv = 100,
     .level = 15,
     .species = SPECIES_SNEASEL,
     },
    {
     .iv = 100,
     .level = 16,
     .species = SPECIES_POOCHYENA,
     },
    {
     .iv = 100,
     .level = 17,
     .species = SPECIES_CARVANHA,
     },
    {
     .iv = 100,
     .level = 18,
     .species = SPECIES_POOCHYENA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Franklin[2] = {
    {
     .iv = 100,
     .level = 17,
     .species = SPECIES_MEOWTH,
     },
    {
     .iv = 100,
     .level = 20,
     .species = SPECIES_PERSIAN,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Marvin[1] = {
    {
     .iv = 100,
     .level = 20,
     .species = SPECIES_CARVANHA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Tomas[2] = {
    {
     .iv = 100,
     .level = 17,
     .species = SPECIES_POOCHYENA,
     },
    {
     .iv = 100,
     .level = 18,
     .species = SPECIES_SNEASEL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Vitruvio[1] = {
    {
     .iv = 200,
     .level = 24,
     .species = SPECIES_PERSIAN,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Beldum[3] = {
    {
     .iv = 100,
     .level = 16,
     .species = SPECIES_SHINX,
     },
    {
     .iv = 100,
     .level = 16,
     .species = SPECIES_SHINX,
     },
    {
     .iv = 150,
     .level = 16,
     .species = SPECIES_LUXIO,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Meteor1[2] = {
    {
     .iv = 100,
     .level = 20,
     .species = SPECIES_DRAGON,
     .moves = { MOVE_DRAGON_BREATH, MOVE_RAGE, MOVE_FIRE_PUMP, MOVE_QUICK_ATTACK },
     },
    {
     .iv = 100,
     .level = 21,
     .species = SPECIES_DRAGON,
     .moves = { MOVE_DRAGON_BREATH, MOVE_RAGE, MOVE_WING_ATTACK, MOVE_GLARE },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Tomu[1] = {
    {
     .iv = 100,
     .level = 30,
     .species = SPECIES_MUNCHLAX,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Shirasagi[2] = {
    {
     .iv = 0,
     .level = 24,
     .species = SPECIES_MUNCHLAX,
     },
    {
     .iv = 0,
     .level = 25,
     .species = SPECIES_KIRLIA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Naota[2] = {
    {
     .iv = 0,
     .level = 25,
     .species = SPECIES_MUNCHLAX,
     },
    {
     .iv = 0,
     .level = 26,
     .species = SPECIES_KIRLIA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Paolo[2] = {
    {
     .iv = 0,
     .level = 26,
     .species = SPECIES_HOMBONE,
     },
    {
     .iv = 0,
     .level = 26,
     .species = SPECIES_HOMBONE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Niizuma[2] = {
    {
     .iv = 0,
     .level = 26,
     .species = SPECIES_MUNCHLAX,
     },
    {
     .iv = 0,
     .level = 27,
     .species = SPECIES_KIRLIA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Wattson1[6] = {
    {
     .iv = 255,
     .level = 100,
     .species = SPECIES_LUXRAY,
     },
    {
     .iv = 255,
     .level = 100,
     .species = SPECIES_LANTURN,
     },
    {
     .iv = 255,
     .level = 100,
     .species = SPECIES_RAICHU,
     },
    {
     .iv = 255,
     .level = 100,
     .species = SPECIES_JOLTEON,
     },
    {
     .iv = 255,
     .level = 100,
     .species = SPECIES_LUXRAY,
     },
    {
     .iv = 255,
     .level = 100,
     .species = SPECIES_RAIKOU,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Wattson2[6] = {
    {
     .iv = 100,
     .level = 24,
     .species = SPECIES_SHINX,
     },
    {
     .iv = 110,
     .level = 24,
     .species = SPECIES_LANTURN,
     },
    {
     .iv = 110,
     .level = 27,
     .species = SPECIES_PIKACHU,
     },
    {
     .iv = 110,
     .level = 27,
     .species = SPECIES_JOLTEON,
     },
    {
     .iv = 110,
     .level = 28,
     .species = SPECIES_LUXIO,
     },
    {
     .iv = 110,
     .level = 33,
     .species = SPECIES_RAIKOU,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Footman1[2] = {
    {
     .iv = 100,
     .level = 27,
     .species = SPECIES_HOMBONE,
     },
    {
     .iv = 100,
     .level = 27,
     .species = SPECIES_LAIRON,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Akatsuki[1] = {
    {
     .iv = 200,
     .level = 30,
     .species = SPECIES_GARDEVOIR,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Mikov1[1] = {
    {
     .iv = 0,
     .level = 28,
     .species = SPECIES_ODDISH,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Bobov1[1] = {
    {
     .iv = 0,
     .level = 28,
     .species = SPECIES_ONIX,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Gunkov1[1] = {
    {
     .iv = 0,
     .level = 28,
     .species = SPECIES_KENCHIRA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Karkov1[1] = {
    {
     .iv = 0,
     .level = 28,
     .species = SPECIES_TRAPINCH,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Robotnov1[1] = {
    {
     .iv = 0,
     .level = 28,
     .species = SPECIES_ZUBAT,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Rolv2[1] = {
    {
     .iv = 122,
     .level = 28,
     .species = SPECIES_BELDUM,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Sputnov1[1] = {
    {
     .iv = 200,
     .level = 28,
     .species = SPECIES_MAREEP,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Vladov1[1] = {
    {
     .iv = 200,
     .level = 28,
     .species = SPECIES_CALFBY,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Adolv1[1] = {
    {
     .iv = 200,
     .level = 28,
     .species = SPECIES_DRATINI,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Asimov1[1] = {
    {
     .iv = 0,
     .level = 28,
     .species = SPECIES_LARVITAR,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Liam[1] = {
    {
     .iv = 0,
     .level = 3,
     .species = SPECIES_BOILBASAUR,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Lizzie[2] = {
    {
     .iv = 0,
     .level = 4,
     .species = SPECIES_POLIHAG,
     },
    {
     .iv = 0,
     .level = 4,
     .species = SPECIES_ROTMANDER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Mikov2[3] = {
    {
     .iv = 50,
     .level = 36,
     .species = SPECIES_GLOOM,
     },
    {
     .iv = 50,
     .level = 36,
     .species = SPECIES_GLOOM,
     },
    {
     .iv = 50,
     .level = 38,
     .species = SPECIES_VILEPLUME,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Bobov2[2] = {
    {
     .iv = 50,
     .level = 34,
     .species = SPECIES_ONIX,
     },
    {
     .iv = 50,
     .level = 38,
     .species = SPECIES_STEELIX,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Gunkov2[2] = {
    {
     .iv = 50,
     .level = 35,
     .species = SPECIES_KENCHIRA,
     },
    {
     .iv = 50,
     .level = 37,
     .species = SPECIES_KENCHIRA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Karkov2[3] = {
    {
     .iv = 150,
     .level = 36,
     .species = SPECIES_TRAPINCH,
     },
    {
     .iv = 150,
     .level = 36,
     .species = SPECIES_TRAPINCH,
     },
    {
     .iv = 150,
     .level = 39,
     .species = SPECIES_VIBRAVA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Robotnov2[3] = {
    {
     .iv = 150,
     .level = 37,
     .species = SPECIES_GOLBAT,
     },
    {
     .iv = 150,
     .level = 38,
     .species = SPECIES_GOLBAT,
     },
    {
     .iv = 150,
     .level = 39,
     .species = SPECIES_GOLBAT,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Ed[1] = {
    {
     .iv = 255,
     .level = 85,
     .species = SPECIES_ZEBSTRIKA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Tesrael[2] = {
    {
     .iv = 200,
     .level = 40,
     .species = SPECIES_SPINDA,
     },
    {
     .iv = 200,
     .level = 40,
     .species = SPECIES_HARIYAMA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Lily[2] = {
    {
     .iv = 0,
     .level = 17,
     .species = SPECIES_SHROOMISH,
     },
    {
     .iv = 0,
     .level = 17,
     .species = SPECIES_ROSELIA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Ran_Mao[3] = {
    {
     .iv = 100,
     .level = 40,
     .species = SPECIES_KURIPUTO,
     },
    {
     .iv = 100,
     .level = 40,
     .species = SPECIES_ROODANSE,
     },
    {
     .iv = 100,
     .level = 40,
     .species = SPECIES_OOSHE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Sputnov2[2] = {
    {
     .iv = 100,
     .level = 40,
     .species = SPECIES_FLAAFFY,
     },
    {
     .iv = 200,
     .level = 41,
     .species = SPECIES_FLAAFFY,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Vladov2[3] = {
    {
     .iv = 200,
     .level = 40,
     .species = SPECIES_CALFBY,
     },
    {
     .iv = 200,
     .level = 41,
     .species = SPECIES_TAUROS,
     },
    {
     .iv = 200,
     .level = 41,
     .species = SPECIES_MILTANK,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Adolv2[3] = {
    {
     .iv = 200,
     .level = 40,
     .species = SPECIES_DRAGONAIR,
     },
    {
     .iv = 200,
     .level = 41,
     .species = SPECIES_DRAGONAIR,
     },
    {
     .iv = 200,
     .level = 42,
     .species = SPECIES_DRAGONITE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Asimov2[3] = {
    {
     .iv = 200,
     .level = 40,
     .species = SPECIES_PUPITAR,
     },
    {
     .iv = 200,
     .level = 41,
     .species = SPECIES_PUPITAR,
     },
    {
     .iv = 200,
     .level = 44,
     .species = SPECIES_TYRANITAR,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Crankshaft[1] = {
    {
     .iv = 50,
     .level = 33,
     .species = SPECIES_LUXIO,
     .moves = { MOVE_BITE, MOVE_FRUSTRATION, MOVE_THUNDERBOLT, MOVE_ROAR },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Zappizor[3] = {
    {
     .iv = 250,
     .level = 40,
     .species = SPECIES_MAGNETON,
     .moves = { MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM },
     },
    {
     .iv = 50,
     .level = 41,
     .species = SPECIES_MAGNETON,
     .moves = { MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_SONIC_BOOM, MOVE_PROTECT },
     },
    {
     .iv = 255,
     .level = 43,
     .species = SPECIES_LUXRAY,
     .moves = { MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_DISCHARGE, MOVE_FRUSTRATION },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Arturo[2] = {
    {
     .iv = 50,
     .level = 18,
     .species = SPECIES_MEOWTH,
     .moves = { MOVE_SCRATCH, MOVE_SLASH, MOVE_PAY_DAY, MOVE_FAINT_ATTACK },
     },
    {
     .iv = 50,
     .level = 19,
     .species = SPECIES_PERSIAN,
     .moves = { MOVE_CRUNCH, MOVE_SLASH, MOVE_PAY_DAY, MOVE_DISABLE },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_DoubleAct1[4] = {
    {
     .iv = 160,
     .level = 30,
     .species = SPECIES_SLUGMA,
     .moves = { MOVE_ROCK_THROW, MOVE_EMBER, MOVE_SMOG, MOVE_PROTECT },
     },
    {
     .iv = 200,
     .level = 30,
     .species = SPECIES_GRAVELER,
     .moves = { MOVE_ROCK_BLAST, MOVE_MAGNITUDE, MOVE_SUBSTITUTE, MOVE_FOCUS_PUNCH },
     },
    {
     .iv = 200,
     .level = 30,
     .species = SPECIES_SOLROCK,
     .moves = { MOVE_EXTRASENSORY, MOVE_ROCK_THROW, MOVE_COSMIC_POWER, MOVE_SAND_TOMB },
     },
    {
     .iv = 200,
     .level = 30,
     .species = SPECIES_HOMBONE,
     .moves = { MOVE_CRUSH_CLAW, MOVE_EARTHQUAKE, MOVE_CRABHAMMER, MOVE_FAINT_ATTACK },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Gaoler1[1] = {
    {
     .iv = 70,
     .level = 35,
     .species = SPECIES_GRAVELER,
     .moves = { MOVE_MAGNITUDE, MOVE_PROTECT, MOVE_ROCK_BLAST, MOVE_ROCK_THROW },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Gaoler2[1] = {
    {
     .iv = 180,
     .level = 35,
     .species = SPECIES_CORSOLA,
     .moves = { MOVE_SURF, MOVE_PROTECT, MOVE_TOXIC, MOVE_ROCK_BLAST },
     },
};

const struct TrainerMonItemCustomMoves gTrainerParty_Malfeasance[4] = {
    {
     .iv = 190,
     .level = 29,
     .species = SPECIES_HAUNTER,
     .heldItem = ITEM_CURSED_SKULL,
     .moves = { MOVE_HYPNOSIS, MOVE_SHADOW_PUNCH, MOVE_CURSE, MOVE_MEAN_LOOK },
     },
    {
     .iv = 190,
     .level = 31,
     .species = SPECIES_QWILFISH,
     .heldItem = ITEM_GODS_TEAR,
     .moves = { MOVE_SURF, MOVE_POISON_FANG, MOVE_ICE_BEAM, MOVE_SPIKES },
     },
    {
     .iv = 200,
     .level = 33,
     .species = SPECIES_KADABRA,
     .heldItem = ITEM_MEWTWO_BRAIN,
     .moves = { MOVE_EXTRASENSORY, MOVE_CALM_MIND, MOVE_BARRIER, MOVE_KNOCK_OFF },
     },
    {
     .iv = 255,
     .level = 36,
     .species = SPECIES_FACELEECH,
     .heldItem = ITEM_SNAKE_EYES,
     .moves = { MOVE_POISON_FANG, MOVE_CONFUSE_RAY, MOVE_BITE, MOVE_NONE },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_TinaAndBruce1[2] = {
    {
     .iv = 50,
     .level = 30,
     .species = SPECIES_HORSEA,
     },
    {
     .iv = 50,
     .level = 30,
     .species = SPECIES_BELDUM,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_TinaAndBruce2[2] = {
    {
     .iv = 100,
     .level = 41,
     .species = SPECIES_SEADRA,
     },
    {
     .iv = 100,
     .level = 41,
     .species = SPECIES_METANG,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_TinaAndBruce3[2] = {
    {
     .iv = 150,
     .level = 45,
     .species = SPECIES_KINGDRA,
     },
    {
     .iv = 150,
     .level = 45,
     .species = SPECIES_METAGROSS,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_TinaAndBruce4[2] = {
    {
     .iv = 200,
     .level = 52,
     .species = SPECIES_KINGDRA,
     },
    {
     .iv = 200,
     .level = 52,
     .species = SPECIES_METAGROSS,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_TinaAndBruce5[2] = {
    {
     .iv = 250,
     .level = 57,
     .species = SPECIES_KINGDRA,
     },
    {
     .iv = 250,
     .level = 57,
     .species = SPECIES_METAGROSS,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_TinaAndBruce6[2] = {
    {
     .iv = 250,
     .level = 66,
     .species = SPECIES_KINGDRA,
     .moves = { MOVE_DRAGON_BREATH, MOVE_STORM_SURGE, MOVE_HYPER_BEAM, MOVE_SMOKESCREEN },
     },
    {
     .iv = 250,
     .level = 66,
     .species = SPECIES_METAGROSS,
     .moves = { MOVE_PSYCHIC, MOVE_METEOR_MASH, MOVE_EARTHQUAKE, MOVE_HYPER_BEAM },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Dublique[2] = {
    {
     .iv = 0,
     .level = 20,
     .species = SPECIES_ZIGZAGOON,
     },
    {
     .iv = 0,
     .level = 23,
     .species = SPECIES_WINGULL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Mike[1] = {
    {
     .iv = 200,
     .level = 41,
     .species = SPECIES_GORELAX,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Gwen[1] = {
    {
     .iv = 0,
     .level = 27,
     .species = SPECIES_GRAVEILL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Carmen[2] = {
    {
     .iv = 10,
     .level = 34,
     .species = SPECIES_CROCONAW,
     },
    {
     .iv = 10,
     .level = 36,
     .species = SPECIES_MEGANIUM,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_GenGui[2] = {
    {
     .iv = 20,
     .level = 33,
     .species = SPECIES_BALTOY,
     },
    {
     .iv = 20,
     .level = 33,
     .species = SPECIES_BALTOY,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Ricky1[2] = {
    {
     .iv = 200,
     .level = 38,
     .species = SPECIES_GRIMREAPER,
     },
    {
     .iv = 230,
     .level = 38,
     .species = SPECIES_GRIMREAPER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Lola[2] = {
    {
     .iv = 40,
     .level = 35,
     .species = SPECIES_AZOMBARILL,
     },
    {
     .iv = 40,
     .level = 35,
     .species = SPECIES_AZOMBARILL,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Buccha[1] = {
    {
     .iv = 200,
     .level = 28,
     .species = SPECIES_LINOONE,
     .moves = { MOVE_ROAR, MOVE_SAND_ATTACK, MOVE_SUPER_FANG, MOVE_STRENGTH },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Simon[2] = {
    {
     .iv = 0,
     .level = 12,
     .species = SPECIES_X43874,
     },
    {
     .iv = 0,
     .level = 12,
     .species = SPECIES_GRAVEILL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Macguffin[1] = {
    {
     .iv = 200,
     .level = 60,
     .species = SPECIES_PRIMEAPE,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Ricky2[1] = {
    {
     .iv = 10,
     .level = 27,
     .species = SPECIES_LINOONE,
     .moves = { MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Lolidragon[1] = {
    {
     .iv = 255,
     .level = 45,
     .species = SPECIES_KURIPUTO,
     .moves = { MOVE_SLAM, MOVE_SLASH, MOVE_LEAF_BLADE, MOVE_SLEEP_POWDER },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_LiriaChen[1] = {
    {
     .iv = 255,
     .level = 45,
     .species = SPECIES_FANGASU,
     .moves = { MOVE_EXTREME_SPEED, MOVE_HEADBUTT, MOVE_EARTHQUAKE, MOVE_GLARE },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Mcdougal[1] = {
    {
     .iv = 255,
     .level = 45,
     .species = SPECIES_GOOSUBOA,
     .moves = { MOVE_SHADOW_SWIPE, MOVE_TAKE_DOWN, MOVE_FAINT_ATTACK, MOVE_HYPNOSIS },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Randall[1] = {
    {
     .iv = 255,
     .level = 58,
     .species = SPECIES_GORELAX,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Parker[1] = {
    {
     .iv = 255,
     .level = 58,
     .species = SPECIES_BLEEDOISE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_George[1] = {
    {
     .iv = 255,
     .level = 58,
     .species = SPECIES_POLIWRAITH,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Berke[1] = {
    {
     .iv = 255,
     .level = 58,
     .species = SPECIES_DIRTKROW,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Majide[5] = {
    {
     .iv = 200,
     .level = 36,
     .species = SPECIES_GOOSUBOA,
     .moves = { MOVE_SHADOW_SWIPE, MOVE_FAINT_ATTACK, MOVE_TAKE_DOWN, MOVE_HORN_ATTACK },
     },
    {
     .iv = 200,
     .level = 36,
     .species = SPECIES_FANGASU,
     .moves = { MOVE_EXTREME_SPEED, MOVE_HEADBUTT, MOVE_EARTHQUAKE, MOVE_ROAR },
     },
    {
     .iv = 200,
     .level = 36,
     .species = SPECIES_ROODANSE,
     .moves = { MOVE_FLY, MOVE_AIR_CUTTER, MOVE_RAZOR_WIND, MOVE_SAND_ATTACK },
     },
    {
     .iv = 200,
     .level = 36,
     .species = SPECIES_NIGERA,
     .moves = { MOVE_GLARE, MOVE_STORM_SURGE, MOVE_TWINEEDLE, MOVE_SCARY_FACE },
     },
    {
     .iv = 200,
     .level = 29,
     .species = SPECIES_OOSHE,
     .moves = { MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SLAM, MOVE_IRON_DEFENSE },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Vincent[3] = {
    {
     .iv = 100,
     .level = 44,
     .species = SPECIES_SABLEYE,
     },
    {
     .iv = 100,
     .level = 44,
     .species = SPECIES_MEDICHAM,
     },
    {
     .iv = 100,
     .level = 44,
     .species = SPECIES_SHARPEDO,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Leroy[2] = {
    {
     .iv = 100,
     .level = 46,
     .species = SPECIES_SNEASEL,
     },
    {
     .iv = 100,
     .level = 46,
     .species = SPECIES_STARMIE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Ichi[3] = {
    {
     .iv = 100,
     .level = 34,
     .species = SPECIES_MUNCHLAX,
     },
    {
     .iv = 100,
     .level = 33,
     .species = SPECIES_MUNCHLAX,
     },
    {
     .iv = 100,
     .level = 36,
     .species = SPECIES_KIRLIA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_MangoMan[1] = {
    {
     .iv = 100,
     .level = 55,
     .species = SPECIES_STARMIE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Alberto[2] = {
    {
     .iv = 100,
     .level = 49,
     .species = SPECIES_LUXIO,
     },
    {
     .iv = 100,
     .level = 49,
     .species = SPECIES_CLOYSTER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Enigma[3] = {
    {
     .iv = 100,
     .level = 51,
     .species = SPECIES_DODRIO,
     },
    {
     .iv = 100,
     .level = 53,
     .species = SPECIES_AGGRON,
     },
    {
     .iv = 100,
     .level = 54,
     .species = SPECIES_ALAKAZAM,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Corleone[4] = {
    {
     .iv = 100,
     .level = 50,
     .species = SPECIES_BLAZIKEN,
     },
    {
     .iv = 100,
     .level = 51,
     .species = SPECIES_NINETALES,
     },
    {
     .iv = 100,
     .level = 52,
     .species = SPECIES_PSYPIG,
     },
    {
     .iv = 100,
     .level = 54,
     .species = SPECIES_TORKOAL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Castano[3] = {
    {
     .iv = 100,
     .level = 55,
     .species = SPECIES_PERSIAN,
     },
    {
     .iv = 100,
     .level = 57,
     .species = SPECIES_PERSIAN,
     },
    {
     .iv = 100,
     .level = 58,
     .species = SPECIES_CRAWDAUNT,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_FiveNinja1[3] = {
    {
     .iv = 110,
     .level = 48,
     .species = SPECIES_BEEDRILL,
     },
    {
     .iv = 110,
     .level = 48,
     .species = SPECIES_ROSELIA,
     },
    {
     .iv = 110,
     .level = 48,
     .species = SPECIES_NIDOQUEEN,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Inigo[3] = {
    {
     .iv = 120,
     .level = 46,
     .species = SPECIES_PERSIAN,
     },
    {
     .iv = 120,
     .level = 46,
     .species = SPECIES_MILOTIC,
     },
    {
     .iv = 120,
     .level = 46,
     .species = SPECIES_PERSIAN,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Manfred1[3] = {
    {
     .iv = 0,
     .level = 0,
     .species = SPECIES_NONE,
     },
    {
     .iv = 0,
     .level = 0,
     .species = SPECIES_NONE,
     },
    {
     .iv = 0,
     .level = 0,
     .species = SPECIES_NONE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Wilton[3] = {
    {
     .iv = 140,
     .level = 35,
     .species = SPECIES_LUXIO,
     },
    {
     .iv = 140,
     .level = 35,
     .species = SPECIES_WAILMER,
     },
    {
     .iv = 140,
     .level = 35,
     .species = SPECIES_HARIYAMA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_GimletEye[3] = {
    {
     .iv = 100,
     .level = 68,
     .species = SPECIES_DITTO,
     },
    {
     .iv = 100,
     .level = 69,
     .species = SPECIES_EXCADRILL,
     },
    {
     .iv = 100,
     .level = 69,
     .species = SPECIES_DUSTOX,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Mary[1] = {
    {
     .iv = 255,
     .level = 58,
     .species = SPECIES_IRONREAPER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Lori[1] = {
    {
     .iv = 255,
     .level = 58,
     .species = SPECIES_HEADDOOM,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Jody[1] = {
    {
     .iv = 250,
     .level = 58,
     .species = SPECIES_VIVOSAUR,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Mei_Rin[3] = {
    {
     .iv = 200,
     .level = 39,
     .species = SPECIES_GOOSUBOA,
     .moves = { MOVE_SHADOW_SWIPE, MOVE_TAKE_DOWN, MOVE_HORN_ATTACK, MOVE_HORN_DRILL },
     },
    {
     .iv = 255,
     .level = 40,
     .species = SPECIES_KURIPUTO,
     .moves = { MOVE_LEAF_BLADE, MOVE_SLASH, MOVE_SLEEP_POWDER, MOVE_LEECH_SEED },
     },
    {
     .iv = 200,
     .level = 41,
     .species = SPECIES_OOSHE,
     .moves = { MOVE_ROCK_BLAST, MOVE_MAGNITUDE, MOVE_PROTECT, MOVE_IRON_DEFENSE },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Elaine[2] = {
    {
     .iv = 100,
     .level = 45,
     .species = SPECIES_LAIRON,
     },
    {
     .iv = 100,
     .level = 45,
     .species = SPECIES_LUXIO,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Jemima[1] = {
    {
     .iv = 200,
     .level = 39,
     .species = SPECIES_ZANGOL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_BlairWitch[1] = {
    {
     .iv = 255,
     .level = 45,
     .species = SPECIES_SABLEYE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Bethany[1] = {
    {
     .iv = 100,
     .level = 55,
     .species = SPECIES_ZANGOL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Fishgirl1[1] = {
    {
     .iv = 100,
     .level = 55,
     .species = SPECIES_SWAMPERT,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Susan[3] = {
    {
     .iv = 100,
     .level = 49,
     .species = SPECIES_HARIYAMA,
     },
    {
     .iv = 100,
     .level = 50,
     .species = SPECIES_SNORLAX,
     },
    {
     .iv = 100,
     .level = 50,
     .species = SPECIES_KAJILIANTH,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_FiveNinja2[2] = {
    {
     .iv = 100,
     .level = 53,
     .species = SPECIES_WEAVILE,
     },
    {
     .iv = 100,
     .level = 55,
     .species = SPECIES_SABLEYE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Julianne[2] = {
    {
     .iv = 100,
     .level = 52,
     .species = SPECIES_SANDSLASH,
     },
    {
     .iv = 100,
     .level = 55,
     .species = SPECIES_MISDREAVUS,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Brooke[3] = {
    {
     .iv = 110,
     .level = 26,
     .species = SPECIES_WINGULL,
     },
    {
     .iv = 110,
     .level = 26,
     .species = SPECIES_HOMBONE,
     },
    {
     .iv = 110,
     .level = 26,
     .species = SPECIES_ROSELIA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Whitney[3] = {
    {
     .iv = 250,
     .level = 47,
     .species = SPECIES_MILOTIC,
     },
    {
     .iv = 250,
     .level = 46,
     .species = SPECIES_HOMBEAST,
     },
    {
     .iv = 250,
     .level = 47,
     .species = SPECIES_PSYPIG,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Marlene[3] = {
    {
     .iv = 230,
     .level = 46,
     .species = SPECIES_PSYPIG,
     },
    {
     .iv = 130,
     .level = 46,
     .species = SPECIES_HOMBEAST,
     },
    {
     .iv = 230,
     .level = 46,
     .species = SPECIES_MILOTIC,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Mikov3[3] = {
    {
     .iv = 255,
     .level = 46,
     .species = SPECIES_GLOOM,
     },
    {
     .iv = 255,
     .level = 48,
     .species = SPECIES_VILEPLUME,
     },
    {
     .iv = 255,
     .level = 48,
     .species = SPECIES_BELLOSSOM,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Patricia[1] = {
    {
     .iv = 0,
     .level = 42,
     .species = SPECIES_BANETTE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Rubric[2] = {
    {
     .iv = 230,
     .level = 41,
     .species = SPECIES_NIGERA,
     },
    {
     .iv = 230,
     .level = 41,
     .species = SPECIES_KURIPUTO,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Tchaikovsky[2] = {
    {
     .iv = 200,
     .level = 43,
     .species = SPECIES_MIGHTYENA,
     },
    {
     .iv = 200,
     .level = 43,
     .species = SPECIES_WEAVILE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Tabby[1] = {
    {
     .iv = 250,
     .level = 50,
     .species = SPECIES_MILOTIC,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_BillStokey[2] = {
    {
     .iv = 200,
     .level = 46,
     .species = SPECIES_WEAVILE,
     },
    {
     .iv = 200,
     .level = 46,
     .species = SPECIES_BLISSEY,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Valerie[1] = {
    {
     .iv = 10,
     .level = 35,
     .species = SPECIES_SABLEYE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Bobov3[3] = {
    {
     .iv = 200,
     .level = 46,
     .species = SPECIES_ONIX,
     },
    {
     .iv = 255,
     .level = 48,
     .species = SPECIES_STEELIX,
     },
    {
     .iv = 255,
     .level = 48,
     .species = SPECIES_STEELIX,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Gunkov3[2] = {
    {
     .iv = 255,
     .level = 50,
     .species = SPECIES_KENCHUKUO,
     },
    {
     .iv = 255,
     .level = 50,
     .species = SPECIES_KENCHUKUO,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Karkov3[3] = {
    {
     .iv = 255,
     .level = 46,
     .species = SPECIES_VIBRAVA,
     },
    {
     .iv = 255,
     .level = 46,
     .species = SPECIES_VIBRAVA,
     },
    {
     .iv = 255,
     .level = 48,
     .species = SPECIES_FLYGON,
     },
};

const struct TrainerMonItemDefaultMoves gTrainerParty_Tilly[1] = {
    {
     .iv = 50,
     .level = 11,
     .species = SPECIES_POOCHYENA,
     .heldItem = ITEM_NUGGET,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Dani[1] = {
    {
     .iv = 100,
     .level = 7,
     .species = SPECIES_OOZLE,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Brianna[2] = {
    {
     .iv = 0,
     .level = 10,
     .species = SPECIES_WYNAUT,
     .moves = { MOVE_CHARM, MOVE_ENCORE, MOVE_NONE, MOVE_NONE },
     },
    {
     .iv = 0,
     .level = 10,
     .species = SPECIES_TAILLOW,
     .moves = { MOVE_QUICK_ATTACK, MOVE_GROWL, MOVE_NONE, MOVE_NONE },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Cindy[1] = {
    {
     .iv = 0,
     .level = 11,
     .species = SPECIES_ZIGZAGOON,
     .moves = { MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_NONE, MOVE_NONE },
     },
};

const struct TrainerMonItemDefaultMoves gTrainerParty_Robotnov3[3] = {
    {
     .iv = 255,
     .level = 46,
     .species = SPECIES_GOLBAT,
     .heldItem = ITEM_POWER_HAT,
     },
    {
     .iv = 255,
     .level = 47,
     .species = SPECIES_GOLBAT,
     .heldItem = ITEM_LUM_BERRY,
     },
    {
     .iv = 255,
     .level = 48,
     .species = SPECIES_CROBAT,
     .heldItem = ITEM_MEATY_BELL,
     },
};

const struct TrainerMonItemDefaultMoves gTrainerParty_Anette[1] = {
    {
     .iv = 100,
     .level = 45,
     .species = SPECIES_ROSELIA,
     .heldItem = ITEM_NUGGET,
     },
};

const struct TrainerMonItemDefaultMoves gTrainerParty_Rolv3[3] = {
    {
     .iv = 255,
     .level = 47,
     .species = SPECIES_METANG,
     .heldItem = ITEM_EXCALIBUR,
     },
    {
     .iv = 255,
     .level = 47,
     .species = SPECIES_METANG,
     .heldItem = ITEM_MEWTWO_BRAIN,
     },
    {
     .iv = 255,
     .level = 49,
     .species = SPECIES_METAGROSS,
     .heldItem = ITEM_SNIPE_SCOPE,
     },
};

const struct TrainerMonItemDefaultMoves gTrainerParty_Sputnov3[3] = {
    {
     .iv = 255,
     .level = 46,
     .species = SPECIES_AMPHAROS,
     .heldItem = ITEM_ELECTRICHONEY,
     },
    {
     .iv = 255,
     .level = 47,
     .species = SPECIES_AMPHAROS,
     .heldItem = ITEM_ELECTRICHONEY,
     },
    {
     .iv = 255,
     .level = 48,
     .species = SPECIES_AMPHAROS,
     .heldItem = ITEM_ELECTRICHONEY,
     },
};

const struct TrainerMonItemDefaultMoves gTrainerParty_Vladov3[3] = {
    {
     .iv = 255,
     .level = 46,
     .species = SPECIES_TAUROS,
     .heldItem = ITEM_PLUS_BAND,
     },
    {
     .iv = 255,
     .level = 47,
     .species = SPECIES_MILTANK,
     .heldItem = ITEM_LEFTOVERS,
     },
    {
     .iv = 255,
     .level = 48,
     .species = SPECIES_RAMSHAKER,
     .heldItem = ITEM_CHAOS_OF_ODEN,
     },
};

const struct TrainerMonItemCustomMoves gTrainerParty_Adolv3[3] = {
    {
     .iv = 255,
     .level = 46,
     .species = SPECIES_DRAGONAIR,
     .heldItem = ITEM_KILIN_HORN,
     .moves = { MOVE_FIRE_PUMP, MOVE_THUNDERBOLT, MOVE_SURF, MOVE_ICE_BEAM },
     },
    {
     .iv = 255,
     .level = 46,
     .species = SPECIES_DRAGONAIR,
     .heldItem = ITEM_TREASURE_BALL,
     .moves = { MOVE_OUTRAGE, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_BIND },
     },
    {
     .iv = 255,
     .level = 49,
     .species = SPECIES_DRAGONITE,
     .heldItem = ITEM_TREASURE_BALL,
     .moves = { MOVE_OUTRAGE, MOVE_FLY, MOVE_ICE_BEAM, MOVE_THUNDERBOLT },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_WeiShi[1] = {
    {
     .iv = 0,
     .level = 35,
     .species = SPECIES_METANG,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_ChaoYun[1] = {
    {
     .iv = 0,
     .level = 35,
     .species = SPECIES_CLAYDOL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_ShuYi[1] = {
    {
     .iv = 0,
     .level = 35,
     .species = SPECIES_MEDICHAM,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Hiro[2] = {
    {
     .iv = 200,
     .level = 43,
     .species = SPECIES_WEAVILE,
     .moves = { MOVE_ICE_PUNCH, MOVE_FAINT_ATTACK, MOVE_SHADOW_SWIPE, MOVE_TORMENT },
     },
    {
     .iv = 255,
     .level = 45,
     .species = SPECIES_SEVICIOUS,
     .moves = { MOVE_POISON_TAIL, MOVE_EARTHQUAKE, MOVE_GLARE, MOVE_CRUNCH },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Connie[2] = {
    {
     .iv = 100,
     .level = 40,
     .species = SPECIES_GOLDEEN,
     },
    {
     .iv = 100,
     .level = 40,
     .species = SPECIES_WAILMER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Bridget[1] = {
    {
     .iv = 100,
     .level = 41,
     .species = SPECIES_AZOMBARILL,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Olivia[1] = {
    {
     .iv = 100,
     .level = 41,
     .species = SPECIES_SNORLAX,
     .moves = { MOVE_UPROAR, MOVE_FURY_SWIPES, MOVE_FAKE_OUT, MOVE_WATER_GUN },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Tiffany[3] = {
    {
     .iv = 100,
     .level = 39,
     .species = SPECIES_CARVANHA,
     },
    {
     .iv = 100,
     .level = 39,
     .species = SPECIES_WAILMER,
     },
    {
     .iv = 100,
     .level = 39,
     .species = SPECIES_SHARPEDO,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Jessica[2] = {
    {
     .iv = 10,
     .level = 33,
     .species = SPECIES_KECLEON,
     .moves = { MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FAINT_ATTACK },
     },
    {
     .iv = 10,
     .level = 33,
     .species = SPECIES_SEVIPER,
     .moves = { MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Asimov3[3] = {
    {
     .iv = 20,
     .level = 46,
     .species = SPECIES_TYRANITAR,
     .moves = { MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SKULLBREAKER },
     },
    {
     .iv = 20,
     .level = 47,
     .species = SPECIES_TYRANITAR,
     .moves = { MOVE_CRUNCH, MOVE_SKULLBREAKER, MOVE_ICE_BEAM, MOVE_EARTHQUAKE },
     },
    {
     .iv = 255,
     .level = 48,
     .species = SPECIES_TYRANITAR,
     .moves = { MOVE_CRUNCH, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_HYPER_BEAM },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Barbara[2] = {
    {
     .iv = 200,
     .level = 49,
     .species = SPECIES_HEADDOOM,
     .moves = { MOVE_CRUNCH, MOVE_FIRE_PUMP, MOVE_BRIGHT_IDEA, MOVE_SHADOW_BALL },
     },
    {
     .iv = 200,
     .level = 49,
     .species = SPECIES_POLIWRAITH,
     .moves = { MOVE_DYNAMIC_PUNCH, MOVE_HYPNOSIS, MOVE_SURF, MOVE_ICE_PUNCH },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Mimi[2] = {
    {
     .iv = 240,
     .level = 49,
     .species = SPECIES_YUCK,
     .moves = { MOVE_AMNESIA, MOVE_ACID_ARMOR, MOVE_TOXIC, MOVE_SLUDGE_BOMB },
     },
    {
     .iv = 236,
     .level = 42,
     .species = SPECIES_AZOMBARILL,
     .moves = { MOVE_BODY_SLAM, MOVE_SURF, MOVE_CHARM, MOVE_ROLLOUT },
     },
};

const struct TrainerMonItemDefaultMoves gTrainerParty_Richie[1] = {
    {
     .iv = 0,
     .level = 11,
     .species = SPECIES_SURSKIT,
     .heldItem = ITEM_TAIJI_DUST,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Orobas[1] = {
    {
     .iv = 40,
     .level = 16,
     .species = SPECIES_DIRTKROW,
     },
};

const struct TrainerMonItemDefaultMoves gTrainerParty_Garret[1] = {
    {
     .iv = 0,
     .level = 45,
     .species = SPECIES_AZOMBARILL,
     .heldItem = ITEM_NUGGET,
     },
};

const struct TrainerMonItemDefaultMoves gTrainerParty_Winston1[1] = {
    {
     .iv = 0,
     .level = 27,
     .species = SPECIES_LINOONE,
     .heldItem = ITEM_NUGGET,
     },
};

const struct TrainerMonItemDefaultMoves gTrainerParty_Duncan[1] = {
    {
     .iv = 250,
     .level = 51,
     .species = SPECIES_GORELAX,
     .heldItem = ITEM_PLUS_BAND,
     },
};

const struct TrainerMonItemDefaultMoves gTrainerParty_Dirthugger[1] = {
    {
     .iv = 200,
     .level = 69,
     .species = SPECIES_PELIPPER,
     .heldItem = ITEM_WATER_STONE,
     },
};

const struct TrainerMonItemCustomMoves gTrainerParty_BifBofBee1[1] = {
    {
     .iv = 0,
     .level = 36,
     .species = SPECIES_LINOONE,
     .heldItem = ITEM_NUGGET,
     .moves = { MOVE_FURY_SWIPES, MOVE_MUD_SPORT, MOVE_ODOR_SLEUTH, MOVE_SAND_ATTACK },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Steve1[1] = {
    {
     .iv = 0,
     .level = 20,
     .species = SPECIES_ARON,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Chris[1] = {
    {
     .iv = 0,
     .level = 23,
     .species = SPECIES_LAIRON,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Machi[1] = {
    {
     .iv = 255,
     .level = 48,
     .species = SPECIES_WEAVILE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Kenn[1] = {
    {
     .iv = 0,
     .level = 25,
     .species = SPECIES_LAIRON,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Steve2[1] = {
    {
     .iv = 10,
     .level = 27,
     .species = SPECIES_LAIRON,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Rolv4[2] = {
    {
     .iv = 200,
     .level = 35,
     .species = SPECIES_BELDUM,
     },
    {
     .iv = 200,
     .level = 37,
     .species = SPECIES_METANG,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Eowyn[2] = {
    {
     .iv = 130,
     .level = 64,
     .species = SPECIES_QWILSHARK,
     },
    {
     .iv = 130,
     .level = 64,
     .species = SPECIES_SHIFTRY,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Brunella[2] = {
    {
     .iv = 140,
     .level = 65,
     .species = SPECIES_BEEDRILL,
     },
    {
     .iv = 140,
     .level = 65,
     .species = SPECIES_OMASTAR,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Luis[1] = {
    {
     .iv = 0,
     .level = 16,
     .species = SPECIES_CARVANHA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Vegas[3] = {
    {
     .iv = 0,
     .level = 20,
     .species = SPECIES_MAGIKARP,
     },
    {
     .iv = 0,
     .level = 19,
     .species = SPECIES_QWILFISH,
     },
    {
     .iv = 0,
     .level = 23,
     .species = SPECIES_WINGULL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Pekabo[2] = {
    {
     .iv = 0,
     .level = 24,
     .species = SPECIES_QWILFISH,
     },
    {
     .iv = 0,
     .level = 24,
     .species = SPECIES_QWILFISH,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Tarquin[1] = {
    {
     .iv = 0,
     .level = 22,
     .species = SPECIES_QWILFISH,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Mikhail[1] = {
    {
     .iv = 0,
     .level = 23,
     .species = SPECIES_BARBOACH,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Jackaby[2] = {
    {
     .iv = 0,
     .level = 22,
     .species = SPECIES_QWILFISH,
     },
    {
     .iv = 0,
     .level = 23,
     .species = SPECIES_TELSON,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Matthew[1] = {
    {
     .iv = 0,
     .level = 27,
     .species = SPECIES_CARVANHA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Erlandu[2] = {
    {
     .iv = 0,
     .level = 24,
     .species = SPECIES_NUZLEAF,
     },
    {
     .iv = 0,
     .level = 26,
     .species = SPECIES_GRUMPIG,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Petruchio[3] = {
    {
     .iv = 100,
     .level = 67,
     .species = SPECIES_QWILFISH,
     },
    {
     .iv = 100,
     .level = 67,
     .species = SPECIES_QWILFISH,
     },
    {
     .iv = 100,
     .level = 67,
     .species = SPECIES_QWILSHARK,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Obligation[1] = {
    {
     .iv = 255,
     .level = 73,
     .species = SPECIES_SPIRITOMB,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Cody[2] = {
    {
     .iv = 0,
     .level = 34,
     .species = SPECIES_STARYU,
     },
    {
     .iv = 0,
     .level = 34,
     .species = SPECIES_WINGULL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Stan[1] = {
    {
     .iv = 0,
     .level = 35,
     .species = SPECIES_HORSEA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Chuckles[1] = {
    {
     .iv = 200,
     .level = 70,
     .species = SPECIES_GYARADOS,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_SeamusIi[3] = {
    {
     .iv = 120,
     .level = 68,
     .species = SPECIES_SHARPEDO,
     },
    {
     .iv = 120,
     .level = 68,
     .species = SPECIES_PELIPPER,
     },
    {
     .iv = 120,
     .level = 68,
     .species = SPECIES_SHARPEDO,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_BifBofBee2[2] = {
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_SOLROCK,
     .moves = { MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_HEAT_WAVE, MOVE_SURF },
     },
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_LUNATONE,
     .moves = { MOVE_ROCK_SLIDE, MOVE_COSMIC_POWER, MOVE_RECOVER, MOVE_PSYCHIC },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Gonzales[1] = {
    {
     .iv = 200,
     .level = 80,
     .species = SPECIES_PELIPPER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Shunkle[2] = {
    {
     .iv = 200,
     .level = 64,
     .species = SPECIES_WAILORD,
     },
    {
     .iv = 200,
     .level = 64,
     .species = SPECIES_QWILSHARK,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Benji[1] = {
    {
     .iv = 0,
     .level = 14,
     .species = SPECIES_EYE_EYE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Donatello[1] = {
    {
     .iv = 200,
     .level = 69,
     .species = SPECIES_SMEARGLE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Mushushshu[2] = {
    {
     .iv = 100,
     .level = 65,
     .species = SPECIES_QWILSHARK,
     },
    {
     .iv = 200,
     .level = 68,
     .species = SPECIES_KINGLER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Danny[2] = {
    {
     .iv = 0,
     .level = 37,
     .species = SPECIES_QWILSHARK,
     },
    {
     .iv = 0,
     .level = 37,
     .species = SPECIES_WAILMER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_FunHouse[2] = {
    {
     .iv = 0,
     .level = 64,
     .species = SPECIES_STARMIE,
     },
    {
     .iv = 0,
     .level = 64,
     .species = SPECIES_GYARADOS,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Dudley[3] = {
    {
     .iv = 0,
     .level = 33,
     .species = SPECIES_QWILFISH,
     },
    {
     .iv = 0,
     .level = 33,
     .species = SPECIES_WINGULL,
     },
    {
     .iv = 0,
     .level = 33,
     .species = SPECIES_QWILSHARK,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Chad[2] = {
    {
     .iv = 0,
     .level = 34,
     .species = SPECIES_WINGULL,
     },
    {
     .iv = 0,
     .level = 34,
     .species = SPECIES_WAILMER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Tony[1] = {
    {
     .iv = 10,
     .level = 30,
     .species = SPECIES_SHARPEDO,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Footman2[1] = {
    {
     .iv = 160,
     .level = 50,
     .species = SPECIES_SOLROCK,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Manfred2[2] = {
    {
     .iv = 200,
     .level = 64,
     .species = SPECIES_CROBAT,
     },
    {
     .iv = 200,
     .level = 64,
     .species = SPECIES_WEEZING,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Kerri[2] = {
    {
     .iv = 210,
     .level = 66,
     .species = SPECIES_ROSELIA,
     },
    {
     .iv = 240,
     .level = 65,
     .species = SPECIES_ILLUMISE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Kongamoto[1] = {
    {
     .iv = 100,
     .level = 22,
     .species = SPECIES_SNEASEL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_FinalSmash[2] = {
    {
     .iv = 100,
     .level = 67,
     .species = SPECIES_PRIMEAPE,
     },
    {
     .iv = 100,
     .level = 68,
     .species = SPECIES_HERACROSS,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Hatsuharu[3] = {
    {
     .iv = 100,
     .level = 67,
     .species = SPECIES_HARIYAMA,
     },
    {
     .iv = 100,
     .level = 67,
     .species = SPECIES_MACHAMP,
     },
    {
     .iv = 100,
     .level = 67,
     .species = SPECIES_PRIMEAPE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Ichirou[2] = {
    {
     .iv = 100,
     .level = 56,
     .species = SPECIES_MACHAMP,
     },
    {
     .iv = 100,
     .level = 58,
     .species = SPECIES_PRIMEAPE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Nob[1] = {
    {
     .iv = 100,
     .level = 20,
     .species = SPECIES_MACHOP,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Mary_Sue[1] = {
    {
     .iv = 110,
     .level = 68,
     .species = SPECIES_PARASECT,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_AlCapone[2] = {
    {
     .iv = 120,
     .level = 66,
     .species = SPECIES_LINOONE,
     },
    {
     .iv = 120,
     .level = 66,
     .species = SPECIES_SNORLAX,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Anjou[3] = {
    {
     .iv = 130,
     .level = 67,
     .species = SPECIES_WAILORD,
     },
    {
     .iv = 130,
     .level = 67,
     .species = SPECIES_QWILSHARK,
     },
    {
     .iv = 130,
     .level = 67,
     .species = SPECIES_GYARADOS,
     },
};

const struct TrainerMonItemDefaultMoves gTrainerParty_Missy[4] = {
    {
     .iv = 140,
     .level = 64,
     .species = SPECIES_WHISCASH,
     .heldItem = ITEM_SITRUS_BERRY,
     },
    {
     .iv = 140,
     .level = 64,
     .species = SPECIES_WHISCASH,
     .heldItem = ITEM_VOLCANO_POT,
     },
    {
     .iv = 140,
     .level = 65,
     .species = SPECIES_WEEZING,
     .heldItem = ITEM_LEFTOVERS,
     },
    {
     .iv = 140,
     .level = 66,
     .species = SPECIES_DUSTOX,
     .heldItem = ITEM_SNIPE_SCOPE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Yuji[2] = {
    {
     .iv = 100,
     .level = 26,
     .species = SPECIES_MAKUHITA,
     },
    {
     .iv = 100,
     .level = 26,
     .species = SPECIES_MACHOKE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Daisuke[1] = {
    {
     .iv = 100,
     .level = 35,
     .species = SPECIES_MACHAMP,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Zachary[3] = {
    {
     .iv = 100,
     .level = 42,
     .species = SPECIES_MIGHTYENA,
     },
    {
     .iv = 100,
     .level = 42,
     .species = SPECIES_MIGHTYENA,
     },
    {
     .iv = 100,
     .level = 42,
     .species = SPECIES_MIGHTYENA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Kirk[2] = {
    {
     .iv = 100,
     .level = 18,
     .species = SPECIES_SHINX,
     },
    {
     .iv = 100,
     .level = 18,
     .species = SPECIES_MAGNEMITE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Scott[1] = {
    {
     .iv = 100,
     .level = 19,
     .species = SPECIES_SHINX,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Harvey1[2] = {
    {
     .iv = 100,
     .level = 18,
     .species = SPECIES_MAGNEMITE,
     },
    {
     .iv = 100,
     .level = 18,
     .species = SPECIES_SHINX,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Shawn[3] = {
    {
     .iv = 100,
     .level = 17,
     .species = SPECIES_VOLTORB,
     },
    {
     .iv = 100,
     .level = 17,
     .species = SPECIES_VOLTORB,
     },
    {
     .iv = 100,
     .level = 17,
     .species = SPECIES_VOLTORB,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Randy[3] = {
    {
     .iv = 0,
     .level = 13,
     .species = SPECIES_SHINX,
     },
    {
     .iv = 0,
     .level = 13,
     .species = SPECIES_SHINX,
     },
    {
     .iv = 0,
     .level = 13,
     .species = SPECIES_SHINX,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Dalton[3] = {
    {
     .iv = 200,
     .level = 38,
     .species = SPECIES_LUXIO,
     },
    {
     .iv = 200,
     .level = 41,
     .species = SPECIES_EXPLOUD,
     },
    {
     .iv = 200,
     .level = 42,
     .species = SPECIES_LUXRAY,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Bess[3] = {
    {
     .iv = 100,
     .level = 64,
     .species = SPECIES_WEEZING,
     },
    {
     .iv = 100,
     .level = 65,
     .species = SPECIES_SWAMPERT,
     },
    {
     .iv = 100,
     .level = 66,
     .species = SPECIES_QWILSHARK,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Tohru[3] = {
    {
     .iv = 250,
     .level = 70,
     .species = SPECIES_CLAYDOL,
     },
    {
     .iv = 250,
     .level = 70,
     .species = SPECIES_MEDICHAM,
     },
    {
     .iv = 250,
     .level = 70,
     .species = SPECIES_VIGOURLAN,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Kyou[3] = {
    {
     .iv = 250,
     .level = 70,
     .species = SPECIES_MAGNETON,
     },
    {
     .iv = 250,
     .level = 70,
     .species = SPECIES_EXPLOUD,
     },
    {
     .iv = 250,
     .level = 70,
     .species = SPECIES_EXEGGUTOR,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Yuki[3] = {
    {
     .iv = 250,
     .level = 70,
     .species = SPECIES_WEAVILE,
     },
    {
     .iv = 250,
     .level = 70,
     .species = SPECIES_BEEDRILL,
     },
    {
     .iv = 250,
     .level = 70,
     .species = SPECIES_DODRIO,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Yongliang[3] = {
    {
     .iv = 100,
     .level = 33,
     .species = SPECIES_BALTOY,
     },
    {
     .iv = 100,
     .level = 33,
     .species = SPECIES_BALTOY,
     },
    {
     .iv = 100,
     .level = 34,
     .species = SPECIES_SPOINK,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Flint[1] = {
    {
     .iv = 100,
     .level = 24,
     .species = SPECIES_SLUGMA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_TingFeng[2] = {
    {
     .iv = 100,
     .level = 34,
     .species = SPECIES_BALTOY,
     },
    {
     .iv = 100,
     .level = 34,
     .species = SPECIES_BALTOY,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Jake[1] = {
    {
     .iv = 100,
     .level = 24,
     .species = SPECIES_HOMBONE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Guiren[2] = {
    {
     .iv = 100,
     .level = 31,
     .species = SPECIES_BALTOY,
     },
    {
     .iv = 100,
     .level = 37,
     .species = SPECIES_KADABRA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Bernie1[2] = {
    {
     .iv = 0,
     .level = 19,
     .species = SPECIES_SLUGMA,
     },
    {
     .iv = 0,
     .level = 19,
     .species = SPECIES_WINGULL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Longwei[2] = {
    {
     .iv = 10,
     .level = 36,
     .species = SPECIES_WOBBUFFET,
     },
    {
     .iv = 10,
     .level = 38,
     .species = SPECIES_CELEBI,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Bernie2[2] = {
    {
     .iv = 20,
     .level = 29,
     .species = SPECIES_SLUGMA,
     },
    {
     .iv = 20,
     .level = 29,
     .species = SPECIES_PELIPPER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Mikov4[4] = {
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_VILEPLUME,
     },
    {
     .iv = 255,
     .level = 71,
     .species = SPECIES_BELLOSSOM,
     },
    {
     .iv = 255,
     .level = 71,
     .species = SPECIES_VILEPLUME,
     },
    {
     .iv = 255,
     .level = 72,
     .species = SPECIES_VILEPLUME,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Bobov4[4] = {
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_STEELIX,
     .moves = { MOVE_IRON_DEFENSE, MOVE_IRON_TAIL, MOVE_EARTHQUAKE, MOVE_TOXIC },
     },
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_DIAMANDIX,
     .moves = { MOVE_EARTHQUAKE, MOVE_CRYSTALSTORM, MOVE_IRON_TAIL, MOVE_IRON_DEFENSE },
     },
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_DIAMANDIX,
     .moves = { MOVE_EARTHQUAKE, MOVE_CRYSTALSTORM, MOVE_IRON_DEFENSE, MOVE_IRON_TAIL },
     },
    {
     .iv = 255,
     .level = 71,
     .species = SPECIES_DIAMANDIX,
     .moves = { MOVE_IRON_TAIL, MOVE_IRON_DEFENSE, MOVE_CRYSTALSTORM, MOVE_EARTHQUAKE },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Ken[1] = {
    {
     .iv = 200,
     .level = 34,
     .species = SPECIES_MAGCARGO,
     .moves = { MOVE_ROCK_SLIDE, MOVE_HEAT_WAVE, MOVE_DOUBLE_TEAM, MOVE_SUBSTITUTE },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Hayate[2] = {
    {
     .iv = 0,
     .level = 30,
     .species = SPECIES_SNORLAX,
     .moves = { MOVE_SLEEP_TALK, MOVE_REST, MOVE_BODY_SLAM, MOVE_BRICK_BREAK },
     },
    {
     .iv = 0,
     .level = 30,
     .species = SPECIES_GARDEVOIR,
     .moves = { MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_SLEEP_TALK, MOVE_REST },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Westley[2] = {
    {
     .iv = 0,
     .level = 30,
     .species = SPECIES_LINOONE,
     },
    {
     .iv = 0,
     .level = 30,
     .species = SPECIES_SWELLOW,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Shane[2] = {
    {
     .iv = 0,
     .level = 19,
     .species = SPECIES_SANDSHREW,
     },
    {
     .iv = 0,
     .level = 19,
     .species = SPECIES_NUZLEAF,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Justin[1] = {
    {
     .iv = 0,
     .level = 24,
     .species = SPECIES_KECLEON,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_ChinBao[2] = {
    {
     .iv = 0,
     .level = 33,
     .species = SPECIES_BALTOY,
     },
    {
     .iv = 0,
     .level = 33,
     .species = SPECIES_BALTOY,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Jeff[2] = {
    {
     .iv = 0,
     .level = 9,
     .species = SPECIES_TAILLOW,
     },
    {
     .iv = 0,
     .level = 9,
     .species = SPECIES_KECLEON,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Horoda[1] = {
    {
     .iv = 0,
     .level = 34,
     .species = SPECIES_MUNCHLAX,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Ethan[2] = {
    {
     .iv = 10,
     .level = 26,
     .species = SPECIES_ZIGZAGOON,
     },
    {
     .iv = 10,
     .level = 26,
     .species = SPECIES_TAILLOW,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Gaoler3[2] = {
    {
     .iv = 255,
     .level = 100,
     .species = SPECIES_GRIMREAPER,
     },
    {
     .iv = 255,
     .level = 100,
     .species = SPECIES_GORELAX,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Bravo[3] = {
    {
     .iv = 230,
     .level = 74,
     .species = SPECIES_YUCK,
     },
    {
     .iv = 240,
     .level = 79,
     .species = SPECIES_AZOMBARILL,
     },
    {
     .iv = 230,
     .level = 88,
     .species = SPECIES_GORELAX,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Mina[3] = {
    {
     .iv = 240,
     .level = 100,
     .species = SPECIES_GORELAX,
     },
    {
     .iv = 240,
     .level = 100,
     .species = SPECIES_IRONREAPER,
     },
    {
     .iv = 240,
     .level = 100,
     .species = SPECIES_GRIMREAPER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Brent[1] = {
    {
     .iv = 100,
     .level = 27,
     .species = SPECIES_SURSKIT,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Donald[3] = {
    {
     .iv = 100,
     .level = 25,
     .species = SPECIES_WURMPLE,
     },
    {
     .iv = 100,
     .level = 25,
     .species = SPECIES_SILCOON,
     },
    {
     .iv = 100,
     .level = 25,
     .species = SPECIES_BEAUTIFLY,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Taylor[3] = {
    {
     .iv = 100,
     .level = 25,
     .species = SPECIES_WURMPLE,
     },
    {
     .iv = 100,
     .level = 25,
     .species = SPECIES_CASCOON,
     },
    {
     .iv = 100,
     .level = 25,
     .species = SPECIES_DUSTOX,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_ChikiCorma[3] = {
    {
     .iv = 200,
     .level = 40,
     .species = SPECIES_SHARPEDO,
     },
    {
     .iv = 200,
     .level = 41,
     .species = SPECIES_MIGHTYENA,
     },
    {
     .iv = 220,
     .level = 41,
     .species = SPECIES_MIGHTYENA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Derek[3] = {
    {
     .iv = 100,
     .level = 15,
     .species = SPECIES_HYPEREGG,
     },
    {
     .iv = 150,
     .level = 15,
     .species = SPECIES_DUSTOX,
     },
    {
     .iv = 150,
     .level = 15,
     .species = SPECIES_BEAUTIFLY,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Hatori[3] = {
    {
     .iv = 250,
     .level = 70,
     .species = SPECIES_KECLEON,
     },
    {
     .iv = 250,
     .level = 70,
     .species = SPECIES_WHISCASH,
     },
    {
     .iv = 250,
     .level = 70,
     .species = SPECIES_SABLEYE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Momiji[3] = {
    {
     .iv = 250,
     .level = 70,
     .species = SPECIES_MASQUERAIN,
     },
    {
     .iv = 250,
     .level = 70,
     .species = SPECIES_SWELLOW,
     },
    {
     .iv = 250,
     .level = 70,
     .species = SPECIES_HYPEREGG,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Brandon[4] = {
    {
     .iv = 30,
     .level = 36,
     .species = SPECIES_SURSKIT,
     },
    {
     .iv = 30,
     .level = 36,
     .species = SPECIES_WURMPLE,
     },
    {
     .iv = 30,
     .level = 36,
     .species = SPECIES_SURSKIT,
     },
    {
     .iv = 30,
     .level = 36,
     .species = SPECIES_MASQUERAIN,
     },
};

const struct TrainerMonItemDefaultMoves gTrainerParty_Gunkov4[5] = {
    {
     .iv = 255,
     .level = 69,
     .species = SPECIES_KENCHUKUO,
     .heldItem = ITEM_SPIKED_GLOVE,
     },
    {
     .iv = 255,
     .level = 69,
     .species = SPECIES_KENCHUKUO,
     .heldItem = ITEM_ANADRIN_TALON,
     },
    {
     .iv = 255,
     .level = 69,
     .species = SPECIES_KENCHUKUO,
     .heldItem = ITEM_SPIKED_GLOVE,
     },
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_KENCHUKUO,
     .heldItem = ITEM_ANADRIN_TALON,
     },
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_KENCHUKUO,
     .heldItem = ITEM_MINER_DOLL,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Edward[1] = {
    {
     .iv = 0,
     .level = 16,
     .species = SPECIES_ABRA,
     .moves = { MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Aquifer[1] = {
    {
     .iv = 250,
     .level = 50,
     .species = SPECIES_KINGDRA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Thundora[2] = {
    {
     .iv = 100,
     .level = 48,
     .species = SPECIES_ELECTRODE,
     },
    {
     .iv = 255,
     .level = 50,
     .species = SPECIES_ZAPDOS,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Mons[3] = {
    {
     .iv = 100,
     .level = 47,
     .species = SPECIES_CLAYDOL,
     },
    {
     .iv = 100,
     .level = 47,
     .species = SPECIES_SANDSLASH,
     },
    {
     .iv = 250,
     .level = 49,
     .species = SPECIES_WHISCASH,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Donpunchies[2] = {
    {
     .iv = 255,
     .level = 47,
     .species = SPECIES_AGGRON,
     },
    {
     .iv = 255,
     .level = 47,
     .species = SPECIES_CRADILY,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Joshua[2] = {
    {
     .iv = 0,
     .level = 41,
     .species = SPECIES_KADABRA,
     },
    {
     .iv = 0,
     .level = 41,
     .species = SPECIES_SOLROCK,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Yves[2] = {
    {
     .iv = 200,
     .level = 42,
     .species = SPECIES_GORELAX,
     },
    {
     .iv = 200,
     .level = 44,
     .species = SPECIES_AZOMBARILL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Cameron1[2] = {
    {
     .iv = 10,
     .level = 34,
     .species = SPECIES_KADABRA,
     },
    {
     .iv = 10,
     .level = 34,
     .species = SPECIES_SOLROCK,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Cameron2[2] = {
    {
     .iv = 20,
     .level = 37,
     .species = SPECIES_KADABRA,
     },
    {
     .iv = 20,
     .level = 37,
     .species = SPECIES_SOLROCK,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Cameron3[2] = {
    {
     .iv = 30,
     .level = 40,
     .species = SPECIES_KADABRA,
     },
    {
     .iv = 30,
     .level = 40,
     .species = SPECIES_SOLROCK,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Cameron4[2] = {
    {
     .iv = 40,
     .level = 43,
     .species = SPECIES_SOLROCK,
     },
    {
     .iv = 40,
     .level = 43,
     .species = SPECIES_ALAKAZAM,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Footman3[1] = {
    {
     .iv = 255,
     .level = 28,
     .species = SPECIES_GRAVELER,
     .moves = { MOVE_ROCK_BLAST, MOVE_TACKLE, MOVE_MAGNITUDE, MOVE_MUD_SPORT },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Ventana[2] = {
    {
     .iv = 100,
     .level = 48,
     .species = SPECIES_AERODACTYL,
     },
    {
     .iv = 200,
     .level = 49,
     .species = SPECIES_SKARMORY,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Gaia[1] = {
    {
     .iv = 200,
     .level = 51,
     .species = SPECIES_MEGANIUM,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Flamma[2] = {
    {
     .iv = 100,
     .level = 48,
     .species = SPECIES_PSYPIG,
     },
    {
     .iv = 200,
     .level = 49,
     .species = SPECIES_MOLTRES,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Cherie[1] = {
    {
     .iv = 255,
     .level = 50,
     .species = SPECIES_GALACTIMON,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Alexis[3] = {
    {
     .iv = 0,
     .level = 40,
     .species = SPECIES_KIRLIA,
     },
    {
     .iv = 0,
     .level = 40,
     .species = SPECIES_XATU,
     },
    {
     .iv = 0,
     .level = 40,
     .species = SPECIES_KADABRA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Shubitz[2] = {
    {
     .iv = 200,
     .level = 42,
     .species = SPECIES_OOSHE,
     },
    {
     .iv = 200,
     .level = 43,
     .species = SPECIES_FANGASU,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Jacki1[2] = {
    {
     .iv = 10,
     .level = 34,
     .species = SPECIES_KADABRA,
     },
    {
     .iv = 10,
     .level = 34,
     .species = SPECIES_LUNATONE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Gleis1[2] = {
    {
     .iv = 200,
     .level = 50,
     .species = SPECIES_ALAKAZAM,
     },
    {
     .iv = 200,
     .level = 56,
     .species = SPECIES_FACELEECH,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Jacki2[2] = {
    {
     .iv = 30,
     .level = 40,
     .species = SPECIES_KADABRA,
     },
    {
     .iv = 30,
     .level = 40,
     .species = SPECIES_LUNATONE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Tex[2] = {
    {
     .iv = 240,
     .level = 74,
     .species = SPECIES_SHINIGAMI,
     },
    {
     .iv = 255,
     .level = 74,
     .species = SPECIES_STITCHER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Winston2[1] = {
    {
     .iv = 255,
     .level = 50,
     .species = SPECIES_RAPIDASH,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Tucker[2] = {
    {
     .iv = 0,
     .level = 44,
     .species = SPECIES_LUXIO,
     },
    {
     .iv = 0,
     .level = 44,
     .species = SPECIES_LUXIO,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Thomas[1] = {
    {
     .iv = 0,
     .level = 45,
     .species = SPECIES_ZANGOOSE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Walter[1] = {
    {
     .iv = 10,
     .level = 34,
     .species = SPECIES_LUXIO,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Karkov4[4] = {
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_FLYGON,
     .moves = { MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_FLY, MOVE_FIRE_BLAST },
     },
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_FLYGON,
     .moves = { MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_ICE_BEAM, MOVE_FLY },
     },
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_FLYGON,
     .moves = { MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_FLY, MOVE_SOLAR_BEAM },
     },
    {
     .iv = 255,
     .level = 71,
     .species = SPECIES_FLYGON,
     .moves = { MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_FLY, MOVE_SKULLBREAKER },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Robotnov4[4] = {
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_CROBAT,
     .moves = { MOVE_HEADBUTT, MOVE_POISON_FANG, MOVE_AIR_CUTTER, MOVE_MEAN_LOOK },
     },
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_CROBAT,
     .moves = { MOVE_HYPNOSIS, MOVE_POISON_FANG, MOVE_AIR_CUTTER, MOVE_MEAN_LOOK },
     },
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_CROBAT,
     .moves = { MOVE_CONFUSE_RAY, MOVE_MEAN_LOOK, MOVE_POISON_FANG, MOVE_AIR_CUTTER },
     },
    {
     .iv = 255,
     .level = 71,
     .species = SPECIES_CROBAT,
     .moves = { MOVE_AERIAL_ACE, MOVE_MEAN_LOOK, MOVE_CONFUSE_RAY, MOVE_TOXIC },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Rolv5[3] = {
    {
     .iv = 255,
     .level = 71,
     .species = SPECIES_METAGROSS,
     .moves = { MOVE_PSYCHIC, MOVE_AGILITY, MOVE_METEOR_MASH, MOVE_EARTHQUAKE },
     },
    {
     .iv = 255,
     .level = 71,
     .species = SPECIES_METAGROSS,
     .moves = { MOVE_AGILITY, MOVE_PSYCHIC, MOVE_METEOR_MASH, MOVE_EARTHQUAKE },
     },
    {
     .iv = 255,
     .level = 71,
     .species = SPECIES_METAGROSS,
     .moves = { MOVE_PSYCHIC, MOVE_AGILITY, MOVE_METEOR_MASH, MOVE_EARTHQUAKE },
     },
};

const struct TrainerMonItemCustomMoves gTrainerParty_Caitlin[5] = {
    {
     .iv = 250,
     .level = 53,
     .species = SPECIES_HARIYAMA,
     .heldItem = ITEM_LEFTOVERS,
     .moves = { MOVE_WHIRLWIND, MOVE_BELLY_DRUM, MOVE_VITAL_THROW, MOVE_EARTHQUAKE },
     },
    {
     .iv = 250,
     .level = 54,
     .species = SPECIES_MACHAMP,
     .heldItem = ITEM_SPIKED_GLOVE,
     .moves = { MOVE_SCARY_FACE, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_CROSS_CHOP },
     },
    {
     .iv = 250,
     .level = 55,
     .species = SPECIES_BRELOOM,
     .heldItem = ITEM_WONDERPLUM,
     .moves = { MOVE_LEECH_SEED, MOVE_FOCUS_PUNCH, MOVE_SPORE, MOVE_GIGA_DRAIN },
     },
    {
     .iv = 250,
     .level = 56,
     .species = SPECIES_BLAZIKEN,
     .heldItem = ITEM_FLASH_SCALES,
     .moves = { MOVE_BLAST_BURN, MOVE_FRICTIONKICK, MOVE_SKY_UPPERCUT, MOVE_BRIGHT_IDEA },
     },
    {
     .iv = 255,
     .level = 57,
     .species = SPECIES_KENCHUKUO,
     .heldItem = ITEM_SNIPE_SCOPE,
     .moves = { MOVE_AIR_CUTTER, MOVE_SLASH, MOVE_CROSS_CHOP, MOVE_SHADOW_SWIPE },
     },
};

const struct TrainerMonItemCustomMoves gTrainerParty_Benny1[5] = {
    {
     .iv = 250,
     .level = 57,
     .species = SPECIES_TROPIUS,
     .heldItem = ITEM_LEFTOVERS,
     .moves = { MOVE_FLY, MOVE_RAZOR_LEAF, MOVE_BODY_SLAM, MOVE_SLEEP_POWDER },
     },
    {
     .iv = 250,
     .level = 58,
     .species = SPECIES_SWELLOW,
     .heldItem = ITEM_ANADRIN_TALON,
     .moves = { MOVE_WING_ATTACK, MOVE_FRUSTRATION, MOVE_QUICK_ATTACK, MOVE_SWORDS_DANCE },
     },
    {
     .iv = 250,
     .level = 59,
     .species = SPECIES_ALTARIA,
     .heldItem = ITEM_TREASURE_BALL,
     .moves = { MOVE_DRAGON_BREATH, MOVE_FURY_DANCE, MOVE_BODY_SLAM, MOVE_EARTHQUAKE },
     },
    {
     .iv = 250,
     .level = 59,
     .species = SPECIES_PELIPPER,
     .heldItem = ITEM_SOMA,
     .moves = { MOVE_STOCKPILE, MOVE_STORM_SURGE, MOVE_FLY, MOVE_PROTECT },
     },
    {
     .iv = 255,
     .level = 60,
     .species = SPECIES_KENCHUKUO,
     .heldItem = ITEM_SITRUS_BERRY,
     .moves = { MOVE_EARTHQUAKE, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_CROSS_CHOP },
     },
};

const struct TrainerMonItemCustomMoves gTrainerParty_Glacia[5] = {
    {
     .iv = 250,
     .level = 59,
     .species = SPECIES_GLALIE,
     .heldItem = ITEM_RAINBOWFROST,
     .moves = { MOVE_LIGHT_SCREEN, MOVE_CRUNCH, MOVE_HAIL, MOVE_ICE_BEAM },
     },
    {
     .iv = 250,
     .level = 60,
     .species = SPECIES_WALREIN,
     .heldItem = ITEM_LEFTOVERS,
     .moves = { MOVE_SURF, MOVE_BODY_SLAM, MOVE_HAIL, MOVE_ICE_BALL },
     },
    {
     .iv = 250,
     .level = 61,
     .species = SPECIES_WEAVILE,
     .heldItem = ITEM_RAINBOWFROST,
     .moves = { MOVE_SHADOW_SWIPE, MOVE_FAINT_ATTACK, MOVE_HAIL, MOVE_ICE_PUNCH },
     },
    {
     .iv = 250,
     .level = 62,
     .species = SPECIES_CLOYSTER,
     .heldItem = ITEM_RAINBOWFROST,
     .moves = { MOVE_CRYSTALSTORM, MOVE_ICE_BEAM, MOVE_SURF, MOVE_HAIL },
     },
    {
     .iv = 255,
     .level = 64,
     .species = SPECIES_ARTICUNO,
     .heldItem = ITEM_SITRUS_BERRY,
     .moves = { MOVE_MIND_READER, MOVE_HAIL, MOVE_BLIZZARD, MOVE_SHEER_COLD },
     },
};

const struct TrainerMonItemCustomMoves gTrainerParty_Indigo[5] = {
    {
     .iv = 250,
     .level = 62,
     .species = SPECIES_LUXRAY,
     .heldItem = ITEM_ELECTRICHONEY,
     .moves = { MOVE_CRUNCH, MOVE_DISCHARGE, MOVE_EARTHQUAKE, MOVE_BODY_SLAM },
     },
    {
     .iv = 250,
     .level = 63,
     .species = SPECIES_RAICHU,
     .heldItem = ITEM_ELECTRICHONEY,
     .moves = { MOVE_THUNDERBOLT, MOVE_IRON_TAIL, MOVE_SWIFT, MOVE_BRIGHT_IDEA },
     },
    {
     .iv = 250,
     .level = 64,
     .species = SPECIES_AMPHAROS,
     .heldItem = ITEM_CHAOS_OF_ODEN,
     .moves = { MOVE_THUNDER_PUNCH, MOVE_COTTON_SPORE, MOVE_THUNDER_WAVE, MOVE_ICE_BEAM },
     },
    {
     .iv = 250,
     .level = 65,
     .species = SPECIES_ZEBSTRIKA,
     .heldItem = ITEM_ELECTRICHONEY,
     .moves = { MOVE_DISCHARGE, MOVE_AGILITY, MOVE_FLAME_WHEEL, MOVE_DOUBLE_TEAM },
     },
    {
     .iv = 255,
     .level = 67,
     .species = SPECIES_ZAPDOS,
     .heldItem = ITEM_SITRUS_BERRY,
     .moves = { MOVE_DRILL_PECK, MOVE_THUNDERBOLT, MOVE_DETECT, MOVE_AGILITY },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Roxanne[2] = {
    {
     .iv = 150,
     .level = 14,
     .species = SPECIES_GEODUDE,
     .moves = { MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_ROCK_THROW, MOVE_ROCK_TOMB },
     },
    {
     .iv = 200,
     .level = 15,
     .species = SPECIES_NOSEPASS,
     .moves = { MOVE_TACKLE, MOVE_HARDEN, MOVE_ROCK_THROW, MOVE_ROCK_TOMB },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Haruko[6] = {
    {
     .iv = 150,
     .level = 18,
     .species = SPECIES_POOCHYENA,
     .moves = { MOVE_HOWL, MOVE_CRUNCH, MOVE_TAKE_DOWN, MOVE_BULK_UP },
     },
    {
     .iv = 200,
     .level = 18,
     .species = SPECIES_ABSOL,
     .moves = { MOVE_RAZOR_WIND, MOVE_SHADOW_SWIPE, MOVE_SWORDS_DANCE, MOVE_BULK_UP },
     },
    {
     .iv = 200,
     .level = 19,
     .species = SPECIES_CARVANHA,
     .moves = { MOVE_BITE, MOVE_WATERFALL, MOVE_BULK_UP, MOVE_SLAM },
     },
    {
     .iv = 200,
     .level = 22,
     .species = SPECIES_SNEASEL,
     .moves = { MOVE_SHADOW_SWIPE, MOVE_ICE_PUNCH, MOVE_BULK_UP, MOVE_ICEBREATH },
     },
    {
     .iv = 255,
     .level = 25,
     .species = SPECIES_LUXRAY,
     .moves = { MOVE_BITE, MOVE_THUNDER_SHOCK, MOVE_BULK_UP, MOVE_NONE },
     },
    {
     .iv = 255,
     .level = 1,
     .species = SPECIES_KINGMADIO,
     .moves = { MOVE_NIGHT_SHADE, MOVE_NONE, MOVE_NONE, MOVE_NONE },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Wattson3[3] = {
    {
     .iv = 200,
     .level = 22,
     .species = SPECIES_MAGNEMITE,
     .moves = { MOVE_SUPERSONIC, MOVE_SONIC_BOOM, MOVE_THUNDER_SHOCK, MOVE_THUNDER_WAVE },
     },
    {
     .iv = 200,
     .level = 20,
     .species = SPECIES_VOLTORB,
     .moves = { MOVE_ROLLOUT, MOVE_SELF_DESTRUCT, MOVE_SPARK, MOVE_SONIC_BOOM },
     },
    {
     .iv = 250,
     .level = 23,
     .species = SPECIES_MAGNETON,
     .moves = { MOVE_SUPERSONIC, MOVE_SONIC_BOOM, MOVE_SHOCK_WAVE, MOVE_THUNDER_WAVE },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Veracity[6] = {
    {
     .iv = 255,
     .level = 46,
     .species = SPECIES_PSYPIG,
     .moves = { MOVE_FIRE_BLAST, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_SUBSTITUTE },
     },
    {
     .iv = 255,
     .level = 47,
     .species = SPECIES_NINETALES,
     .moves = { MOVE_FIRE_PUMP, MOVE_HYPNOSIS, MOVE_SKULLBREAKER, MOVE_WILL_O_WISP },
     },
    {
     .iv = 255,
     .level = 48,
     .species = SPECIES_TORKOAL,
     .moves = { MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_AMNESIA, MOVE_IRON_DEFENSE },
     },
    {
     .iv = 255,
     .level = 49,
     .species = SPECIES_FLAREON,
     .moves = { MOVE_FIRE_PUMP, MOVE_QUICK_ATTACK, MOVE_BITE, MOVE_DIG },
     },
    {
     .iv = 255,
     .level = 50,
     .species = SPECIES_BLAZIKEN,
     .moves = { MOVE_FIRE_PUNCH, MOVE_SKY_UPPERCUT, MOVE_BEAT_UP, MOVE_SWORDS_DANCE },
     },
    {
     .iv = 255,
     .level = 51,
     .species = SPECIES_HO_OH,
     .moves = { MOVE_SACRED_FIRE, MOVE_FLY, MOVE_PSYCHIC, MOVE_EARTHQUAKE },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Norman[6] = {
    {
     .iv = 255,
     .level = 62,
     .species = SPECIES_MANKEY,
     .moves = { MOVE_FACADE, MOVE_YAWN, MOVE_SLACK_OFF, MOVE_FAINT_ATTACK },
     },
    {
     .iv = 255,
     .level = 63,
     .species = SPECIES_MANKEY,
     .moves = { MOVE_SLASH, MOVE_ENCORE, MOVE_FACADE, MOVE_SLACK_OFF },
     },
    {
     .iv = 255,
     .level = 64,
     .species = SPECIES_MANKEY,
     .moves = { MOVE_DYNAMIC_PUNCH, MOVE_SLACK_OFF, MOVE_FACADE, MOVE_FAINT_ATTACK },
     },
    {
     .iv = 255,
     .level = 64,
     .species = SPECIES_GORELAX,
     .moves = { MOVE_FRUSTRATION, MOVE_YAWN, MOVE_REST, MOVE_SKULLBREAKER },
     },
    {
     .iv = 255,
     .level = 66,
     .species = SPECIES_GORELAX,
     .moves = { MOVE_FACADE, MOVE_BODY_SLAM, MOVE_CRUNCH, MOVE_REST },
     },
    {
     .iv = 255,
     .level = 69,
     .species = SPECIES_YUCK,
     .moves = { MOVE_SLUDGE_BOMB, MOVE_ACID_ARMOR, MOVE_AMNESIA, MOVE_TOXIC },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Winona[4] = {
    {
     .iv = 200,
     .level = 47,
     .species = SPECIES_DIRTKROW,
     .moves = { MOVE_QUICK_ATTACK, MOVE_AERIAL_ACE, MOVE_FAINT_ATTACK, MOVE_GLARE },
     },
    {
     .iv = 250,
     .level = 48,
     .species = SPECIES_GRIMREAPER,
     .moves = { MOVE_AIR_CUTTER, MOVE_SHADOW_SWIPE, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE },
     },
    {
     .iv = 250,
     .level = 49,
     .species = SPECIES_IRONREAPER,
     .moves = { MOVE_IRON_TAIL, MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH },
     },
    {
     .iv = 250,
     .level = 51,
     .species = SPECIES_SCAR_LUGIA,
     .moves = { MOVE_EARTHQUAKE, MOVE_AEROBLAST, MOVE_PSYCHIC, MOVE_COSMIC_POWER },
     },
};

const struct TrainerMonItemCustomMoves gTrainerParty_TateAndLiza[2] = {
    {
     .iv = 250,
     .level = 42,
     .species = SPECIES_LUNATONE,
     .heldItem = ITEM_NONE,
     .moves = { MOVE_LIGHT_SCREEN, MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_CALM_MIND },
     },
    {
     .iv = 250,
     .level = 42,
     .species = SPECIES_SOLROCK,
     .heldItem = ITEM_NONE,
     .moves = { MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FIRE_PUMP },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Esau[5] = {
    {
     .iv = 255,
     .level = 68,
     .species = SPECIES_VIGOURLAN,
     .moves = { MOVE_PSYCHIC, MOVE_SLASH, MOVE_HYPER_BEAM, MOVE_PROTECT },
     },
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_BASCULIN,
     .moves = { MOVE_SURF, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_HYPER_BEAM },
     },
    {
     .iv = 255,
     .level = 72,
     .species = SPECIES_KENCHUKUO,
     .moves = { MOVE_CROSS_CHOP, MOVE_ICE_PUNCH, MOVE_EARTHQUAKE, MOVE_HYPER_BEAM },
     },
    {
     .iv = 255,
     .level = 74,
     .species = SPECIES_GYARADOS,
     .moves = { MOVE_EARTHQUAKE, MOVE_FURY_DANCE, MOVE_SURF, MOVE_HYPER_BEAM },
     },
    {
     .iv = 255,
     .level = 77,
     .species = SPECIES_SPIRITOMB,
     .moves = { MOVE_PAIN_SPLIT, MOVE_SHADOW_BALL, MOVE_FAINT_ATTACK, MOVE_HYPER_BEAM },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Morph1[1] = {
    {
     .iv = 255,
     .level = 30,
     .species = SPECIES_DITTO,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Ted[1] = {
    {
     .iv = 10,
     .level = 17,
     .species = SPECIES_RALTS,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Paul[3] = {
    {
     .iv = 10,
     .level = 15,
     .species = SPECIES_HOMBONE,
     },
    {
     .iv = 10,
     .level = 15,
     .species = SPECIES_ODDISH,
     },
    {
     .iv = 10,
     .level = 15,
     .species = SPECIES_WINGULL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Morph2[1] = {
    {
     .iv = 255,
     .level = 30,
     .species = SPECIES_DITTO,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Jerry[2] = {
    {
     .iv = 30,
     .level = 29,
     .species = SPECIES_KIRLIA,
     },
    {
     .iv = 30,
     .level = 29,
     .species = SPECIES_MEDITITE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Nottingham[2] = {
    {
     .iv = 140,
     .level = 74,
     .species = SPECIES_STITCHER,
     },
    {
     .iv = 180,
     .level = 74,
     .species = SPECIES_SHINIGAMI,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Bandito[3] = {
    {
     .iv = 110,
     .level = 72,
     .species = SPECIES_ANTISPIRAL,
     },
    {
     .iv = 110,
     .level = 72,
     .species = SPECIES_ANTISPIRAL,
     },
    {
     .iv = 100,
     .level = 72,
     .species = SPECIES_STITCHER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Scissora[2] = {
    {
     .iv = 100,
     .level = 30,
     .species = SPECIES_SPINDA,
     },
    {
     .iv = 100,
     .level = 32,
     .species = SPECIES_ZANGOOSE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Georgia[2] = {
    {
     .iv = 10,
     .level = 16,
     .species = SPECIES_SHROOMISH,
     },
    {
     .iv = 10,
     .level = 16,
     .species = SPECIES_BEAUTIFLY,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Karen[2] = {
    {
     .iv = 20,
     .level = 26,
     .species = SPECIES_SHROOMISH,
     },
    {
     .iv = 20,
     .level = 26,
     .species = SPECIES_WHISMUR,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Footman4[2] = {
    {
     .iv = 230,
     .level = 47,
     .species = SPECIES_GOLEM,
     },
    {
     .iv = 190,
     .level = 47,
     .species = SPECIES_ARMALDO,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Footman5[2] = {
    {
     .iv = 200,
     .level = 48,
     .species = SPECIES_BRELOOM,
     },
    {
     .iv = 200,
     .level = 48,
     .species = SPECIES_EXPLOUD,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_FiveNinja3[2] = {
    {
     .iv = 250,
     .level = 48,
     .species = SPECIES_BEEDRILL,
     },
    {
     .iv = 250,
     .level = 48,
     .species = SPECIES_SEVICIOUS,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_JadeAndSara[4] = {
    {
     .iv = 255,
     .level = 46,
     .species = SPECIES_MASQUERAIN,
     .moves = { MOVE_AIR_CUTTER, MOVE_SILVER_WIND, MOVE_AGILITY, MOVE_CONFUSE_RAY },
     },
    {
     .iv = 255,
     .level = 46,
     .species = SPECIES_SLAKING,
     .moves = { MOVE_FOCUS_PUNCH, MOVE_YAWN, MOVE_SLACK_OFF, MOVE_FAINT_ATTACK },
     },
    {
     .iv = 255,
     .level = 46,
     .species = SPECIES_SANDSLASH,
     .moves = { MOVE_SLASH, MOVE_SHADOW_SWIPE, MOVE_POISON_TAIL, MOVE_EARTHQUAKE },
     },
    {
     .iv = 255,
     .level = 46,
     .species = SPECIES_VIGOURLAN,
     .moves = { MOVE_PSYCHIC, MOVE_SLASH, MOVE_SLACK_OFF, MOVE_FACADE },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_KatAndBert[2] = {
    {
     .iv = 255,
     .level = 25,
     .species = SPECIES_POLIWORM,
     .moves = { MOVE_HYPNOSIS, MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE, MOVE_WATERFALL },
     },
    {
     .iv = 255,
     .level = 25,
     .species = SPECIES_SHRIVLSAUR,
     .moves = { MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_PROTECT, MOVE_DOUBLE_TEAM },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_AnnaAndMeg1[2] = {
    {
     .iv = 10,
     .level = 26,
     .species = SPECIES_ZIGZAGOON,
     .moves = { MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH },
     },
    {
     .iv = 10,
     .level = 28,
     .species = SPECIES_MAKUHITA,
     .moves = { MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Sasha[2] = {
    {
     .iv = 200,
     .level = 38,
     .species = SPECIES_MIASMAR,
     .moves = { MOVE_SMOKESCREEN, MOVE_FIRE_PUNCH, MOVE_SUBSTITUTE, MOVE_FOCUS_PUNCH },
     },
    {
     .iv = 200,
     .level = 38,
     .species = SPECIES_ELECTABUGS,
     .moves = { MOVE_THUNDER_PUNCH, MOVE_SEISMIC_TOSS, MOVE_CHARGE, MOVE_POUND },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_DoubleAct2[2] = {
    {
     .iv = 255,
     .level = 48,
     .species = SPECIES_HOMBEAST,
     .moves = { MOVE_CURSE_CLAW, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_GUILLOTINE },
     },
    {
     .iv = 255,
     .level = 48,
     .species = SPECIES_CRADILY,
     .moves = { MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_PROTECT },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_AnnaAndMeg2[2] = {
    {
     .iv = 40,
     .level = 35,
     .species = SPECIES_LINOONE,
     .moves = { MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH },
     },
    {
     .iv = 40,
     .level = 37,
     .species = SPECIES_HARIYAMA,
     .moves = { MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE },
     },
};

const struct TrainerMonItemDefaultMoves gTrainerParty_Mugwin1[2] = {
    {
     .iv = 25,
     .level = 28,
     .species = SPECIES_GOLBAT,
     .heldItem = ITEM_ORAN_BERRY,
     },
    {
     .iv = 25,
     .level = 29,
     .species = SPECIES_LINOONE,
     .heldItem = ITEM_ORAN_BERRY,
     },
};

const struct TrainerMonItemDefaultMoves gTrainerParty_Miguel2[1] = {
    {
     .iv = 0,
     .level = 16,
     .species = SPECIES_SKITTY,
     .heldItem = ITEM_ORAN_BERRY,
     },
};

const struct TrainerMonItemCustomMoves gTrainerParty_Colton[6] = {
    {
     .iv = 0,
     .level = 22,
     .species = SPECIES_SKITTY,
     .heldItem = ITEM_ORAN_BERRY,
     .moves = { MOVE_ASSIST, MOVE_CHARM, MOVE_FAINT_ATTACK, MOVE_HEAL_BELL },
     },
    {
     .iv = 0,
     .level = 36,
     .species = SPECIES_SKITTY,
     .heldItem = ITEM_ORAN_BERRY,
     .moves = { MOVE_ASSIST, MOVE_CHARM, MOVE_FAINT_ATTACK, MOVE_HEAL_BELL },
     },
    {
     .iv = 0,
     .level = 40,
     .species = SPECIES_SKITTY,
     .heldItem = ITEM_ORAN_BERRY,
     .moves = { MOVE_ASSIST, MOVE_CHARM, MOVE_FAINT_ATTACK, MOVE_HEAL_BELL },
     },
    {
     .iv = 0,
     .level = 12,
     .species = SPECIES_SKITTY,
     .heldItem = ITEM_ORAN_BERRY,
     .moves = { MOVE_ASSIST, MOVE_CHARM, MOVE_FAINT_ATTACK, MOVE_HEAL_BELL },
     },
    {
     .iv = 0,
     .level = 30,
     .species = SPECIES_SKITTY,
     .heldItem = ITEM_ORAN_BERRY,
     .moves = { MOVE_ASSIST, MOVE_CHARM, MOVE_FAINT_ATTACK, MOVE_HEAL_BELL },
     },
    {
     .iv = 0,
     .level = 42,
     .species = SPECIES_DELCATTY,
     .heldItem = ITEM_ORAN_BERRY,
     .moves = { MOVE_ASSIST, MOVE_CHARM, MOVE_FAINT_ATTACK, MOVE_HEAL_BELL },
     },
};

const struct TrainerMonItemCustomMoves gTrainerParty_Chloe1[6] = {
    {
     .iv = 250,
     .level = 46,
     .species = SPECIES_ALAKAZAM,
     .heldItem = ITEM_MEWTWO_BRAIN,
     .moves = { MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH },
     },
    {
     .iv = 250,
     .level = 47,
     .species = SPECIES_WIGGLYTUFF,
     .heldItem = ITEM_PLUS_BAND,
     .moves = { MOVE_BODY_SLAM, MOVE_SING, MOVE_ROLLOUT, MOVE_SKULLBREAKER },
     },
    {
     .iv = 250,
     .level = 48,
     .species = SPECIES_AGGRON,
     .heldItem = ITEM_OLD_BRICK,
     .moves = { MOVE_ROCK_SLIDE, MOVE_IRON_TAIL, MOVE_BITE, MOVE_FOCUS_PUNCH },
     },
    {
     .iv = 250,
     .level = 49,
     .species = SPECIES_PERSIAN,
     .heldItem = ITEM_FLASH_SCALES,
     .moves = { MOVE_SLASH, MOVE_BRICK_BREAK, MOVE_EARTHQUAKE, MOVE_HYPNOSIS },
     },
    {
     .iv = 255,
     .level = 49,
     .species = SPECIES_GENGAR,
     .heldItem = ITEM_CURSED_SKULL,
     .moves = { MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_SHADOW_BALL, MOVE_MEAN_LOOK },
     },
    {
     .iv = 200,
     .level = 50,
     .species = SPECIES_FACELEECH,
     .heldItem = ITEM_SNAKE_EYES,
     .moves = { MOVE_POISON_FANG, MOVE_NONE, MOVE_NONE, MOVE_NONE },
     },
};

const struct TrainerMonItemDefaultMoves gTrainerParty_Fishgirl2[1] = {
    {
     .iv = 255,
     .level = 75,
     .species = SPECIES_SWAMPERT,
     .heldItem = ITEM_SALAC_BERRY,
     },
};

const struct TrainerMonItemDefaultMoves gTrainerParty_Manzana[1] = {
    {
     .iv = 255,
     .level = 75,
     .species = SPECIES_SABLEYE,
     .heldItem = ITEM_QUALOT_BERRY,
     },
};

const struct TrainerMonItemDefaultMoves gTrainerParty_Miguel3[1] = {
    {
     .iv = 0,
     .level = 36,
     .species = SPECIES_DELCATTY,
     .heldItem = ITEM_SITRUS_BERRY,
     },
};

const struct TrainerMonItemDefaultMoves gTrainerParty_Mugwin2[1] = {
    {
     .iv = 50,
     .level = 34,
     .species = SPECIES_LOUDRED,
     .heldItem = ITEM_ORAN_BERRY,
     },
};

const struct TrainerMonItemDefaultMoves gTrainerParty_Ugbuoon[1] = {
    {
     .iv = 255,
     .level = 49,
     .species = SPECIES_A_MONSTER,
     .heldItem = ITEM_LIECHI_BERRY,
     },
};

const struct TrainerMonItemDefaultMoves gTrainerParty_Marissa[3] = {
    {
     .iv = 100,
     .level = 36,
     .species = SPECIES_X43874,
     .heldItem = ITEM_ORAN_BERRY,
     },
    {
     .iv = 100,
     .level = 38,
     .species = SPECIES_GRAVEILL,
     .heldItem = ITEM_ORAN_BERRY,
     },
    {
     .iv = 100,
     .level = 40,
     .species = SPECIES_AZOMBARILL,
     .heldItem = ITEM_ORAN_BERRY,
     },
};

const struct TrainerMonItemDefaultMoves gTrainerParty_Rockit[2] = {
    {
     .iv = 0,
     .level = 25,
     .species = SPECIES_MEDITITE,
     .heldItem = ITEM_SPIKED_GLOVE,
     },
    {
     .iv = 0,
     .level = 25,
     .species = SPECIES_WHISMUR,
     .heldItem = ITEM_PLUS_BAND,
     },
};

const struct TrainerMonItemDefaultMoves gTrainerParty_Isabel1[2] = {
    {
     .iv = 10,
     .level = 26,
     .species = SPECIES_LUXRAY,
     .heldItem = ITEM_ORAN_BERRY,
     },
    {
     .iv = 10,
     .level = 26,
     .species = SPECIES_WEAVILE,
     .heldItem = ITEM_ORAN_BERRY,
     },
};

const struct TrainerMonItemDefaultMoves gTrainerParty_Isabel2[2] = {
    {
     .iv = 200,
     .level = 70,
     .species = SPECIES_GORELAX,
     .heldItem = ITEM_SALAC_BERRY,
     },
    {
     .iv = 200,
     .level = 72,
     .species = SPECIES_POLIWRAITH,
     .heldItem = ITEM_LIECHI_BERRY,
     },
};

const struct TrainerMonItemDefaultMoves gTrainerParty_Tarnation[2] = {
    {
     .iv = 230,
     .level = 70,
     .species = SPECIES_SHINIGAMI,
     .heldItem = ITEM_LIECHI_BERRY,
     },
    {
     .iv = 230,
     .level = 72,
     .species = SPECIES_STITCHER,
     .heldItem = ITEM_PETAYA_BERRY,
     },
};

const struct TrainerMonItemDefaultMoves gTrainerParty_Hannah[2] = {
    {
     .iv = 240,
     .level = 75,
     .species = SPECIES_MIASMAR,
     .heldItem = ITEM_SITRUS_BERRY,
     },
    {
     .iv = 240,
     .level = 75,
     .species = SPECIES_ELECTABUGS,
     .heldItem = ITEM_SITRUS_BERRY,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Guardian[1] = {
    {
     .iv = 255,
     .level = 80,
     .species = SPECIES_WALREIN,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Chloe2[1] = {
    {
     .iv = 210,
     .level = 31,
     .species = SPECIES_HOMBEAST,
     .moves = { MOVE_ARM_THRUST, MOVE_KNOCK_OFF, MOVE_SAND_ATTACK, MOVE_DIG },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Perkins[1] = {
    {
     .iv = 220,
     .level = 52,
     .species = SPECIES_MIASMAR,
     .moves = { MOVE_FIRE_PUMP, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_MEGA_PUNCH },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Magdalene[1] = {
    {
     .iv = 230,
     .level = 50,
     .species = SPECIES_GRIMREAPER,
     .moves = { MOVE_AERIAL_ACE, MOVE_FURY_CUTTER, MOVE_SLASH, MOVE_FOCUS_ENERGY },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Timothy[1] = {
    {
     .iv = 240,
     .level = 40,
     .species = SPECIES_HARIYAMA,
     .moves = { MOVE_ARM_THRUST, MOVE_BELLY_DRUM, MOVE_SAND_ATTACK, MOVE_DIG },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Mugwin3[1] = {
    {
     .iv = 200,
     .level = 34,
     .species = SPECIES_MACHOKE,
     .moves = { MOVE_SUBMISSION, MOVE_SCARY_FACE, MOVE_ICE_PUNCH, MOVE_PROTECT },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_QingXue[2] = {
    {
     .iv = 200,
     .level = 35,
     .species = SPECIES_BALTOY,
     },
    {
     .iv = 200,
     .level = 36,
     .species = SPECIES_SOLROCK,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Shelby1[2] = {
    {
     .iv = 210,
     .level = 30,
     .species = SPECIES_MEDITITE,
     },
    {
     .iv = 210,
     .level = 30,
     .species = SPECIES_MAKUHITA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Kathy[2] = {
    {
     .iv = 220,
     .level = 74,
     .species = SPECIES_AZOMBARILL,
     },
    {
     .iv = 220,
     .level = 75,
     .species = SPECIES_YUCK,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Shelby2[2] = {
    {
     .iv = 230,
     .level = 36,
     .species = SPECIES_MEDICHAM,
     },
    {
     .iv = 230,
     .level = 36,
     .species = SPECIES_HARIYAMA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Shelby3[2] = {
    {
     .iv = 240,
     .level = 39,
     .species = SPECIES_MEDICHAM,
     },
    {
     .iv = 240,
     .level = 39,
     .species = SPECIES_HARIYAMA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Calvin1[1] = {
    {
     .iv = 0,
     .level = 5,
     .species = SPECIES_ZIGZAGOON,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Laurence[2] = {
    {
     .iv = 0,
     .level = 6,
     .species = SPECIES_SEEDOT,
     },
    {
     .iv = 0,
     .level = 8,
     .species = SPECIES_TAILLOW,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Josh[3] = {
    {
     .iv = 100,
     .level = 10,
     .species = SPECIES_GEODUDE,
     .moves = { MOVE_TACKLE, MOVE_NONE, MOVE_NONE, MOVE_NONE },
     },
    {
     .iv = 100,
     .level = 8,
     .species = SPECIES_GEODUDE,
     .moves = { MOVE_TACKLE, MOVE_NONE, MOVE_NONE, MOVE_NONE },
     },
    {
     .iv = 100,
     .level = 6,
     .species = SPECIES_GEODUDE,
     .moves = { MOVE_TACKLE, MOVE_NONE, MOVE_NONE, MOVE_NONE },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Tommy[1] = {
    {
     .iv = 100,
     .level = 11,
     .species = SPECIES_GEODUDE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Asmodeus[2] = {
    {
     .iv = 40,
     .level = 16,
     .species = SPECIES_ANORITH,
     },
    {
     .iv = 40,
     .level = 17,
     .species = SPECIES_ANORITH,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Ben[1] = {
    {
     .iv = 100,
     .level = 19,
     .species = SPECIES_ZIGZAGOON,
     .moves = { MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_GROWL, MOVE_THUNDERBOLT },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Belial1[2] = {
    {
     .iv = 40,
     .level = 16,
     .species = SPECIES_ANORITH,
     },
    {
     .iv = 40,
     .level = 17,
     .species = SPECIES_ANORITH,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Kevin[2] = {
    {
     .iv = 0,
     .level = 9,
     .species = SPECIES_HYPEREGG,
     },
    {
     .iv = 0,
     .level = 9,
     .species = SPECIES_HYPEREGG,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Neal[2] = {
    {
     .iv = 200,
     .level = 34,
     .species = SPECIES_EYE_EYE,
     },
    {
     .iv = 200,
     .level = 34,
     .species = SPECIES_EYE_EYE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Footman6[1] = {
    {
     .iv = 0,
     .level = 38,
     .species = SPECIES_LAIRON,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Calvin2[1] = {
    {
     .iv = 10,
     .level = 27,
     .species = SPECIES_LINOONE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Calvin3[2] = {
    {
     .iv = 20,
     .level = 28,
     .species = SPECIES_SWELLOW,
     },
    {
     .iv = 20,
     .level = 30,
     .species = SPECIES_LINOONE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Clint[2] = {
    {
     .iv = 230,
     .level = 74,
     .species = SPECIES_ANTISPIRAL,
     },
    {
     .iv = 230,
     .level = 74,
     .species = SPECIES_ANTISPIRAL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Senex1[3] = {
    {
     .iv = 255,
     .level = 52,
     .species = SPECIES_TURMUR,
     },
    {
     .iv = 255,
     .level = 54,
     .species = SPECIES_LUCA_ZAMON,
     },
    {
     .iv = 255,
     .level = 56,
     .species = SPECIES_SHADERU,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Eddie[2] = {
    {
     .iv = 0,
     .level = 14,
     .species = SPECIES_ZIGZAGOON,
     },
    {
     .iv = 0,
     .level = 16,
     .species = SPECIES_ZIGZAGOON,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Allen[2] = {
    {
     .iv = 0,
     .level = 5,
     .species = SPECIES_BOILBASAUR,
     },
    {
     .iv = 0,
     .level = 6,
     .species = SPECIES_BOILBASAUR,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Footman7[3] = {
    {
     .iv = 0,
     .level = 24,
     .species = SPECIES_HOMBONE,
     },
    {
     .iv = 0,
     .level = 25,
     .species = SPECIES_NOSEPASS,
     },
    {
     .iv = 0,
     .level = 25,
     .species = SPECIES_NOSEPASS,
     },
};

const struct TrainerMonItemCustomMoves gTrainerParty_FengLei[6] = {
    {
     .iv = 255,
     .level = 64,
     .species = SPECIES_HITMONTOP,
     .heldItem = ITEM_SPIKED_GLOVE,
     .moves = { MOVE_TRIPLE_KICK, MOVE_AERIAL_ACE, MOVE_RAPID_SPIN, MOVE_SCARY_FACE },
     },
    {
     .iv = 255,
     .level = 66,
     .species = SPECIES_ROCLOBSTER,
     .heldItem = ITEM_MEATY_BELL,
     .moves = { MOVE_ROCK_SLIDE, MOVE_DRAGON_CLAW, MOVE_CRABHAMMER, MOVE_EARTHQUAKE },
     },
    {
     .iv = 255,
     .level = 66,
     .species = SPECIES_RAMSHAKER,
     .heldItem = ITEM_LEFTOVERS,
     .moves = { MOVE_PSYCHIC, MOVE_TRI_ATTACK, MOVE_BRIGHT_IDEA, MOVE_DOUBLE_KICK },
     },
    {
     .iv = 255,
     .level = 68,
     .species = SPECIES_BOUFFALANT,
     .heldItem = ITEM_PLUS_BAND,
     .moves = { MOVE_WILD_BOLT, MOVE_REVERSAL, MOVE_SWORDS_DANCE, MOVE_MEGAHORN },
     },
    {
     .iv = 255,
     .level = 68,
     .species = SPECIES_RADIORANGE,
     .heldItem = ITEM_SALAC_BERRY,
     .moves = { MOVE_FIRE_PUMP, MOVE_CRAZY_BOLT, MOVE_FAINT_ATTACK, MOVE_EARTHQUAKE },
     },
    {
     .iv = 255,
     .level = 73,
     .species = SPECIES_KINGMADIO,
     .heldItem = ITEM_NONE,
     .moves = { MOVE_SPLASH, MOVE_TOXIC, MOVE_NONE, MOVE_NONE },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_TimAndTina[4] = {
    {
     .iv = 100,
     .level = 23,
     .species = SPECIES_SHRIVLSAUR,
     .moves = { MOVE_TACKLE, MOVE_LEECH_SEED, MOVE_VINE_WHIP, MOVE_DIG },
     },
    {
     .iv = 100,
     .level = 23,
     .species = SPECIES_CHARMEWORM,
     .moves = { MOVE_METAL_CLAW, MOVE_ATTRACT, MOVE_FIRE_PUNCH, MOVE_SCRATCH },
     },
    {
     .iv = 100,
     .level = 23,
     .species = SPECIES_ELECTABUGS,
     .moves = { MOVE_THUNDER_PUNCH, MOVE_MACH_PUNCH, MOVE_THUNDER_WAVE, MOVE_POUND },
     },
    {
     .iv = 100,
     .level = 23,
     .species = SPECIES_EYE_EYE,
     .moves = { MOVE_ICE_PUNCH, MOVE_LOVELY_KISS, MOVE_EXTRASENSORY, MOVE_POUND },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Dunstan[3] = {
    {
     .iv = 0,
     .level = 19,
     .species = SPECIES_MAGIKARP,
     },
    {
     .iv = 0,
     .level = 19,
     .species = SPECIES_MAGIKARP,
     },
    {
     .iv = 0,
     .level = 19,
     .species = SPECIES_MAGIKARP,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Footman8[4] = {
    {
     .iv = 0,
     .level = 28,
     .species = SPECIES_HOMBONE,
     },
    {
     .iv = 0,
     .level = 28,
     .species = SPECIES_GEODUDE,
     },
    {
     .iv = 0,
     .level = 28,
     .species = SPECIES_ARON,
     },
    {
     .iv = 0,
     .level = 28,
     .species = SPECIES_RHYHORN,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_SmashShot[3] = {
    {
     .iv = 0,
     .level = 20,
     .species = SPECIES_MAKUHITA,
     },
    {
     .iv = 0,
     .level = 20,
     .species = SPECIES_MAKUHITA,
     },
    {
     .iv = 0,
     .level = 24,
     .species = SPECIES_HITMONTOP,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Ned[1] = {
    {
     .iv = 0,
     .level = 12,
     .species = SPECIES_QWILFISH,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Mashima[4] = {
    {
     .iv = 0,
     .level = 23,
     .species = SPECIES_MUNCHLAX,
     },
    {
     .iv = 0,
     .level = 23,
     .species = SPECIES_MUNCHLAX,
     },
    {
     .iv = 0,
     .level = 24,
     .species = SPECIES_KIRLIA,
     },
    {
     .iv = 0,
     .level = 24,
     .species = SPECIES_KIRLIA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Footman9[1] = {
    {
     .iv = 0,
     .level = 36,
     .species = SPECIES_GRAVELER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Fernando[2] = {
    {
     .iv = 200,
     .level = 39,
     .species = SPECIES_MOULDER,
     },
    {
     .iv = 200,
     .level = 39,
     .species = SPECIES_YUCK,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Oswald[1] = {
    {
     .iv = 200,
     .level = 37,
     .species = SPECIES_CARVANHA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Ricardo[4] = {
    {
     .iv = 0,
     .level = 22,
     .species = SPECIES_GROWLITHE,
     },
    {
     .iv = 0,
     .level = 22,
     .species = SPECIES_PONYTA,
     },
    {
     .iv = 0,
     .level = 23,
     .species = SPECIES_SHINX,
     },
    {
     .iv = 0,
     .level = 23,
     .species = SPECIES_RATICATE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Elliot1[3] = {
    {
     .iv = 10,
     .level = 24,
     .species = SPECIES_QWILFISH,
     },
    {
     .iv = 10,
     .level = 27,
     .species = SPECIES_GYARADOS,
     },
    {
     .iv = 10,
     .level = 27,
     .species = SPECIES_GYARADOS,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Temulence1[4] = {
    {
     .iv = 200,
     .level = 48,
     .species = SPECIES_GYARADOS,
     },
    {
     .iv = 200,
     .level = 49,
     .species = SPECIES_HARIYAMA,
     },
    {
     .iv = 200,
     .level = 50,
     .species = SPECIES_MACHAMP,
     },
    {
     .iv = 200,
     .level = 51,
     .species = SPECIES_ENTEI,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Elliot2[4] = {
    {
     .iv = 30,
     .level = 31,
     .species = SPECIES_GYARADOS,
     },
    {
     .iv = 30,
     .level = 30,
     .species = SPECIES_CARVANHA,
     },
    {
     .iv = 30,
     .level = 30,
     .species = SPECIES_QWILSHARK,
     },
    {
     .iv = 31,
     .level = 31,
     .species = SPECIES_GYARADOS,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_FiveNinja4[4] = {
    {
     .iv = 225,
     .level = 50,
     .species = SPECIES_SEVICIOUS,
     },
    {
     .iv = 240,
     .level = 50,
     .species = SPECIES_ROSELIA,
     },
    {
     .iv = 240,
     .level = 50,
     .species = SPECIES_NIDOQUEEN,
     },
    {
     .iv = 240,
     .level = 50,
     .species = SPECIES_QWILSHARK,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Unbone[6] = {
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_LAPRAS,
     },
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_GYARADOS,
     },
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_VAPOREON,
     },
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_KABUTOPS,
     },
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_CROCONAW,
     },
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_SWAMPERT,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Jacob[3] = {
    {
     .iv = 0,
     .level = 7,
     .species = SPECIES_VOLTORB,
     },
    {
     .iv = 0,
     .level = 7,
     .species = SPECIES_VOLTORB,
     },
    {
     .iv = 160,
     .level = 15,
     .species = SPECIES_MAGNEMITE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Anthony[2] = {
    {
     .iv = 0,
     .level = 16,
     .species = SPECIES_MAGNEMITE,
     },
    {
     .iv = 0,
     .level = 16,
     .species = SPECIES_MAGNEMITE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Benjamin1[1] = {
    {
     .iv = 0,
     .level = 17,
     .species = SPECIES_MAGNEMITE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Benjamin2[1] = {
    {
     .iv = 10,
     .level = 28,
     .species = SPECIES_MAGNEMITE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Benjamin3[1] = {
    {
     .iv = 20,
     .level = 31,
     .species = SPECIES_MAGNEMITE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Benjamin4[1] = {
    {
     .iv = 30,
     .level = 34,
     .species = SPECIES_MAGNETON,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Benjamin5[1] = {
    {
     .iv = 40,
     .level = 37,
     .species = SPECIES_MAGNETON,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Abigail1[1] = {
    {
     .iv = 0,
     .level = 17,
     .species = SPECIES_MAGNEMITE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Jasmine[3] = {
    {
     .iv = 80,
     .level = 15,
     .species = SPECIES_MAGNEMITE,
     },
    {
     .iv = 80,
     .level = 15,
     .species = SPECIES_MAGNEMITE,
     },
    {
     .iv = 0,
     .level = 7,
     .species = SPECIES_VOLTORB,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Abigail2[1] = {
    {
     .iv = 10,
     .level = 28,
     .species = SPECIES_MAGNEMITE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Abigail3[1] = {
    {
     .iv = 20,
     .level = 31,
     .species = SPECIES_MAGNEMITE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Abigail4[1] = {
    {
     .iv = 30,
     .level = 34,
     .species = SPECIES_MAGNETON,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Abigail5[1] = {
    {
     .iv = 40,
     .level = 37,
     .species = SPECIES_MAGNETON,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Heiwajima[1] = {
    {
     .iv = 200,
     .level = 30,
     .species = SPECIES_SNORLAX,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Dylan1[1] = {
    {
     .iv = 10,
     .level = 28,
     .species = SPECIES_DODUO,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Dylan2[1] = {
    {
     .iv = 20,
     .level = 31,
     .species = SPECIES_DODUO,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Dylan3[1] = {
    {
     .iv = 30,
     .level = 34,
     .species = SPECIES_DODRIO,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Dylan4[1] = {
    {
     .iv = 40,
     .level = 37,
     .species = SPECIES_DODRIO,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Maria1[1] = {
    {
     .iv = 0,
     .level = 18,
     .species = SPECIES_DODUO,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Wayne[1] = {
    {
     .iv = 255,
     .level = 75,
     .species = SPECIES_SHINIGAMI,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Woody[1] = {
    {
     .iv = 255,
     .level = 75,
     .species = SPECIES_STITCHER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Maria2[1] = {
    {
     .iv = 30,
     .level = 34,
     .species = SPECIES_DODRIO,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Maria3[1] = {
    {
     .iv = 40,
     .level = 37,
     .species = SPECIES_DODRIO,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Monkley[4] = {
    {
     .iv = 100,
     .level = 66,
     .species = SPECIES_DEWGONG,
     },
    {
     .iv = 100,
     .level = 66,
     .species = SPECIES_DEWGONG,
     },
    {
     .iv = 100,
     .level = 66,
     .species = SPECIES_DEWGONG,
     },
    {
     .iv = 160,
     .level = 69,
     .species = SPECIES_LAPRAS,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_TheSheriff[4] = {
    {
     .iv = 200,
     .level = 72,
     .species = SPECIES_ANTISPIRAL,
     },
    {
     .iv = 200,
     .level = 73,
     .species = SPECIES_ANTISPIRAL,
     },
    {
     .iv = 200,
     .level = 74,
     .species = SPECIES_STITCHER,
     },
    {
     .iv = 250,
     .level = 75,
     .species = SPECIES_SHINIGAMI,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Cyrus[1] = {
    {
     .iv = 200,
     .level = 70,
     .species = SPECIES_GOLDUCK,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_ManlyHero[1] = {
    {
     .iv = 255,
     .level = 100,
     .species = SPECIES_KAMINA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Hunky_Dory[2] = {
    {
     .iv = 100,
     .level = 66,
     .species = SPECIES_PELIPPER,
     },
    {
     .iv = 180,
     .level = 69,
     .species = SPECIES_STARMIE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Isaiah1[1] = {
    {
     .iv = 10,
     .level = 39,
     .species = SPECIES_STARYU,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Isaiah2[1] = {
    {
     .iv = 20,
     .level = 42,
     .species = SPECIES_STARYU,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Isaiah3[1] = {
    {
     .iv = 30,
     .level = 45,
     .species = SPECIES_STARMIE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_MagnusVii[1] = {
    {
     .iv = 255,
     .level = 78,
     .species = SPECIES_STITCHER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Meteor2[6] = {
    {
     .iv = 255,
     .level = 48,
     .species = SPECIES_DRAGON,
     },
    {
     .iv = 255,
     .level = 48,
     .species = SPECIES_DRAGON,
     },
    {
     .iv = 255,
     .level = 50,
     .species = SPECIES_DRAGON,
     },
    {
     .iv = 255,
     .level = 51,
     .species = SPECIES_KINGDRA,
     },
    {
     .iv = 255,
     .level = 52,
     .species = SPECIES_ALTARIA,
     },
    {
     .iv = 255,
     .level = 53,
     .species = SPECIES_DRAGON,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Maxine[4] = {
    {
     .iv = 0,
     .level = 65,
     .species = SPECIES_PELIPPER,
     },
    {
     .iv = 160,
     .level = 65,
     .species = SPECIES_STARMIE,
     },
    {
     .iv = 0,
     .level = 65,
     .species = SPECIES_PELIPPER,
     },
    {
     .iv = 160,
     .level = 65,
     .species = SPECIES_STARMIE,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Meteor3[1] = {
    {
     .iv = 200,
     .level = 22,
     .species = SPECIES_DRAGON,
     .moves = { MOVE_DIG, MOVE_FIRE_PUMP, MOVE_DRAGON_BREATH, MOVE_FLY },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Perjury[1] = {
    {
     .iv = 212,
     .level = 70,
     .species = SPECIES_STARMIE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_MarieBain[4] = {
    {
     .iv = 200,
     .level = 70,
     .species = SPECIES_QUAGSIRE,
     },
    {
     .iv = 200,
     .level = 70,
     .species = SPECIES_PELIPPER,
     },
    {
     .iv = 240,
     .level = 70,
     .species = SPECIES_STARMIE,
     },
    {
     .iv = 200,
     .level = 70,
     .species = SPECIES_PELIPPER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Katelyn1[1] = {
    {
     .iv = 10,
     .level = 39,
     .species = SPECIES_STARYU,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Katelyn2[1] = {
    {
     .iv = 20,
     .level = 42,
     .species = SPECIES_STARYU,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Katelyn3[1] = {
    {
     .iv = 30,
     .level = 45,
     .species = SPECIES_STARMIE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Katelyn4[1] = {
    {
     .iv = 40,
     .level = 48,
     .species = SPECIES_STARMIE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Nicolas1[2] = {
    {
     .iv = 100,
     .level = 38,
     .species = SPECIES_ALTARIA,
     },
    {
     .iv = 100,
     .level = 38,
     .species = SPECIES_ALTARIA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Nicolas2[2] = {
    {
     .iv = 110,
     .level = 41,
     .species = SPECIES_ALTARIA,
     },
    {
     .iv = 110,
     .level = 41,
     .species = SPECIES_ALTARIA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Nicolas3[2] = {
    {
     .iv = 120,
     .level = 44,
     .species = SPECIES_ALTARIA,
     },
    {
     .iv = 120,
     .level = 44,
     .species = SPECIES_ALTARIA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_NickyP[3] = {
    {
     .iv = 130,
     .level = 73,
     .species = SPECIES_EYE_EYE,
     },
    {
     .iv = 130,
     .level = 73,
     .species = SPECIES_EYE_EYE,
     },
    {
     .iv = 130,
     .level = 73,
     .species = SPECIES_EYE_EYE,
     },
};

const struct TrainerMonItemDefaultMoves gTrainerParty_Fortuno[3] = {
    {
     .iv = 140,
     .level = 73,
     .species = SPECIES_EYE_EYE,
     .heldItem = ITEM_RAINBOWFROST,
     },
    {
     .iv = 140,
     .level = 73,
     .species = SPECIES_EYE_EYE,
     .heldItem = ITEM_MEWTWO_BRAIN,
     },
    {
     .iv = 140,
     .level = 73,
     .species = SPECIES_EYE_EYE,
     .heldItem = ITEM_RAINBOWFROST,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_LiuBei[1] = {
    {
     .iv = 255,
     .level = 75,
     .species = SPECIES_METAGROSS,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Jaime[1] = {
    {
     .iv = 200,
     .level = 43,
     .species = SPECIES_IRONREAPER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Hughie[1] = {
    {
     .iv = 255,
     .level = 43,
     .species = SPECIES_POLIWRAITH,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Philip[3] = {
    {
     .iv = 200,
     .level = 40,
     .species = SPECIES_GRIMREAPER,
     },
    {
     .iv = 200,
     .level = 40,
     .species = SPECIES_AZOMBARILL,
     },
    {
     .iv = 200,
     .level = 40,
     .species = SPECIES_ELECTABUGS,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Jared[1] = {
    {
     .iv = 255,
     .level = 48,
     .species = SPECIES_GIGAWOLF,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Mitchell[4] = {
    {
     .iv = 200,
     .level = 73,
     .species = SPECIES_EYE_EYE,
     },
    {
     .iv = 200,
     .level = 73,
     .species = SPECIES_EYE_EYE,
     },
    {
     .iv = 100,
     .level = 73,
     .species = SPECIES_EYE_EYE,
     },
    {
     .iv = 200,
     .level = 73,
     .species = SPECIES_EYE_EYE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Tanner[3] = {
    {
     .iv = 100,
     .level = 30,
     .species = SPECIES_SWABLU,
     },
    {
     .iv = 100,
     .level = 30,
     .species = SPECIES_SWABLU,
     },
    {
     .iv = 100,
     .level = 30,
     .species = SPECIES_WINGULL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Will[3] = {
    {
     .iv = 100,
     .level = 28,
     .species = SPECIES_WINGULL,
     },
    {
     .iv = 100,
     .level = 28,
     .species = SPECIES_SWELLOW,
     },
    {
     .iv = 100,
     .level = 28,
     .species = SPECIES_PELIPPER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_MaybeWitch[2] = {
    {
     .iv = 200,
     .level = 41,
     .species = SPECIES_XATU,
     },
    {
     .iv = 200,
     .level = 43,
     .species = SPECIES_GENGAR,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_BadFairy[1] = {
    {
     .iv = 255,
     .level = 46,
     .species = SPECIES_CLEFABLE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Benny2[3] = {
    {
     .iv = 0,
     .level = 36,
     .species = SPECIES_SWELLOW,
     },
    {
     .iv = 0,
     .level = 36,
     .species = SPECIES_PELIPPER,
     },
    {
     .iv = 0,
     .level = 36,
     .species = SPECIES_XATU,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Hester[2] = {
    {
     .iv = 200,
     .level = 39,
     .species = SPECIES_HEADDOOM,
     },
    {
     .iv = 200,
     .level = 42,
     .species = SPECIES_GRIMREAPER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Gleis2[2] = {
    {
     .iv = 10,
     .level = 32,
     .species = SPECIES_NATU,
     },
    {
     .iv = 10,
     .level = 32,
     .species = SPECIES_SWABLU,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Temulence2[2] = {
    {
     .iv = 20,
     .level = 35,
     .species = SPECIES_NATU,
     },
    {
     .iv = 20,
     .level = 35,
     .species = SPECIES_ALTARIA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Robert[2] = {
    {
     .iv = 30,
     .level = 38,
     .species = SPECIES_NATU,
     },
    {
     .iv = 30,
     .level = 38,
     .species = SPECIES_ALTARIA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Burke[5] = {
    {
     .iv = 240,
     .level = 75,
     .species = SPECIES_FORRETRESS,
     },
    {
     .iv = 240,
     .level = 76,
     .species = SPECIES_STEELIX,
     },
    {
     .iv = 245,
     .level = 77,
     .species = SPECIES_IRONREAPER,
     },
    {
     .iv = 250,
     .level = 78,
     .species = SPECIES_PRIMEAPE,
     },
    {
     .iv = 255,
     .level = 80,
     .species = SPECIES_EXCADRILL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Ostafan[4] = {
    {
     .iv = 200,
     .level = 64,
     .species = SPECIES_PERSIAN,
     },
    {
     .iv = 100,
     .level = 64,
     .species = SPECIES_PERSIAN,
     },
    {
     .iv = 100,
     .level = 66,
     .species = SPECIES_PERSIAN,
     },
    {
     .iv = 200,
     .level = 66,
     .species = SPECIES_PERSIAN,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Deckard[2] = {
    {
     .iv = 200,
     .level = 68,
     .species = SPECIES_BRELOOM,
     },
    {
     .iv = 200,
     .level = 68,
     .species = SPECIES_CRAWDAUNT,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Roger[1] = {
    {
     .iv = 250,
     .level = 44,
     .species = SPECIES_AZOMBARILL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Bret[3] = {
    {
     .iv = 200,
     .level = 38,
     .species = SPECIES_EYE_EYE,
     },
    {
     .iv = 200,
     .level = 38,
     .species = SPECIES_EYE_EYE,
     },
    {
     .iv = 200,
     .level = 38,
     .species = SPECIES_EYE_EYE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Makoto[1] = {
    {
     .iv = 0,
     .level = 23,
     .species = SPECIES_SECRETEGG,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Hideo[4] = {
    {
     .iv = 0,
     .level = 20,
     .species = SPECIES_SECRETEGG,
     },
    {
     .iv = 0,
     .level = 20,
     .species = SPECIES_KAJILIANTH,
     },
    {
     .iv = 0,
     .level = 20,
     .species = SPECIES_TRAPINCH,
     },
    {
     .iv = 0,
     .level = 20,
     .species = SPECIES_SECRETEGG,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Tancred[4] = {
    {
     .iv = 200,
     .level = 33,
     .species = SPECIES_EYE_EYE,
     .moves = { MOVE_LOVELY_KISS, MOVE_PSYCHIC, MOVE_SWEET_KISS, MOVE_ICE_PUNCH },
     },
    {
     .iv = 200,
     .level = 33,
     .species = SPECIES_EYE_EYE,
     .moves = { MOVE_LOVELY_KISS, MOVE_PSYCHIC, MOVE_SWEET_KISS, MOVE_ICE_PUNCH },
     },
    {
     .iv = 200,
     .level = 35,
     .species = SPECIES_EYE_EYE,
     .moves = { MOVE_LOVELY_KISS, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_SWEET_KISS },
     },
    {
     .iv = 200,
     .level = 37,
     .species = SPECIES_EYE_EYE,
     .moves = { MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_LOVELY_KISS, MOVE_SWEET_KISS },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Charles[2] = {
    {
     .iv = 0,
     .level = 36,
     .species = SPECIES_EYE_EYE,
     },
    {
     .iv = 0,
     .level = 35,
     .species = SPECIES_EYE_EYE,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Lao1[4] = {
    {
     .iv = 0,
     .level = 24,
     .species = SPECIES_KOFFING,
     .moves = { MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT },
     },
    {
     .iv = 0,
     .level = 24,
     .species = SPECIES_KOFFING,
     .moves = { MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE },
     },
    {
     .iv = 0,
     .level = 24,
     .species = SPECIES_KOFFING,
     .moves = { MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT },
     },
    {
     .iv = 0,
     .level = 26,
     .species = SPECIES_KOFFING,
     .moves = { MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Lao2[4] = {
    {
     .iv = 20,
     .level = 27,
     .species = SPECIES_KOFFING,
     .moves = { MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT },
     },
    {
     .iv = 20,
     .level = 27,
     .species = SPECIES_KOFFING,
     .moves = { MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT },
     },
    {
     .iv = 20,
     .level = 27,
     .species = SPECIES_KOFFING,
     .moves = { MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE },
     },
    {
     .iv = 20,
     .level = 29,
     .species = SPECIES_KOFFING,
     .moves = { MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Schwartz1[4] = {
    {
     .iv = 230,
     .level = 75,
     .species = SPECIES_PSYPIG,
     .moves = { MOVE_PSYCHIC, MOVE_FIRE_BLAST, MOVE_THUNDERBOLT, MOVE_SUNNY_DAY },
     },
    {
     .iv = 230,
     .level = 75,
     .species = SPECIES_MILOTIC,
     .moves = { MOVE_STORM_SURGE, MOVE_EXTRASENSORY, MOVE_RECOVER, MOVE_REFRESH },
     },
    {
     .iv = 255,
     .level = 75,
     .species = SPECIES_STARMIE,
     .moves = { MOVE_SURF, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM },
     },
    {
     .iv = 230,
     .level = 75,
     .species = SPECIES_SMEARGLE,
     .moves = { MOVE_INGRAIN, MOVE_SLASH, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER },
     },
};

const struct TrainerMonItemCustomMoves gTrainerParty_Schwartz2[5] = {
    {
     .iv = 255,
     .level = 76,
     .species = SPECIES_KABUTOPS,
     .heldItem = ITEM_POWER_HAT,
     .moves = { MOVE_SLASH, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SKULLBREAKER },
     },
    {
     .iv = 255,
     .level = 77,
     .species = SPECIES_RHYDON,
     .heldItem = ITEM_VOLCANO_POT,
     .moves = { MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_ROCK_SLIDE, MOVE_MEGAHORN },
     },
    {
     .iv = 255,
     .level = 78,
     .species = SPECIES_ROCLOBSTER,
     .heldItem = ITEM_TREASURE_BALL,
     .moves = { MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_OUTRAGE, MOVE_SWORDS_DANCE },
     },
    {
     .iv = 255,
     .level = 79,
     .species = SPECIES_ARMALDO,
     .heldItem = ITEM_FLASH_SCALES,
     .moves = { MOVE_ROCK_BLAST, MOVE_SIGNAL_BEAM, MOVE_BRICK_BREAK, MOVE_DOUBLE_EDGE },
     },
    {
     .iv = 255,
     .level = 86,
     .species = SPECIES_CRADILY,
     .heldItem = ITEM_LEFTOVERS,
     .moves = { MOVE_INGRAIN, MOVE_SANDSTORM, MOVE_LEECH_SEED, MOVE_MEGA_DRAIN },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Tyrone[3] = {
    {
     .iv = 100,
     .level = 16,
     .species = SPECIES_SHINX,
     },
    {
     .iv = 100,
     .level = 16,
     .species = SPECIES_SHINX,
     },
    {
     .iv = 100,
     .level = 18,
     .species = SPECIES_LUXIO,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Matteo[1] = {
    {
     .iv = 100,
     .level = 22,
     .species = SPECIES_MEOWTH,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Laura[2] = {
    {
     .iv = 255,
     .level = 16,
     .species = SPECIES_ZANGOOSE,
     },
    {
     .iv = 255,
     .level = 17,
     .species = SPECIES_DELCATTY,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Cora[1] = {
    {
     .iv = 100,
     .level = 27,
     .species = SPECIES_MEDITITE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Jill[1] = {
    {
     .iv = 100,
     .level = 27,
     .species = SPECIES_BRELOOM,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Cyndy1[2] = {
    {
     .iv = 110,
     .level = 26,
     .species = SPECIES_MEDITITE,
     },
    {
     .iv = 110,
     .level = 26,
     .species = SPECIES_MAKUHITA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Cyndy2[2] = {
    {
     .iv = 120,
     .level = 29,
     .species = SPECIES_MEDITITE,
     },
    {
     .iv = 120,
     .level = 29,
     .species = SPECIES_MAKUHITA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Schwartz3[2] = {
    {
     .iv = 230,
     .level = 75,
     .species = SPECIES_LUXRAY,
     },
    {
     .iv = 230,
     .level = 75,
     .species = SPECIES_WEAVILE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Schwartz4[2] = {
    {
     .iv = 240,
     .level = 75,
     .species = SPECIES_GLALIE,
     },
    {
     .iv = 240,
     .level = 75,
     .species = SPECIES_LAPRAS,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Vinnie[1] = {
    {
     .iv = 255,
     .level = 41,
     .species = SPECIES_EYE_EYE,
     .moves = { MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_LOVELY_KISS, MOVE_DREAM_EATER },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_AngelWitch[2] = {
    {
     .iv = 200,
     .level = 44,
     .species = SPECIES_XATU,
     },
    {
     .iv = 200,
     .level = 44,
     .species = SPECIES_GARDEVOIR,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_EastWitch[1] = {
    {
     .iv = 255,
     .level = 45,
     .species = SPECIES_BANETTE,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Madeline1[1] = {
    {
     .iv = 10,
     .level = 27,
     .species = SPECIES_HOMBONE,
     .moves = { MOVE_EMBER, MOVE_TACKLE, MOVE_MAGNITUDE, MOVE_SUNNY_DAY },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Stanislaus[1] = {
    {
     .iv = 200,
     .level = 75,
     .species = SPECIES_METAGROSS,
     .moves = { MOVE_METEOR_MASH, MOVE_PSYCHIC, MOVE_EARTHQUAKE, MOVE_AGILITY },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Boss[2] = {
    {
     .iv = 230,
     .level = 75,
     .species = SPECIES_AGGRON,
     .moves = { MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_IRON_TAIL },
     },
    {
     .iv = 230,
     .level = 75,
     .species = SPECIES_MAGNETON,
     .moves = { MOVE_THUNDERBOLT, MOVE_TOXIC, MOVE_HIDDEN_POWER, MOVE_TRI_ATTACK },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Madeline2[2] = {
    {
     .iv = 40,
     .level = 35,
     .species = SPECIES_ROSELIA,
     .moves = { MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY },
     },
    {
     .iv = 40,
     .level = 35,
     .species = SPECIES_HOMBEAST,
     .moves = { MOVE_FIRE_PUMP, MOVE_TAKE_DOWN, MOVE_EARTHQUAKE, MOVE_SUNNY_DAY },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Beverly[2] = {
    {
     .iv = 0,
     .level = 18,
     .species = SPECIES_WAILMER,
     },
    {
     .iv = 0,
     .level = 18,
     .species = SPECIES_WAILMER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Dawn[1] = {
    {
     .iv = 0,
     .level = 16,
     .species = SPECIES_SEALEO,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Beatrice[1] = {
    {
     .iv = 150,
     .level = 16,
     .species = SPECIES_WAILMER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Denise[1] = {
    {
     .iv = 0,
     .level = 27,
     .species = SPECIES_WINGULL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Beth[3] = {
    {
     .iv = 0,
     .level = 25,
     .species = SPECIES_GRAVEILL,
     },
    {
     .iv = 0,
     .level = 25,
     .species = SPECIES_GOLDEEN,
     },
    {
     .iv = 0,
     .level = 25,
     .species = SPECIES_WINGULL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Kris[2] = {
    {
     .iv = 0,
     .level = 22,
     .species = SPECIES_TOTODILE,
     },
    {
     .iv = 0,
     .level = 22,
     .species = SPECIES_WOOPER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Jesus[3] = {
    {
     .iv = 0,
     .level = 16,
     .species = SPECIES_MEOWTH,
     },
    {
     .iv = 0,
     .level = 16,
     .species = SPECIES_MEOWTH,
     },
    {
     .iv = 0,
     .level = 16,
     .species = SPECIES_MEOWTH,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Alice[3] = {
    {
     .iv = 0,
     .level = 25,
     .species = SPECIES_GOLDEEN,
     },
    {
     .iv = 0,
     .level = 25,
     .species = SPECIES_WINGULL,
     },
    {
     .iv = 0,
     .level = 25,
     .species = SPECIES_GOLDEEN,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Worcesteria[1] = {
    {
     .iv = 160,
     .level = 70,
     .species = SPECIES_CRAWDAUNT,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_HuaJiao[3] = {
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_CLAYDOL,
     },
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_GRUMPIG,
     },
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_ALAKAZAM,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Tanya[1] = {
    {
     .iv = 0,
     .level = 35,
     .species = SPECIES_LUVDISC,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Sharon[2] = {
    {
     .iv = 0,
     .level = 34,
     .species = SPECIES_GOLDEEN,
     },
    {
     .iv = 0,
     .level = 34,
     .species = SPECIES_SEAKING,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Endless[3] = {
    {
     .iv = 120,
     .level = 67,
     .species = SPECIES_SHARPEDO,
     },
    {
     .iv = 120,
     .level = 67,
     .species = SPECIES_WAILORD,
     },
    {
     .iv = 120,
     .level = 67,
     .species = SPECIES_WALREIN,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Kotokabe[1] = {
    {
     .iv = 100,
     .level = 70,
     .species = SPECIES_SEAKING,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Catalana[3] = {
    {
     .iv = 200,
     .level = 67,
     .species = SPECIES_BASCULIN,
     },
    {
     .iv = 200,
     .level = 67,
     .species = SPECIES_BASCULIN,
     },
    {
     .iv = 200,
     .level = 67,
     .species = SPECIES_BASCULIN,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Creperie[3] = {
    {
     .iv = 200,
     .level = 66,
     .species = SPECIES_KINGDRA,
     },
    {
     .iv = 200,
     .level = 66,
     .species = SPECIES_KINGLER,
     },
    {
     .iv = 200,
     .level = 66,
     .species = SPECIES_WHISCASH,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Dongiga[1] = {
    {
     .iv = 200,
     .level = 80,
     .species = SPECIES_SEAKING,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Danapix[3] = {
    {
     .iv = 100,
     .level = 67,
     .species = SPECIES_GYARADOS,
     },
    {
     .iv = 100,
     .level = 67,
     .species = SPECIES_GYARADOS,
     },
    {
     .iv = 100,
     .level = 67,
     .species = SPECIES_GYARADOS,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Erin[1] = {
    {
     .iv = 0,
     .level = 38,
     .species = SPECIES_WAILMER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Meadowbreak[2] = {
    {
     .iv = 200,
     .level = 67,
     .species = SPECIES_SEAKING,
     },
    {
     .iv = 200,
     .level = 67,
     .species = SPECIES_KINGDRA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_BakaNeko[2] = {
    {
     .iv = 130,
     .level = 65,
     .species = SPECIES_MIGHTYENA,
     },
    {
     .iv = 200,
     .level = 68,
     .species = SPECIES_WEAVILE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Kaylee[2] = {
    {
     .iv = 0,
     .level = 34,
     .species = SPECIES_LANTURN,
     },
    {
     .iv = 0,
     .level = 34,
     .species = SPECIES_PELIPPER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Balboon[3] = {
    {
     .iv = 0,
     .level = 70,
     .species = SPECIES_LUVDISC,
     },
    {
     .iv = 0,
     .level = 70,
     .species = SPECIES_LUVDISC,
     },
    {
     .iv = 0,
     .level = 70,
     .species = SPECIES_LUVDISC,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Darcy[1] = {
    {
     .iv = 0,
     .level = 13,
     .species = SPECIES_GOLDEEN,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Jenny1[1] = {
    {
     .iv = 0,
     .level = 38,
     .species = SPECIES_WAILMER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Jenny2[1] = {
    {
     .iv = 0,
     .level = 41,
     .species = SPECIES_WAILMER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Jenny3[2] = {
    {
     .iv = 0,
     .level = 43,
     .species = SPECIES_STARYU,
     },
    {
     .iv = 0,
     .level = 43,
     .species = SPECIES_WAILMER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Jenny4[3] = {
    {
     .iv = 0,
     .level = 45,
     .species = SPECIES_LUVDISC,
     },
    {
     .iv = 0,
     .level = 45,
     .species = SPECIES_WAILMER,
     },
    {
     .iv = 0,
     .level = 45,
     .species = SPECIES_STARMIE,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Nakajima[2] = {
    {
     .iv = 0,
     .level = 33,
     .species = SPECIES_SNORLAX,
     .moves = { MOVE_BELLY_DRUM, MOVE_BODY_SLAM, MOVE_REST, MOVE_SNORE },
     },
    {
     .iv = 0,
     .level = 33,
     .species = SPECIES_GARDEVOIR,
     .moves = { MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_LIGHT_SCREEN },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Shizuo[1] = {
    {
     .iv = 255,
     .level = 34,
     .species = SPECIES_KIRLIA,
     .moves = { MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_FLASH },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Lenna[2] = {
    {
     .iv = 0,
     .level = 28,
     .species = SPECIES_TAILLOW,
     },
    {
     .iv = 0,
     .level = 34,
     .species = SPECIES_PELIPPER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Footman10[2] = {
    {
     .iv = 0,
     .level = 34,
     .species = SPECIES_SLUGMA,
     },
    {
     .iv = 0,
     .level = 36,
     .species = SPECIES_HOMBONE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Martha[2] = {
    {
     .iv = 0,
     .level = 23,
     .species = SPECIES_SKITTY,
     },
    {
     .iv = 0,
     .level = 23,
     .species = SPECIES_SWABLU,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_YongShui[3] = {
    {
     .iv = 0,
     .level = 30,
     .species = SPECIES_BALTOY,
     },
    {
     .iv = 0,
     .level = 31,
     .species = SPECIES_MEDITITE,
     },
    {
     .iv = 0,
     .level = 33,
     .species = SPECIES_BALTOY,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Nina[2] = {
    {
     .iv = 0,
     .level = 9,
     .species = SPECIES_SWABLU,
     },
    {
     .iv = 0,
     .level = 9,
     .species = SPECIES_ZIGZAGOON,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Ryuugamine[2] = {
    {
     .iv = 0,
     .level = 30,
     .species = SPECIES_MUNCHLAX,
     },
    {
     .iv = 0,
     .level = 30,
     .species = SPECIES_KIRLIA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Diana1[3] = {
    {
     .iv = 10,
     .level = 25,
     .species = SPECIES_SHROOMISH,
     },
    {
     .iv = 10,
     .level = 25,
     .species = SPECIES_GLOOM,
     },
    {
     .iv = 10,
     .level = 25,
     .species = SPECIES_SWABLU,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Diana2[3] = {
    {
     .iv = 20,
     .level = 28,
     .species = SPECIES_BRELOOM,
     },
    {
     .iv = 20,
     .level = 28,
     .species = SPECIES_GLOOM,
     },
    {
     .iv = 20,
     .level = 28,
     .species = SPECIES_SWABLU,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Diana3[3] = {
    {
     .iv = 30,
     .level = 31,
     .species = SPECIES_BRELOOM,
     },
    {
     .iv = 30,
     .level = 31,
     .species = SPECIES_GLOOM,
     },
    {
     .iv = 30,
     .level = 31,
     .species = SPECIES_SWABLU,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Diana4[3] = {
    {
     .iv = 40,
     .level = 40,
     .species = SPECIES_BRELOOM,
     },
    {
     .iv = 40,
     .level = 40,
     .species = SPECIES_VILEPLUME,
     },
    {
     .iv = 40,
     .level = 40,
     .species = SPECIES_ALTARIA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Akagi[2] = {
    {
     .iv = 0,
     .level = 26,
     .species = SPECIES_MUNCHLAX,
     },
    {
     .iv = 0,
     .level = 26,
     .species = SPECIES_KIRLIA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_AmyAndLiv1[2] = {
    {
     .iv = 10,
     .level = 27,
     .species = SPECIES_LUXRAY,
     },
    {
     .iv = 10,
     .level = 27,
     .species = SPECIES_WEAVILE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_DougAndLola[2] = {
    {
     .iv = 0,
     .level = 10,
     .species = SPECIES_SHRIVLSAUR,
     },
    {
     .iv = 0,
     .level = 12,
     .species = SPECIES_ENTRAILTLE,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Mirai[2] = {
    {
     .iv = 250,
     .level = 43,
     .species = SPECIES_ROODANSE,
     .moves = { MOVE_FLY, MOVE_AIR_CUTTER, MOVE_SLASH, MOVE_WHIRLWIND },
     },
    {
     .iv = 250,
     .level = 43,
     .species = SPECIES_FANGASU,
     .moves = { MOVE_EXTREME_SPEED, MOVE_HEADBUTT, MOVE_HORN_ATTACK, MOVE_NONE },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_AmyAndLiv2[2] = {
    {
     .iv = 0,
     .level = 9,
     .species = SPECIES_LUXRAY,
     },
    {
     .iv = 0,
     .level = 9,
     .species = SPECIES_WEAVILE,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_GinaAndMia[2] = {
    {
     .iv = 0,
     .level = 10,
     .species = SPECIES_DUSKULL,
     .moves = { MOVE_NIGHT_SHADE, MOVE_DISABLE, MOVE_NONE, MOVE_NONE },
     },
    {
     .iv = 0,
     .level = 10,
     .species = SPECIES_SHROOMISH,
     .moves = { MOVE_ABSORB, MOVE_LEECH_SEED, MOVE_NONE, MOVE_NONE },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_AmyAndLiv3[2] = {
    {
     .iv = 20,
     .level = 30,
     .species = SPECIES_LUXRAY,
     },
    {
     .iv = 20,
     .level = 30,
     .species = SPECIES_WEAVILE,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_AmyAndLiv4[2] = {
    {
     .iv = 30,
     .level = 33,
     .species = SPECIES_LUXRAY,
     .moves = { MOVE_SPARK, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND },
     },
    {
     .iv = 30,
     .level = 33,
     .species = SPECIES_WEAVILE,
     .moves = { MOVE_SPARK, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_AmyAndLiv5[2] = {
    {
     .iv = 40,
     .level = 36,
     .species = SPECIES_LUXRAY,
     .moves = { MOVE_DISCHARGE, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND },
     },
    {
     .iv = 40,
     .level = 36,
     .species = SPECIES_WEAVILE,
     .moves = { MOVE_DISCHARGE, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Pious[1] = {
    {
     .iv = 0,
     .level = 25,
     .species = SPECIES_MEOWTH,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Barrabas[3] = {
    {
     .iv = 0,
     .level = 22,
     .species = SPECIES_SURSKIT,
     },
    {
     .iv = 0,
     .level = 23,
     .species = SPECIES_TAILLOW,
     },
    {
     .iv = 0,
     .level = 24,
     .species = SPECIES_WINGULL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Ernest1[3] = {
    {
     .iv = 0,
     .level = 33,
     .species = SPECIES_WINGULL,
     },
    {
     .iv = 0,
     .level = 33,
     .species = SPECIES_QWILFISH,
     },
    {
     .iv = 0,
     .level = 33,
     .species = SPECIES_MACHOKE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Dwayne[3] = {
    {
     .iv = 0,
     .level = 11,
     .species = SPECIES_WINGULL,
     },
    {
     .iv = 0,
     .level = 11,
     .species = SPECIES_MACHOP,
     },
    {
     .iv = 0,
     .level = 11,
     .species = SPECIES_QWILFISH,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Phillip[2] = {
    {
     .iv = 0,
     .level = 44,
     .species = SPECIES_QWILSHARK,
     },
    {
     .iv = 0,
     .level = 44,
     .species = SPECIES_MACHOKE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Leonard[3] = {
    {
     .iv = 0,
     .level = 43,
     .species = SPECIES_MACHOP,
     },
    {
     .iv = 0,
     .level = 43,
     .species = SPECIES_PELIPPER,
     },
    {
     .iv = 0,
     .level = 43,
     .species = SPECIES_MACHOKE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Formaggio[2] = {
    {
     .iv = 200,
     .level = 65,
     .species = SPECIES_WAILORD,
     },
    {
     .iv = 200,
     .level = 65,
     .species = SPECIES_PERSIAN,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Ernest2[3] = {
    {
     .iv = 10,
     .level = 36,
     .species = SPECIES_WINGULL,
     },
    {
     .iv = 10,
     .level = 36,
     .species = SPECIES_QWILFISH,
     },
    {
     .iv = 10,
     .level = 36,
     .species = SPECIES_MACHOKE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Ernest3[3] = {
    {
     .iv = 20,
     .level = 39,
     .species = SPECIES_PELIPPER,
     },
    {
     .iv = 20,
     .level = 39,
     .species = SPECIES_QWILFISH,
     },
    {
     .iv = 20,
     .level = 39,
     .species = SPECIES_MACHOKE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Ernest4[3] = {
    {
     .iv = 30,
     .level = 42,
     .species = SPECIES_PELIPPER,
     },
    {
     .iv = 30,
     .level = 42,
     .species = SPECIES_QWILFISH,
     },
    {
     .iv = 30,
     .level = 42,
     .species = SPECIES_MACHOKE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Ernest5[3] = {
    {
     .iv = 40,
     .level = 45,
     .species = SPECIES_PELIPPER,
     },
    {
     .iv = 40,
     .level = 45,
     .species = SPECIES_MACHOKE,
     },
    {
     .iv = 40,
     .level = 45,
     .species = SPECIES_QWILSHARK,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_1[2] = {
    {
     .iv = 0,
     .level = 22,
     .species = SPECIES_ROSELIA,
     },
    {
     .iv = 0,
     .level = 22,
     .species = SPECIES_ROSELIA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_2[3] = {
    {
     .iv = 0,
     .level = 21,
     .species = SPECIES_ROSELIA,
     },
    {
     .iv = 0,
     .level = 21,
     .species = SPECIES_ROSELIA,
     },
    {
     .iv = 0,
     .level = 21,
     .species = SPECIES_ROSELIA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_3[1] = {
    {
     .iv = 0,
     .level = 23,
     .species = SPECIES_ROSELIA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Sonny[1] = {
    {
     .iv = 0,
     .level = 35,
     .species = SPECIES_SPHEAL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Donovan[2] = {
    {
     .iv = 0,
     .level = 34,
     .species = SPECIES_SPHEAL,
     },
    {
     .iv = 0,
     .level = 34,
     .species = SPECIES_SPHEAL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Gerald[3] = {
    {
     .iv = 0,
     .level = 33,
     .species = SPECIES_SPHEAL,
     },
    {
     .iv = 0,
     .level = 33,
     .species = SPECIES_SPHEAL,
     },
    {
     .iv = 0,
     .level = 33,
     .species = SPECIES_SPHEAL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Kelvin[2] = {
    {
     .iv = 0,
     .level = 34,
     .species = SPECIES_SPHEAL,
     },
    {
     .iv = 0,
     .level = 34,
     .species = SPECIES_SPHEAL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Kody[3] = {
    {
     .iv = 0,
     .level = 33,
     .species = SPECIES_SPHEAL,
     },
    {
     .iv = 0,
     .level = 33,
     .species = SPECIES_SPHEAL,
     },
    {
     .iv = 0,
     .level = 33,
     .species = SPECIES_SPHEAL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Tevin[1] = {
    {
     .iv = 0,
     .level = 35,
     .species = SPECIES_SPHEAL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Damon[2] = {
    {
     .iv = 0,
     .level = 34,
     .species = SPECIES_SPHEAL,
     },
    {
     .iv = 0,
     .level = 34,
     .species = SPECIES_SPHEAL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Pablo[1] = {
    {
     .iv = 0,
     .level = 35,
     .species = SPECIES_SPHEAL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Footman11[2] = {
    {
     .iv = 0,
     .level = 25,
     .species = SPECIES_HOMBONE,
     },
    {
     .iv = 0,
     .level = 25,
     .species = SPECIES_LUNATONE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Hector1[1] = {
    {
     .iv = 0,
     .level = 20,
     .species = SPECIES_ZANGOOSE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Hector2[1] = {
    {
     .iv = 0,
     .level = 20,
     .species = SPECIES_SEVIPER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Edwin1[2] = {
    {
     .iv = 0,
     .level = 26,
     .species = SPECIES_SNORLAX,
     },
    {
     .iv = 0,
     .level = 26,
     .species = SPECIES_NUZLEAF,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Edwin2[2] = {
    {
     .iv = 0,
     .level = 29,
     .species = SPECIES_SNORLAX,
     },
    {
     .iv = 0,
     .level = 29,
     .species = SPECIES_NUZLEAF,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Edwin3[2] = {
    {
     .iv = 0,
     .level = 32,
     .species = SPECIES_SNORLAX,
     },
    {
     .iv = 0,
     .level = 32,
     .species = SPECIES_NUZLEAF,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Edwin4[2] = {
    {
     .iv = 0,
     .level = 35,
     .species = SPECIES_SKYLAX,
     },
    {
     .iv = 0,
     .level = 35,
     .species = SPECIES_SHIFTRY,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Temulence3[5] = {
    {
     .iv = 250,
     .level = 52,
     .species = SPECIES_GYARADOS,
     .moves = { MOVE_SURF, MOVE_FURY_DANCE, MOVE_EARTHQUAKE, MOVE_THRASH },
     },
    {
     .iv = 250,
     .level = 52,
     .species = SPECIES_HARIYAMA,
     .moves = { MOVE_BELLY_DRUM, MOVE_FRUSTRATION, MOVE_ARM_THRUST, MOVE_FAINT_ATTACK },
     },
    {
     .iv = 250,
     .level = 53,
     .species = SPECIES_MACHAMP,
     .moves = { MOVE_DYNAMIC_PUNCH, MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_SCARY_FACE },
     },
    {
     .iv = 250,
     .level = 55,
     .species = SPECIES_RHYDON,
     .moves = { MOVE_SKULLBREAKER, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_CURSE },
     },
    {
     .iv = 250,
     .level = 57,
     .species = SPECIES_ENTEI,
     .moves = { MOVE_CALM_MIND, MOVE_EXTRASENSORY, MOVE_FIRE_BLAST, MOVE_FIRE_PUMP },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Bert[1] = {
    {
     .iv = 200,
     .level = 42,
     .species = SPECIES_MIASMAR,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Brendan1[3] = {
    {
     .iv = 50,
     .level = 18,
     .species = SPECIES_HOMBONE,
     },
    {
     .iv = 50,
     .level = 18,
     .species = SPECIES_WAILMER,
     },
    {
     .iv = 100,
     .level = 20,
     .species = SPECIES_GROVYLE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Brendan2[3] = {
    {
     .iv = 100,
     .level = 29,
     .species = SPECIES_HOMBONE,
     },
    {
     .iv = 100,
     .level = 29,
     .species = SPECIES_WAILMER,
     },
    {
     .iv = 150,
     .level = 31,
     .species = SPECIES_GROVYLE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Brendan3[1] = {
    {
     .iv = 0,
     .level = 5,
     .species = SPECIES_TORCHIC,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Brendan4[3] = {
    {
     .iv = 50,
     .level = 18,
     .species = SPECIES_WAILMER,
     },
    {
     .iv = 50,
     .level = 18,
     .species = SPECIES_SHROOMISH,
     },
    {
     .iv = 100,
     .level = 20,
     .species = SPECIES_COMBUSKEN,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Brendan5[3] = {
    {
     .iv = 100,
     .level = 29,
     .species = SPECIES_WAILMER,
     },
    {
     .iv = 100,
     .level = 29,
     .species = SPECIES_SHROOMISH,
     },
    {
     .iv = 150,
     .level = 31,
     .species = SPECIES_COMBUSKEN,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Brendan6[1] = {
    {
     .iv = 0,
     .level = 5,
     .species = SPECIES_MUDKIP,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Brendan7[3] = {
    {
     .iv = 50,
     .level = 18,
     .species = SPECIES_SHROOMISH,
     },
    {
     .iv = 50,
     .level = 18,
     .species = SPECIES_HOMBONE,
     },
    {
     .iv = 100,
     .level = 20,
     .species = SPECIES_MARSHTOMP,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Brendan8[3] = {
    {
     .iv = 100,
     .level = 29,
     .species = SPECIES_SHROOMISH,
     },
    {
     .iv = 100,
     .level = 29,
     .species = SPECIES_HOMBONE,
     },
    {
     .iv = 150,
     .level = 31,
     .species = SPECIES_MARSHTOMP,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_AliciaUnknown[1] = {
    {
     .iv = 50,
     .level = 5,
     .species = SPECIES_SNEASEL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Alicia1[3] = {
    {
     .iv = 50,
     .level = 10,
     .species = SPECIES_SABLEYE,
     },
    {
     .iv = 50,
     .level = 10,
     .species = SPECIES_SHUPPET,
     },
    {
     .iv = 100,
     .level = 15,
     .species = SPECIES_SNEASEL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Alicia2[4] = {
    {
     .iv = 100,
     .level = 29,
     .species = SPECIES_SABLEYE,
     },
    {
     .iv = 100,
     .level = 32,
     .species = SPECIES_BANETTE,
     },
    {
     .iv = 150,
     .level = 35,
     .species = SPECIES_DUSKULL,
     },
    {
     .iv = 200,
     .level = 38,
     .species = SPECIES_SNEASEL,
     },
};

const struct TrainerMonItemCustomMoves gTrainerParty_War[6] = {
    {
     .iv = 255,
     .level = 39,
     .species = SPECIES_SABLEYE,
     .heldItem = ITEM_SITRUS_BERRY,
     .moves = { MOVE_CRYSTALSTORM, MOVE_PROTECT, MOVE_SHADOW_SWIPE, MOVE_FAINT_ATTACK },
     },
    {
     .iv = 255,
     .level = 40,
     .species = SPECIES_BANETTE,
     .heldItem = ITEM_CURSED_SKULL,
     .moves = { MOVE_KARATE_CHOP, MOVE_GLARE, MOVE_SHADOW_SWIPE, MOVE_KNOCK_OFF },
     },
    {
     .iv = 255,
     .level = 41,
     .species = SPECIES_DUSCLOPS,
     .heldItem = ITEM_LEFTOVERS,
     .moves = { MOVE_SHADOW_SWIPE, MOVE_TOXIC, MOVE_PROTECT, MOVE_ENDURE },
     },
    {
     .iv = 255,
     .level = 41,
     .species = SPECIES_WEAVILE,
     .heldItem = ITEM_CHAOS_OF_ODEN,
     .moves = { MOVE_ICE_PUNCH, MOVE_SHADOW_SWIPE, MOVE_FAINT_ATTACK, MOVE_SLASH },
     },
    {
     .iv = 255,
     .level = 42,
     .species = SPECIES_GENGAR,
     .heldItem = ITEM_SNIPE_SCOPE,
     .moves = { MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB },
     },
    {
     .iv = 255,
     .level = 44,
     .species = SPECIES_GIGAWOLF,
     .heldItem = ITEM_MEATY_BELL,
     .moves = { MOVE_SHADOW_SWIPE, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_May1[3] = {
    {
     .iv = 50,
     .level = 18,
     .species = SPECIES_WAILMER,
     },
    {
     .iv = 50,
     .level = 18,
     .species = SPECIES_SHROOMISH,
     },
    {
     .iv = 100,
     .level = 20,
     .species = SPECIES_COMBUSKEN,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_May2[3] = {
    {
     .iv = 100,
     .level = 29,
     .species = SPECIES_WAILMER,
     },
    {
     .iv = 100,
     .level = 29,
     .species = SPECIES_SHROOMISH,
     },
    {
     .iv = 150,
     .level = 31,
     .species = SPECIES_COMBUSKEN,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_May3[1] = {
    {
     .iv = 0,
     .level = 5,
     .species = SPECIES_MUDKIP,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_May4[3] = {
    {
     .iv = 50,
     .level = 18,
     .species = SPECIES_SHROOMISH,
     },
    {
     .iv = 50,
     .level = 18,
     .species = SPECIES_HOMBONE,
     },
    {
     .iv = 100,
     .level = 20,
     .species = SPECIES_MARSHTOMP,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_May5[3] = {
    {
     .iv = 100,
     .level = 29,
     .species = SPECIES_SHROOMISH,
     },
    {
     .iv = 100,
     .level = 29,
     .species = SPECIES_HOMBONE,
     },
    {
     .iv = 150,
     .level = 31,
     .species = SPECIES_MARSHTOMP,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Isaac1[6] = {
    {
     .iv = 0,
     .level = 12,
     .species = SPECIES_WHISMUR,
     },
    {
     .iv = 0,
     .level = 12,
     .species = SPECIES_ZIGZAGOON,
     },
    {
     .iv = 0,
     .level = 12,
     .species = SPECIES_ARON,
     },
    {
     .iv = 0,
     .level = 12,
     .species = SPECIES_POOCHYENA,
     },
    {
     .iv = 0,
     .level = 12,
     .species = SPECIES_TAILLOW,
     },
    {
     .iv = 0,
     .level = 12,
     .species = SPECIES_MAKUHITA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Riley[3] = {
    {
     .iv = 0,
     .level = 15,
     .species = SPECIES_ZIGZAGOON,
     },
    {
     .iv = 0,
     .level = 15,
     .species = SPECIES_SPINDA,
     },
    {
     .iv = 0,
     .level = 15,
     .species = SPECIES_POOCHYENA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Aidan[2] = {
    {
     .iv = 0,
     .level = 13,
     .species = SPECIES_SEEDOT,
     },
    {
     .iv = 0,
     .level = 13,
     .species = SPECIES_NUZLEAF,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Isaac2[6] = {
    {
     .iv = 10,
     .level = 22,
     .species = SPECIES_LOUDRED,
     },
    {
     .iv = 10,
     .level = 22,
     .species = SPECIES_LINOONE,
     },
    {
     .iv = 10,
     .level = 22,
     .species = SPECIES_ARON,
     },
    {
     .iv = 10,
     .level = 22,
     .species = SPECIES_MIGHTYENA,
     },
    {
     .iv = 10,
     .level = 22,
     .species = SPECIES_SWELLOW,
     },
    {
     .iv = 10,
     .level = 22,
     .species = SPECIES_MAKUHITA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Isaac3[6] = {
    {
     .iv = 20,
     .level = 25,
     .species = SPECIES_LOUDRED,
     },
    {
     .iv = 20,
     .level = 25,
     .species = SPECIES_LINOONE,
     },
    {
     .iv = 20,
     .level = 25,
     .species = SPECIES_ARON,
     },
    {
     .iv = 20,
     .level = 25,
     .species = SPECIES_MIGHTYENA,
     },
    {
     .iv = 20,
     .level = 25,
     .species = SPECIES_SWELLOW,
     },
    {
     .iv = 20,
     .level = 25,
     .species = SPECIES_HARIYAMA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Isaac4[6] = {
    {
     .iv = 30,
     .level = 28,
     .species = SPECIES_LOUDRED,
     },
    {
     .iv = 30,
     .level = 28,
     .species = SPECIES_LINOONE,
     },
    {
     .iv = 30,
     .level = 28,
     .species = SPECIES_ARON,
     },
    {
     .iv = 30,
     .level = 28,
     .species = SPECIES_MIGHTYENA,
     },
    {
     .iv = 30,
     .level = 28,
     .species = SPECIES_SWELLOW,
     },
    {
     .iv = 30,
     .level = 28,
     .species = SPECIES_HARIYAMA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Isaac5[6] = {
    {
     .iv = 40,
     .level = 31,
     .species = SPECIES_LOUDRED,
     },
    {
     .iv = 40,
     .level = 31,
     .species = SPECIES_LINOONE,
     },
    {
     .iv = 40,
     .level = 31,
     .species = SPECIES_LAIRON,
     },
    {
     .iv = 40,
     .level = 31,
     .species = SPECIES_MIGHTYENA,
     },
    {
     .iv = 40,
     .level = 31,
     .species = SPECIES_SWELLOW,
     },
    {
     .iv = 40,
     .level = 31,
     .species = SPECIES_HARIYAMA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Hiroaki[6] = {
    {
     .iv = 0,
     .level = 20,
     .species = SPECIES_MUNCHLAX,
     },
    {
     .iv = 0,
     .level = 24,
     .species = SPECIES_MUNCHLAX,
     },
    {
     .iv = 0,
     .level = 26,
     .species = SPECIES_MUNCHLAX,
     },
    {
     .iv = 0,
     .level = 28,
     .species = SPECIES_MUNCHLAX,
     },
    {
     .iv = 0,
     .level = 25,
     .species = SPECIES_KIRLIA,
     },
    {
     .iv = 0,
     .level = 28,
     .species = SPECIES_KIRLIA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Alexia[2] = {
    {
     .iv = 0,
     .level = 13,
     .species = SPECIES_MUNCHLAX,
     },
    {
     .iv = 0,
     .level = 13,
     .species = SPECIES_SNORLAX,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Danielle[1] = {
    {
     .iv = 0,
     .level = 24,
     .species = SPECIES_SKITTY,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Lydia1[6] = {
    {
     .iv = 10,
     .level = 22,
     .species = SPECIES_WINGULL,
     },
    {
     .iv = 10,
     .level = 22,
     .species = SPECIES_SHROOMISH,
     },
    {
     .iv = 10,
     .level = 22,
     .species = SPECIES_GRAVEILL,
     },
    {
     .iv = 10,
     .level = 22,
     .species = SPECIES_ROSELIA,
     },
    {
     .iv = 10,
     .level = 22,
     .species = SPECIES_SKITTY,
     },
    {
     .iv = 10,
     .level = 22,
     .species = SPECIES_GOLDEEN,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Lydia2[6] = {
    {
     .iv = 20,
     .level = 25,
     .species = SPECIES_PELIPPER,
     },
    {
     .iv = 20,
     .level = 25,
     .species = SPECIES_BRELOOM,
     },
    {
     .iv = 20,
     .level = 25,
     .species = SPECIES_GRAVEILL,
     },
    {
     .iv = 20,
     .level = 25,
     .species = SPECIES_ROSELIA,
     },
    {
     .iv = 20,
     .level = 25,
     .species = SPECIES_DELCATTY,
     },
    {
     .iv = 20,
     .level = 25,
     .species = SPECIES_GOLDEEN,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Lydia3[6] = {
    {
     .iv = 30,
     .level = 28,
     .species = SPECIES_PELIPPER,
     },
    {
     .iv = 30,
     .level = 28,
     .species = SPECIES_BRELOOM,
     },
    {
     .iv = 30,
     .level = 28,
     .species = SPECIES_GRAVEILL,
     },
    {
     .iv = 30,
     .level = 28,
     .species = SPECIES_ROSELIA,
     },
    {
     .iv = 30,
     .level = 28,
     .species = SPECIES_DELCATTY,
     },
    {
     .iv = 30,
     .level = 28,
     .species = SPECIES_GOLDEEN,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Lydia4[6] = {
    {
     .iv = 40,
     .level = 31,
     .species = SPECIES_PELIPPER,
     },
    {
     .iv = 40,
     .level = 31,
     .species = SPECIES_BRELOOM,
     },
    {
     .iv = 40,
     .level = 31,
     .species = SPECIES_AZOMBARILL,
     },
    {
     .iv = 40,
     .level = 31,
     .species = SPECIES_ROSELIA,
     },
    {
     .iv = 40,
     .level = 31,
     .species = SPECIES_DELCATTY,
     },
    {
     .iv = 40,
     .level = 31,
     .species = SPECIES_SEAKING,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_YulVarin[1] = {
    {
     .iv = 250,
     .level = 44,
     .species = SPECIES_BRELOOM,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_SwineWitch[3] = {
    {
     .iv = 250,
     .level = 41,
     .species = SPECIES_BANETTE,
     },
    {
     .iv = 250,
     .level = 41,
     .species = SPECIES_SHIFTRY,
     },
    {
     .iv = 250,
     .level = 41,
     .species = SPECIES_GORELAX,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Sebastian[1] = {
    {
     .iv = 50,
     .level = 39,
     .species = SPECIES_KENCHUKUO,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Jackson1[1] = {
    {
     .iv = 60,
     .level = 31,
     .species = SPECIES_BRELOOM,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Jackson2[1] = {
    {
     .iv = 70,
     .level = 34,
     .species = SPECIES_BRELOOM,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Jackson3[1] = {
    {
     .iv = 80,
     .level = 37,
     .species = SPECIES_BRELOOM,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Jackson4[2] = {
    {
     .iv = 90,
     .level = 39,
     .species = SPECIES_KECLEON,
     },
    {
     .iv = 90,
     .level = 39,
     .species = SPECIES_BRELOOM,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Catherine1[2] = {
    {
     .iv = 50,
     .level = 27,
     .species = SPECIES_GLOOM,
     },
    {
     .iv = 50,
     .level = 27,
     .species = SPECIES_ROSELIA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_ToothWitch[3] = {
    {
     .iv = 200,
     .level = 40,
     .species = SPECIES_MISDREAVUS,
     },
    {
     .iv = 250,
     .level = 40,
     .species = SPECIES_SOLROCK,
     },
    {
     .iv = 250,
     .level = 40,
     .species = SPECIES_LUNATONE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Sophia[2] = {
    {
     .iv = 50,
     .level = 38,
     .species = SPECIES_SWABLU,
     },
    {
     .iv = 50,
     .level = 38,
     .species = SPECIES_ROSELIA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Catherine2[2] = {
    {
     .iv = 60,
     .level = 30,
     .species = SPECIES_GLOOM,
     },
    {
     .iv = 60,
     .level = 30,
     .species = SPECIES_ROSELIA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Salaryman1[2] = {
    {
     .iv = 70,
     .level = 30,
     .species = SPECIES_GEODUDE,
     },
    {
     .iv = 70,
     .level = 33,
     .species = SPECIES_GRAVELER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Catherine3[2] = {
    {
     .iv = 80,
     .level = 36,
     .species = SPECIES_GLOOM,
     },
    {
     .iv = 80,
     .level = 36,
     .species = SPECIES_ROSELIA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Catherine4[2] = {
    {
     .iv = 90,
     .level = 39,
     .species = SPECIES_BELLOSSOM,
     },
    {
     .iv = 90,
     .level = 39,
     .species = SPECIES_ROSELIA,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Temulence4[3] = {
    {
     .iv = 255,
     .level = 43,
     .species = SPECIES_FANGASU,
     .moves = { MOVE_HEADBUTT, MOVE_RAZOR_LEAF, MOVE_AGILITY, MOVE_SLEEP_POWDER },
     },
    {
     .iv = 255,
     .level = 44,
     .species = SPECIES_KURIPUTO,
     .moves = { MOVE_RAZOR_LEAF, MOVE_SUBMISSION, MOVE_ICE_PUNCH, MOVE_MEGAHORN },
     },
    {
     .iv = 255,
     .level = 45,
     .species = SPECIES_NIGERA,
     .moves = { MOVE_TWINEEDLE, MOVE_POISON_FANG, MOVE_STORM_SURGE, MOVE_MEAN_LOOK },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Footman12[2] = {
    {
     .iv = 0,
     .level = 29,
     .species = SPECIES_HOMBONE,
     },
    {
     .iv = 0,
     .level = 29,
     .species = SPECIES_GEODUDE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Salaryman2[4] = {
    {
     .iv = 0,
     .level = 30,
     .species = SPECIES_GEODUDE,
     },
    {
     .iv = 0,
     .level = 30,
     .species = SPECIES_HOMBONE,
     },
    {
     .iv = 0,
     .level = 30,
     .species = SPECIES_HOMBONE,
     },
    {
     .iv = 0,
     .level = 30,
     .species = SPECIES_RELICANTH,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Footman13[2] = {
    {
     .iv = 0,
     .level = 32,
     .species = SPECIES_HOMBONE,
     },
    {
     .iv = 0,
     .level = 32,
     .species = SPECIES_KABUTO,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Salaryman3[1] = {
    {
     .iv = 120,
     .level = 30,
     .species = SPECIES_HOMBONE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Grunt1[2] = {
    {
     .iv = 0,
     .level = 37,
     .species = SPECIES_POOCHYENA,
     },
    {
     .iv = 0,
     .level = 37,
     .species = SPECIES_HOMBONE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Grunt2[1] = {
    {
     .iv = 0,
     .level = 38,
     .species = SPECIES_HOMBONE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Grunt3[3] = {
    {
     .iv = 0,
     .level = 36,
     .species = SPECIES_POOCHYENA,
     },
    {
     .iv = 0,
     .level = 36,
     .species = SPECIES_ZUBAT,
     },
    {
     .iv = 0,
     .level = 36,
     .species = SPECIES_HOMBONE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Grunt4[1] = {
    {
     .iv = 0,
     .level = 17,
     .species = SPECIES_BALTOY,
     },
};

const struct TrainerMonItemCustomMoves gTrainerParty_Zabulon[2] = {
    {
     .iv = 10,
     .level = 11,
     .species = SPECIES_HOUNDSOUR,
     .heldItem = ITEM_CINNAMON,
     .moves = { MOVE_EMBER, MOVE_GLARE, MOVE_LEER, MOVE_TACKLE },
     },
    {
     .iv = 30,
     .level = 13,
     .species = SPECIES_DIRTKROW,
     .heldItem = ITEM_STAR_PIECE,
     .moves = { MOVE_PECK, MOVE_GUST, MOVE_GLARE, MOVE_NONE },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Grunt5[2] = {
    {
     .iv = 0,
     .level = 9,
     .species = SPECIES_POOCHYENA,
     },
    {
     .iv = 0,
     .level = 9,
     .species = SPECIES_POOCHYENA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Grunt6[2] = {
    {
     .iv = 0,
     .level = 16,
     .species = SPECIES_POOCHYENA,
     },
    {
     .iv = 0,
     .level = 16,
     .species = SPECIES_POOCHYENA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Grunt7[2] = {
    {
     .iv = 0,
     .level = 16,
     .species = SPECIES_POOCHYENA,
     },
    {
     .iv = 0,
     .level = 16,
     .species = SPECIES_POOCHYENA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Grunt8[2] = {
    {
     .iv = 0,
     .level = 20,
     .species = SPECIES_ZUBAT,
     },
    {
     .iv = 0,
     .level = 20,
     .species = SPECIES_POOCHYENA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Grunt9[2] = {
    {
     .iv = 0,
     .level = 17,
     .species = SPECIES_ZUBAT,
     },
    {
     .iv = 0,
     .level = 17,
     .species = SPECIES_POOCHYENA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Belial2[1] = {
    {
     .iv = 40,
     .level = 16,
     .species = SPECIES_PSYPIG,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Might[2] = {
    {
     .iv = 0,
     .level = 67,
     .species = SPECIES_QWILSHARK,
     },
    {
     .iv = 0,
     .level = 67,
     .species = SPECIES_PELIPPER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Grunt10[2] = {
    {
     .iv = 0,
     .level = 27,
     .species = SPECIES_POOCHYENA,
     },
    {
     .iv = 0,
     .level = 27,
     .species = SPECIES_HOMBONE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Grunt11[3] = {
    {
     .iv = 0,
     .level = 26,
     .species = SPECIES_POOCHYENA,
     },
    {
     .iv = 0,
     .level = 26,
     .species = SPECIES_ZUBAT,
     },
    {
     .iv = 0,
     .level = 26,
     .species = SPECIES_HOMBONE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Grunt12[1] = {
    {
     .iv = 0,
     .level = 15,
     .species = SPECIES_HOMBONE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Grunt13[2] = {
    {
     .iv = 0,
     .level = 14,
     .species = SPECIES_ZUBAT,
     },
    {
     .iv = 0,
     .level = 14,
     .species = SPECIES_HOMBONE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Grunt14[1] = {
    {
     .iv = 0,
     .level = 17,
     .species = SPECIES_BALTOY,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Grunt15[3] = {
    {
     .iv = 0,
     .level = 30,
     .species = SPECIES_ZUBAT,
     },
    {
     .iv = 0,
     .level = 30,
     .species = SPECIES_ZUBAT,
     },
    {
     .iv = 0,
     .level = 30,
     .species = SPECIES_ZUBAT,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Grunt16[2] = {
    {
     .iv = 0,
     .level = 31,
     .species = SPECIES_POOCHYENA,
     },
    {
     .iv = 0,
     .level = 31,
     .species = SPECIES_HOMBONE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Grunt17[2] = {
    {
     .iv = 0,
     .level = 31,
     .species = SPECIES_HOMBONE,
     },
    {
     .iv = 0,
     .level = 31,
     .species = SPECIES_HOMBONE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Linda[1] = {
    {
     .iv = 200,
     .level = 41,
     .species = SPECIES_GRIMREAPER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Salaryman4[3] = {
    {
     .iv = 0,
     .level = 32,
     .species = SPECIES_RELICANTH,
     },
    {
     .iv = 0,
     .level = 31,
     .species = SPECIES_HOMBONE,
     },
    {
     .iv = 0,
     .level = 33,
     .species = SPECIES_LUNATONE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Salaryman5[1] = {
    {
     .iv = 100,
     .level = 32,
     .species = SPECIES_GRAVELER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Kent[2] = {
    {
     .iv = 0,
     .level = 14,
     .species = SPECIES_EYE_EYE,
     },
    {
     .iv = 0,
     .level = 14,
     .species = SPECIES_EYE_EYE,
     },
};

const struct TrainerMonItemCustomMoves gTrainerParty_Pestilence[3] = {
    {
     .iv = 50,
     .level = 16,
     .species = SPECIES_MOULDER,
     .heldItem = ITEM_SNAKE_EYES,
     .moves = { MOVE_HARDEN, MOVE_ACID, MOVE_POUND, MOVE_DISABLE },
     },
    {
     .iv = 50,
     .level = 17,
     .species = SPECIES_MOULDER,
     .heldItem = ITEM_SNAKE_EYES,
     .moves = { MOVE_ACID, MOVE_HARDEN, MOVE_POUND, MOVE_TOXIC },
     },
    {
     .iv = 100,
     .level = 18,
     .species = SPECIES_QWILFISH,
     .heldItem = ITEM_SNAKE_EYES,
     .moves = { MOVE_TOXIC, MOVE_POISON_STING, MOVE_PIN_MISSILE, MOVE_WATER_GUN },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Salaryman6[3] = {
    {
     .iv = 50,
     .level = 28,
     .species = SPECIES_HOMBONE,
     },
    {
     .iv = 50,
     .level = 28,
     .species = SPECIES_NOSEPASS,
     },
    {
     .iv = 50,
     .level = 28,
     .species = SPECIES_HOMBONE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Tabitha[3] = {
    {
     .iv = 50,
     .level = 20,
     .species = SPECIES_HOMBONE,
     },
    {
     .iv = 50,
     .level = 20,
     .species = SPECIES_POOCHYENA,
     },
    {
     .iv = 50,
     .level = 20,
     .species = SPECIES_HOMBONE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Shaderu[1] = {
    {
     .iv = 255,
     .level = 80,
     .species = SPECIES_SHADERU,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Gleis3[5] = {
    {
     .iv = 255,
     .level = 38,
     .species = SPECIES_HAUNTER,
     },
    {
     .iv = 255,
     .level = 40,
     .species = SPECIES_ALAKAZAM,
     },
    {
     .iv = 255,
     .level = 39,
     .species = SPECIES_QWILSHARK,
     },
    {
     .iv = 255,
     .level = 38,
     .species = SPECIES_SEVIPER,
     },
    {
     .iv = 255,
     .level = 41,
     .species = SPECIES_FACELEECH,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Courtney[2] = {
    {
     .iv = 50,
     .level = 38,
     .species = SPECIES_HOMBEAST,
     },
    {
     .iv = 50,
     .level = 38,
     .species = SPECIES_MIGHTYENA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Maxie1[3] = {
    {
     .iv = 150,
     .level = 41,
     .species = SPECIES_MIGHTYENA,
     },
    {
     .iv = 150,
     .level = 41,
     .species = SPECIES_CROBAT,
     },
    {
     .iv = 150,
     .level = 43,
     .species = SPECIES_HOMBEAST,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Maxie2[3] = {
    {
     .iv = 150,
     .level = 24,
     .species = SPECIES_MIGHTYENA,
     },
    {
     .iv = 150,
     .level = 24,
     .species = SPECIES_GOLBAT,
     },
    {
     .iv = 150,
     .level = 25,
     .species = SPECIES_HOMBEAST,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Tiana[2] = {
    {
     .iv = 0,
     .level = 4,
     .species = SPECIES_ZIGZAGOON,
     },
    {
     .iv = 0,
     .level = 4,
     .species = SPECIES_ZIGZAGOON,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Harvey2[2] = {
    {
     .iv = 0,
     .level = 10,
     .species = SPECIES_ROTMANDER,
     },
    {
     .iv = 0,
     .level = 10,
     .species = SPECIES_GRAVEILL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Janice[1] = {
    {
     .iv = 0,
     .level = 9,
     .species = SPECIES_ROTMANDER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Mugwin4[3] = {
    {
     .iv = 100,
     .level = 32,
     .species = SPECIES_PINECO,
     },
    {
     .iv = 100,
     .level = 32,
     .species = SPECIES_SPINDA,
     },
    {
     .iv = 100,
     .level = 32,
     .species = SPECIES_HOMBONE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Haley1[2] = {
    {
     .iv = 10,
     .level = 26,
     .species = SPECIES_SNORLAX,
     },
    {
     .iv = 10,
     .level = 26,
     .species = SPECIES_SHROOMISH,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Haley2[2] = {
    {
     .iv = 20,
     .level = 29,
     .species = SPECIES_SNORLAX,
     },
    {
     .iv = 20,
     .level = 29,
     .species = SPECIES_BRELOOM,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Haley3[2] = {
    {
     .iv = 30,
     .level = 32,
     .species = SPECIES_SNORLAX,
     },
    {
     .iv = 30,
     .level = 32,
     .species = SPECIES_BRELOOM,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Haley4[3] = {
    {
     .iv = 40,
     .level = 34,
     .species = SPECIES_SWELLOW,
     },
    {
     .iv = 40,
     .level = 34,
     .species = SPECIES_SNORLAX,
     },
    {
     .iv = 40,
     .level = 34,
     .species = SPECIES_BRELOOM,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Sally[1] = {
    {
     .iv = 0,
     .level = 16,
     .species = SPECIES_ODDISH,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Robin[3] = {
    {
     .iv = 0,
     .level = 14,
     .species = SPECIES_SKITTY,
     },
    {
     .iv = 0,
     .level = 14,
     .species = SPECIES_SHROOMISH,
     },
    {
     .iv = 0,
     .level = 14,
     .species = SPECIES_GRAVEILL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Andrea[1] = {
    {
     .iv = 100,
     .level = 41,
     .species = SPECIES_LUVDISC,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Crissy[2] = {
    {
     .iv = 100,
     .level = 40,
     .species = SPECIES_WAILMER,
     },
    {
     .iv = 100,
     .level = 40,
     .species = SPECIES_WAILMER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Rica[2] = {
    {
     .iv = 0,
     .level = 4,
     .species = SPECIES_GRAVEILL,
     },
    {
     .iv = 0,
     .level = 4,
     .species = SPECIES_GRAVEILL,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Lyle[3] = {
    {
     .iv = 0,
     .level = 7,
     .species = SPECIES_SLAKOTH,
     },
    {
     .iv = 0,
     .level = 7,
     .species = SPECIES_WURMPLE,
     },
    {
     .iv = 0,
     .level = 7,
     .species = SPECIES_RALTS,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Jose[3] = {
    {
     .iv = 50,
     .level = 8,
     .species = SPECIES_WURMPLE,
     },
    {
     .iv = 50,
     .level = 8,
     .species = SPECIES_SILCOON,
     },
    {
     .iv = 50,
     .level = 8,
     .species = SPECIES_HYPEREGG,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Doug[2] = {
    {
     .iv = 0,
     .level = 26,
     .species = SPECIES_HYPEREGG,
     },
    {
     .iv = 0,
     .level = 26,
     .species = SPECIES_HYPEREGG,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Tommo[2] = {
    {
     .iv = 200,
     .level = 39,
     .species = SPECIES_PSYPIG,
     },
    {
     .iv = 200,
     .level = 39,
     .species = SPECIES_PSYPIG,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Cinnabar[1] = {
    {
     .iv = 200,
     .level = 42,
     .species = SPECIES_KAJILIANTH,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Andromalius[1] = {
    {
     .iv = 70,
     .level = 12,
     .species = SPECIES_SECRETEGG,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_James1[1] = {
    {
     .iv = 10,
     .level = 27,
     .species = SPECIES_SECRETEGG,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Floatzel[2] = {
    {
     .iv = 200,
     .level = 39,
     .species = SPECIES_ROSELIA,
     },
    {
     .iv = 200,
     .level = 39,
     .species = SPECIES_SWELLOW,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_James2[3] = {
    {
     .iv = 30,
     .level = 31,
     .species = SPECIES_SURSKIT,
     },
    {
     .iv = 30,
     .level = 31,
     .species = SPECIES_DUSTOX,
     },
    {
     .iv = 30,
     .level = 31,
     .species = SPECIES_SECRETEGG,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_James3[4] = {
    {
     .iv = 40,
     .level = 33,
     .species = SPECIES_SURSKIT,
     },
    {
     .iv = 40,
     .level = 33,
     .species = SPECIES_SECRETEGG,
     },
    {
     .iv = 40,
     .level = 33,
     .species = SPECIES_DUSTOX,
     },
    {
     .iv = 40,
     .level = 33,
     .species = SPECIES_SECRETEGG,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_KloThok[2] = {
    {
     .iv = 0,
     .level = 33,
     .species = SPECIES_SNORUNT,
     },
    {
     .iv = 0,
     .level = 34,
     .species = SPECIES_GLALIE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_RaaKor[4] = {
    {
     .iv = 0,
     .level = 31,
     .species = SPECIES_SEEL,
     },
    {
     .iv = 0,
     .level = 29,
     .species = SPECIES_SEEL,
     },
    {
     .iv = 0,
     .level = 32,
     .species = SPECIES_SNORUNT,
     },
    {
     .iv = 0,
     .level = 32,
     .species = SPECIES_SNORUNT,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Lenny[2] = {
    {
     .iv = 0,
     .level = 19,
     .species = SPECIES_MACHOP,
     },
    {
     .iv = 0,
     .level = 19,
     .species = SPECIES_MACHOP,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Lucas1[3] = {
    {
     .iv = 0,
     .level = 18,
     .species = SPECIES_GEODUDE,
     },
    {
     .iv = 0,
     .level = 18,
     .species = SPECIES_GEODUDE,
     },
    {
     .iv = 0,
     .level = 18,
     .species = SPECIES_GEODUDE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Alan[3] = {
    {
     .iv = 0,
     .level = 22,
     .species = SPECIES_GEODUDE,
     },
    {
     .iv = 0,
     .level = 22,
     .species = SPECIES_NOSEPASS,
     },
    {
     .iv = 0,
     .level = 22,
     .species = SPECIES_GRAVELER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Clark[3] = {
    {
     .iv = 0,
     .level = 8,
     .species = SPECIES_GEODUDE,
     },
    {
     .iv = 0,
     .level = 8,
     .species = SPECIES_GEODUDE,
     },
    {
     .iv = 0,
     .level = 8,
     .species = SPECIES_GEODUDE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_FengDarin[2] = {
    {
     .iv = 0,
     .level = 33,
     .species = SPECIES_BALTOY,
     },
    {
     .iv = 0,
     .level = 33,
     .species = SPECIES_BALTOY,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Lucas2[1] = {
    {
     .iv = 0,
     .level = 9,
     .species = SPECIES_WAILMER,
     .moves = { MOVE_SPLASH, MOVE_WATER_GUN, MOVE_NONE, MOVE_NONE },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Brentford[2] = {
    {
     .iv = 200,
     .level = 75,
     .species = SPECIES_LUXRAY,
     .moves = { MOVE_DISCHARGE, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_FRUSTRATION },
     },
    {
     .iv = 200,
     .level = 75,
     .species = SPECIES_LUXRAY,
     .moves = { MOVE_CRUNCH, MOVE_SCARY_FACE, MOVE_THUNDERBOLT, MOVE_FRUSTRATION },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Hero[3] = {
    {
     .iv = 200,
     .level = 75,
     .species = SPECIES_MAGNETON,
     },
    {
     .iv = 200,
     .level = 75,
     .species = SPECIES_ELECTRODE,
     },
    {
     .iv = 200,
     .level = 75,
     .species = SPECIES_EXPLOUD,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Trent1[4] = {
    {
     .iv = 10,
     .level = 24,
     .species = SPECIES_GEODUDE,
     },
    {
     .iv = 10,
     .level = 24,
     .species = SPECIES_GEODUDE,
     },
    {
     .iv = 10,
     .level = 24,
     .species = SPECIES_GEODUDE,
     },
    {
     .iv = 10,
     .level = 24,
     .species = SPECIES_GRAVELER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Zuul[4] = {
    {
     .iv = 200,
     .level = 75,
     .species = SPECIES_MAGNETON,
     },
    {
     .iv = 200,
     .level = 75,
     .species = SPECIES_RAICHU,
     },
    {
     .iv = 200,
     .level = 75,
     .species = SPECIES_JOLTEON,
     },
    {
     .iv = 200,
     .level = 75,
     .species = SPECIES_EMOLGA,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Kylie[6] = {
    {
     .iv = 255,
     .level = 76,
     .species = SPECIES_PRIMEAPE,
     .moves = { MOVE_THUNDERBOLT, MOVE_IRON_TAIL, MOVE_THUNDER_WAVE, MOVE_TOXIC },
     },
    {
     .iv = 255,
     .level = 77,
     .species = SPECIES_LUXRAY,
     .moves = { MOVE_THUNDERBOLT, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_FRUSTRATION },
     },
    {
     .iv = 255,
     .level = 78,
     .species = SPECIES_VOLBEAT,
     .moves = { MOVE_BRIGHT_IDEA, MOVE_SIGNAL_BEAM, MOVE_AIR_CUTTER, MOVE_PSYCHIC },
     },
    {
     .iv = 255,
     .level = 79,
     .species = SPECIES_BLISSEY,
     .moves = { MOVE_METRONOME, MOVE_SOFT_BOILED, MOVE_AROMATHERAPY, MOVE_SEISMIC_TOSS },
     },
    {
     .iv = 255,
     .level = 80,
     .species = SPECIES_ZEBSTRIKA,
     .moves = { MOVE_THUNDERBOLT, MOVE_FLAME_WHEEL, MOVE_FRICTIONKICK, MOVE_TACKLE },
     },
    {
     .iv = 255,
     .level = 81,
     .species = SPECIES_ROCLOBSTER,
     .moves = { MOVE_DRAGON_CLAW, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_ICE_BEAM },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Trent2[4] = {
    {
     .iv = 40,
     .level = 33,
     .species = SPECIES_GRAVELER,
     },
    {
     .iv = 40,
     .level = 33,
     .species = SPECIES_GRAVELER,
     },
    {
     .iv = 40,
     .level = 33,
     .species = SPECIES_GRAVELER,
     },
    {
     .iv = 40,
     .level = 33,
     .species = SPECIES_GOLEM,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_MaiAndHiro[2] = {
    {
     .iv = 250,
     .level = 47,
     .species = SPECIES_NIDOQUEEN,
     },
    {
     .iv = 250,
     .level = 47,
     .species = SPECIES_NIDOKING,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_LeaAndJed[2] = {
    {
     .iv = 0,
     .level = 45,
     .species = SPECIES_LUVDISC,
     },
    {
     .iv = 0,
     .level = 45,
     .species = SPECIES_LUVDISC,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_LolaAndLute[2] = {
    {
     .iv = 150,
     .level = 70,
     .species = SPECIES_VOLBEAT,
     },
    {
     .iv = 150,
     .level = 70,
     .species = SPECIES_ILLUMISE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_LoisAndHal1[2] = {
    {
     .iv = 10,
     .level = 30,
     .species = SPECIES_VOLBEAT,
     },
    {
     .iv = 10,
     .level = 30,
     .species = SPECIES_ILLUMISE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_LoisAndHal2[2] = {
    {
     .iv = 20,
     .level = 33,
     .species = SPECIES_VOLBEAT,
     },
    {
     .iv = 20,
     .level = 33,
     .species = SPECIES_ILLUMISE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_LoisAndHal3[2] = {
    {
     .iv = 30,
     .level = 36,
     .species = SPECIES_VOLBEAT,
     },
    {
     .iv = 30,
     .level = 36,
     .species = SPECIES_ILLUMISE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_LoisAndHal4[2] = {
    {
     .iv = 40,
     .level = 39,
     .species = SPECIES_VOLBEAT,
     },
    {
     .iv = 40,
     .level = 39,
     .species = SPECIES_ILLUMISE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Johanna[1] = {
    {
     .iv = 0,
     .level = 13,
     .species = SPECIES_GOLDEEN,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_MeiLin[1] = {
    {
     .iv = 200,
     .level = 34,
     .species = SPECIES_CLAYDOL,
     .moves = { MOVE_PSYCHIC, MOVE_EARTHQUAKE, MOVE_CALM_MIND, MOVE_SUBSTITUTE },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Vivian[1] = {
    {
     .iv = 100,
     .level = 19,
     .species = SPECIES_MEDITITE,
     .moves = { MOVE_BIDE, MOVE_DETECT, MOVE_CONFUSION, MOVE_THUNDER_PUNCH },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Nianzhu[1] = {
    {
     .iv = 100,
     .level = 36,
     .species = SPECIES_GRUMPIG,
     .moves = { MOVE_EXTRASENSORY, MOVE_PROTECT, MOVE_BOUNCE, MOVE_MAGIC_COAT },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Siobhan[2] = {
    {
     .iv = 200,
     .level = 40,
     .species = SPECIES_ELECTABUGS,
     .moves = { MOVE_THUNDER_PUNCH, MOVE_LIGHT_SCREEN, MOVE_DISCHARGE, MOVE_REFLECT },
     },
    {
     .iv = 200,
     .level = 40,
     .species = SPECIES_GRIMREAPER,
     .moves = { MOVE_SWORDS_DANCE, MOVE_AERIAL_ACE, MOVE_SLASH, MOVE_FURY_CUTTER },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Witch[2] = {
    {
     .iv = 255,
     .level = 44,
     .species = SPECIES_GARDEVOIR,
     .moves = { MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THIEF, MOVE_CALM_MIND },
     },
    {
     .iv = 255,
     .level = 44,
     .species = SPECIES_LUNATONE,
     .moves = { MOVE_COSMIC_POWER, MOVE_PSYCHIC, MOVE_ROCK_SLIDE, MOVE_MOONLIGHT },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_SandWitch[3] = {
    {
     .iv = 250,
     .level = 44,
     .species = SPECIES_CLAYDOL,
     .moves = { MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_CURSE },
     },
    {
     .iv = 250,
     .level = 43,
     .species = SPECIES_MAROWAK,
     .moves = { MOVE_BONE_CLUB, MOVE_SWORDS_DANCE, MOVE_GLARE, MOVE_SLASH },
     },
    {
     .iv = 250,
     .level = 44,
     .species = SPECIES_RHYDON,
     .moves = { MOVE_FIRE_PUMP, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Asphodel[2] = {
    {
     .iv = 255,
     .level = 47,
     .species = SPECIES_SABLEYE,
     },
    {
     .iv = 255,
     .level = 47,
     .species = SPECIES_LUXRAY,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Leozar[1] = {
    {
     .iv = 255,
     .level = 48,
     .species = SPECIES_SEVICIOUS,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Gleis4[1] = {
    {
     .iv = 30,
     .level = 17,
     .species = SPECIES_FACELEECH,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Sputnov4[5] = {
    {
     .iv = 255,
     .level = 71,
     .species = SPECIES_AMPHAROS,
     .moves = { MOVE_THUNDER_PUNCH, MOVE_COTTON_SPORE, MOVE_SIGNAL_BEAM, MOVE_BRIGHT_IDEA },
     },
    {
     .iv = 255,
     .level = 71,
     .species = SPECIES_AMPHAROS,
     .moves = { MOVE_DISCHARGE, MOVE_SIGNAL_BEAM, MOVE_BRIGHT_IDEA, MOVE_FIRE_PUMP },
     },
    {
     .iv = 255,
     .level = 71,
     .species = SPECIES_AMPHAROS,
     .moves = { MOVE_THUNDERBOLT, MOVE_BRIGHT_IDEA, MOVE_SIGNAL_BEAM, MOVE_TOXIC },
     },
    {
     .iv = 255,
     .level = 71,
     .species = SPECIES_AMPHAROS,
     .moves = { MOVE_CONFUSE_RAY, MOVE_COTTON_SPORE, MOVE_DISCHARGE, MOVE_SIGNAL_BEAM },
     },
    {
     .iv = 255,
     .level = 73,
     .species = SPECIES_AMPHAROS,
     .moves = { MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_DISCHARGE, MOVE_SIGNAL_BEAM },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Vladov4[5] = {
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_TAUROS,
     .moves = { MOVE_FRUSTRATION, MOVE_HEADBUTT, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE },
     },
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_MILTANK,
     .moves = { MOVE_BODY_SLAM, MOVE_MILK_DRINK, MOVE_ROLLOUT, MOVE_SKULLBREAKER },
     },
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_RAMSHAKER,
     .moves = { MOVE_PSYCHIC, MOVE_COSMIC_POWER, MOVE_BODY_SLAM, MOVE_TOXIC },
     },
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_TAUROS,
     .moves = { MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_SCARY_FACE, MOVE_SCREECH },
     },
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_MILTANK,
     .moves = { MOVE_MILK_DRINK, MOVE_SUBSTITUTE, MOVE_LEECH_SEED, MOVE_BODY_SLAM },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Adolv4[5] = {
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_DRAGONITE,
     .moves = { MOVE_OUTRAGE, MOVE_THUNDERBOLT, MOVE_FIRE_BLAST, MOVE_ICE_BEAM },
     },
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_DRAGONITE,
     .moves = { MOVE_OUTRAGE, MOVE_HYPER_BEAM, MOVE_SKULLBREAKER, MOVE_EARTHQUAKE },
     },
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_DRAGONITE,
     .moves = { MOVE_EARTHQUAKE, MOVE_OUTRAGE, MOVE_ICE_BEAM, MOVE_ROAR },
     },
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_DRAGONITE,
     .moves = { MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_SKULLBREAKER },
     },
    {
     .iv = 255,
     .level = 71,
     .species = SPECIES_DRAGONITE,
     .moves = { MOVE_SHADOW_SWIPE, MOVE_OUTRAGE, MOVE_ICE_BEAM, MOVE_EARTHQUAKE },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Chief[5] = {
    {
     .iv = 150,
     .level = 71,
     .species = SPECIES_STITCHER,
     },
    {
     .iv = 150,
     .level = 72,
     .species = SPECIES_STITCHER,
     },
    {
     .iv = 150,
     .level = 73,
     .species = SPECIES_ANTISPIRAL,
     },
    {
     .iv = 150,
     .level = 74,
     .species = SPECIES_ANTISPIRAL,
     },
    {
     .iv = 250,
     .level = 75,
     .species = SPECIES_SHINIGAMI,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Brendan9[4] = {
    {
     .iv = 150,
     .level = 31,
     .species = SPECIES_SWELLOW,
     },
    {
     .iv = 150,
     .level = 32,
     .species = SPECIES_HOMBONE,
     },
    {
     .iv = 150,
     .level = 32,
     .species = SPECIES_WAILMER,
     },
    {
     .iv = 200,
     .level = 34,
     .species = SPECIES_GROVYLE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Pyrite[4] = {
    {
     .iv = 250,
     .level = 67,
     .species = SPECIES_PERSIAN,
     },
    {
     .iv = 250,
     .level = 67,
     .species = SPECIES_SHARPEDO,
     },
    {
     .iv = 250,
     .level = 70,
     .species = SPECIES_CRAWDAUNT,
     },
    {
     .iv = 250,
     .level = 67,
     .species = SPECIES_SHIFTRY,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Brendan10[4] = {
    {
     .iv = 150,
     .level = 31,
     .species = SPECIES_SWELLOW,
     },
    {
     .iv = 150,
     .level = 32,
     .species = SPECIES_SHROOMISH,
     },
    {
     .iv = 150,
     .level = 32,
     .species = SPECIES_HOMBONE,
     },
    {
     .iv = 200,
     .level = 34,
     .species = SPECIES_MARSHTOMP,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_May6[4] = {
    {
     .iv = 150,
     .level = 31,
     .species = SPECIES_SWELLOW,
     },
    {
     .iv = 150,
     .level = 32,
     .species = SPECIES_HOMBONE,
     },
    {
     .iv = 150,
     .level = 32,
     .species = SPECIES_WAILMER,
     },
    {
     .iv = 200,
     .level = 34,
     .species = SPECIES_GROVYLE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_May7[4] = {
    {
     .iv = 150,
     .level = 31,
     .species = SPECIES_SWELLOW,
     },
    {
     .iv = 150,
     .level = 32,
     .species = SPECIES_WAILMER,
     },
    {
     .iv = 150,
     .level = 32,
     .species = SPECIES_SHROOMISH,
     },
    {
     .iv = 200,
     .level = 34,
     .species = SPECIES_COMBUSKEN,
     },
};

const struct TrainerMonItemCustomMoves gTrainerParty_Senex2[4] = {
    {
     .iv = 255,
     .level = 72,
     .species = SPECIES_FACELEECH,
     .heldItem = ITEM_CHAOS_OF_ODEN,
     .moves = { MOVE_POISON_FANG, MOVE_CRUNCH, MOVE_IRON_TAIL, MOVE_ROAR },
     },
    {
     .iv = 255,
     .level = 74,
     .species = SPECIES_LUCA_ZAMON,
     .heldItem = ITEM_SITRUS_BERRY,
     .moves = { MOVE_DRAGON_CLAW, MOVE_BLIZZARD, MOVE_HAIL, MOVE_RECOVER },
     },
    {
     .iv = 255,
     .level = 75,
     .species = SPECIES_SHADERU,
     .heldItem = ITEM_LEFTOVERS,
     .moves = { MOVE_PULSAR, MOVE_SHADOW_PUNCH, MOVE_BODY_SLAM, MOVE_GLARE },
     },
    {
     .iv = 255,
     .level = 80,
     .species = SPECIES_TURMUR,
     .heldItem = ITEM_MEATY_BELL,
     .moves = { MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_THUNDERBOLT, MOVE_ICE_BEAM },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Burnaggio[4] = {
    {
     .iv = 200,
     .level = 67,
     .species = SPECIES_MILOTIC,
     .moves = { MOVE_SURF, MOVE_PSYCHIC, MOVE_BOILINGWATER, MOVE_RECOVER },
     },
    {
     .iv = 200,
     .level = 67,
     .species = SPECIES_MILOTIC,
     .moves = { MOVE_SURF, MOVE_PSYCHIC, MOVE_BOILINGWATER, MOVE_RECOVER },
     },
    {
     .iv = 200,
     .level = 67,
     .species = SPECIES_MILOTIC,
     .moves = { MOVE_SURF, MOVE_PSYCHIC, MOVE_BOILINGWATER, MOVE_RECOVER },
     },
    {
     .iv = 255,
     .level = 67,
     .species = SPECIES_MILOTIC,
     .moves = { MOVE_SURF, MOVE_PSYCHIC, MOVE_BOILINGWATER, MOVE_RECOVER },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Frozone[3] = {
    {
     .iv = 200,
     .level = 68,
     .species = SPECIES_LAPRAS,
     .moves = { MOVE_SURF, MOVE_ICE_BEAM, MOVE_SHEER_COLD, MOVE_ICEBREATH },
     },
    {
     .iv = 200,
     .level = 68,
     .species = SPECIES_LAPRAS,
     .moves = { MOVE_SURF, MOVE_ICE_BEAM, MOVE_SHEER_COLD, MOVE_ICEBREATH },
     },
    {
     .iv = 255,
     .level = 68,
     .species = SPECIES_LAPRAS,
     .moves = { MOVE_SURF, MOVE_ICE_BEAM, MOVE_SHEER_COLD, MOVE_ICEBREATH },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_Paralisi[4] = {
    {
     .iv = 200,
     .level = 67,
     .species = SPECIES_LANTURN,
     .moves = { MOVE_THUNDER_WAVE, MOVE_SURF, MOVE_ICE_BEAM, MOVE_THUNDERBOLT },
     },
    {
     .iv = 100,
     .level = 67,
     .species = SPECIES_LANTURN,
     .moves = { MOVE_THUNDER_WAVE, MOVE_SURF, MOVE_ICE_BEAM, MOVE_THUNDERBOLT },
     },
    {
     .iv = 200,
     .level = 67,
     .species = SPECIES_LANTURN,
     .moves = { MOVE_THUNDER_WAVE, MOVE_SURF, MOVE_ICE_BEAM, MOVE_THUNDERBOLT },
     },
    {
     .iv = 255,
     .level = 67,
     .species = SPECIES_LANTURN,
     .moves = { MOVE_THUNDER_WAVE, MOVE_SURF, MOVE_ICE_BEAM, MOVE_THUNDERBOLT },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Jourdelays[2] = {
    {
     .iv = 100,
     .level = 65,
     .species = SPECIES_SEAKING,
     },
    {
     .iv = 100,
     .level = 69,
     .species = SPECIES_QWILFISH,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_MsDolittle[3] = {
    {
     .iv = 100,
     .level = 66,
     .species = SPECIES_SHIFTRY,
     },
    {
     .iv = 100,
     .level = 66,
     .species = SPECIES_GOLEM,
     },
    {
     .iv = 100,
     .level = 66,
     .species = SPECIES_EXPLOUD,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_UltraKick[2] = {
    {
     .iv = 100,
     .level = 68,
     .species = SPECIES_MACHAMP,
     },
    {
     .iv = 100,
     .level = 68,
     .species = SPECIES_HARIYAMA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Wayneflete[4] = {
    {
     .iv = 200,
     .level = 68,
     .species = SPECIES_GYARADOS,
     },
    {
     .iv = 200,
     .level = 68,
     .species = SPECIES_GYARADOS,
     },
    {
     .iv = 200,
     .level = 68,
     .species = SPECIES_QWILSHARK,
     },
    {
     .iv = 200,
     .level = 68,
     .species = SPECIES_MILOTIC,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Dynamo[2] = {
    {
     .iv = 255,
     .level = 69,
     .species = SPECIES_LUXRAY,
     },
    {
     .iv = 255,
     .level = 69,
     .species = SPECIES_SCEPTILE,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Icikling[4] = {
    {
     .iv = 190,
     .level = 70,
     .species = SPECIES_SHARPEDO,
     },
    {
     .iv = 190,
     .level = 70,
     .species = SPECIES_WALREIN,
     },
    {
     .iv = 190,
     .level = 70,
     .species = SPECIES_RELICANTH,
     },
    {
     .iv = 190,
     .level = 70,
     .species = SPECIES_GOLDUCK,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Trisha[3] = {
    {
     .iv = 200,
     .level = 70,
     .species = SPECIES_LANTURN,
     },
    {
     .iv = 200,
     .level = 70,
     .species = SPECIES_LAPRAS,
     },
    {
     .iv = 200,
     .level = 70,
     .species = SPECIES_PELIPPER,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_KenAndBel[2] = {
    {
     .iv = 130,
     .level = 35,
     .species = SPECIES_SHRIVLSAUR,
     },
    {
     .iv = 130,
     .level = 35,
     .species = SPECIES_ENTRAILTLE,
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_KimAndIris[2] = {
    {
     .iv = 0,
     .level = 34,
     .species = SPECIES_SWABLU,
     .moves = { MOVE_SING, MOVE_FURY_ATTACK, MOVE_SAFEGUARD, MOVE_AERIAL_ACE },
     },
    {
     .iv = 0,
     .level = 36,
     .species = SPECIES_HOMBONE,
     .moves = { MOVE_FIRE_PUMP, MOVE_TAKE_DOWN, MOVE_REST, MOVE_EARTHQUAKE },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_DoubleAct3[2] = {
    {
     .iv = 255,
     .level = 36,
     .species = SPECIES_GOLEM,
     .moves = { MOVE_FOCUS_PUNCH, MOVE_MUD_SHOT, MOVE_ROCK_BLAST, MOVE_SUBSTITUTE },
     },
    {
     .iv = 255,
     .level = 36,
     .species = SPECIES_AGGRON,
     .moves = { MOVE_FOCUS_PUNCH, MOVE_IRON_TAIL, MOVE_ROCK_SLIDE, MOVE_SUBSTITUTE },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_JanAndJon[2] = {
    {
     .iv = 255,
     .level = 22,
     .species = SPECIES_SECRETEGG,
     .moves = { MOVE_ENDURE, MOVE_NONE, MOVE_TOXIC, MOVE_PROTECT },
     },
    {
     .iv = 255,
     .level = 22,
     .species = SPECIES_LINOONE,
     .moves = { MOVE_HEADBUTT, MOVE_SURF, MOVE_GROWL, MOVE_ROCK_SMASH },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_JohnAndJay1[2] = {
    {
     .iv = 200,
     .level = 40,
     .species = SPECIES_MEDICHAM,
     .moves = { MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT },
     },
    {
     .iv = 200,
     .level = 40,
     .species = SPECIES_HARIYAMA,
     .moves = { MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_JohnAndJay2[2] = {
    {
     .iv = 210,
     .level = 43,
     .species = SPECIES_MEDICHAM,
     .moves = { MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT },
     },
    {
     .iv = 210,
     .level = 43,
     .species = SPECIES_HARIYAMA,
     .moves = { MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_JohnAndJay3[2] = {
    {
     .iv = 220,
     .level = 46,
     .species = SPECIES_MEDICHAM,
     .moves = { MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT },
     },
    {
     .iv = 220,
     .level = 46,
     .species = SPECIES_HARIYAMA,
     .moves = { MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_JohnAndJay4[2] = {
    {
     .iv = 230,
     .level = 49,
     .species = SPECIES_MEDICHAM,
     .moves = { MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT },
     },
    {
     .iv = 230,
     .level = 49,
     .species = SPECIES_HARIYAMA,
     .moves = { MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM },
     },
};

const struct TrainerMonNoItemCustomMoves gTrainerParty_JohnAndJay5[2] = {
    {
     .iv = 240,
     .level = 52,
     .species = SPECIES_MEDICHAM,
     .moves = { MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT },
     },
    {
     .iv = 240,
     .level = 52,
     .species = SPECIES_HARIYAMA,
     .moves = { MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM },
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_HanaAndMiki[2] = {
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_CORSOLA,
     },
    {
     .iv = 255,
     .level = 70,
     .species = SPECIES_CRAWDAUNT,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_VenusAndMilo[2] = {
    {
     .iv = 255,
     .level = 68,
     .species = SPECIES_SUICUNE,
     },
    {
     .iv = 255,
     .level = 68,
     .species = SPECIES_ARTICUNO,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_RitaAndSam1[2] = {
    {
     .iv = 0,
     .level = 42,
     .species = SPECIES_CHINCHOU,
     },
    {
     .iv = 0,
     .level = 40,
     .species = SPECIES_CARVANHA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_RitaAndSam2[2] = {
    {
     .iv = 0,
     .level = 45,
     .species = SPECIES_LANTURN,
     },
    {
     .iv = 0,
     .level = 43,
     .species = SPECIES_CARVANHA,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_RitaAndSam3[2] = {
    {
     .iv = 0,
     .level = 48,
     .species = SPECIES_LANTURN,
     },
    {
     .iv = 0,
     .level = 46,
     .species = SPECIES_SHARPEDO,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_RitaAndSam4[2] = {
    {
     .iv = 0,
     .level = 51,
     .species = SPECIES_LANTURN,
     },
    {
     .iv = 0,
     .level = 49,
     .species = SPECIES_SHARPEDO,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_SimonAndTabby[2] = {
    {
     .iv = 100,
     .level = 23,
     .species = SPECIES_STARYU,
     },
    {
     .iv = 100,
     .level = 23,
     .species = SPECIES_PSYDUCK,
     },
};

const struct TrainerMonNoItemDefaultMoves gTrainerParty_Eugene[4] = {
    {
     .iv = 0,
     .level = 30,
     .species = SPECIES_MAGIKARP,
     },
    {
     .iv = 0,
     .level = 21,
     .species = SPECIES_QWILFISH,
     },
    {
     .iv = 0,
     .level = 27,
     .species = SPECIES_FEEBAS,
     },
    {
     .iv = 0,
     .level = 24,
     .species = SPECIES_CARVANHA,
     },
};
