#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoVtubers[] =
{
#endif

    [SPECIES_CHIBI_AMELIA] =
    {
        .baseHP        = 60,
        .baseAttack    = 55,
        .baseDefense   = 45,
        .baseSpeed     = 70,
        .baseSpAttack  = 100,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_REASON),
        .catchRate = 0,
        .expYield = 212,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_KEEN_EYE, ABILITY_FOCUS },
        .sourceGame = SOURCE_HOLOLIVE,
        .noFlip = TRUE,
        .speciesName = _("CAmelia"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_LIEPARD,
        .categoryName = _("Detective"),
        .height = 11,
        .weight = 375,
        .description = COMPOUND_STRING(
            "Many Trainers are drawn to their\n"
            "beautiful form and fur. These Pokémon\n"
            "vanish and appear unexpectedly.\n"
            "They run silently in the night."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CAmelia,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_CAmelia,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CAmelia,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CAmelia,
        .shinyPalette = gMonShinyPalette_CAmelia,
        .iconSprite = gMonIcon_CAmelia,
        .iconPalIndex = 1,
        SHADOW(5, 6, SHADOW_SIZE_S)
        FOOTPRINT(CAmelia)
        .levelUpLearnset = sCAmeliaLevelUpLearnset,
        .teachableLearnset = sCAmeliaTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_NORMAL_AMELIA}),
    },

    [SPECIES_NORMAL_AMELIA] =
    {
        .baseHP        = 85,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 95,
        .baseSpAttack  = 125,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_REASON, TYPE_MIASMA),
        .catchRate = 0,
        .expYield = 212,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_KEEN_EYE, ABILITY_FOCUS },
        .sourceGame = SOURCE_HOLOLIVE,
        .noFlip = TRUE,
        .speciesName = _("Amelia"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_PANSAGE,
        .categoryName = _("Detective"),
        .height = 6,
        .weight = 105,
        .description = COMPOUND_STRING(
            "This Pokémon dwells deep in the forest.\n"
            "It's good at finding berries and gathers\n"
            "them from all over. It's kind enough to\n"
            "share them with friends."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Amelia,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Amelia,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Amelia,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Amelia,
        .shinyPalette = gMonShinyPalette_Amelia,
        .iconSprite = gMonIcon_Amelia,
        .iconPalIndex = 1,
        SHADOW(2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Amelia)
        .levelUpLearnset = sAmeliaLevelUpLearnset,
        .teachableLearnset = sAmeliaTeachableLearnset,
    },

#ifdef __INTELLISENSE__
};
#endif