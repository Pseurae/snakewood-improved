.macro @set_learnset, _species, _learnset
.org 0x8207bc8 + 4 * _species
.word _learnset
.endmacro

.if NEW_MOVES

; All offsets were generated using a script. 
.org 0x800ca54 :: .word gBattleMoves
.org 0x8010cf4 :: .word gBattleMoves
.org 0x8010f24 :: .word gBattleMoves
.org 0x8013380 :: .word gBattleMoves
.org 0x8014324 :: .word gBattleMoves
.org 0x8014460 :: .word gBattleMoves
.org 0x80145b4 :: .word gBattleMoves
.org 0x80146e8 :: .word gBattleMoves
.org 0x80159d4 :: .word gBattleMoves
.org 0x8015c88 :: .word gBattleMoves
.org 0x8017984 :: .word gBattleMoves
.org 0x8017bfc :: .word gBattleMoves
.org 0x8017ff4 :: .word gBattleMoves
.org 0x80184c0 :: .word gBattleMoves
.org 0x8018b28 :: .word gBattleMoves
.org 0x8018b80 :: .word gBattleMoves
.org 0x8018e78 :: .word gBattleMoves
.org 0x8018f44 :: .word gBattleMoves
.org 0x8019038 :: .word gBattleMoves
.org 0x8019114 :: .word gBattleMoves
.org 0x80191f0 :: .word gBattleMoves
.org 0x80192c4 :: .word gBattleMoves
.org 0x8019430 :: .word gBattleMoves
.org 0x801b320 :: .word gBattleMoves
.org 0x801b5fc :: .word gBattleMoves
.org 0x801b800 :: .word gBattleMoves
.org 0x801be24 :: .word gBattleMoves
.org 0x801bec0 :: .word gBattleMoves
.org 0x801bf80 :: .word gBattleMoves
.org 0x801c0e8 :: .word gBattleMoves
.org 0x801c164 :: .word gBattleMoves
.org 0x801c2ac :: .word gBattleMoves
.org 0x801c3f8 :: .word gBattleMoves
.org 0x801c570 :: .word gBattleMoves
.org 0x801c618 :: .word gBattleMoves
.org 0x801c6f8 :: .word gBattleMoves
.org 0x801c948 :: .word gBattleMoves
.org 0x801caec :: .word gBattleMoves
.org 0x801cbe4 :: .word gBattleMoves
.org 0x801cc6c :: .word gBattleMoves
.org 0x801ccac :: .word gBattleMoves
.org 0x801cd94 :: .word gBattleMoves
.org 0x801cf20 :: .word gBattleMoves
.org 0x801cf84 :: .word gBattleMoves
.org 0x801d1bc :: .word gBattleMoves
.org 0x801d240 :: .word gBattleMoves
.org 0x801d270 :: .word gBattleMoves
.org 0x801d31c :: .word gBattleMoves
.org 0x801d458 :: .word gBattleMoves
.org 0x801d4c0 :: .word gBattleMoves
.org 0x801d570 :: .word gBattleMoves
.org 0x801d704 :: .word gBattleMoves
.org 0x801da0c :: .word gBattleMoves
.org 0x801dc1c :: .word gBattleMoves
.org 0x801f648 :: .word gBattleMoves
.org 0x801f680 :: .word gBattleMoves
.org 0x80218d8 :: .word gBattleMoves
.org 0x8021a1c :: .word gBattleMoves
.org 0x8021f40 :: .word gBattleMoves
.org 0x802213c :: .word gBattleMoves
.org 0x80222c0 :: .word gBattleMoves
.org 0x8022340 :: .word gBattleMoves
.org 0x8022510 :: .word gBattleMoves
.org 0x8022770 :: .word gBattleMoves
.org 0x8024420 :: .word gBattleMoves
.org 0x80247f8 :: .word gBattleMoves
.org 0x8025214 :: .word gBattleMoves
.org 0x8025614 :: .word gBattleMoves
.org 0x80256a0 :: .word gBattleMoves
.org 0x8026928 :: .word gBattleMoves
.org 0x80269cc :: .word gBattleMoves
.org 0x8026ce4 :: .word gBattleMoves
.org 0x8027598 :: .word gBattleMoves
.org 0x8027810 :: .word gBattleMoves
.org 0x8027958 :: .word gBattleMoves
.org 0x8028310 :: .word gBattleMoves
.org 0x8028380 :: .word gBattleMoves
.org 0x802840c :: .word gBattleMoves
.org 0x8028e58 :: .word gBattleMoves
.org 0x8028f70 :: .word gBattleMoves
.org 0x8028fa8 :: .word gBattleMoves
.org 0x8029bf8 :: .word gBattleMoves
.org 0x8029fbc :: .word gBattleMoves
.org 0x802a7e8 :: .word gBattleMoves
.org 0x802b144 :: .word gBattleMoves
.org 0x802c530 :: .word gBattleMoves
.org 0x802c670 :: .word gBattleMoves
.org 0x802c714 :: .word gBattleMoves
.org 0x802e3a0 :: .word gBattleMoves
.org 0x80354e8 :: .word gBattleMoves
.org 0x8035534 :: .word gBattleMoves
.org 0x8036288 :: .word gBattleMoves
.org 0x80362d4 :: .word gBattleMoves
.org 0x80364a4 :: .word gBattleMoves
.org 0x8036740 :: .word gBattleMoves
.org 0x803702c :: .word gBattleMoves
.org 0x803b68c :: .word gBattleMoves
.org 0x803b710 :: .word gBattleMoves
.org 0x803b97c :: .word gBattleMoves
.org 0x803ba28 :: .word gBattleMoves
.org 0x803ba7c :: .word gBattleMoves
.org 0x803baa0 :: .word gBattleMoves
.org 0x803bfec :: .word gBattleMoves
.org 0x803c14c :: .word gBattleMoves
.org 0x803c2a8 :: .word gBattleMoves
.org 0x803de2c :: .word gBattleMoves
.org 0x80a01e4 :: .word gBattleMoves
.org 0x80a02e0 :: .word gBattleMoves
.org 0x80a038c :: .word gBattleMoves
.org 0x80a0508 :: .word gBattleMoves
.org 0x80a0554 :: .word gBattleMoves
.org 0x80b29d4 :: .word gBattleMoves
.org 0x810803c :: .word gBattleMoves
.org 0x81080ac :: .word gBattleMoves
.org 0x81081c8 :: .word gBattleMoves
.org 0x81081ec :: .word gBattleMoves
.org 0x8108330 :: .word gBattleMoves
.org 0x8108668 :: .word gBattleMoves
.org 0x8108b7c :: .word gBattleMoves
.org 0x8108bc4 :: .word gBattleMoves
.org 0x8108e1c :: .word gBattleMoves
.org 0x8108ef8 :: .word gBattleMoves
.org 0x8109154 :: .word gBattleMoves
.org 0x81091c8 :: .word gBattleMoves
.org 0x8109254 :: .word gBattleMoves
.org 0x81092a4 :: .word gBattleMoves
.org 0x8109624 :: .word gBattleMoves
.org 0x810964c :: .word gBattleMoves
.org 0x8109674 :: .word gBattleMoves
.org 0x813383c :: .word gBattleMoves
.org 0x81339a0 :: .word gBattleMoves
.org 0x81339c4 :: .word gBattleMoves

.org 0x800fb18 :: .word gBattleMoves + 4
.org 0x800fcc8 :: .word gBattleMoves + 4
.org 0x803b638 :: .word gBattleMoves + 4
.org 0x803b6e0 :: .word gBattleMoves + 4
.org 0x803dc9c :: .word gBattleMoves + 4

.org 0x802e18c :: .word gMoveNames
.org 0x804a3ec :: .word gMoveNames
.org 0x8067500 :: .word gMoveNames
.org 0x806f120 :: .word gMoveNames
.org 0x806f23c :: .word gMoveNames
.org 0x806f52c :: .word gMoveNames
.org 0x806f604 :: .word gMoveNames
.org 0x806f668 :: .word gMoveNames
.org 0x806f71c :: .word gMoveNames
.org 0x806f7a4 :: .word gMoveNames
.org 0x8070370 :: .word gMoveNames
.org 0x8070614 :: .word gMoveNames
.org 0x8070bc8 :: .word gMoveNames
.org 0x8070c40 :: .word gMoveNames
.org 0x8070d14 :: .word gMoveNames
.org 0x8070d7c :: .word gMoveNames
.org 0x80a0294 :: .word gMoveNames
.org 0x80a0328 :: .word gMoveNames
.org 0x80a0384 :: .word gMoveNames
.org 0x80a462c :: .word gMoveNames
.org 0x80a46f4 :: .word gMoveNames
.org 0x80aa5b4 :: .word gMoveNames
.org 0x80abe7c :: .word gMoveNames
.org 0x80ac69c :: .word gMoveNames
.org 0x80ad200 :: .word gMoveNames
.org 0x80ad5bc :: .word gMoveNames
.org 0x80ad6c4 :: .word gMoveNames
.org 0x80af274 :: .word gMoveNames
.org 0x80b14d8 :: .word gMoveNames
.org 0x80c0b28 :: .word gMoveNames
.org 0x80c1da0 :: .word gMoveNames
.org 0x80c9f70 :: .word gMoveNames
.org 0x80eb28c :: .word gMoveNames
.org 0x80eb340 :: .word gMoveNames
.org 0x80eb464 :: .word gMoveNames
.org 0x80eb62c :: .word gMoveNames
.org 0x80f9fd8 :: .word gMoveNames
.org 0x8120e48 :: .word gMoveNames
.org 0x812165c :: .word gMoveNames
.org 0x8121b50 :: .word gMoveNames
.org 0x8132f44 :: .word gMoveNames
.org 0x8133600 :: .word gMoveNames

.org 0x8075734 :: .word gBattleAnims_Moves

.org 0x80a0494 :: .word gMoveDescriptions
.org 0x8133c00 :: .word gMoveDescriptions

.org 0x8120DF4
.fill 6, 0x0

; Move Contest Moves section altogether
.org 0x809D948
mov r0, #2

.org 0x809D972
mov r0, #2

.org 0x809D9A0
mov r2, #2

.org 0x809D9C6
mov r0, #2

.org 0x809D9B0
set_function_hook r7, @SelectMoves_HeaderFix

.autoregion
.align 4
@SelectMoves_HeaderFix:
mov r2, #3
strb r2, [r0]
add r0, #1
strb r3, [r0]
sub r0, #6

ldr r7, =(0x809D9B8 | 1)
bx r7
.pool
.endautoregion

.org 0x8207bc8
.word gBoilbasaurLevelUpLearnset
.word gBoilbasaurLevelUpLearnset
.word gShrivlsaurLevelUpLearnset
.word gVivosaurLevelUpLearnset
.word gRotmanderLevelUpLearnset
.word gCharmewormLevelUpLearnset
.word gDragonLevelUpLearnset
.word gOozleLevelUpLearnset
.word gEntrailtleLevelUpLearnset
.word gBleedoiseLevelUpLearnset
.word gShinigamiLevelUpLearnset
.word gStitcherLevelUpLearnset
.word gAntispiralLevelUpLearnset
.word gGluteLevelUpLearnset
.word gButeLevelUpLearnset
.word gNuteLevelUpLearnset
.word gFangasuLevelUpLearnset
.word gNigeraLevelUpLearnset
.word gGoosuboaLevelUpLearnset
.word gRamshakerLevelUpLearnset
.word gRaticateLevelUpLearnset
.word gSpearowLevelUpLearnset
.word gFearowLevelUpLearnset
.word gSeviciousLevelUpLearnset
.word gZangolLevelUpLearnset
.word gPikachuLevelUpLearnset
.word gRaichuLevelUpLearnset
.word gSandshrewLevelUpLearnset
.word gSandslashLevelUpLearnset
.word gNidoranFLevelUpLearnset
.word gNidorinaLevelUpLearnset
.word gNidoqueenLevelUpLearnset
.word gNidoranMLevelUpLearnset
.word gNidorinoLevelUpLearnset
.word gNidokingLevelUpLearnset
.word gClefairyLevelUpLearnset
.word gClefableLevelUpLearnset
.word gVulpixLevelUpLearnset
.word gNinetalesLevelUpLearnset
.word gJigglypuffLevelUpLearnset
.word gWigglytuffLevelUpLearnset
.word gZubatLevelUpLearnset
.word gGolbatLevelUpLearnset
.word gOddishLevelUpLearnset
.word gGloomLevelUpLearnset
.word gVileplumeLevelUpLearnset
.word gParasLevelUpLearnset
.word gParasectLevelUpLearnset
.word gVenonatLevelUpLearnset
.word gAMonsterLevelUpLearnset
.word gGigawolfLevelUpLearnset
.word gGalactimonLevelUpLearnset
.word gMeowthLevelUpLearnset
.word gPersianLevelUpLearnset
.word gPsyduckLevelUpLearnset
.word gGolduckLevelUpLearnset
.word gRottingLevelUpLearnset
.word gMagnezoneLevelUpLearnset
.word gGrowlitheLevelUpLearnset
.word gArcanineLevelUpLearnset
.word gPolihagLevelUpLearnset
.word gPoliwormLevelUpLearnset
.word gPoliwraithLevelUpLearnset
.word gAbraLevelUpLearnset
.word gKadabraLevelUpLearnset
.word gAlakazamLevelUpLearnset
.word gMachopLevelUpLearnset
.word gMachokeLevelUpLearnset
.word gMachampLevelUpLearnset
.word gKuriputoLevelUpLearnset
.word gRoodanseLevelUpLearnset
.word gOosheLevelUpLearnset
.word gQwilfishLevelUpLearnset
.word gQwilsharkLevelUpLearnset
.word gGeodudeLevelUpLearnset
.word gGravelerLevelUpLearnset
.word gGolemLevelUpLearnset
.word gPonytaLevelUpLearnset
.word gRapidashLevelUpLearnset
.word gSlowpokeLevelUpLearnset
.word gSlowbroLevelUpLearnset
.word gMagnemiteLevelUpLearnset
.word gMagnetonLevelUpLearnset
.word gDragooneLevelUpLearnset
.word gDoduoLevelUpLearnset
.word gDodrioLevelUpLearnset
.word gSeelLevelUpLearnset
.word gDewgongLevelUpLearnset
.word gMoulderLevelUpLearnset
.word gYuckLevelUpLearnset
.word gShellderLevelUpLearnset
.word gCloysterLevelUpLearnset
.word gGastlyLevelUpLearnset
.word gHaunterLevelUpLearnset
.word gGengarLevelUpLearnset
.word gOnixLevelUpLearnset
.word gDrowzeeLevelUpLearnset
.word gHypnoLevelUpLearnset
.word gKrabbyLevelUpLearnset
.word gKinglerLevelUpLearnset
.word gVoltorbLevelUpLearnset
.word gElectrodeLevelUpLearnset
.word gExeggcuteLevelUpLearnset
.word gExeggutorLevelUpLearnset
.word gCuboneLevelUpLearnset
.word gMarowakLevelUpLearnset
.word gHitmonleeLevelUpLearnset
.word gHitmonchanLevelUpLearnset
.word gLickitungLevelUpLearnset
.word gKoffingLevelUpLearnset
.word gWeezingLevelUpLearnset
.word gRhyhornLevelUpLearnset
.word gRhydonLevelUpLearnset
.word gChanseyLevelUpLearnset
.word gTangelaLevelUpLearnset
.word gRoclobsterLevelUpLearnset
.word gHorseaLevelUpLearnset
.word gSeadraLevelUpLearnset
.word gGoldeenLevelUpLearnset
.word gSeakingLevelUpLearnset
.word gStaryuLevelUpLearnset
.word gStarmieLevelUpLearnset
.word gVigourlanLevelUpLearnset
.word gGrimreaperLevelUpLearnset
.word gEyeEyeLevelUpLearnset
.word gElectabugsLevelUpLearnset
.word gMiasmarLevelUpLearnset
.word gPinsirLevelUpLearnset
.word gTaurosLevelUpLearnset
.word gMagikarpLevelUpLearnset
.word gGyaradosLevelUpLearnset
.word gLaprasLevelUpLearnset
.word gDittoLevelUpLearnset
.word gEeveeLevelUpLearnset
.word gVaporeonLevelUpLearnset
.word gJolteonLevelUpLearnset
.word gFlareonLevelUpLearnset
.word gDrilburLevelUpLearnset
.word gOmanyteLevelUpLearnset
.word gOmastarLevelUpLearnset
.word gKabutoLevelUpLearnset
.word gKabutopsLevelUpLearnset
.word gAerodactylLevelUpLearnset
.word gGorelaxLevelUpLearnset
.word gArticunoLevelUpLearnset
.word gZapdosLevelUpLearnset
.word gMoltresLevelUpLearnset
.word gDratiniLevelUpLearnset
.word gDragonairLevelUpLearnset
.word gDragoniteLevelUpLearnset
.word gMutagonLevelUpLearnset
.word gMewbyLevelUpLearnset
.word gChikoritaLevelUpLearnset
.word gBayleefLevelUpLearnset
.word gMeganiumLevelUpLearnset
.word gCyndaquilLevelUpLearnset
.word gQuilavaLevelUpLearnset
.word gTyphlosionLevelUpLearnset
.word gTotodileLevelUpLearnset
.word gCroconawLevelUpLearnset
.word gFeraligatrLevelUpLearnset
.word gBlitzleLevelUpLearnset
.word gZebstrikaLevelUpLearnset
.word gHoothootLevelUpLearnset
.word gNoctowlLevelUpLearnset
.word gLedybaLevelUpLearnset
.word gLedianLevelUpLearnset
.word gSpinarakLevelUpLearnset
.word gAriadosLevelUpLearnset
.word gCrobatLevelUpLearnset
.word gChinchouLevelUpLearnset
.word gLanturnLevelUpLearnset
.word gPichuLevelUpLearnset
.word gCleffaLevelUpLearnset
.word gIgglybuffLevelUpLearnset
.word gKaminaLevelUpLearnset
.word gTogeticLevelUpLearnset
.word gNatuLevelUpLearnset
.word gXatuLevelUpLearnset
.word gMareepLevelUpLearnset
.word gFlaaffyLevelUpLearnset
.word gAmpharosLevelUpLearnset
.word gBellossomLevelUpLearnset
.word gGraveillLevelUpLearnset
.word gAzombarillLevelUpLearnset
.word gGluemadioLevelUpLearnset
.word gZombifiedLevelUpLearnset
.word gEarthmadioLevelUpLearnset
.word gBonemadioLevelUpLearnset
.word gCrazymadioLevelUpLearnset
.word gSeamadioLevelUpLearnset
.word gBurstmadioLevelUpLearnset
.word gBlastmadioLevelUpLearnset
.word gTreemadioLevelUpLearnset
.word gWooperLevelUpLearnset
.word gQuagsireLevelUpLearnset
.word gToxeonLevelUpLearnset
.word gDemoneonLevelUpLearnset
.word gDirtkrowLevelUpLearnset
.word gSlowkingLevelUpLearnset
.word gMisdreavusLevelUpLearnset
.word gUnownLevelUpLearnset
.word gWobbuffetLevelUpLearnset
.word gAeromadioLevelUpLearnset
.word gPinecoLevelUpLearnset
.word gForretressLevelUpLearnset
.word gDiamandixLevelUpLearnset
.word gNormadioLevelUpLearnset
.word gSteelixLevelUpLearnset
.word gCindercoLevelUpLearnset
.word gRadiorangeLevelUpLearnset
.word gTelsonLevelUpLearnset
.word gIronreaperLevelUpLearnset
.word gShuckleLevelUpLearnset
.word gHeracrossLevelUpLearnset
.word gMawLevelUpLearnset
.word gBasculinLevelUpLearnset
.word gChocworkLevelUpLearnset
.word gSlugmaLevelUpLearnset
.word gMagcargoLevelUpLearnset
.word gSwinubLevelUpLearnset
.word gPiloswineLevelUpLearnset
.word gCorsolaLevelUpLearnset
.word gRemoraidLevelUpLearnset
.word gOctilleryLevelUpLearnset
.word gMysteryeggLevelUpLearnset
.word gMantineLevelUpLearnset
.word gSkarmoryLevelUpLearnset
.word gHoundsourLevelUpLearnset
.word gHeaddoomLevelUpLearnset
.word gKingdraLevelUpLearnset
.word gPhanpyLevelUpLearnset
.word gDonphanLevelUpLearnset
.word gExcadrillLevelUpLearnset
.word gStantlerLevelUpLearnset
.word gSmeargleLevelUpLearnset
.word gTyrogueLevelUpLearnset
.word gHitmontopLevelUpLearnset
.word gSmoochumLevelUpLearnset
.word gElekidLevelUpLearnset
.word gMagbyLevelUpLearnset
.word gMiltankLevelUpLearnset
.word gBlisseyLevelUpLearnset
.word gRaikouLevelUpLearnset
.word gEnteiLevelUpLearnset
.word gSuicuneLevelUpLearnset
.word gLarvitarLevelUpLearnset
.word gPupitarLevelUpLearnset
.word gTyranitarLevelUpLearnset
.word gScarLugiaLevelUpLearnset
.word gHoOhLevelUpLearnset
.word gCelebiLevelUpLearnset
.word gSpecies252LevelUpLearnset
.word gSpecies253LevelUpLearnset
.word gSpecies254LevelUpLearnset
.word gSpecies255LevelUpLearnset
.word gSpecies256LevelUpLearnset
.word gSpecies257LevelUpLearnset
.word gSpecies258LevelUpLearnset
.word gSpecies259LevelUpLearnset
.word gSpecies260LevelUpLearnset
.word gSpecies261LevelUpLearnset
.word gSpecies262LevelUpLearnset
.word gSpecies263LevelUpLearnset
.word gSpecies264LevelUpLearnset
.word gSpecies265LevelUpLearnset
.word gSpecies266LevelUpLearnset
.word gSpecies267LevelUpLearnset
.word gSpecies268LevelUpLearnset
.word gSpecies269LevelUpLearnset
.word gSpecies270LevelUpLearnset
.word gSpecies271LevelUpLearnset
.word gSpecies272LevelUpLearnset
.word gSpecies273LevelUpLearnset
.word gSpecies274LevelUpLearnset
.word gSpecies275LevelUpLearnset
.word gSpecies276LevelUpLearnset
.word gTreeckoLevelUpLearnset
.word gGrovyleLevelUpLearnset
.word gSceptileLevelUpLearnset
.word gTorchicLevelUpLearnset
.word gCombuskenLevelUpLearnset
.word gBlazikenLevelUpLearnset
.word gMudkipLevelUpLearnset
.word gMarshtompLevelUpLearnset
.word gSwampertLevelUpLearnset
.word gPoochyenaLevelUpLearnset
.word gMightyenaLevelUpLearnset
.word gZigzagoonLevelUpLearnset
.word gLinooneLevelUpLearnset
.word gWurmpleLevelUpLearnset
.word gSilcoonLevelUpLearnset
.word gBeautiflyLevelUpLearnset
.word gCascoonLevelUpLearnset
.word gDustoxLevelUpLearnset
.word gMunchlaxLevelUpLearnset
.word gSnorlaxLevelUpLearnset
.word gSkylaxLevelUpLearnset
.word gSeedotLevelUpLearnset
.word gNuzleafLevelUpLearnset
.word gShiftryLevelUpLearnset
.word gHypereggLevelUpLearnset
.word gSecreteggLevelUpLearnset
.word gKajilianthLevelUpLearnset
.word gTaillowLevelUpLearnset
.word gSwellowLevelUpLearnset
.word gShroomishLevelUpLearnset
.word gBreloomLevelUpLearnset
.word gSpindaLevelUpLearnset
.word gWingullLevelUpLearnset
.word gPelipperLevelUpLearnset
.word gSurskitLevelUpLearnset
.word gMasquerainLevelUpLearnset
.word gWailmerLevelUpLearnset
.word gWailordLevelUpLearnset
.word gSkittyLevelUpLearnset
.word gDelcattyLevelUpLearnset
.word gKecleonLevelUpLearnset
.word gBaltoyLevelUpLearnset
.word gClaydolLevelUpLearnset
.word gNosepassLevelUpLearnset
.word gTorkoalLevelUpLearnset
.word gSableyeLevelUpLearnset
.word gBarboachLevelUpLearnset
.word gWhiscashLevelUpLearnset
.word gLuvdiscLevelUpLearnset
.word gCorphishLevelUpLearnset
.word gCrawdauntLevelUpLearnset
.word gFeebasLevelUpLearnset
.word gMiloticLevelUpLearnset
.word gCarvanhaLevelUpLearnset
.word gSharpedoLevelUpLearnset
.word gTrapinchLevelUpLearnset
.word gVibravaLevelUpLearnset
.word gFlygonLevelUpLearnset
.word gMakuhitaLevelUpLearnset
.word gHariyamaLevelUpLearnset
.word gShinxLevelUpLearnset
.word gLuxioLevelUpLearnset
.word gHomboneLevelUpLearnset
.word gHombeastLevelUpLearnset
.word gSphealLevelUpLearnset
.word gSealeoLevelUpLearnset
.word gWalreinLevelUpLearnset
.word gKenchiraLevelUpLearnset
.word gKenchukuoLevelUpLearnset
.word gSnoruntLevelUpLearnset
.word gGlalieLevelUpLearnset
.word gLunatoneLevelUpLearnset
.word gSolrockLevelUpLearnset
.word gX32763LevelUpLearnset
.word gSpoinkLevelUpLearnset
.word gGrumpigLevelUpLearnset
.word gLuxrayLevelUpLearnset
.word gWeavileLevelUpLearnset
.word gSneaselLevelUpLearnset
.word gMedititeLevelUpLearnset
.word gMedichamLevelUpLearnset
.word gSwabluLevelUpLearnset
.word gAltariaLevelUpLearnset
.word gWynautLevelUpLearnset
.word gDuskullLevelUpLearnset
.word gDusclopsLevelUpLearnset
.word gRoseliaLevelUpLearnset
.word gSlakothLevelUpLearnset
.word gVigorothLevelUpLearnset
.word gSlakingLevelUpLearnset
.word gBouffalantLevelUpLearnset
.word gKingmadioLevelUpLearnset
.word gTropiusLevelUpLearnset
.word gWhismurLevelUpLearnset
.word gLoudredLevelUpLearnset
.word gExploudLevelUpLearnset
.word gWeedleLevelUpLearnset
.word gKakunaLevelUpLearnset
.word gBeedrillLevelUpLearnset
.word gAbsolLevelUpLearnset
.word gShuppetLevelUpLearnset
.word gBanetteLevelUpLearnset
.word gSeviperLevelUpLearnset
.word gZangooseLevelUpLearnset
.word gRelicanthLevelUpLearnset
.word gAronLevelUpLearnset
.word gLaironLevelUpLearnset
.word gAggronLevelUpLearnset
.word gCastformLevelUpLearnset
.word gVolbeatLevelUpLearnset
.word gIllumiseLevelUpLearnset
.word gLileepLevelUpLearnset
.word gCradilyLevelUpLearnset
.word gAnorithLevelUpLearnset
.word gArmaldoLevelUpLearnset
.word gRaltsLevelUpLearnset
.word gKirliaLevelUpLearnset
.word gGardevoirLevelUpLearnset
.word gPsypigLevelUpLearnset
.word gSpiritombLevelUpLearnset
.word gCalfbyLevelUpLearnset
.word gBeldumLevelUpLearnset
.word gMetangLevelUpLearnset
.word gMetagrossLevelUpLearnset
.word gFuriXLevelUpLearnset
.word gFuriZLevelUpLearnset
.word gFuriQLevelUpLearnset
.word gTurmurLevelUpLearnset
.word gEmolgaLevelUpLearnset
.word gSenexLevelUpLearnset
.word gLucaZamonLevelUpLearnset
.word gTeaBarqanLevelUpLearnset
.word gShaderuLevelUpLearnset
.word gFaceleechLevelUpLearnset
.word gToxicroakLevelUpLearnset

.endif