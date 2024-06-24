#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoTouhou1[] =
{
#endif

    [SPECIES_CHIBI_HAKUREI] =
    {
        .baseHP        = 55,
        .baseAttack    = 80,
        .baseDefense   = 55,
        .baseSpeed     = 75,
        .baseSpAttack  = 80,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_FAITH, TYPE_DREAM),
        .catchRate = 60,
        .expYield = 70,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FIELD),
        .abilities = { ABILITY_HAKUREI_MIKO, ABILITY_NONE },
        .sourceGame = SOURCE_HRTP,
        .noFlip = TRUE,
        .speciesName = _("CHakurei"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SPHEAL,
        .categoryName = _("Clap"),
        .height = 8,
        .weight = 395,
        .description = COMPOUND_STRING(
            "It is completely covered with plushy fur.\n"
            "As a result, it never feels the cold even\n"
            "when it is rolling about on ice floes or\n"
            "diving in the sea."),
        .pokemonScale = 315,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CHakurei,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CHakurei,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CHakurei,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CHakurei,
        .shinyPalette = gMonShinyPalette_CHakurei,
        .iconSprite = gMonIcon_CHakurei,
        .iconPalIndex = 1,
        FOOTPRINT(CHakurei)
        .levelUpLearnset = sCHakureiLevelUpLearnset,
        .teachableLearnset = sCHakureiTeachableLearnset,
        .eggMoveLearnset = sCHakureiEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_NORMAL_HAKUREI}),
    },

    [SPECIES_NORMAL_HAKUREI] =
    {
        .baseHP        = 80,
        .baseAttack    = 105,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 105,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FAITH, TYPE_DREAM),
        .catchRate = 45,
        .expYield = 220,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FIELD),
        .abilities = { ABILITY_HAKUREI_MIKO, ABILITY_NONE },
        .sourceGame = SOURCE_HRTP,
        .noFlip = TRUE,
        .speciesName = _("Hakurei"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SEALEO,
        .categoryName = _("Ball Roll"),
        .height = 11,
        .weight = 876,
        .description = COMPOUND_STRING(
            "Sealeo live in herds on ice floes. Using its\n"
            "powerful flippers, it shatters ice.\n"
            "It dives into the sea to hunt prey five\n"
            "times a day."),
        .pokemonScale = 338,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hakurei,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Hakurei,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hakurei,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Hakurei,
        .shinyPalette = gMonShinyPalette_Hakurei,
        .iconSprite = gMonIcon_Hakurei,
        .iconPalIndex = 1,
        FOOTPRINT(Hakurei)
        .levelUpLearnset = sHakureiLevelUpLearnset,
        .teachableLearnset = sHakureiTeachableLearnset,
    },

    [SPECIES_PLACEHOLD_HAKUREI] =
    {
        .baseHP        = 80,
        .baseAttack    = 105,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 105,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FAITH, TYPE_DREAM),
        .catchRate = 45,
        .expYield = 220,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FIELD),
        .abilities = { ABILITY_HAKUREI_MIKO, ABILITY_NONE },
        .sourceGame = SOURCE_HRTP,
        .noFlip = TRUE,
        .speciesName = _("PHakurei"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_WALREIN,
        .categoryName = _("Ice Break"),
        .height = 14,
        .weight = 1506,
        .description = COMPOUND_STRING(
            "To protect its herd, the leader battles\n"
            "anything that invades its territory, even\n"
            "at the cost of its life. Its tusks may snap\n"
            "off in battle."),
        .pokemonScale = 316,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hakurei,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Hakurei,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hakurei,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Hakurei,
        .shinyPalette = gMonShinyPalette_Hakurei,
        .iconSprite = gMonIcon_Hakurei,
        .iconPalIndex = 1,
        FOOTPRINT(Hakurei)
        .levelUpLearnset = sHakureiLevelUpLearnset,
        .teachableLearnset = sHakureiTeachableLearnset,
    },

#ifdef __INTELLISENSE__
};
#endif