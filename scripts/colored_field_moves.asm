.macro @set_pokemenu_action_string, i, p
.org 0x839f494 + (8 * i)
.area 0x4, 0x0
.word p
.endarea
.endmacro

@OptionColor equ 0x4

.if COLORED_FIELD_MOVES
@set_pokemenu_action_string 10, @Cut
@set_pokemenu_action_string 11, @Flash
@set_pokemenu_action_string 12, @RockSmash
@set_pokemenu_action_string 13, @Surf
@set_pokemenu_action_string 14, @Strength
@set_pokemenu_action_string 15, @Fly
@set_pokemenu_action_string 16, @Dive
@set_pokemenu_action_string 17, @Waterfall
@set_pokemenu_action_string 18, @Teleport
@set_pokemenu_action_string 19, @Dig
@set_pokemenu_action_string 20, @SecretPower
@set_pokemenu_action_string 21, @MilkDrink
@set_pokemenu_action_string 22, @SoftBoiled
@set_pokemenu_action_string 23, @SweetScent

.autoregion
@Cut:
.byte 0xFC, 0x01, @OptionColor
.string "CUT"

@Flash:
.byte 0xFC, 0x01, @OptionColor
.string "FLASH"

@RockSmash:
.byte 0xFC, 0x01, @OptionColor
.string "ROCK SMASH"

@Strength:
.byte 0xFC, 0x01, @OptionColor
.string "STRENGTH"

@Surf:
.byte 0xFC, 0x01, @OptionColor
.string "SURF"

@Fly:
.byte 0xFC, 0x01, @OptionColor
.string "FLY"

@Dive:
.byte 0xFC, 0x01, @OptionColor
.string "DIVE"

@Waterfall:
.byte 0xFC, 0x01, @OptionColor
.string "WATERFALL"

@Teleport:
.byte 0xFC, 0x01, @OptionColor
.string "TELEPORT"

@Dig:
.byte 0xFC, 0x01, @OptionColor
.string "DIG"

@SecretPower:
.byte 0xFC, 0x01, @OptionColor
.string "SECRET POWER"

@MilkDrink:
.byte 0xFC, 0x01, @OptionColor
.string "MILK DRINK"

@SoftBoiled:
.byte 0xFC, 0x01, @OptionColor
.string "SOFTBOILED"

@SweetScent:
.byte 0xFC, 0x01, @OptionColor
.string "SWEET SCENT"
.endautoregion

.endif