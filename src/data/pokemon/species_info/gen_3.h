#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGen3[] =
{
#endif

#if P_FAMILY_TREECKO
    [SPECIES_TREECKO] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 35,
        .baseSpeed     = 70,
        .baseSpAttack  = 65,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_NATURE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 62 : 65,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_UNBURDEN },
        .sourceGame = SOURCE_LLS,
        .speciesName = _("Treecko"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_TREECKO,
        .categoryName = _("Wood Gecko"),
        .height = 5,
        .weight = 50,
        .description = COMPOUND_STRING(
            "It makes its nest in a giant tree in the\n"
            "forest. It ferociously guards against\n"
            "anything nearing its territory. It is said\n"
            "to be the protector of the forest's trees."),
        .pokemonScale = 541,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Treecko, 48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Treecko,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Treecko, 56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Treecko),
        ICON(Treecko, 1),
        FOOTPRINT(Treecko)
        LEARNSETS(Treecko),
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_GROVYLE}),
    },

    [SPECIES_GROVYLE] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 45,
        .baseSpeed     = 95,
        .baseSpAttack  = 85,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_NATURE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 141,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_UNBURDEN },
        .sourceGame = SOURCE_LLS,
        .speciesName = _("Grovyle"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_GROVYLE,
        .categoryName = _("Wood Gecko"),
        .height = 9,
        .weight = 216,
        .description = COMPOUND_STRING(
            "Leaves grow out of this Pokémon's body.\n"
            "They help obscure a Grovyle from the eyes\n"
            "of its enemies while it is in a thickly\n"
            "overgrown forest."),
        .pokemonScale = 360,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Grovyle, 64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Grovyle,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Grovyle, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Grovyle),
        ICON(Grovyle, 1),
        FOOTPRINT(Grovyle)
        LEARNSETS(Grovyle),
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_SCEPTILE}),
    },

#define SCEPTILE_MISC_INFO                                              \
        .catchRate = 45,                                                \
        .evYield_Speed = 3,                                             \
        .genderRatio = PERCENT_FEMALE(12.5),                            \
        .eggCycles = 20,                                                \
        .friendship = STANDARD_FRIENDSHIP,                              \
        .growthRate = GROWTH_MEDIUM_SLOW,                               \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),\
        .sourceGame = SOURCE_LLS,                                  \
        .speciesName = _("Sceptile"),                                   \
        .natDexNum = NATIONAL_DEX_SCEPTILE,                             \
        .categoryName = _("Forest"),                                    \
        FOOTPRINT(Sceptile)                                             \
        LEARNSETS(Sceptile),                                            \
        .formSpeciesIdTable = sSceptileFormSpeciesIdTable,              \
        .formChangeTable = sSceptileFormChangeTable

    [SPECIES_SCEPTILE] =
    {
        SCEPTILE_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 65,
        .baseSpeed     = 120,
        .baseSpAttack  = 105,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_NATURE),
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 265,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 239,
    #else
        .expYield = 208,
    #endif
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_UNBURDEN },
        .cryId = CRY_PORYGON,
        .height = 17,
        .weight = 522,
        .description = COMPOUND_STRING(
            "In the jungle, its power is without equal.\n"
            "This Pokémon carefully grows trees and\n"
            "plants. It regulates its body temperature\n"
            "by basking in sunlight."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 275,
        .trainerOffset = 2,
        FRONT_PIC(Sceptile, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Sceptile,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Sceptile, 64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Sceptile),
        ICON(Sceptile, 1),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_SCEPTILE_MEGA] =
    {
        SCEPTILE_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 75,
        .baseSpeed     = 145,
        .baseSpAttack  = 145,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_NATURE, TYPE_FAITH),
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 315 : 284,
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_LIGHTNING_ROD, ABILITY_LIGHTNING_ROD },
        .cryId = CRY_PORYGON,
        .height = 19,
        .weight = 552,
        .description = COMPOUND_STRING(
            "Thanks to the power in its quick legs,\n"
            "Mega Sceptile can be on its opponent in a\n"
            "flash. It can cut off a portion of its tail\n"
            "to fire it like a missile at an opponent."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 275,
        .trainerOffset = 2,
        FRONT_PIC(SceptileMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SceptileMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SceptileMega, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(SceptileMega),
        ICON(SceptileMega, 1),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_TREECKO

#if P_FAMILY_TORCHIC
    [SPECIES_TORCHIC] =
    {
        .baseHP        = 45,
        .baseAttack    = 60,
        .baseDefense   = 40,
        .baseSpeed     = 45,
        .baseSpAttack  = 70,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 62 : 65,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_SPEED_BOOST },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Torchic"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_TORCHIC,
        .categoryName = _("Chick"),
        .height = 4,
        .weight = 25,
        .description = COMPOUND_STRING(
            "If attacked, it strikes back by spitting\n"
            "balls of fire it forms in its stomach.\n"
            "A Torchic dislikes darkness because it\n"
            "can't see its surroundings."),
        .pokemonScale = 566,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Torchic, 32, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Torchic,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        BACK_PIC(Torchic, 40, 48),
        BACK_PIC_FEMALE(Torchic, 40, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Torchic),
        ICON(Torchic, 0),
        FOOTPRINT(Torchic)
        LEARNSETS(Torchic),
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_COMBUSKEN}),
    },

    [SPECIES_COMBUSKEN] =
    {
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 60,
        .baseSpeed     = 55,
        .baseSpAttack  = 85,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DREAM),
        .catchRate = 45,
        .expYield = 142,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_SPEED_BOOST },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Combusken"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_COMBUSKEN,
        .categoryName = _("Young Fowl"),
        .height = 9,
        .weight = 195,
        .description = COMPOUND_STRING(
            "It lashes out with 10 kicks per second.\n"
            "Its strong fighting instinct compels it\n"
            "to keep up its offensive until the\n"
            "opponent gives up."),
        .pokemonScale = 343,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Combusken, 48, 64),
        FRONT_PIC_FEMALE(Combusken, 48, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Combusken,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        BACK_PIC(Combusken, 64, 64),
        BACK_PIC_FEMALE(Combusken, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Combusken),
        ICON(Combusken, 0),
        FOOTPRINT(Combusken)
        LEARNSETS(Combusken),
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_BLAZIKEN}),
    },

#define BLAZIKEN_MISC_INFO                                  \
        .types = MON_TYPES(TYPE_FIRE, TYPE_DREAM),       \
        .catchRate = 45,                                    \
        .evYield_Attack = 3,                                \
        .genderRatio = PERCENT_FEMALE(12.5),                \
        .eggCycles = 20,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_SLOW,                   \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),       \
        .sourceGame = SOURCE_HRTP,                        \
        .speciesName = _("Blaziken"),                       \
        .natDexNum = NATIONAL_DEX_BLAZIKEN,                 \
        .categoryName = _("Blaze"),                         \
        .height = 19,                                       \
        .weight = 520,                                      \
        .pokemonScale = 256,                                \
        .pokemonOffset = 0,                                 \
        .trainerScale = 301,                                \
        .trainerOffset = 4,                                 \
        FOOTPRINT(Blaziken)                                 \
        LEARNSETS(Blaziken),                                \
        .formSpeciesIdTable = sBlazikenFormSpeciesIdTable,  \
        .formChangeTable = sBlazikenFormChangeTable

    [SPECIES_BLAZIKEN] =
    {
        BLAZIKEN_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 120,
        .baseDefense   = 70,
        .baseSpeed     = 80,
        .baseSpAttack  = 110,
        .baseSpDefense = 70,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 265,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 239,
    #else
        .expYield = 209,
    #endif
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_SPEED_BOOST },
        .cryId = CRY_PORYGON,
        .description = COMPOUND_STRING(
            "It learns martial arts that use punches\n"
            "and kicks. Every several years, its old\n"
            "feathers burn off, and new, supple\n"
            "feathers grow back in their place."),
        FRONT_PIC(Blaziken, 56, 64),
        FRONT_PIC_FEMALE(Blaziken, 56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Blaziken,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Blaziken, 64, 64),
        BACK_PIC_FEMALE(Blaziken, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(Blaziken),
        ICON(Blaziken, 0),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_BLAZIKEN_MEGA] =
    {
        BLAZIKEN_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 160,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 130,
        .baseSpDefense = 80,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 315 : 284,
        .abilities = { ABILITY_SPEED_BOOST, ABILITY_SPEED_BOOST, ABILITY_SPEED_BOOST },
        .cryId = CRY_PORYGON,
        .description = COMPOUND_STRING(
            "As it unleashes a flurry of savage kicks,\n"
            "its legs can begin to burn from the\n"
            "friction of the surrounding atmosphere.\n"
            "They're always a source of pride to it."),
        FRONT_PIC(BlazikenMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_BlazikenMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(BlazikenMega, 56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(BlazikenMega),
        ICON(BlazikenMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_TORCHIC

#if P_FAMILY_MUDKIP
    [SPECIES_MUDKIP] =
    {
        .baseHP        = 50,
        .baseAttack    = 70,
        .baseDefense   = 50,
        .baseSpeed     = 40,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 62 : 65,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_DAMP },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Mudkip"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_MUDKIP,
        .categoryName = _("Mud Fish"),
        .height = 4,
        .weight = 76,
        .description = COMPOUND_STRING(
            "On land, it can powerfully lift large\n"
            "boulders by planting its four feet and\n"
            "heaving. It sleeps by burying itself in soil\n"
            "at the water's edge."),
        .pokemonScale = 535,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Mudkip, 40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Mudkip,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        BACK_PIC(Mudkip, 48, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Mudkip),
        ICON(Mudkip, 0),
        FOOTPRINT(Mudkip)
        LEARNSETS(Mudkip),
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_MARSHTOMP}),
    },

    [SPECIES_MARSHTOMP] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 70,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_WATER, TYPE_EARTH),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 143,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_DAMP },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Marshtomp"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_MARSHTOMP,
        .categoryName = _("Mud Fish"),
        .height = 7,
        .weight = 280,
        .description = COMPOUND_STRING(
            "Its toughened hind legs enable it to stand\n"
            "upright. Because it weakens if its skin\n"
            "dries out, it replenishes fluids by playing\n"
            "in mud."),
        .pokemonScale = 340,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Marshtomp, 48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Marshtomp,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Marshtomp, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Marshtomp),
        ICON(Marshtomp, 0),
        FOOTPRINT(Marshtomp)
        LEARNSETS(Marshtomp),
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_SWAMPERT}),
    },

#define SWAMPERT_MISC_INFO                                               \
        .types = MON_TYPES(TYPE_WATER, TYPE_EARTH),                     \
        .catchRate = 45,                                                 \
        .evYield_Attack = 3,                                             \
        .genderRatio = PERCENT_FEMALE(12.5),                             \
        .eggCycles = 20,                                                 \
        .friendship = STANDARD_FRIENDSHIP,                               \
        .growthRate = GROWTH_MEDIUM_SLOW,                                \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),\
        .sourceGame = SOURCE_SOEW,                                    \
        .speciesName = _("Swampert"),                                    \
        .natDexNum = NATIONAL_DEX_SWAMPERT,                              \
        .categoryName = _("Mud Fish"),                                   \
        FOOTPRINT(Swampert)                                              \
        LEARNSETS(Swampert),                                             \
        .formSpeciesIdTable = sSwampertFormSpeciesIdTable,               \
        .formChangeTable = sSwampertFormChangeTable

    [SPECIES_SWAMPERT] =
    {
        SWAMPERT_MISC_INFO,
        .baseHP        = 100,
        .baseAttack    = 110,
        .baseDefense   = 90,
        .baseSpeed     = 60,
        .baseSpAttack  = 85,
        .baseSpDefense = 90,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 268,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 241,
    #else
        .expYield = 210,
    #endif
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_DAMP },
        .cryId = CRY_PORYGON,
        .height = 15,
        .weight = 819,
        .description = COMPOUND_STRING(
            "If it senses the approach of a storm and\n"
            "a tidal wave, it protects its seaside nest\n"
            "by piling up boulders. It swims as fast as\n"
            "a jet ski."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Swampert, 64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Swampert,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Swampert, 64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(Swampert),
        ICON(Swampert, 0),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_SWAMPERT_MEGA] =
    {
        SWAMPERT_MISC_INFO,
        .baseHP        = 100,
        .baseAttack    = 150,
        .baseDefense   = 110,
        .baseSpeed     = 70,
        .baseSpAttack  = 95,
        .baseSpDefense = 110,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 318 : 286,
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_SWIFT_SWIM, ABILITY_SWIFT_SWIM },
        .cryId = CRY_PORYGON,
        .height = 19,
        .weight = 1020,
        .description = COMPOUND_STRING(
            "When it Mega Evolves, the strength that it\n"
            "needs to act in the water is increased.\n"
            "It can use its tenacious power\n"
            "both on land and in the water."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(SwampertMega, 64, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_SwampertMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SwampertMega, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(SwampertMega),
        ICON(SwampertMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MUDKIP

#if P_FAMILY_POOCHYENA
    [SPECIES_POOCHYENA] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = 35,
        .baseSpeed     = 35,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 255,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 56,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 44,
    #else
        .expYield = 55,
    #endif
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_QUICK_FEET, ABILITY_RATTLED },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Poochyena"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_POOCHYENA,
        .categoryName = _("Bite"),
        .height = 5,
        .weight = 136,
        .description = COMPOUND_STRING(
            "It savagely threatens foes with bared\n"
            "fangs. It chases after fleeing targets\n"
            "tenaciously. It turns tail and runs,\n"
            "however, if the foe strikes back."),
        .pokemonScale = 481,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Poochyena, 48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Poochyena,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Poochyena, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Poochyena),
        ICON(Poochyena, 2),
        FOOTPRINT(Poochyena)
        LEARNSETS(Poochyena),
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_MIGHTYENA}),
    },

    [SPECIES_MIGHTYENA] =
    {
        .baseHP        = 70,
        .baseAttack    = 90,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 127,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 147 : 128,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_QUICK_FEET, ABILITY_MOXIE },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Mightyena"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_MIGHTYENA,
        .categoryName = _("Bite"),
        .height = 10,
        .weight = 370,
        .description = COMPOUND_STRING(
            "In the wild, Mightyena live in a pack.\n"
            "They never defy their leader's orders.\n"
            "They defeat foes with perfectly\n"
            "coordinated teamwork."),
        .pokemonScale = 362,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Mightyena, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Mightyena,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Mightyena, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_H_SHAKE,
        PALETTES(Mightyena),
        ICON(Mightyena, 2),
        FOOTPRINT(Mightyena)
        LEARNSETS(Mightyena),
    },
#endif //P_FAMILY_POOCHYENA

#if P_FAMILY_ZIGZAGOON
#if P_UPDATED_EXP_YIELDS >= GEN_7
    #define ZIGZAGOON_EXP_YIELD 56
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define ZIGZAGOON_EXP_YIELD 48
#else
    #define ZIGZAGOON_EXP_YIELD 60
#endif

#define ZIGZAGOON_MISC_INFO                                                     \
        .baseHP        = 38,                                                    \
        .baseAttack    = 30,                                                    \
        .baseDefense   = 41,                                                    \
        .baseSpeed     = 60,                                                    \
        .baseSpAttack  = 30,                                                    \
        .baseSpDefense = 41,                                                    \
        .catchRate = 255,                                                       \
        .expYield = ZIGZAGOON_EXP_YIELD,                                        \
        .evYield_Speed = 1,                                                     \
        .genderRatio = PERCENT_FEMALE(50),                                      \
        .eggCycles = 15,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_MEDIUM_FAST,                                       \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),                           \
        .abilities = { ABILITY_PICKUP, ABILITY_GLUTTONY, ABILITY_QUICK_FEET },  \
        .speciesName = _("Zigzagoon"),                                          \
        .cryId = CRY_PORYGON,                                                 \
        .natDexNum = NATIONAL_DEX_ZIGZAGOON,                                    \
        .categoryName = _("Tiny Raccoon"),                                      \
        .height = 4,                                                            \
        .weight = 175,                                                          \
        .pokemonScale = 560,                                                    \
        .pokemonOffset = 22,                                                    \
        .trainerScale = 256,                                                    \
        .trainerOffset = 0,                                                     \
        FOOTPRINT(Zigzagoon)                                                    \
        .formSpeciesIdTable = sZigzagoonFormSpeciesIdTable

#define LINOONE_MISC_INFO                                                       \
        .baseHP        = 78,                                                    \
        .baseAttack    = 70,                                                    \
        .baseDefense   = 61,                                                    \
        .baseSpeed     = 100,                                                   \
        .baseSpAttack  = 50,                                                    \
        .baseSpDefense = 61,                                                    \
        .catchRate = 90,                                                        \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 147 : 128,                \
        .evYield_Speed = 2,                                                     \
        .genderRatio = PERCENT_FEMALE(50),                                      \
        .eggCycles = 15,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_MEDIUM_FAST,                                       \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),                           \
        .abilities = { ABILITY_PICKUP, ABILITY_GLUTTONY, ABILITY_QUICK_FEET },  \
        .sourceGame = SOURCE_POFV,                                          \
        .speciesName = _("Linoone"),                                            \
        .cryId = CRY_PORYGON,                                                   \
        .natDexNum = NATIONAL_DEX_LINOONE,                                      \
        .categoryName = _("Rushing"),                                           \
        .height = 5,                                                            \
        .weight = 325,                                                          \
        .pokemonScale = 321,                                                    \
        .pokemonOffset = 7,                                                     \
        .trainerScale = 256,                                                    \
        .trainerOffset = 0,                                                     \
        FOOTPRINT(Linoone)                                                      \
        .formSpeciesIdTable = sLinooneFormSpeciesIdTable

    [SPECIES_ZIGZAGOON] =
    {
        ZIGZAGOON_MISC_INFO,
        .types = MON_TYPES(TYPE_ILLUSION),
        .itemCommon = ITEM_POTION,
        .itemRare = ITEM_REVIVE,
        .sourceGame = SOURCE_EOSD,
        .description = COMPOUND_STRING(
            "Rubbing its nose against the ground, it\n"
            "always wanders about back and forth in\n"
            "search of something. It is distinguished\n"
            "by the zigzag footprints it leaves."),
        FRONT_PIC(Zigzagoon, 56, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Zigzagoon,
        .frontAnimId = ANIM_H_SLIDE,
        BACK_PIC(Zigzagoon, 56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Zigzagoon),
        ICON(Zigzagoon, 2),
        LEARNSETS(Zigzagoon),
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_LINOONE}),
    },

    [SPECIES_LINOONE] =
    {
        LINOONE_MISC_INFO,
        .types = MON_TYPES(TYPE_ILLUSION),
        .itemCommon = ITEM_POTION,
        .itemRare = ITEM_MAX_REVIVE,
        .description = COMPOUND_STRING(
            "It is exceedingly fast if it only has to run\n"
            "in a straight line. When it spots pond-\n"
            "dwelling prey underwater, it quickly leaps\n"
            "in and catches it with its sharp claws."),
        FRONT_PIC(Linoone, 64, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Linoone,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Linoone, 56, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Linoone),
        ICON(Linoone, 2),
        LEARNSETS(Linoone),
    },

#if P_GALARIAN_FORMS
    [SPECIES_ZIGZAGOON_GALARIAN] =
    {
        ZIGZAGOON_MISC_INFO,
        .types = MON_TYPES(TYPE_DARK, TYPE_ILLUSION),
        .sourceGame = SOURCE_POFV,
        .description = COMPOUND_STRING(
            "Its restlessness has it constantly moving\n"
            "in zigzags. It will purposely run into other\n"
            "Pokémon to start fights. It's thought to\n"
            "be the oldest form of Zigzagoon."),
        FRONT_PIC(ZigzagoonGalarian, 56, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_ZigzagoonGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(ZigzagoonGalarian, 56, 48),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(ZigzagoonGalarian),
        ICON(ZigzagoonGalarian, 0),
        LEARNSETS(ZigzagoonGalarian),
        .isGalarianForm = TRUE,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_LINOONE_GALARIAN}),
    },

    [SPECIES_LINOONE_GALARIAN] =
    {
        LINOONE_MISC_INFO,
        .types = MON_TYPES(TYPE_DARK, TYPE_ILLUSION),
        .description = COMPOUND_STRING(
            "This very aggressive Pokémon will\n"
            "recklessly challenge opponents stronger\n"
            "than itself. It uses its long tongue to\n"
            "taunt them to then tackle forcefully."),
        FRONT_PIC(LinooneGalarian, 64, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_LinooneGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(LinooneGalarian, 64, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(LinooneGalarian),
        ICON(LinooneGalarian, 0),
        LEARNSETS(LinooneGalarian),
        .isGalarianForm = TRUE,
        .evolutions = EVOLUTION({EVO_LEVEL_NIGHT, 35, SPECIES_OBSTAGOON}),
    },

    [SPECIES_OBSTAGOON] =
    {
        .baseHP        = 93,
        .baseAttack    = 90,
        .baseDefense   = 101,
        .baseSpeed     = 95,
        .baseSpAttack  = 60,
        .baseSpDefense = 81,
        .types = MON_TYPES(TYPE_DARK, TYPE_ILLUSION),
        .catchRate = 45,
        .expYield = 260,
        .evYield_Defense = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RECKLESS, ABILITY_GUTS, ABILITY_DEFIANT },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Obstagoon"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_OBSTAGOON,
        .categoryName = _("Blocking"),
        .height = 16,
        .weight = 460,
        .description = COMPOUND_STRING(
            "Its voice is staggering in volume.\n"
            "Obstagoon has a tendency to take on a\n"
            "threatening posture and shout--this move\n"
            "is known as Obstruct."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        FRONT_PIC(Obstagoon, 56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Obstagoon,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Obstagoon, 64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Obstagoon),
        ICON(Obstagoon, 0),
        FOOTPRINT(Obstagoon)
        LEARNSETS(Obstagoon),
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_ZIGZAGOON

#if P_FAMILY_WURMPLE
    [SPECIES_WURMPLE] =
    {
        .baseHP        = 45,
        .baseAttack    = 45,
        .baseDefense   = 35,
        .baseSpeed     = 20,
        .baseSpAttack  = 20,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_HEART),
        .catchRate = 255,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 56,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 39,
    #else
        .expYield = 54,
    #endif
        .evYield_HP = 1,
        .itemCommon = ITEM_PECHA_BERRY,
        .itemRare = ITEM_BRIGHT_POWDER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_ADVENT, ABILITY_NONE, ABILITY_RUN_AWAY },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Wurmple"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_WURMPLE,
        .categoryName = _("Worm"),
        .height = 3,
        .weight = 36,
        .description = COMPOUND_STRING(
            "It sticks to tree branches and eats\n"
            "leaves. The thread it spits from its mouth,\n"
            "which becomes gooey when it touches\n"
            "air, slows the movement of its foes."),
        .pokemonScale = 711,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Wurmple, 40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Wurmple,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Wurmple, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_STRETCH,
        PALETTES(Wurmple),
        ICON(Wurmple, 0),
        FOOTPRINT(Wurmple)
        LEARNSETS(Wurmple),
        .tmIlliterate = TRUE,
        .evolutions = EVOLUTION({EVO_LEVEL_SILCOON, 7, SPECIES_SILCOON},
                                {EVO_LEVEL_CASCOON, 7, SPECIES_CASCOON}),
    },

    [SPECIES_SILCOON] =
    {
        .baseHP        = 50,
        .baseAttack    = 35,
        .baseDefense   = 55,
        .baseSpeed     = 15,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .types = MON_TYPES(TYPE_HEART),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_4) ? 72 : 71,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_MAINTENANCE, ABILITY_NONE },
        .sourceGame = SOURCE_POFV,
        .speciesName = _("Silcoon"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SILCOON,
        .categoryName = _("Cocoon"),
        .height = 6,
        .weight = 100,
        .description = COMPOUND_STRING(
            "It prepares for evolution using the\n"
            "energy it stored while it was a Wurmple.\n"
            "It keeps watch over the surroundings with\n"
            "its two eyes."),
        .pokemonScale = 431,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Silcoon, 56, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Silcoon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Silcoon, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_SHAKE,
        PALETTES(Silcoon),
        ICON(Silcoon, 2),
        FOOTPRINT(Silcoon)
        LEARNSETS(Silcoon),
        .tmIlliterate = TRUE,
        .evolutions = EVOLUTION({EVO_LEVEL, 10, SPECIES_BEAUTIFLY}),
    },

    [SPECIES_BEAUTIFLY] =
    {
        .baseHP        = 60,
        .baseAttack    = 70,
        .baseDefense   = 50,
        .baseSpeed     = 65,
        .baseSpAttack  = P_UPDATED_STATS >= GEN_6 ? 100 : 90,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_HEART, TYPE_FLYING),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 198,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 178,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 173,
    #else
        .expYield = 161,
    #endif
        .evYield_SpAttack = 3,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_INNER_POWER, ABILITY_NONE, ABILITY_RIVALRY },
        .sourceGame = SOURCE_PODD,
        .speciesName = _("Beautifly"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_BEAUTIFLY,
        .categoryName = _("Butterfly"),
        .height = 10,
        .weight = 284,
        .description = COMPOUND_STRING(
            "Its colorfully patterned wings are its\n"
            "most prominent feature. It flies through\n"
            "flower-covered fields collecting pollen.\n"
            "It attacks ferociously when angered."),
        .pokemonScale = 298,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Beautifly, 64, 56),
        FRONT_PIC_FEMALE(Beautifly, 64, 56),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Beautifly,
        .frontAnimId = ANIM_V_SLIDE,
        .enemyMonElevation = 10,
        BACK_PIC(Beautifly, 64, 64),
        BACK_PIC_FEMALE(Beautifly, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Beautifly),
        ICON(Beautifly, 0),
        FOOTPRINT(Beautifly)
        LEARNSETS(Beautifly),
    },

    [SPECIES_CASCOON] =
    {
        .baseHP        = 50,
        .baseAttack    = 35,
        .baseDefense   = 55,
        .baseSpeed     = 15,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .types = MON_TYPES(TYPE_HEART),
        .catchRate = 120,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 72,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 41,
    #else
        .expYield = 72,
    #endif
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_MAINTENANCE, ABILITY_NONE },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Cascoon"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CASCOON,
        .categoryName = _("Cocoon"),
        .height = 7,
        .weight = 115,
        .description = COMPOUND_STRING(
            "To avoid detection by its enemies, it hides\n"
            "motionlessly beneath large leaves and in\n"
            "the gaps of branches. It also attaches\n"
            "dead leaves to its body for camouflage."),
        .pokemonScale = 391,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Cascoon, 56, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Cascoon,
        .frontAnimId = ANIM_V_SLIDE,
        BACK_PIC(Cascoon, 56, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_H_SHAKE,
        PALETTES(Cascoon),
        ICON(Cascoon, 2),
        FOOTPRINT(Cascoon)
        LEARNSETS(Cascoon),
        .tmIlliterate = TRUE,
        .evolutions = EVOLUTION({EVO_LEVEL, 10, SPECIES_DUSTOX}),
    },

    [SPECIES_DUSTOX] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 70,
        .baseSpeed     = 65,
        .baseSpAttack  = 50,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_HEART, TYPE_MIASMA),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 193,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 173,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 135,
    #elif P_UPDATED_EXP_YIELDS >= GEN_4
        .expYield = 161,
    #else
        .expYield = 160,
    #endif
        .evYield_SpDefense = 3,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_ADVENT, ABILITY_NONE, ABILITY_FOCUS },
        .sourceGame = SOURCE_LLS,
        .speciesName = _("Dustox"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_DUSTOX,
        .categoryName = _("Poison Moth"),
        .height = 12,
        .weight = 316,
        .description = COMPOUND_STRING(
            "It is a nocturnal Pokémon that flies from\n"
            "fields and mountains to the attraction of\n"
            "streetlights at night. It looses highly\n"
            "toxic powder from its wings."),
        .pokemonScale = 269,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Dustox, 64, 48),
        FRONT_PIC_FEMALE(Dustox, 64, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Dustox,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        .enemyMonElevation = 12,
        BACK_PIC(Dustox, 64, 64),
        BACK_PIC_FEMALE(Dustox, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Dustox),
        ICON(Dustox, 5),
        FOOTPRINT(Dustox)
        LEARNSETS(Dustox),
    },
#endif //P_FAMILY_WURMPLE

#if P_FAMILY_LOTAD
    [SPECIES_LOTAD] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 30,
        .baseSpeed     = 30,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_WATER, TYPE_NATURE),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 44 : 74,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_GRASS),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_RAIN_DISH, ABILITY_OWN_TEMPO },
        .sourceGame = SOURCE_LLS,
        .speciesName = _("Lotad"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_LOTAD,
        .categoryName = _("Water Weed"),
        .height = 5,
        .weight = 26,
        .description = COMPOUND_STRING(
            "This Pokémon lives in ponds with clean\n"
            "water. It is known to ferry small Pokémon\n"
            "across ponds by carrying them on the\n"
            "broad leaf on its head."),
        .pokemonScale = 406,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Lotad, 40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Lotad,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Lotad, 56, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Lotad),
        ICON(Lotad, 4),
        FOOTPRINT(Lotad)
        LEARNSETS(Lotad),
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_LOMBRE}),
    },

    [SPECIES_LOMBRE] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_WATER, TYPE_NATURE),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 119 : 141,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_GRASS),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_RAIN_DISH, ABILITY_OWN_TEMPO },
        .sourceGame = SOURCE_LLS,
        .speciesName = _("Lombre"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_LOMBRE,
        .categoryName = _("Jolly"),
        .height = 12,
        .weight = 325,
        .description = COMPOUND_STRING(
            "In the evening, it takes great delight in\n"
            "popping out of rivers and startling people.\n"
            "It feeds on aquatic moss that grows on\n"
            "rocks in the riverbed."),
        .pokemonScale = 277,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Lombre, 48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Lombre,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Lombre, 48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Lombre),
        ICON(Lombre, 1),
        FOOTPRINT(Lombre)
        LEARNSETS(Lombre),
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_GUARD_HEART, SPECIES_LUDICOLO}),
    },

    [SPECIES_LUDICOLO] =
    {
        .baseHP        = 80,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 90,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_WATER, TYPE_NATURE),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 240,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 216,
    #else
        .expYield = 181,
    #endif
        .evYield_SpDefense = 3,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_GRASS),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_RAIN_DISH, ABILITY_OWN_TEMPO },
        .sourceGame = SOURCE_LLS,
        .speciesName = _("Ludicolo"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_LUDICOLO,
        .categoryName = _("Carefree"),
        .height = 15,
        .weight = 550,
        .description = COMPOUND_STRING(
            "When it hears festive music, all the cells\n"
            "in its body become stimulated, and it\n"
            "begins moving in rhythm. It does not\n"
            "quail even when it faces a tough opponent."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = -1,
        FRONT_PIC(Ludicolo, 56, 64),
        FRONT_PIC_FEMALE(Ludicolo, 56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Ludicolo,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW,
        BACK_PIC(Ludicolo, 64, 56),
        BACK_PIC_FEMALE(Ludicolo, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Ludicolo),
        ICON(Ludicolo, 1),
        FOOTPRINT(Ludicolo)
        LEARNSETS(Ludicolo),
    },
#endif //P_FAMILY_LOTAD

#if P_FAMILY_SEEDOT
    [SPECIES_SEEDOT] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 50,
        .baseSpeed     = 30,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_NATURE),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 44 : 74,
        .evYield_Defense = 1,
        .itemRare = ITEM_POWER_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_GRASS),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_EARLY_BIRD, ABILITY_PICKPOCKET },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Seedot"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SEEDOT,
        .categoryName = _("Acorn"),
        .height = 5,
        .weight = 40,
        .description = COMPOUND_STRING(
            "It hangs off branches and absorbs\n"
            "nutrients. When it finishes eating, its\n"
            "body becomes so heavy that it drops to\n"
            "the ground with a thump."),
        .pokemonScale = 472,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Seedot, 32, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Seedot,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        BACK_PIC(Seedot, 48, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Seedot),
        ICON(Seedot, 2),
        FOOTPRINT(Seedot)
        LEARNSETS(Seedot),
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_NUZLEAF}),
    },

    [SPECIES_NUZLEAF] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 40,
        .baseSpeed     = 60,
        .baseSpAttack  = 60,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_NATURE, TYPE_DARK),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 119 : 141,
        .evYield_Attack = 2,
        .itemRare = ITEM_POWER_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_GRASS),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_EARLY_BIRD, ABILITY_PICKPOCKET },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Nuzleaf"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_NUZLEAF,
        .categoryName = _("Wily"),
        .height = 10,
        .weight = 280,
        .description = COMPOUND_STRING(
            "A forest-dwelling Pokémon that is skilled\n"
            "at climbing trees. Its long and pointed\n"
            "nose is its weak point. It loses power if\n"
            "the nose is gripped."),
        .pokemonScale = 299,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Nuzleaf, 40, 56),
        FRONT_PIC_FEMALE(Nuzleaf, 40, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Nuzleaf,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Nuzleaf, 56, 48),
        BACK_PIC_FEMALE(Nuzleaf, 56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Nuzleaf),
        ICON(Nuzleaf, 1),
        FOOTPRINT(Nuzleaf)
        LEARNSETS(Nuzleaf),
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_TECH_HEART, SPECIES_SHIFTRY}),
    },

    [SPECIES_SHIFTRY] =
    {
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 60,
        .baseSpeed     = 80,
        .baseSpAttack  = 90,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_NATURE, TYPE_DARK),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 240,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 216,
    #else
        .expYield = 181,
    #endif
        .evYield_Attack = 3,
        .itemRare = ITEM_POWER_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_GRASS),
        #if P_UPDATED_ABILITIES >= GEN_9
            .abilities = { ABILITY_CHLOROPHYLL, ABILITY_WIND_RIDER, ABILITY_PICKPOCKET },
        #else
            .abilities = { ABILITY_CHLOROPHYLL, ABILITY_EARLY_BIRD, ABILITY_PICKPOCKET },
        #endif
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Shiftry"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SHIFTRY,
        .categoryName = _("Wicked"),
        .height = 13,
        .weight = 596,
        .description = COMPOUND_STRING(
            "It is said to arrive on chilly, wintry winds.\n"
            "Feared from long ago as the guardian of\n"
            "forests, this Pokémon lives in a deep\n"
            "forest where people do not venture."),
        .pokemonScale = 290,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Shiftry, 64, 56),
        FRONT_PIC_FEMALE(Shiftry, 64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Shiftry,
        .frontAnimId = ANIM_H_VIBRATE,
        BACK_PIC(Shiftry, 64, 56),
        BACK_PIC_FEMALE(Shiftry, 64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Shiftry),
        ICON(Shiftry, 5),
        FOOTPRINT(Shiftry)
        LEARNSETS(Shiftry),
    },
#endif //P_FAMILY_SEEDOT

#if P_FAMILY_TAILLOW
    [SPECIES_TAILLOW] =
    {
        .baseHP        = 40,
        .baseAttack    = 55,
        .baseDefense   = 30,
        .baseSpeed     = 85,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_ILLUSION, TYPE_FLYING),
        .catchRate = 200,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 54 : 59,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_GUTS, ABILITY_NONE, ABILITY_SCRAPPY },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Taillow"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_TAILLOW,
        .categoryName = _("Tiny Swallow"),
        .height = 3,
        .weight = 23,
        .description = COMPOUND_STRING(
            "Although it is small, it is very courageous.\n"
            "It will take on a larger Skarmory on an\n"
            "equal footing. However, its will weakens if\n"
            "it becomes hungry."),
        .pokemonScale = 465,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Taillow, 48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Taillow,
        .frontAnimId = ANIM_V_JUMPS_BIG,
        BACK_PIC(Taillow, 56, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Taillow),
        ICON(Taillow, 2),
        FOOTPRINT(Taillow)
        LEARNSETS(Taillow),
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_SWELLOW}),
    },

    [SPECIES_SWELLOW] =
    {
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 60,
        .baseSpeed     = 125,
        .baseSpAttack  = P_UPDATED_STATS >= GEN_7 ? 75 : 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_ILLUSION, TYPE_FLYING),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 159,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 151,
    #else
        .expYield = 162,
    #endif
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_GUTS, ABILITY_NONE, ABILITY_SCRAPPY },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Swellow"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SWELLOW,
        .categoryName = _("Swallow"),
        .height = 7,
        .weight = 198,
        .description = COMPOUND_STRING(
            "A Swellow dives upon prey from far above.\n"
            "It never misses its targets. It takes to\n"
            "the skies in search of lands with a warm\n"
            "climate."),
        .pokemonScale = 428,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Swellow, 64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Swellow,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        BACK_PIC(Swellow, 56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Swellow),
        ICON(Swellow, 2),
        FOOTPRINT(Swellow)
        LEARNSETS(Swellow),
    },
#endif //P_FAMILY_TAILLOW

#if P_FAMILY_WINGULL
    [SPECIES_WINGULL] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 30,
        .baseSpeed     = 85,
        .baseSpAttack  = 55,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_WATER, TYPE_FLYING),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 54 : 64,
        .evYield_Speed = 1,
        .itemCommon = ITEM_PRETTY_FEATHER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FLYING),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_HYDRATION, ABILITY_RAIN_DISH },
        .sourceGame = SOURCE_POFV,
        .speciesName = _("Wingull"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_WINGULL,
        .categoryName = _("Seagull"),
        .height = 6,
        .weight = 95,
        .description = COMPOUND_STRING(
            "It makes its nest on a sheer cliff at the\n"
            "edge of the sea. It has trouble keeping\n"
            "its wings flapping in flight. Instead, it\n"
            "soars on updrafts."),
        .pokemonScale = 295,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Wingull, 64, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Wingull,
        .frontAnimId = ANIM_H_PIVOT,
        .enemyMonElevation = 15,
        BACK_PIC(Wingull, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Wingull),
        ICON(Wingull, 0),
        FOOTPRINT(Wingull)
        LEARNSETS(Wingull),
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_PELIPPER}),
    },

    [SPECIES_PELIPPER] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 100,
        .baseSpeed     = 65,
        .baseSpAttack  = P_UPDATED_STATS >= GEN_7 ? 95 : 85,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_WATER, TYPE_FLYING),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 154,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 151,
    #else
        .expYield = 164,
    #endif
        .evYield_Defense = 2,
        .itemCommon = ITEM_PRETTY_FEATHER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FLYING),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_DRIZZLE, ABILITY_RAIN_DISH },
        .sourceGame = SOURCE_PODD,
        .speciesName = _("Pelipper"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_PELIPPER,
        .categoryName = _("Water Bird"),
        .height = 12,
        .weight = 280,
        .description = COMPOUND_STRING(
            "It skims the tops of waves as it flies.\n"
            "When it spots prey, it uses its large beak\n"
            "to scoop up the victim with water.\n"
            "It protects its eggs in its beak."),
        .pokemonScale = 288,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Pelipper, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Pelipper,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 8,
        BACK_PIC(Pelipper, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Pelipper),
        ICON(Pelipper, 2),
        FOOTPRINT(Pelipper)
        LEARNSETS(Pelipper),
    },
#endif //P_FAMILY_WINGULL

#if P_FAMILY_RALTS
#define RALTS_FAMILY_TYPE2 (P_UPDATED_TYPES >= GEN_6 ? TYPE_COSMIC : TYPE_REASON)

#if P_UPDATED_EGG_GROUPS >= GEN_8
    #define RALTS_FAMILY_EGG_GROUPS MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_AMORPHOUS)
#else
    #define RALTS_FAMILY_EGG_GROUPS MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS)
#endif

    [SPECIES_RALTS] =
    {
        .baseHP        = 28,
        .baseAttack    = 25,
        .baseDefense   = 25,
        .baseSpeed     = 40,
        .baseSpAttack  = 45,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_REASON, RALTS_FAMILY_TYPE2),
        .catchRate = 235,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 40 : 70,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = RALTS_FAMILY_EGG_GROUPS,
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_TRACE, ABILITY_TELEPATHY },
        .sourceGame = SOURCE_POFV,
        .speciesName = _("Ralts"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_RALTS,
        .categoryName = _("Feeling"),
        .height = 4,
        .weight = 66,
        .description = COMPOUND_STRING(
            "A Ralts has the power to sense the\n"
            "emotions of people and Pokémon with the\n"
            "horns on its head. It takes cover if it\n"
            "senses any hostility."),
        .pokemonScale = 457,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Ralts, 24, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Ralts,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Ralts, 32, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Ralts),
        ICON(Ralts, 1),
        FOOTPRINT(Ralts)
        LEARNSETS(Ralts),
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_KIRLIA}),
    },

    [SPECIES_KIRLIA] =
    {
        .baseHP        = 38,
        .baseAttack    = 35,
        .baseDefense   = 35,
        .baseSpeed     = 50,
        .baseSpAttack  = 65,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_REASON, RALTS_FAMILY_TYPE2),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 97 : 140,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = RALTS_FAMILY_EGG_GROUPS,
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_TRACE, ABILITY_TELEPATHY },
        .sourceGame = SOURCE_POFV,
        .speciesName = _("Kirlia"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_KIRLIA,
        .categoryName = _("Emotion"),
        .height = 8,
        .weight = 202,
        .description = COMPOUND_STRING(
            "A Kirlia has the psychic power to create \n"
            "a rip in the dimensions and see into the\n"
            "future. It is said to dance with pleasure\n"
            "on sunny mornings."),
        .pokemonScale = 354,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Kirlia, 32, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Kirlia,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Kirlia, 48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Kirlia),
        ICON(Kirlia, 1),
        FOOTPRINT(Kirlia)
        LEARNSETS(Kirlia),
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_GARDEVOIR},
                                {EVO_ITEM_MALE, ITEM_DAWN_STONE, SPECIES_GALLADE}),
    },

#define GARDEVOIR_MISC_INFO                                 \
        .catchRate = 45,                                    \
        .evYield_SpAttack = 3,                              \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = 35,                                   \
        .growthRate = GROWTH_SLOW,                          \
        .eggGroups = RALTS_FAMILY_EGG_GROUPS,               \
        .types = MON_TYPES(TYPE_REASON, RALTS_FAMILY_TYPE2),\
        .sourceGame = SOURCE_POFV,                      \
        .speciesName = _("Gardevoir"),                      \
        .natDexNum = NATIONAL_DEX_GARDEVOIR,                \
        .categoryName = _("Embrace"),                       \
        .height = 16,                                       \
        .weight = 484,                                      \
        .pokemonScale = 256,                                \
        .pokemonOffset = 0,                                 \
        .trainerScale = 256,                                \
        .trainerOffset = 0,                                 \
        FOOTPRINT(Gardevoir)                                \
        LEARNSETS(Gardevoir),                               \
        .formSpeciesIdTable = sGardevoirFormSpeciesIdTable, \
        .formChangeTable = sGardevoirFormChangeTable

    [SPECIES_GARDEVOIR] =
    {
        GARDEVOIR_MISC_INFO,
        .baseHP        = 68,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 80,
        .baseSpAttack  = 125,
        .baseSpDefense = 115,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 259,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 233,
    #else
        .expYield = 208,
    #endif
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_TRACE, ABILITY_TELEPATHY },
        .cryId = CRY_PORYGON,
        .description = COMPOUND_STRING(
            "It apparently does not feel the pull of\n"
            "gravity because it supports itself with\n"
            "psychic power. It will give its life to\n"
            "protect its Trainer."),
        FRONT_PIC(Gardevoir, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Gardevoir,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Gardevoir, 48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Gardevoir),
        ICON(Gardevoir, 1),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_GARDEVOIR_MEGA] =
    {
        GARDEVOIR_MISC_INFO,
        .baseHP        = 68,
        .baseAttack    = 85,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 165,
        .baseSpDefense = 135,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 309 : 278,
        .abilities = { ABILITY_PIXILATE, ABILITY_PIXILATE, ABILITY_PIXILATE },
        .cryId = CRY_PORYGON,
        .description = COMPOUND_STRING(
            "By opening its heart, Mega Gardevoir\n"
            "becomes able to use tremendous psychic\n"
            "power. The red plate in its chest is said to\n"
            "be a physical manifestation of its heart."),
        FRONT_PIC(GardevoirMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_GardevoirMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(GardevoirMega, 48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        PALETTES(GardevoirMega),
        ICON(GardevoirMega, 1),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GEN_4_CROSS_EVOS
#define GALLADE_MISC_INFO                                   \
        .types = MON_TYPES(TYPE_REASON, TYPE_DREAM),    \
        .catchRate = 45,                                    \
        .evYield_Attack = 3,                                \
        .genderRatio = MON_MALE,                            \
        .eggCycles = 20,                                    \
        .friendship = 35,                                   \
        .growthRate = GROWTH_SLOW,                          \
        .eggGroups = RALTS_FAMILY_EGG_GROUPS,               \
        .sourceGame = SOURCE_POFV,                      \
        .speciesName = _("Gallade"),                        \
        .natDexNum = NATIONAL_DEX_GALLADE,                  \
        .categoryName = _("Blade"),                         \
        .height = 16,                                       \
        .pokemonScale = 259,                                \
        .pokemonOffset = 1,                                 \
        .trainerScale = 296,                                \
        .trainerOffset = 1,                                 \
        FOOTPRINT(Gallade)                                  \
        LEARNSETS(Gallade),                                 \
        .formSpeciesIdTable = sGalladeFormSpeciesIdTable,   \
        .formChangeTable = sGalladeFormChangeTable

    [SPECIES_GALLADE] =
    {
        GALLADE_MISC_INFO,
        .baseHP        = 68,
        .baseAttack    = 125,
        .baseDefense   = 65,
        .baseSpeed     = 80,
        .baseSpAttack  = 65,
        .baseSpDefense = 115,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 259,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 233,
    #else
        .expYield = 208,
    #endif
        #if P_UPDATED_ABILITIES >= GEN_9
            .abilities = { ABILITY_STEADFAST, ABILITY_SHARPNESS, ABILITY_JUSTIFIED },
        #else
            .abilities = { ABILITY_STEADFAST, ABILITY_NONE, ABILITY_JUSTIFIED },
        #endif
        .cryId = CRY_PORYGON,
        .weight = 520,
        .description = COMPOUND_STRING(
            "A master of courtesy and swordsmanship,\n"
            "it fights using extending swords on its\n"
            "elbows when trying to protect someone.\n"
            "It can sense what its foe is thinking."),
        FRONT_PIC(Gallade, 56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Gallade,
        .frontAnimId = ANIM_H_VIBRATE,
        BACK_PIC(Gallade, 64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Gallade),
        ICON(Gallade, 1),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_GALLADE_MEGA] =
    {
        GALLADE_MISC_INFO,
        .baseHP        = 68,
        .baseAttack    = 165,
        .baseDefense   = 95,
        .baseSpeed     = 110,
        .baseSpAttack  = 65,
        .baseSpDefense = 115,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 309 : 278,
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_INNER_FOCUS, ABILITY_INNER_FOCUS },
        .cryId = CRY_PORYGON,
        .weight = 564,
        .description = COMPOUND_STRING(
            "Mega Gallade has a knightly appearance.\n"
            "It can use its psychic power to reshape\n"
            "both arms into blades simultaneously and\n"
            "fight using a dual-wielding style."),
        FRONT_PIC(GalladeMega, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_GalladeMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(GalladeMega, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(GalladeMega),
        ICON(GalladeMega, 1),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_RALTS

#if P_FAMILY_SURSKIT
    [SPECIES_SURSKIT] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 32,
        .baseSpeed     = 65,
        .baseSpAttack  = 50,
        .baseSpDefense = 52,
        .types = MON_TYPES(TYPE_HEART, TYPE_WATER),
        .catchRate = 200,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 54 : 63,
        .evYield_Speed = 1,
        .itemCommon = ITEM_HONEY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_BUG),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_RAIN_DISH },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Surskit"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SURSKIT,
        .categoryName = _("Pond Skater"),
        .height = 5,
        .weight = 17,
        .description = COMPOUND_STRING(
            "They gather on puddles after evening\n"
            "downpours, gliding across the surface\n"
            "of water as if sliding. It secretes honey\n"
            "with a sweet aroma from its head."),
        .pokemonScale = 375,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Surskit, 48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Surskit,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Surskit, 56, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_SPRING,
        PALETTES(Surskit),
        ICON(Surskit, 0),
        FOOTPRINT(Surskit)
        LEARNSETS(Surskit),
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_MASQUERAIN}),
    },

    [SPECIES_MASQUERAIN] =
    {
        .baseHP        = 70,
        .baseAttack    = 60,
        .baseDefense   = 62,
        .baseSpDefense = 82,
        #if P_UPDATED_STATS >= GEN_7
            .baseSpeed     = 80,
            .baseSpAttack  = 100,
        #else
            .baseSpeed     = 60,
            .baseSpAttack  = 80,
        #endif
        .types = MON_TYPES(TYPE_HEART, TYPE_FLYING),
        .catchRate = 75,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 159,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 145,
    #else
        .expYield = 128,
    #endif
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_BLAZER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_BUG),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_UNNERVE },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Masquerain"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_MASQUERAIN,
        .categoryName = _("Eyeball"),
        .height = 8,
        .weight = 36,
        .description = COMPOUND_STRING(
            "It intimidates foes with the large eyelike\n"
            "patterns on its antennae. Because it can't\n"
            "fly if its wings get wet, it shelters itself\n"
            "from rain under large trees and eaves."),
        .pokemonScale = 378,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Masquerain, 64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Masquerain,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 10,
        BACK_PIC(Masquerain, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Masquerain),
        ICON(Masquerain, 0),
        FOOTPRINT(Masquerain)
        LEARNSETS(Masquerain),
    },
#endif //P_FAMILY_SURSKIT

#if P_FAMILY_SHROOMISH
    [SPECIES_SHROOMISH] =
    {
        .baseHP        = 60,
        .baseAttack    = 40,
        .baseDefense   = 60,
        .baseSpeed     = 35,
        .baseSpAttack  = 40,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_NATURE),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 59 : 65,
        .evYield_HP = 1,
        .itemCommon = ITEM_GREEN_UFO,
        .itemRare = ITEM_RED_UFO,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
        .abilities = { ABILITY_INFECTIOUS, ABILITY_POISON_HEAL, ABILITY_QUICK_FEET },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Shroomish"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SHROOMISH,
        .categoryName = _("Mushroom"),
        .height = 4,
        .weight = 45,
        .description = COMPOUND_STRING(
            "It loves to eat damp, composted soil in\n"
            "forests. If you enter a forest after a\n"
            "long rain, you can see many Shroomish\n"
            "feasting on composted soil."),
        .pokemonScale = 513,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Shroomish, 40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Shroomish,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Shroomish, 56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Shroomish),
        ICON(Shroomish, 1),
        FOOTPRINT(Shroomish)
        LEARNSETS(Shroomish),
        .evolutions = EVOLUTION({EVO_LEVEL, 23, SPECIES_BRELOOM}),
    },

    [SPECIES_BRELOOM] =
    {
        .baseHP        = 60,
        .baseAttack    = 130,
        .baseDefense   = 80,
        .baseSpeed     = 70,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_NATURE, TYPE_DREAM),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 161 : 165,
        .evYield_Attack = 2,
        .itemCommon = ITEM_GREEN_UFO,
        .itemRare = ITEM_RED_UFO,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
        .abilities = { ABILITY_INFECTIOUS, ABILITY_POISON_HEAL, ABILITY_TECHNICIAN },
        .sourceGame = SOURCE_LLS,
        .speciesName = _("Breloom"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_BRELOOM,
        .categoryName = _("Mushroom"),
        .height = 12,
        .weight = 392,
        .description = COMPOUND_STRING(
            "It scatters spores from holes in the cap\n"
            "on its head. It loves warm and humid\n"
            "climates. It feeds on trees and plants in\n"
            "fields and forests."),
        .pokemonScale = 324,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Breloom, 48, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Breloom,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Breloom, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Breloom),
        ICON(Breloom, 1),
        FOOTPRINT(Breloom)
        LEARNSETS(Breloom),
    },
#endif //P_FAMILY_SHROOMISH

#if P_FAMILY_SLAKOTH
    [SPECIES_SLAKOTH] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 30,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_ILLUSION),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 56 : 83,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_FRETFUL, ABILITY_NONE },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Slakoth"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SLAKOTH,
        .categoryName = _("Slacker"),
        .height = 8,
        .weight = 240,
        .description = COMPOUND_STRING(
            "It sleeps virtually all day and night long.\n"
            "It doesn't change its nest its entire life,\n"
            "but it sometimes travels great distances\n"
            "by swimming in rivers."),
        .pokemonScale = 291,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Slakoth, 56, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Slakoth,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Slakoth, 64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Slakoth),
        ICON(Slakoth, 2),
        FOOTPRINT(Slakoth)
        LEARNSETS(Slakoth),
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_VIGOROTH}),
    },

    [SPECIES_VIGOROTH] =
    {
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_ILLUSION),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 154 : 126,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_NONE },
        .sourceGame = SOURCE_POFV,
        .speciesName = _("Vigoroth"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_VIGOROTH,
        .categoryName = _("Wild Monkey"),
        .height = 14,
        .weight = 465,
        .description = COMPOUND_STRING(
            "It can't keep still because its blood boils\n"
            "with energy. It runs through the fields\n"
            "and mountains all day to calm itself. If it\n"
            "doesn't, it can't sleep at night."),
        .pokemonScale = 301,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Vigoroth, 64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Vigoroth,
        .frontAnimId = ANIM_H_JUMPS,
        BACK_PIC(Vigoroth, 56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Vigoroth),
        ICON(Vigoroth, 2),
        FOOTPRINT(Vigoroth)
        LEARNSETS(Vigoroth),
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_SLAKING}),
    },

    [SPECIES_SLAKING] =
    {
        .baseHP        = 150,
        .baseAttack    = 160,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 95,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_ILLUSION),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 285,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 252,
    #else
        .expYield = 210,
    #endif
        .evYield_HP = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_FRETFUL, ABILITY_NONE },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Slaking"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SLAKING,
        .categoryName = _("Lazy"),
        .height = 20,
        .weight = 1305,
        .description = COMPOUND_STRING(
            "Hordes of Slaking gather around trees\n"
            "when fruits come into season. They wait\n"
            "around patiently for ripened fruits to fall\n"
            "out of the trees."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 300,
        .trainerOffset = 1,
        FRONT_PIC(Slaking, 64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Slaking,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Slaking, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SHAKE,
        PALETTES(Slaking),
        ICON(Slaking, 2),
        FOOTPRINT(Slaking)
        LEARNSETS(Slaking),
    },
#endif //P_FAMILY_SLAKOTH

#if P_FAMILY_NINCADA
    [SPECIES_NINCADA] =
    {
        .baseHP        = 31,
        .baseAttack    = 45,
        .baseDefense   = 90,
        .baseSpeed     = 40,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_HEART, TYPE_EARTH),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 53 : 65,
        .evYield_Defense = 1,
        .itemRare = ITEM_GYM_SUIT,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_FOCUS, ABILITY_NONE, ABILITY_RUN_AWAY },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Nincada"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_NINCADA,
        .categoryName = _("Trainee"),
        .height = 5,
        .weight = 55,
        .description = COMPOUND_STRING(
            "It makes its nest at the roots of a mighty\n"
            "tree. Using its whiskerlike antennae, it\n"
            "probes its surroundings in the\n"
            "pitch-black darkness of soil."),
        .pokemonScale = 405,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Nincada, 56, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Nincada,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Nincada, 64, 32),
        .backPicYOffset = 18,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        PALETTES(Nincada),
        ICON(Nincada, 1),
        FOOTPRINT(Nincada)
        LEARNSETS(Nincada),
        .evolutions = EVOLUTION({EVO_LEVEL_NINJASK, 20, SPECIES_NINJASK},
                                {EVO_LEVEL_SHEDINJA, 20, SPECIES_SHEDINJA}),
    },

    [SPECIES_NINJASK] =
    {
        .baseHP        = 61,
        .baseAttack    = 90,
        .baseDefense   = 45,
        .baseSpeed     = 160,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_HEART, TYPE_FLYING),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 160 : 155,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SPEED_BOOST, ABILITY_NONE, ABILITY_INFILTRATOR },
        .sourceGame = SOURCE_PODD,
        .speciesName = _("Ninjask"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_NINJASK,
        .categoryName = _("Ninja"),
        .height = 8,
        .weight = 120,
        .description = COMPOUND_STRING(
            "Because it darts about vigorously at high\n"
            "speed, it is very difficult to see. Hearing\n"
            "its distinctive cries for too long induces\n"
            "a headache."),
        .pokemonScale = 383,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Ninjask, 64, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Ninjask,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .enemyMonElevation = 10,
        BACK_PIC(Ninjask, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(Ninjask),
        ICON(Ninjask, 1),
        FOOTPRINT(Ninjask)
        LEARNSETS(Ninjask),
    },

    [SPECIES_SHEDINJA] =
    {
        .baseHP        = 1,
        .baseAttack    = 90,
        .baseDefense   = 45,
        .baseSpeed     = 40,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_HEART, TYPE_GHOST),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 83 : 95,
        .evYield_HP = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_PLAY_GHOST, ABILITY_NONE },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Shedinja"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SHEDINJA,
        .categoryName = _("Shed"),
        .height = 8,
        .weight = 12,
        .description = COMPOUND_STRING(
            "A peculiar Pokémon that floats in air even\n"
            "though its wings remain completely still.\n"
            "The inside of its body is hollow and\n"
            "utterly dark."),
        .pokemonScale = 372,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Shedinja, 48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Shedinja,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 8,
        BACK_PIC(Shedinja, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Shedinja),
        ICON(Shedinja, 1),
        FOOTPRINT(Shedinja)
        LEARNSETS(Shedinja),
    },
#endif //P_FAMILY_NINCADA

#if P_FAMILY_WHISMUR
    [SPECIES_WHISMUR] =
    {
        .baseHP        = 64,
        .baseAttack    = 51,
        .baseDefense   = 23,
        .baseSpeed     = 28,
        .baseSpAttack  = 51,
        .baseSpDefense = 23,
        .types = MON_TYPES(TYPE_ILLUSION),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 48 : 68,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_NONE, ABILITY_RATTLED },
        .sourceGame = SOURCE_MOF,
        .speciesName = _("Whismur"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_WHISMUR,
        .categoryName = _("Whisper"),
        .height = 6,
        .weight = 163,
        .description = COMPOUND_STRING(
            "Its cries equal a jet plane in volume.\n"
            "It inhales through its ear canals. Because\n"
            "of this system, it can cry continually\n"
            "without having to catch its breath."),
        .pokemonScale = 373,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Whismur, 48, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Whismur,
        .frontAnimId = ANIM_H_SLIDE,
        BACK_PIC(Whismur, 56, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Whismur),
        ICON(Whismur, 1),
        FOOTPRINT(Whismur)
        LEARNSETS(Whismur),
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_LOUDRED}),
    },

    [SPECIES_LOUDRED] =
    {
        .baseHP        = 84,
        .baseAttack    = 71,
        .baseDefense   = 43,
        .baseSpeed     = 48,
        .baseSpAttack  = 71,
        .baseSpDefense = 43,
        .types = MON_TYPES(TYPE_ILLUSION),
        .catchRate = 120,
        .expYield = 126,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_NONE, ABILITY_SCRAPPY },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Loudred"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_LOUDRED,
        .categoryName = _("Big Voice"),
        .height = 10,
        .weight = 405,
        .description = COMPOUND_STRING(
            "It positions the round speakers on its\n"
            "head to assail foes with ultrasonic waves\n"
            "at massive volume. It builds power by\n"
            "stomping the ground."),
        .pokemonScale = 356,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Loudred, 56, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Loudred,
        .frontAnimId = ANIM_SHRINK_GROW,
        BACK_PIC(Loudred, 64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Loudred),
        ICON(Loudred, 2),
        FOOTPRINT(Loudred)
        LEARNSETS(Loudred),
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_EXPLOUD}),
    },

    [SPECIES_EXPLOUD] =
    {
        .baseHP        = 104,
        .baseAttack    = 91,
        .baseDefense   = 63,
        .baseSpeed     = 68,
        .baseSpAttack  = 91,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 73 : 63,
        .types = MON_TYPES(TYPE_ILLUSION),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 245,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 221,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 216,
    #else
        .expYield = 184,
    #endif
        .evYield_HP = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_NONE, ABILITY_SCRAPPY },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Exploud"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_EXPLOUD,
        .categoryName = _("Loud Noise"),
        .height = 15,
        .weight = 840,
        .description = COMPOUND_STRING(
            "It has sound-generating organs all over\n"
            "its body. It communicates with others by\n"
            "adjusting the tone and volume of the cries\n"
            "it emits."),
        .pokemonScale = 284,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Exploud, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Exploud,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        BACK_PIC(Exploud, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        PALETTES(Exploud),
        ICON(Exploud, 2),
        FOOTPRINT(Exploud)
        LEARNSETS(Exploud),
    },
#endif //P_FAMILY_WHISMUR

#if P_FAMILY_MAKUHITA
    [SPECIES_MAKUHITA] =
    {
        .baseHP        = 72,
        .baseAttack    = 60,
        .baseDefense   = 30,
        .baseSpeed     = 25,
        .baseSpAttack  = 20,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_DREAM),
        .catchRate = 180,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 47 : 87,
        .evYield_HP = 1,
        .itemRare = ITEM_CHINA_DRESS,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_WALL_OF_ICE, ABILITY_GUTS, ABILITY_SHEER_FORCE },
        .sourceGame = SOURCE_PODD,
        .speciesName = _("Makuhita"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_MAKUHITA,
        .categoryName = _("Guts"),
        .height = 10,
        .weight = 864,
        .description = COMPOUND_STRING(
            "It loves to toughen up its body above all\n"
            "else. If you hear quaking rumbles in a cave,\n"
            "it is the sound of Makuhita undertaking\n"
            "strenuous training."),
        .pokemonScale = 256,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Makuhita, 48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Makuhita,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Makuhita, 56, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(Makuhita),
        ICON(Makuhita, 1),
        FOOTPRINT(Makuhita)
        LEARNSETS(Makuhita),
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_HARIYAMA}),
    },

    [SPECIES_HARIYAMA] =
    {
        .baseHP        = 144,
        .baseAttack    = 120,
        .baseDefense   = 60,
        .baseSpeed     = 50,
        .baseSpAttack  = 40,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_DREAM),
        .catchRate = 200,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 166 : 184,
        .evYield_HP = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_WALL_OF_ICE, ABILITY_GUTS, ABILITY_SHEER_FORCE },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Hariyama"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_HARIYAMA,
        .categoryName = _("Arm Thrust"),
        .height = 23,
        .weight = 2538,
        .description = COMPOUND_STRING(
            "It has the habit of challenging others\n"
            "without hesitation to tests of strength.\n"
            "It's been known to stand on train tracks\n"
            "and stop trains using forearm thrusts."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 343,
        .trainerOffset = 7,
        FRONT_PIC(Hariyama, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Hariyama,
        .frontAnimId = ANIM_ROTATE_UP_TO_SIDES,
        BACK_PIC(Hariyama, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(Hariyama),
        ICON(Hariyama, 2),
        FOOTPRINT(Hariyama)
        LEARNSETS(Hariyama),
    },
#endif //P_FAMILY_MAKUHITA

#if P_FAMILY_NOSEPASS
    [SPECIES_NOSEPASS] =
    {
        .baseHP        = 30,
        .baseAttack    = 45,
        .baseDefense   = 135,
        .baseSpeed     = 30,
        .baseSpAttack  = 45,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_BEAST),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 75 : 108,
        .evYield_Defense = 1,
        .itemRare = ITEM_NINJA_SUIT,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STURDY, ABILITY_MAGNET_PULL, ABILITY_SAND_FORCE },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Nosepass"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_NOSEPASS,
        .categoryName = _("Compass"),
        .height = 10,
        .weight = 970,
        .description = COMPOUND_STRING(
            "Its body emits a powerful magnetism.\n"
            "It feeds on prey that is pulled in by the\n"
            "force. Its magnetism is stronger in cold\n"
            "seasons."),
        .pokemonScale = 256,
        .pokemonOffset = 9,
        .trainerScale = 289,
        .trainerOffset = 3,
        FRONT_PIC(Nosepass, 40, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Nosepass,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        BACK_PIC(Nosepass, 56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(Nosepass),
        ICON(Nosepass, 0),
        FOOTPRINT(Nosepass)
        LEARNSETS(Nosepass),
        .evolutions = EVOLUTION({EVO_MAPSEC, MAPSEC_NEW_MAUVILLE, SPECIES_PROBOPASS},
                                {EVO_ITEM, ITEM_SWIFT_HEART, SPECIES_PROBOPASS}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_PROBOPASS] =
    {
        .baseHP        = 60,
        .baseAttack    = 55,
        .baseDefense   = 145,
        .baseSpeed     = 40,
        .baseSpAttack  = 75,
        .baseSpDefense = 150,
        .types = MON_TYPES(TYPE_BEAST, TYPE_STEEL),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 184 : 198,
        .evYield_Defense = 1,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_NINJA_SUIT,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STURDY, ABILITY_MAGNET_PULL, ABILITY_SAND_FORCE },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Probopass"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_PROBOPASS,
        .categoryName = _("Compass"),
        .height = 14,
        .weight = 3400,
        .description = COMPOUND_STRING(
            "It freely controls three units called\n"
            "Mini-Noses using magnetic force.\n"
            "With them, it can attack its foes from\n"
            "three directions."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
        FRONT_PIC(Probopass, 56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Probopass,
        .frontAnimId = ANIM_V_SLIDE,
        .enemyMonElevation = 6,
        BACK_PIC(Probopass, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        PALETTES(Probopass),
        ICON(Probopass, 0),
        FOOTPRINT(Probopass)
        LEARNSETS(Probopass),
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_NOSEPASS

#if P_FAMILY_SKITTY
    [SPECIES_SKITTY] =
    {
        .baseHP        = 50,
        .baseAttack    = 45,
        .baseDefense   = 45,
        .baseSpeed     = 50,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_ILLUSION),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 52 : 65,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_NORMALIZE, ABILITY_WONDER_SKIN },
        .sourceGame = SOURCE_MOF,
        .speciesName = _("Skitty"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SKITTY,
        .categoryName = _("Kitten"),
        .height = 6,
        .weight = 110,
        .description = COMPOUND_STRING(
            "A Skitty's adorably cute behavior makes it\n"
            "highly popular. In battle, it makes its tail\n"
            "puff out. It threatens foes with a sharp\n"
            "growl."),
        .pokemonScale = 492,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Skitty, 56, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Skitty,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Skitty, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Skitty),
        ICON(Skitty, 0),
        FOOTPRINT(Skitty)
        LEARNSETS(Skitty),
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_CHROME_HEART, SPECIES_DELCATTY}),
    },

    [SPECIES_DELCATTY] =
    {
        .baseHP        = 70,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = P_UPDATED_STATS >= GEN_7 ? 90 : 70,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_ILLUSION),
        .catchRate = 60,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 140,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 133,
    #else
        .expYield = 138,
    #endif
        .evYield_HP = 1,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_NORMALIZE, ABILITY_WONDER_SKIN },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Delcatty"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_DELCATTY,
        .categoryName = _("Prim"),
        .height = 11,
        .weight = 326,
        .description = COMPOUND_STRING(
            "Rather than keeping a permanent lair,\n"
            "it habitually seeks comfortable spots and\n"
            "sleeps there. It is nocturnal and becomes\n"
            "active at dusk."),
        .pokemonScale = 322,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Delcatty, 56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Delcatty,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Delcatty, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Delcatty),
        ICON(Delcatty, 2),
        FOOTPRINT(Delcatty)
        LEARNSETS(Delcatty),
    },
#endif //P_FAMILY_SKITTY

#if P_FAMILY_SABLEYE
#define SABLEYE_MISC_INFO                                           \
        .types = MON_TYPES(TYPE_DARK, TYPE_GHOST),                  \
        .catchRate = 45,                                            \
        .evYield_Attack = 1,                                        \
        .evYield_Defense = 1,                                       \
        .genderRatio = PERCENT_FEMALE(50),                          \
        .eggCycles = 25,                                            \
        .friendship = 35,                                           \
        .growthRate = GROWTH_MEDIUM_SLOW,                           \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),          \
        .sourceGame = SOURCE_PCB,                             \
        .speciesName = _("Sableye"),                                \
        .natDexNum = NATIONAL_DEX_SABLEYE,                          \
        .categoryName = _("Darkness"),                              \
        .height = 5,                                                \
        FOOTPRINT(Sableye)                                          \
        LEARNSETS(Sableye),                                         \
        .formSpeciesIdTable = sSableyeFormSpeciesIdTable,           \
        .formChangeTable = sSableyeFormChangeTable

    [SPECIES_SABLEYE] =
    {
        SABLEYE_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 75,
        .baseSpeed     = 50,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 133 : 98,
        .itemRare = ITEM_WIDE_LENS,
        .abilities = { ABILITY_KEEN_EYE, ABILITY_STALL, ABILITY_PRANKSTER },
        .cryId = CRY_PORYGON,
        .weight = 110,
        .description = COMPOUND_STRING(
            "It digs branching holes in caves using its\n"
            "sharp claws in search of food--raw gems.\n"
            "A Sableye lurks in darkness and is seen\n"
            "only rarely."),
        .pokemonScale = 451,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Sableye, 48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Sableye,
        .frontAnimId = ANIM_GLOW_BLACK,
        BACK_PIC(Sableye, 48, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(Sableye),
        ICON(Sableye, 2),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_SABLEYE_MEGA] =
    {
        SABLEYE_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 85,
        .baseDefense   = 125,
        .baseSpeed     = 20,
        .baseSpAttack  = 85,
        .baseSpDefense = 115,
        .expYield = 168,
        .abilities = { ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE },
        .cryId = CRY_PORYGON,
        .weight = 1610,
        .description = COMPOUND_STRING(
            "Bathed in the energy of Mega Evolution,\n"
            "the gemstone on its chest expands, rips\n"
            "through its skin, and falls out."),
        .pokemonScale = 451,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(SableyeMega, 64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SableyeMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SableyeMega, 64, 64),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(SableyeMega),
        ICON(SableyeMega, 2),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SABLEYE

#if P_FAMILY_MAWILE
#if P_UPDATED_TYPES >= GEN_6
    #define MAWILE_TYPES { TYPE_STEEL, TYPE_COSMIC }
#else
    #define MAWILE_TYPES { TYPE_STEEL, TYPE_STEEL }
#endif

#define MAWILE_MISC_INFO                                             \
        .types = MAWILE_TYPES,                                       \
        .catchRate = 45,                                             \
        .evYield_Attack = 1,                                         \
        .evYield_Defense = 1,                                        \
        .genderRatio = PERCENT_FEMALE(50),                           \
        .eggCycles = 20,                                             \
        .friendship = STANDARD_FRIENDSHIP,                           \
        .growthRate = GROWTH_FAST,                                   \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),\
        .sourceGame = SOURCE_MS,                               \
        .speciesName = _("Mawile"),                                  \
        .natDexNum = NATIONAL_DEX_MAWILE,                            \
        .categoryName = _("Deceiver"),                               \
        FOOTPRINT(Mawile)                                            \
        LEARNSETS(Mawile),                                           \
        .formSpeciesIdTable = sMawileFormSpeciesIdTable,             \
        .formChangeTable = sMawileFormChangeTable

    [SPECIES_MAWILE] =
    {
        MAWILE_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 85,
        .baseDefense   = 85,
        .baseSpeed     = 50,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 133 : 98,
        .itemRare = ITEM_IRON_BALL,
        .abilities = { ABILITY_HIGH_STRENGTH, ABILITY_INTIMIDATE, ABILITY_SHEER_FORCE },
        .cryId = CRY_PORYGON,
        .height = 6,
        .weight = 115,
        .description = COMPOUND_STRING(
            "Its giant jaws are actually steel horns\n"
            "that transformed. It fools foes into\n"
            "complacency with its adorable gestures,\n"
            "then chomps them with its huge jaws."),
        .pokemonScale = 466,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Mawile, 64, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Mawile,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Mawile, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Mawile),
        ICON(Mawile, 2),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_MAWILE_MEGA] =
    {
        MAWILE_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 105,
        .baseDefense   = 125,
        .baseSpeed     = 50,
        .baseSpAttack  = 55,
        .baseSpDefense = 95,
        .expYield = 168,
        .abilities = { ABILITY_UNZAN, ABILITY_UNZAN, ABILITY_UNZAN },
        .cryId = CRY_PORYGON,
        .height = 10,
        .weight = 235,
        .description = COMPOUND_STRING(
            "Its two sets of jaws thrash about\n"
            "violently as if they each had a will of\n"
            "their own. One gnash from them can turn a\n"
            "boulder to dust."),
        .pokemonScale = 466,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(MawileMega, 64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_MawileMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MawileMega, 64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(MawileMega),
        ICON(MawileMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MAWILE

#if P_FAMILY_ARON
    [SPECIES_ARON] =
    {
        .baseHP        = 50,
        .baseAttack    = 70,
        .baseDefense   = 100,
        .baseSpeed     = 30,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_STEEL, TYPE_BEAST),
        .catchRate = 180,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 66 : 96,
        .evYield_Defense = 1,
        .itemRare = ITEM_BUNNY_SUIT,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_STURDY, ABILITY_ROCK_HEAD, ABILITY_HEAVY_METAL },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Aron"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_ARON,
        .categoryName = _("Iron Armor"),
        .height = 4,
        .weight = 600,
        .description = COMPOUND_STRING(
            "A Pokémon that is clad in steel armor.\n"
            "A new suit of armor is made when it evolves.\n"
            "The old, discarded armor is salvaged as\n"
            "metal for making iron products."),
        .pokemonScale = 419,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Aron, 32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Aron,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Aron, 48, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Aron),
        ICON(Aron, 2),
        FOOTPRINT(Aron)
        LEARNSETS(Aron),
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_LAIRON}),
    },

    [SPECIES_LAIRON] =
    {
        .baseHP        = 60,
        .baseAttack    = 90,
        .baseDefense   = 140,
        .baseSpeed     = 40,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_STEEL, TYPE_BEAST),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 151 : 152,
        .evYield_Defense = 2,
        .itemRare = ITEM_BUNNY_SUIT,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_STURDY, ABILITY_ROCK_HEAD, ABILITY_HEAVY_METAL },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Lairon"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_LAIRON,
        .categoryName = _("Iron Armor"),
        .height = 9,
        .weight = 1200,
        .description = COMPOUND_STRING(
            "When two Lairon meet in the wild, they\n"
            "fight for territory by bashing into each\n"
            "other with their steel bodies. The sound\n"
            "of their collision carries for miles."),
        .pokemonScale = 275,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Lairon, 56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Lairon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Lairon, 64, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Lairon),
        ICON(Lairon, 2),
        FOOTPRINT(Lairon)
        LEARNSETS(Lairon),
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_AGGRON}),
    },

#define AGGRON_MISC_INFO                                        \
        .catchRate = 45,                                        \
        .evYield_Defense = 3,                                   \
        .itemRare = ITEM_BUNNY_SUIT,                            \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .eggCycles = 35,                                        \
        .friendship = 35,                                       \
        .growthRate = GROWTH_SLOW,                              \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),         \
        .sourceGame = SOURCE_IN,                           \
        .speciesName = _("Aggron"),                             \
        .natDexNum = NATIONAL_DEX_AGGRON,                       \
        .categoryName = _("Iron Armor"),                        \
        FOOTPRINT(Aggron)                                       \
        LEARNSETS(Aggron),                                      \
        .formSpeciesIdTable = sAggronFormSpeciesIdTable,        \
        .formChangeTable = sAggronFormChangeTable

    [SPECIES_AGGRON] =
    {
        AGGRON_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 180,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_STEEL, TYPE_BEAST),
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 265,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 239,
    #else
        .expYield = 205,
    #endif
        .abilities = { ABILITY_STURDY, ABILITY_ROCK_HEAD, ABILITY_HEAVY_METAL },
        .cryId = CRY_PORYGON,
        .height = 21,
        .weight = 3600,
        .description = COMPOUND_STRING(
            "Its iron horns grow longer a little at\n"
            "a time. They are used to determine the\n"
            "Aggron's age. The gouges in its armor are\n"
            "worn with pride as mementos from battles."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 350,
        .trainerOffset = 6,
        FRONT_PIC(Aggron, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Aggron,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        BACK_PIC(Aggron, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(Aggron),
        ICON(Aggron, 2),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_AGGRON_MEGA] =
    {
        AGGRON_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 140,
        .baseDefense   = 230,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_STEEL),
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 315 : 284,
        .abilities = { ABILITY_FILTER, ABILITY_FILTER, ABILITY_FILTER },
        .cryId = CRY_PORYGON,
        .height = 22,
        .weight = 3950,
        .description = COMPOUND_STRING(
            "When Aggron Mega Evolves into\n"
            "Mega Aggron, the destructive ability of\n"
            "its fearsome horns can turn a steel-clad\n"
            "tank into so much scrap metal."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 350,
        .trainerOffset = 6,
        FRONT_PIC(AggronMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_AggronMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(AggronMega, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(AggronMega),
        ICON(AggronMega, 2),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_ARON

#if P_FAMILY_MEDITITE
    [SPECIES_MEDITITE] =
    {
        .baseHP        = 30,
        .baseAttack    = 40,
        .baseDefense   = 55,
        .baseSpeed     = 60,
        .baseSpAttack  = 40,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_DREAM, TYPE_REASON),
        .catchRate = 180,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 56 : 91,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_PURE_POWER, ABILITY_NONE, ABILITY_TELEPATHY },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Meditite"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_MEDITITE,
        .categoryName = _("Meditate"),
        .height = 6,
        .weight = 112,
        .description = COMPOUND_STRING(
            "It continually meditates for hours every\n"
            "day. As a result of rigorous and dedicated\n"
            "yoga training, it has tempered its\n"
            "spiritual power so much it can fly."),
        .pokemonScale = 465,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Meditite, 48, 48),
        FRONT_PIC_FEMALE(Meditite, 48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Meditite,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES,
        BACK_PIC(Meditite, 48, 48),
        BACK_PIC_FEMALE(Meditite, 48, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Meditite),
        ICON(Meditite, 0),
        FOOTPRINT(Meditite)
        LEARNSETS(Meditite),
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_MEDICHAM}),
    },

#define MEDICHAM_MISC_INFO                                          \
        .types = MON_TYPES(TYPE_DREAM, TYPE_REASON),            \
        .catchRate = 90,                                            \
        .evYield_Speed = 2,                                         \
        .genderRatio = PERCENT_FEMALE(50),                          \
        .eggCycles = 20,                                            \
        .friendship = STANDARD_FRIENDSHIP,                          \
        .growthRate = GROWTH_MEDIUM_FAST,                           \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),          \
        .sourceGame = SOURCE_HRTP,                                \
        .speciesName = _("Medicham"),                               \
        .natDexNum = NATIONAL_DEX_MEDICHAM,                         \
        .categoryName = _("Meditate"),                              \
        .height = 13,                                               \
        .weight = 315,                                              \
        .pokemonScale = 298,                                        \
        .pokemonOffset = 5,                                         \
        .trainerScale = 256,                                        \
        .trainerOffset = 0,                                         \
        FOOTPRINT(Medicham)                                         \
        LEARNSETS(Medicham),                                        \
        .formSpeciesIdTable = sMedichamFormSpeciesIdTable,          \
        .formChangeTable = sMedichamFormChangeTable

    [SPECIES_MEDICHAM] =
    {
        MEDICHAM_MISC_INFO,
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 75,
        .baseSpeed     = 80,
        .baseSpAttack  = 60,
        .baseSpDefense = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 144 : 153,
        .abilities = { ABILITY_PURE_POWER, ABILITY_NONE, ABILITY_TELEPATHY },
        .cryId = CRY_PORYGON,
        .description = COMPOUND_STRING(
            "Through crushingly harsh yoga training, it\n"
            "gained the power to foretell its foe's\n"
            "actions. It battles with elegant, dance-\n"
            "like movement."),
        FRONT_PIC(Medicham, 40, 64),
        FRONT_PIC_FEMALE(Medicham, 40, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Medicham,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Medicham, 56, 64),
        BACK_PIC_FEMALE(Medicham, 56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Medicham),
        ICON(Medicham, 0),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_MEDICHAM_MEGA] =
    {
        MEDICHAM_MISC_INFO,
        .baseHP        = 60,
        .baseAttack    = 100,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 80,
        .baseSpDefense = 85,
        .expYield = 179,
        .abilities = { ABILITY_PURE_POWER, ABILITY_PURE_POWER, ABILITY_PURE_POWER },
        .cryId = CRY_PORYGON,
        .description = COMPOUND_STRING(
            "It uses its amped-up willpower to create\n"
            "additional arms for itself. The more it has\n"
            "trained its spirit, the more realistic and\n"
            "dexterous these self-created arms become."),
        FRONT_PIC(MedichamMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_MedichamMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MedichamMega, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(MedichamMega),
        ICON(MedichamMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MEDITITE

#if P_FAMILY_ELECTRIKE
    [SPECIES_ELECTRIKE] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 65,
        .baseSpAttack  = 65,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_WIND),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 59 : 104,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_STATIC, ABILITY_LIGHTNING_ROD, ABILITY_MINUS },
        .sourceGame = SOURCE_LLS,
        .speciesName = _("Electrike"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_ELECTRIKE,
        .categoryName = _("Lightning"),
        .height = 6,
        .weight = 152,
        .description = COMPOUND_STRING(
            "It generates electricity using friction\n"
            "from the atmosphere. In seasons with\n"
            "especially arid air, its entire body blazes\n"
            "with violent showers of sparks."),
        .pokemonScale = 290,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Electrike, 48, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Electrike,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Electrike, 56, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Electrike),
        ICON(Electrike, 1),
        FOOTPRINT(Electrike)
        LEARNSETS(Electrike),
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_MANECTRIC}),
    },

#define MANECTRIC_MISC_INFO                                 \
        .types = MON_TYPES(TYPE_WIND),                  \
        .catchRate = 45,                                    \
        .evYield_Speed = 2,                                 \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_SLOW,                          \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),       \
        .sourceGame = SOURCE_PODD,                     \
        .speciesName = _("Manectric"),                      \
        .natDexNum = NATIONAL_DEX_MANECTRIC,                \
        .categoryName = _("Discharge"),                     \
        FOOTPRINT(Manectric)                                \
        LEARNSETS(Manectric),                               \
        .formSpeciesIdTable = sManectricFormSpeciesIdTable, \
        .formChangeTable = sManectricFormChangeTable

    [SPECIES_MANECTRIC] =
    {
        MANECTRIC_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 75,
        .baseDefense   = 60,
        .baseSpeed     = 105,
        .baseSpAttack  = 105,
        .baseSpDefense = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 166 : 168,
        .abilities = { ABILITY_STATIC, ABILITY_LIGHTNING_ROD, ABILITY_MINUS },
        .cryId = CRY_PORYGON,
        .height = 15,
        .weight = 402,
        .description = COMPOUND_STRING(
            "Because lightning falls in their vicinities,\n"
            "Manectric were thought to have been born\n"
            "from lightning. In battle, they create\n"
            "thunderclouds."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Manectric, 56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Manectric,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Manectric, 56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Manectric),
        ICON(Manectric, 0),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_MANECTRIC_MEGA] =
    {
        MANECTRIC_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 75,
        .baseDefense   = 80,
        .baseSpeed     = 135,
        .baseSpAttack  = 135,
        .baseSpDefense = 80,
        .expYield = 201,
        .abilities = { ABILITY_INTIMIDATE, ABILITY_INTIMIDATE, ABILITY_INTIMIDATE },
        .cryId = CRY_PORYGON,
        .height = 18,
        .weight = 440,
        .description = COMPOUND_STRING(
            "Too much electricity has built up in its\n"
            "body, irritating Manectric. Its explosive\n"
            "speed is equal to that of a lightning bolt."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(ManectricMega, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_ManectricMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(ManectricMega, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        PALETTES(ManectricMega),
        ICON(ManectricMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_ELECTRIKE

#if P_FAMILY_PLUSLE
    [SPECIES_PLUSLE] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 40,
        .baseSpeed     = 95,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_WIND),
        .catchRate = 200,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 120,
        .evYield_Speed = 1,
        .itemRare = ITEM_CELL_BATTERY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_PLUS, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .sourceGame = SOURCE_PODD,
        .speciesName = _("Plusle"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_PLUSLE,
        .categoryName = _("Cheering"),
        .height = 4,
        .weight = 42,
        .description = COMPOUND_STRING(
            "It has the trait of cheering on its fellow\n"
            "Pokémon. By shorting out the electricity\n"
            "it releases from its paws, it creates\n"
            "pom-poms for cheering."),
        .pokemonScale = 515,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Plusle, 40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Plusle,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        BACK_PIC(Plusle, 56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Plusle),
        ICON(Plusle, 0),
        FOOTPRINT(Plusle)
        LEARNSETS(Plusle),
    },
#endif //P_FAMILY_PLUSLE

#if P_FAMILY_MINUN
    [SPECIES_MINUN] =
    {
        .baseHP        = 60,
        .baseAttack    = 40,
        .baseDefense   = 50,
        .baseSpeed     = 95,
        .baseSpAttack  = 75,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_WIND),
        .catchRate = 200,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 120,
        .evYield_Speed = 1,
        .itemRare = ITEM_CELL_BATTERY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_MINUS, ABILITY_NONE, ABILITY_VOLT_ABSORB },
        .sourceGame = SOURCE_PODD,
        .speciesName = _("Minun"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_MINUN,
        .categoryName = _("Cheering"),
        .height = 4,
        .weight = 42,
        .description = COMPOUND_STRING(
            "At a meeting of Pokémon academics, it was\n"
            "announced that simultaneous exposure to\n"
            "electricity from a Plusle and Minun will\n"
            "promote circulation and boost vitality."),
        .pokemonScale = 512,
        .pokemonOffset = -7,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Minun, 40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Minun,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        BACK_PIC(Minun, 48, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Minun),
        ICON(Minun, 0),
        FOOTPRINT(Minun)
        LEARNSETS(Minun),
    },
#endif //P_FAMILY_MINUN

#if P_FAMILY_VOLBEAT_ILLUMISE
    [SPECIES_VOLBEAT] =
    {
        .baseHP        = 65,
        .baseAttack    = 73,
        .baseSpeed     = 85,
        .baseSpAttack  = 47,
        #if P_UPDATED_STATS >= GEN_7
            .baseDefense   = 75,
            .baseSpDefense = 85,
        #else
            .baseDefense   = 55,
            .baseSpDefense = 75,
        #endif
        .types = MON_TYPES(TYPE_HEART),
        .catchRate = 150,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 151,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 140,
    #else
        .expYield = 146,
    #endif
        .evYield_Speed = 1,
        .itemRare = ITEM_BRIGHT_POWDER,
        .genderRatio = MON_MALE,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_DIVA, ABILITY_INNER_POWER, ABILITY_PRANKSTER },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Volbeat"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_VOLBEAT,
        .categoryName = _("Firefly"),
        .height = 7,
        .weight = 177,
        .description = COMPOUND_STRING(
            "With their taillights lit, Volbeat fly in\n"
            "a swarm, drawing geometric designs in the\n"
            "night sky. They move their nests if their\n"
            "pond water becomes dirty."),
        .pokemonScale = 442,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Volbeat, 48, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Volbeat,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Volbeat, 48, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Volbeat),
        ICON(Volbeat, 0),
        FOOTPRINT(Volbeat)
        LEARNSETS(Volbeat),
    },

    [SPECIES_ILLUMISE] =
    {
        .baseHP        = 65,
        .baseAttack    = 47,
        .baseSpeed     = 85,
        .baseSpAttack  = 73,
        #if P_UPDATED_STATS >= GEN_7
            .baseDefense   = 75,
            .baseSpDefense = 85,
        #else
            .baseDefense   = 55,
            .baseSpDefense = 75,
        #endif
        .types = MON_TYPES(TYPE_HEART),
        .catchRate = 150,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 151,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 140,
    #else
        .expYield = 146,
    #endif
        .evYield_Speed = 1,
        .itemRare = ITEM_BRIGHT_POWDER,
        .genderRatio = MON_FEMALE,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_TINTED_LENS, ABILITY_PRANKSTER },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Illumise"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_ILLUMISE,
        .categoryName = _("Firefly"),
        .height = 6,
        .weight = 177,
        .description = COMPOUND_STRING(
            "A nocturnal Pokémon that becomes active\n"
            "upon nightfall. It leads a Volbeat swarm\n"
            "to draw patterns in the night sky. Over 200\n"
            "different patterns have been confirmed."),
        .pokemonScale = 572,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Illumise, 40, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Illumise,
        .frontAnimId = ANIM_RISING_WOBBLE,
        BACK_PIC(Illumise, 48, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Illumise),
        ICON(Illumise, 2),
        FOOTPRINT(Illumise)
        LEARNSETS(Illumise),
    },
#endif //P_FAMILY_VOLBEAT_ILLUMISE

#if P_FAMILY_ROSELIA
#if P_GEN_4_CROSS_EVOS
    [SPECIES_BUDEW] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 35,
        .baseSpeed     = 55,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_NATURE, TYPE_MIASMA),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 56 : 68,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_NURSE_OUTFIT,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_POISON_BODY, ABILITY_LEAF_GUARD },
        .sourceGame = SOURCE_LLS,
        .noFlip = TRUE,
        .speciesName = _("Budew"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_BUDEW,
        .categoryName = _("Bud"),
        .height = 2,
        .weight = 12,
        .description = COMPOUND_STRING(
            "Over the winter, it closes its bud and\n"
            "endures the cold. Sensitive to changing\n"
            "temperature, the bud is said to bloom\n"
            "when it feels the sun's warm touch."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Budew, 32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Budew,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Budew, 40, 56),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Budew),
        ICON(Budew, 1),
        FOOTPRINT(Budew)
        LEARNSETS(Budew),
        .evolutions = EVOLUTION({EVO_FRIENDSHIP_DAY, 0, SPECIES_ROSELIA}),
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_ROSELIA] =
    {
        .baseHP        = 50,
        .baseAttack    = 60,
        .baseDefense   = 45,
        .baseSpeed     = 65,
        .baseSpAttack  = 100,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_NATURE, TYPE_MIASMA),
        .catchRate = 150,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 140 : 152,
        .evYield_SpAttack = (P_UPDATED_EVS >= GEN_4) ? 2 : 1,
        .itemRare = ITEM_NURSE_OUTFIT,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_POISON_BODY, ABILITY_LEAF_GUARD },
        .sourceGame = SOURCE_LLS,
        .noFlip = TRUE,
        .speciesName = _("Roselia"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_ROSELIA,
        .categoryName = _("Thorn"),
        .height = 3,
        .weight = 20,
        .description = COMPOUND_STRING(
            "A Roselia that drinks nutritionally rich\n"
            "springwater blooms with lovely flowers.\n"
            "The fragrance of its flowers has the\n"
            "effect of making its foes careless."),
        .pokemonScale = 677,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Roselia, 56, 48),
        FRONT_PIC_FEMALE(Roselia, 56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Roselia,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Roselia, 64, 56),
        BACK_PIC_FEMALE(Roselia, 64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        PALETTES(Roselia),
        ICON(Roselia, 4),
        FOOTPRINT(Roselia)
        LEARNSETS(Roselia),
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SHINY_STONE, SPECIES_ROSERADE}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_ROSERADE] =
    {
        .baseHP        = 60,
        .baseAttack    = 70,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 65 : 55,
        .baseSpeed     = 90,
        .baseSpAttack  = 125,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_NATURE, TYPE_MIASMA),
        .catchRate = 75,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 258,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 232,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 227,
    #else
        .expYield = 204,
    #endif
        .evYield_SpAttack = 3,
        .itemRare = ITEM_NURSE_OUTFIT,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_POISON_BODY, ABILITY_TECHNICIAN },
        .sourceGame = SOURCE_LLS,
        .noFlip = TRUE,
        .speciesName = _("Roserade"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_ROSERADE,
        .categoryName = _("Bouquet"),
        .height = 9,
        .weight = 145,
        .description = COMPOUND_STRING(
            "Its sweet aroma attracts prey.\n"
            "With the movements of a dancer,\n"
            "it strikes with whips that are densely\n"
            "lined with poison thorns."),
        .pokemonScale = 338,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Roserade, 48, 56),
        FRONT_PIC_FEMALE(Roserade, 48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Roserade,
        .frontAnimId = ANIM_H_VIBRATE,
        BACK_PIC(Roserade, 64, 56),
        BACK_PIC_FEMALE(Roserade, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Roserade),
        ICON(Roserade, 0),
        FOOTPRINT(Roserade)
        LEARNSETS(Roserade),
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_ROSELIA

#if P_FAMILY_GULPIN
    [SPECIES_GULPIN] =
    {
        .baseHP        = 70,
        .baseAttack    = 43,
        .baseDefense   = 53,
        .baseSpeed     = 40,
        .baseSpAttack  = 43,
        .baseSpDefense = 53,
        .types = MON_TYPES(TYPE_MIASMA),
        .catchRate = 225,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 75,
        .evYield_HP = 1,
        .itemCommon = ITEM_ORAN_BERRY,
        .itemRare = ITEM_SITRUS_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_STRANGE_MIST, ABILITY_COLLECTOR, ABILITY_GLUTTONY },
        .sourceGame = SOURCE_LLS,
        .speciesName = _("Gulpin"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_GULPIN,
        .categoryName = _("Stomach"),
        .height = 4,
        .weight = 103,
        .description = COMPOUND_STRING(
            "This Pokémon's stomach fluid can even\n"
            "digest scrap iron. In one gulp, it can\n"
            "swallow something that is as large as\n"
            "itself."),
        .pokemonScale = 593,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Gulpin, 40, 48),
        FRONT_PIC_FEMALE(Gulpin, 40, 48),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Gulpin,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Gulpin, 56, 48),
        BACK_PIC_FEMALE(Gulpin, 56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_STRETCH,
        PALETTES(Gulpin),
        ICON(Gulpin, 1),
        FOOTPRINT(Gulpin)
        LEARNSETS(Gulpin),
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_SWALOT}),
    },

    [SPECIES_SWALOT] =
    {
        .baseHP        = 100,
        .baseAttack    = 73,
        .baseDefense   = 83,
        .baseSpeed     = 55,
        .baseSpAttack  = 73,
        .baseSpDefense = 83,
        .types = MON_TYPES(TYPE_MIASMA),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 163 : 168,
        .evYield_HP = 2,
        .itemCommon = ITEM_ORAN_BERRY,
        .itemRare = ITEM_SITRUS_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_STRANGE_MIST, ABILITY_COLLECTOR, ABILITY_GLUTTONY },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Swalot"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SWALOT,
        .categoryName = _("Poison Bag"),
        .height = 17,
        .weight = 800,
        .description = COMPOUND_STRING(
            "Its powerful stomach acid is capable of\n"
            "digesting almost anything. The one thing\n"
            "in the whole world a Swalot can't digest is\n"
            "its own stomach."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 345,
        .trainerOffset = 3,
        FRONT_PIC(Swalot, 56, 56),
        FRONT_PIC_FEMALE(Swalot, 56, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Swalot,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Swalot, 64, 64),
        BACK_PIC_FEMALE(Swalot, 64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_STRETCH,
        PALETTES(Swalot),
        ICON(Swalot, 2),
        FOOTPRINT(Swalot)
        LEARNSETS(Swalot),
    },
#endif //P_FAMILY_GULPIN

#if P_FAMILY_CARVANHA
    [SPECIES_CARVANHA] =
    {
        .baseHP        = 45,
        .baseAttack    = 90,
        .baseDefense   = 20,
        .baseSpeed     = 65,
        .baseSpAttack  = 65,
        .baseSpDefense = 20,
        .types = MON_TYPES(TYPE_WATER, TYPE_DARK),
        .catchRate = 225,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 61 : 88,
        .evYield_Attack = 1,
        .itemRare = ITEM_DEEP_SEA_TOOTH,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_DOLL_WALL, ABILITY_NONE, ABILITY_SPEED_BOOST },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Carvanha"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CARVANHA,
        .categoryName = _("Savage"),
        .height = 8,
        .weight = 208,
        .description = COMPOUND_STRING(
            "Carvanha attack ships in swarms, making\n"
            "them sink. Although it is said to be a very\n"
            "vicious Pokémon, it timidly flees as soon\n"
            "as it finds itself alone."),
        .pokemonScale = 362,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Carvanha, 48, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Carvanha,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW,
        BACK_PIC(Carvanha, 64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SPRING_REPEATED,
        PALETTES(Carvanha),
        ICON(Carvanha, 0),
        FOOTPRINT(Carvanha)
        LEARNSETS(Carvanha),
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_SHARPEDO}),
    },

#define SHARPEDO_MISC_INFO                                      \
        .types = MON_TYPES(TYPE_WATER, TYPE_DARK),              \
        .catchRate = 60,                                        \
        .evYield_Attack = 2,                                    \
        .itemRare = ITEM_DEEP_SEA_TOOTH,                        \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .eggCycles = 20,                                        \
        .friendship = 35,                                       \
        .growthRate = GROWTH_SLOW,                              \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),         \
        .sourceGame = SOURCE_SOEW,                           \
        .speciesName = _("Sharpedo"),                           \
        .natDexNum = NATIONAL_DEX_SHARPEDO,                     \
        .categoryName = _("Brutal"),                            \
        FOOTPRINT(Sharpedo)                                     \
        LEARNSETS(Sharpedo),                                    \
        .formSpeciesIdTable = sSharpedoFormSpeciesIdTable,      \
        .formChangeTable = sSharpedoFormChangeTable

    [SPECIES_SHARPEDO] =
    {
        SHARPEDO_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 120,
        .baseDefense   = 40,
        .baseSpeed     = 95,
        .baseSpAttack  = 95,
        .baseSpDefense = 40,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 161 : 175,
        .abilities = { ABILITY_DOLL_WALL, ABILITY_NONE, ABILITY_SPEED_BOOST },
        .cryId = CRY_PORYGON,
        .height = 18,
        .weight = 888,
        .description = COMPOUND_STRING(
            "The vicious and sly gangster of the sea.\n"
            "Its skin is specially textured to minimize\n"
            "drag in water. Its speed tops out at over\n"
            "75 miles per hour."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 317,
        .trainerOffset = 3,
        FRONT_PIC(Sharpedo, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Sharpedo,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH_TWICE,
        BACK_PIC(Sharpedo, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Sharpedo),
        ICON(Sharpedo, 0),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_SHARPEDO_MEGA] =
    {
        SHARPEDO_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 140,
        .baseDefense   = 70,
        .baseSpeed     = 105,
        .baseSpAttack  = 110,
        .baseSpDefense = 65,
        .expYield = 196,
        .abilities = { ABILITY_STRONG_JAW, ABILITY_STRONG_JAW, ABILITY_STRONG_JAW },
        .cryId = CRY_PORYGON,
        .height = 25,
        .weight = 1303,
        .description = COMPOUND_STRING(
            "The yellow patterns it bears are old scars.\n"
            "The energy from Mega Evolution runs\n"
            "through them, causing it sharp pain and\n"
            "suffering."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 317,
        .trainerOffset = 3,
        FRONT_PIC(SharpedoMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SharpedoMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 1,
        BACK_PIC(SharpedoMega, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(SharpedoMega),
        ICON(SharpedoMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_CARVANHA

#if P_FAMILY_WAILMER
    [SPECIES_WAILMER] =
    {
        .baseHP        = 130,
        .baseAttack    = 70,
        .baseDefense   = 35,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 125,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 80 : 137,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_WATER_2),
        .abilities = { ABILITY_WATER_VEIL, ABILITY_OBLIVIOUS, ABILITY_PRESSURE },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Wailmer"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_WAILMER,
        .categoryName = _("Ball Whale"),
        .height = 20,
        .weight = 1300,
        .description = COMPOUND_STRING(
            "While this Pokémon usually lives in the sea,\n"
            "it can survive on land, although not too\n"
            "long. It loses vitality if its body becomes\n"
            "dried out."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 493,
        .trainerOffset = 0,
        FRONT_PIC(Wailmer, 64, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Wailmer,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        BACK_PIC(Wailmer, 64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(Wailmer),
        ICON(Wailmer, 2),
        FOOTPRINT(Wailmer)
        LEARNSETS(Wailmer),
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_WAILORD}),
    },

    [SPECIES_WAILORD] =
    {
        .baseHP        = 170,
        .baseAttack    = 90,
        .baseDefense   = 45,
        .baseSpeed     = 60,
        .baseSpAttack  = 90,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 175 : 206,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_WATER_2),
        .abilities = { ABILITY_WATER_VEIL, ABILITY_OBLIVIOUS, ABILITY_PRESSURE },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Wailord"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_WAILORD,
        .categoryName = _("Float Whale"),
        .height = 145,
        .weight = 3980,
        .description = COMPOUND_STRING(
            "It breathes through nostrils that it\n"
            "raises above the sea. By inhaling to its\n"
            "maximum capacity, a Wailord can dive close\n"
            "to 10,000 feet beneath the waves."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 1352,
        .trainerOffset = 18,
        FRONT_PIC(Wailord, 64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Wailord,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .frontAnimDelay = 10,
        BACK_PIC(Wailord, 64, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(Wailord),
        ICON(Wailord, 0),
        FOOTPRINT(Wailord)
        LEARNSETS(Wailord),
    },
#endif //P_FAMILY_WAILMER

#if P_FAMILY_NUMEL
    [SPECIES_NUMEL] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 40,
        .baseSpeed     = 35,
        .baseSpAttack  = 65,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_FIRE, TYPE_EARTH),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 61 : 88,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_SIMPLE, ABILITY_OWN_TEMPO },
        .sourceGame = SOURCE_PODD,
        .speciesName = _("Numel"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_NUMEL,
        .categoryName = _("Numb"),
        .height = 7,
        .weight = 240,
        .description = COMPOUND_STRING(
            "A Numel stores boiling magma in the hump\n"
            "on its back. It is a hardy Pokémon that can\n"
            "transport a 220-pound load. It has served\n"
            "humans at work since long ago."),
        .pokemonScale = 342,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Numel, 40, 48),
        FRONT_PIC_FEMALE(Numel, 40, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Numel,
        .frontAnimId = ANIM_V_SLIDE,
        BACK_PIC(Numel, 56, 56),
        BACK_PIC_FEMALE(Numel, 56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(Numel),
        ICON(Numel, 1),
        FOOTPRINT(Numel)
        LEARNSETS(Numel),
        .evolutions = EVOLUTION({EVO_LEVEL, 33, SPECIES_CAMERUPT}),
    },

#define CAMERUPT_MISC_INFO                                  \
        .types = MON_TYPES(TYPE_FIRE, TYPE_EARTH),         \
        .catchRate = 150,                                   \
        .evYield_Attack = 1,                                \
        .evYield_SpAttack = 1,                              \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_FAST,                   \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),       \
        .sourceGame = SOURCE_HRTP,                        \
        .speciesName = _("Camerupt"),                       \
        .natDexNum = NATIONAL_DEX_CAMERUPT,                 \
        .categoryName = _("Eruption"),                      \
        FOOTPRINT(Camerupt)                                 \
        LEARNSETS(Camerupt),                                \
        .formSpeciesIdTable = sCameruptFormSpeciesIdTable,  \
        .formChangeTable = sCameruptFormChangeTable

    [SPECIES_CAMERUPT] =
    {
        CAMERUPT_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 100,
        .baseDefense   = 70,
        .baseSpeed     = 40,
        .baseSpAttack  = 105,
        .baseSpDefense = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 161 : 175,
        .abilities = { ABILITY_FIRE_VEIL, ABILITY_SOLID_ROCK, ABILITY_ANGER_POINT },
        .cryId = CRY_PORYGON,
        .height = 19,
        .weight = 2200,
        .description = COMPOUND_STRING(
            "A Pokémon that lives in the crater of\n"
            "a volcano. Every 10 years, the volcanoes\n"
            "on its back erupt violently. Research is\n"
            "under way on the cause of eruption."),
        .pokemonScale = 256,
        .pokemonOffset = 7,
        .trainerScale = 345,
        .trainerOffset = 6,
        FRONT_PIC(Camerupt, 64, 56),
        FRONT_PIC_FEMALE(Camerupt, 64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Camerupt,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Camerupt, 64, 40),
        BACK_PIC_FEMALE(Camerupt, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(Camerupt),
        ICON(Camerupt, 0),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_CAMERUPT_MEGA] =
    {
        CAMERUPT_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 120,
        .baseDefense   = 100,
        .baseSpeed     = 20,
        .baseSpAttack  = 145,
        .baseSpDefense = 105,
        .expYield = 196,
        .abilities = { ABILITY_SHEER_FORCE, ABILITY_SHEER_FORCE, ABILITY_SHEER_FORCE },
        .cryId = CRY_PORYGON,
        .height = 25,
        .weight = 3205,
        .description = COMPOUND_STRING(
            "The humps on its back have transformed\n"
            "into one large and very active volcano. It\n"
            "has a deep hatred of water or any moisture\n"
            "and has an explosive personality."),
        .pokemonScale = 256,
        .pokemonOffset = 7,
        .trainerScale = 345,
        .trainerOffset = 6,
        FRONT_PIC(CameruptMega, 64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_CameruptMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(CameruptMega, 64, 64),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(CameruptMega),
        ICON(CameruptMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_NUMEL

#if P_FAMILY_TORKOAL
    [SPECIES_TORKOAL] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 140,
        .baseSpeed     = 20,
        .baseSpAttack  = 85,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 165 : 161,
        .evYield_Defense = 2,
        .itemRare = ITEM_GOTHIC_DRESS,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_MAGIC_BARRIER, ABILITY_DROUGHT, ABILITY_SHELL_ARMOR },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Torkoal"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_TORKOAL,
        .categoryName = _("Coal"),
        .height = 5,
        .weight = 804,
        .description = COMPOUND_STRING(
            "It battles using energy it gets from\n"
            "burning coal. When loosing smoke from its\n"
            "nostrils, it lets off a sound that is\n"
            "similar to a locomotive's horn."),
        .pokemonScale = 390,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Torkoal, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Torkoal,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Torkoal, 64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(Torkoal),
        ICON(Torkoal, 2),
        FOOTPRINT(Torkoal)
        LEARNSETS(Torkoal),
    },
#endif //P_FAMILY_TORKOAL

#if P_FAMILY_SPOINK
    [SPECIES_SPOINK] =
    {
        .baseHP        = 60,
        .baseAttack    = 25,
        .baseDefense   = 35,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_REASON),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 66 : 89,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_WALL_OF_ICE, ABILITY_OWN_TEMPO, ABILITY_GLUTTONY },
        .sourceGame = SOURCE_MS,
        .speciesName = _("Spoink"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SPOINK,
        .categoryName = _("Bounce"),
        .height = 7,
        .weight = 306,
        .description = COMPOUND_STRING(
            "A Pokémon that manipulates psychic power\n"
            "at will. It doesn't stop bouncing even when\n"
            "it is asleep. It loves eating mushrooms\n"
            "that grow underground."),
        .pokemonScale = 423,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Spoink, 32, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Spoink,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH_TWICE,
        BACK_PIC(Spoink, 40, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Spoink),
        ICON(Spoink, 0),
        FOOTPRINT(Spoink)
        LEARNSETS(Spoink),
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_GRUMPIG}),
    },

    [SPECIES_GRUMPIG] =
    {
        .baseHP        = 80,
        .baseAttack    = 45,
        .baseDefense   = 65,
        .baseSpeed     = 80,
        .baseSpAttack  = 90,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_REASON),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 165 : 164,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_WALL_OF_ICE, ABILITY_OWN_TEMPO, ABILITY_GLUTTONY },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Grumpig"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_GRUMPIG,
        .categoryName = _("Manipulate"),
        .height = 9,
        .weight = 715,
        .description = COMPOUND_STRING(
            "It stores power in the black pearls on its\n"
            "forehead. When it uses psychic power, it\n"
            "performs an odd dance step. Its style of\n"
            "dancing became hugely popular overseas."),
        .pokemonScale = 358,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Grumpig, 56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Grumpig,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .frontAnimDelay = 15,
        BACK_PIC(Grumpig, 64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Grumpig),
        ICON(Grumpig, 2),
        FOOTPRINT(Grumpig)
        LEARNSETS(Grumpig),
    },
#endif //P_FAMILY_SPOINK

#if P_FAMILY_SPINDA
    [SPECIES_SPINDA] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 60,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_ILLUSION),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 126 : 85,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_TANGLED_FEET, ABILITY_CONTRARY },
        .sourceGame = SOURCE_EOSD,
        .noFlip = TRUE,
        .speciesName = _("Spinda"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SPINDA,
        .categoryName = _("Spot Panda"),
        .height = 11,
        .weight = 50,
        .description = COMPOUND_STRING(
            "It is distinguished by a pattern of\n"
            "spots that is always different. Its\n"
            "unsteady, tottering walk has the\n"
            "effect of fouling its foe's aim."),
        .pokemonScale = 321,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Spinda, 48, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Spinda,
        .frontAnimId = ANIM_CIRCLE_INTO_BG,
        BACK_PIC(Spinda, 56, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
        PALETTES(Spinda),
        ICON(Spinda, 1),
        FOOTPRINT(Spinda)
        LEARNSETS(Spinda),
    },
#endif //P_FAMILY_SPINDA

#if P_FAMILY_TRAPINCH
    [SPECIES_TRAPINCH] =
    {
        .baseHP        = 45,
        .baseAttack    = 100,
        .baseDefense   = 45,
        .baseSpeed     = 10,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_EARTH),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 58 : 73,
        .evYield_Attack = 1,
        .itemRare = ITEM_GYM_SUIT,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        #if P_UPDATED_EGG_GROUPS >= GEN_8
            .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_DRAGON),
        #else
            .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        #endif
        .abilities = { ABILITY_HIGH_STRENGTH, ABILITY_ARENA_TRAP, ABILITY_SHEER_FORCE },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Trapinch"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_TRAPINCH,
        .categoryName = _("Ant Pit"),
        .height = 7,
        .weight = 150,
        .description = COMPOUND_STRING(
            "Its big jaws crunch through boulders.\n"
            "Because its head is so big, it has a hard\n"
            "time getting back upright if it tips over\n"
            "onto its back."),
        .pokemonScale = 298,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Trapinch, 40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Trapinch,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Trapinch, 48, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Trapinch),
        ICON(Trapinch, 0),
        FOOTPRINT(Trapinch)
        LEARNSETS(Trapinch),
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_VIBRAVA}),
    },

    [SPECIES_VIBRAVA] =
    {
        .baseHP        = 50,
        .baseAttack    = 70,
        .baseDefense   = 50,
        .baseSpeed     = 70,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_EARTH, TYPE_FAITH),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 119 : 126,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        #if P_UPDATED_EGG_GROUPS >= GEN_8
            .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_DRAGON),
        #else
            .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        #endif
        .abilities = { ABILITY_LEVITATE, ABILITY_LEVITATE, ABILITY_LEVITATE },
        .sourceGame = SOURCE_LLS,
        .speciesName = _("Vibrava"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_VIBRAVA,
        .categoryName = _("Vibration"),
        .height = 11,
        .weight = 153,
        .description = COMPOUND_STRING(
            "It looses ultrasonic waves by rubbing its\n"
            "wings together. Since a Vibrava's wings\n"
            "are still in the process of growing, it can\n"
            "only fly short distances."),
        .pokemonScale = 370,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Vibrava, 64, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Vibrava,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Vibrava, 64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(Vibrava),
        ICON(Vibrava, 1),
        FOOTPRINT(Vibrava)
        LEARNSETS(Vibrava),
        .evolutions = EVOLUTION({EVO_LEVEL, 45, SPECIES_FLYGON}),
    },

    [SPECIES_FLYGON] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_EARTH, TYPE_FAITH),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 260,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 234,
    #else
        .expYield = 197,
    #endif
        .evYield_Attack = 1,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        #if P_UPDATED_EGG_GROUPS >= GEN_8
            .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_DRAGON),
        #else
            .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        #endif
        .abilities = { ABILITY_LEVITATE, ABILITY_LEVITATE, ABILITY_LEVITATE },
        .sourceGame = SOURCE_LLS,
        .speciesName = _("Flygon"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_FLYGON,
        .categoryName = _("Mystic"),
        .height = 20,
        .weight = 820,
        .description = COMPOUND_STRING(
            "The flapping of its wings sounds like\n"
            "singing. To prevent detection by enemies,\n"
            "it hides itself by flapping up a cloud of\n"
            "desert sand."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 1,
        FRONT_PIC(Flygon, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Flygon,
        .frontAnimId = ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = 7,
        BACK_PIC(Flygon, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Flygon),
        ICON(Flygon, 1),
        FOOTPRINT(Flygon)
        LEARNSETS(Flygon),
    },
#endif //P_FAMILY_TRAPINCH

#if P_FAMILY_CACNEA
    [SPECIES_CACNEA] =
    {
        .baseHP        = 50,
        .baseAttack    = 85,
        .baseDefense   = 40,
        .baseSpeed     = 35,
        .baseSpAttack  = 85,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_NATURE),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 67 : 97,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_STICKY_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_WATER_ABSORB },
        .sourceGame = SOURCE_LLS,
        .speciesName = _("Cacnea"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CACNEA,
        .categoryName = _("Cactus"),
        .height = 4,
        .weight = 513,
        .description = COMPOUND_STRING(
            "Cacnea live in deserts with virtually no\n"
            "rainfall. It battles by swinging its thick,\n"
            "spiked arms. Once a year, a yellow flower\n"
            "blooms."),
        .pokemonScale = 455,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Cacnea, 56, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Cacnea,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW,
        BACK_PIC(Cacnea, 64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        PALETTES(Cacnea),
        ICON(Cacnea, 1),
        FOOTPRINT(Cacnea)
        LEARNSETS(Cacnea),
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_CACTURNE}),
    },

    [SPECIES_CACTURNE] =
    {
        .baseHP        = 70,
        .baseAttack    = 115,
        .baseDefense   = 60,
        .baseSpeed     = 55,
        .baseSpAttack  = 115,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_NATURE, TYPE_DARK),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 166 : 177,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_STICKY_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_WATER_ABSORB },
        .sourceGame = SOURCE_LLS,
        .speciesName = _("Cacturne"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CACTURNE,
        .categoryName = _("Scarecrow"),
        .height = 13,
        .weight = 774,
        .description = COMPOUND_STRING(
            "After spending thousands of years in\n"
            "harsh deserts, its blood transformed into\n"
            "the same substances as sand. It is\n"
            "nocturnal, so it hunts at night."),
        .pokemonScale = 327,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Cacturne, 64, 64),
        FRONT_PIC_FEMALE(Cacturne, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Cacturne,
        .frontAnimId = ANIM_V_SLIDE,
        BACK_PIC(Cacturne, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_SHAKE,
        PALETTES(Cacturne),
        ICON(Cacturne, 1),
        FOOTPRINT(Cacturne)
        LEARNSETS(Cacturne),
    },
#endif //P_FAMILY_CACNEA

#if P_FAMILY_SWABLU
    [SPECIES_SWABLU] =
    {
        .baseHP        = 45,
        .baseAttack    = 40,
        .baseDefense   = 60,
        .baseSpeed     = 50,
        .baseSpAttack  = 40,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_ILLUSION, TYPE_FLYING),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 62 : 74,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_NONE, ABILITY_CLOUD_NINE },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Swablu"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SWABLU,
        .categoryName = _("Cotton Bird"),
        .height = 4,
        .weight = 12,
        .description = COMPOUND_STRING(
            "A Pokémon that has wings like cottony\n"
            "clouds. After enduring winter, in which\n"
            "little food is available, Swablu flocks\n"
            "move closer to towns in the spring."),
        .pokemonScale = 422,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Swablu, 48, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Swablu,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Swablu, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Swablu),
        ICON(Swablu, 0),
        FOOTPRINT(Swablu)
        LEARNSETS(Swablu),
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_ALTARIA}),
    },

#define ALTARIA_MISC_INFO                                              \
        .catchRate = 45,                                               \
        .evYield_SpDefense = 2,                                        \
        .genderRatio = PERCENT_FEMALE(50),                             \
        .eggCycles = 20,                                               \
        .friendship = STANDARD_FRIENDSHIP,                             \
        .growthRate = GROWTH_ERRATIC,                                  \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_DRAGON),\
        .sourceGame = SOURCE_SOEW,                                  \
        .speciesName = _("Altaria"),                                   \
        .natDexNum = NATIONAL_DEX_ALTARIA,                             \
        .categoryName = _("Humming"),                                  \
        FOOTPRINT(Altaria)                                             \
        LEARNSETS(Altaria),                                            \
        .formSpeciesIdTable = sAltariaFormSpeciesIdTable,              \
        .formChangeTable = sAltariaFormChangeTable

    [SPECIES_ALTARIA] =
    {
        ALTARIA_MISC_INFO,
        .baseHP        = 75,
        .baseAttack    = 70,
        .baseDefense   = 90,
        .baseSpeed     = 80,
        .baseSpAttack  = 70,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_FAITH, TYPE_FLYING),
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 188,
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_NONE, ABILITY_CLOUD_NINE },
        .cryId = CRY_PORYGON,
        .height = 11,
        .weight = 206,
        .description = COMPOUND_STRING(
            "It hums in a beautiful soprano voice.\n"
            "It flies among white clouds in the blue\n"
            "sky. It launches intensely hot fireballs\n"
            "from its mouth."),
        .pokemonScale = 327,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Altaria, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Altaria,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Altaria, 64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Altaria),
        ICON(Altaria, 0),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_ALTARIA_MEGA] =
    {
        ALTARIA_MISC_INFO,
        .baseHP        = 75,
        .baseAttack    = 110,
        .baseDefense   = 110,
        .baseSpeed     = 80,
        .baseSpAttack  = 110,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_FAITH, TYPE_COSMIC),
        .expYield = 207,
        .abilities = { ABILITY_PIXILATE, ABILITY_PIXILATE, ABILITY_PIXILATE },
        .cryId = CRY_PORYGON,
        .height = 15,
        .weight = 206,
        .description = COMPOUND_STRING(
            "It sings with a voice that is even more\n"
            "beautiful than before it Mega Evolved.\n"
            "Its feathers became larger for protection\n"
            "and glimmer with an iridescent sheen."),
        .pokemonScale = 327,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(AltariaMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_AltariaMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        BACK_PIC(AltariaMega, 64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(AltariaMega),
        ICON(AltariaMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SWABLU

#if P_FAMILY_ZANGOOSE
    [SPECIES_ZANGOOSE] =
    {
        .baseHP        = 73,
        .baseAttack    = 115,
        .baseDefense   = 60,
        .baseSpeed     = 90,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_ILLUSION),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 160 : 165,
        .evYield_Attack = 2,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_IMMUNITY, ABILITY_NONE, ABILITY_TOXIC_BOOST },
        .sourceGame = SOURCE_POFV,
        .noFlip = TRUE,
        .speciesName = _("Zangoose"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_ZANGOOSE,
        .categoryName = _("Cat Ferret"),
        .height = 13,
        .weight = 403,
        .description = COMPOUND_STRING(
            "When it battles, it stands on its hind legs\n"
            "and attacks with its sharply clawed\n"
            "forelegs. Its fur bristles if it encounters\n"
            "any Seviper."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Zangoose, 56, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Zangoose,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Zangoose, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Zangoose),
        ICON(Zangoose, 0),
        FOOTPRINT(Zangoose)
        LEARNSETS(Zangoose),
    },
#endif //P_FAMILY_ZANGOOSE

#if P_FAMILY_SEVIPER
    [SPECIES_SEVIPER] =
    {
        .baseHP        = 73,
        .baseAttack    = 100,
        .baseDefense   = 60,
        .baseSpeed     = 65,
        .baseSpAttack  = 100,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_MIASMA),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 160 : 165,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_MAINTENANCE, ABILITY_NONE, ABILITY_INFILTRATOR },
        .sourceGame = SOURCE_MS,
        .noFlip = TRUE,
        .speciesName = _("Seviper"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SEVIPER,
        .categoryName = _("Fang Snake"),
        .height = 27,
        .weight = 525,
        .description = COMPOUND_STRING(
            "Seviper and Zangoose are eternal rivals.\n"
            "It counters a Zangoose's dazzling agility\n"
            "with its swordlike tail, which also oozes\n"
            "a horrible poison."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Seviper, 64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Seviper,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Seviper, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_V_STRETCH,
        PALETTES(Seviper),
        ICON(Seviper, 2),
        FOOTPRINT(Seviper)
        LEARNSETS(Seviper),
    },
#endif //P_FAMILY_SEVIPER

#if P_FAMILY_LUNATONE
    [SPECIES_LUNATONE] =
    {
        .baseHP        = P_UPDATED_STATS >= GEN_7 ? 90 : 70,
        .baseAttack    = 55,
        .baseDefense   = 65,
        .baseSpeed     = 70,
        .baseSpAttack  = 95,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_BEAST, TYPE_REASON),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 161,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 154,
    #else
        .expYield = 150,
    #endif
        .evYield_SpAttack = 2,
        .itemCommon = ITEM_STARDUST,
        .itemRare = ITEM_CHROME_HEART,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE },
        .sourceGame = SOURCE_PODD,
        .speciesName = _("Lunatone"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_LUNATONE,
        .categoryName = _("Meteorite"),
        .height = 10,
        .weight = 1680,
        .description = COMPOUND_STRING(
            "It becomes very active on the night of\n"
            "a full moon. This Pokémon was first\n"
            "discovered 40 years ago at the site of\n"
            "a meteor strike."),
        .pokemonScale = 300,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Lunatone, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Lunatone,
        .frontAnimId = ANIM_SWING_CONVEX_FAST,
        .enemyMonElevation = 13,
        BACK_PIC(Lunatone, 48, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Lunatone),
        ICON(Lunatone, 1),
        FOOTPRINT(Lunatone)
        LEARNSETS(Lunatone),
    },
#endif //P_FAMILY_LUNATONE

#if P_FAMILY_SOLROCK
    [SPECIES_SOLROCK] =
    {
        .baseHP        = P_UPDATED_STATS >= GEN_7 ? 90 : 70,
        .baseAttack    = 95,
        .baseDefense   = 85,
        .baseSpeed     = 70,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_BEAST, TYPE_REASON),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 161,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 154,
    #else
        .expYield = 150,
    #endif
        .evYield_Attack = 2,
        .itemCommon = ITEM_STARDUST,
        .itemRare = ITEM_JUST_HEART,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Solrock"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SOLROCK,
        .categoryName = _("Meteorite"),
        .height = 12,
        .weight = 1540,
        .description = COMPOUND_STRING(
            "Solar energy is the source of this \n"
            "Pokémon's power. On sunny days, groups of\n"
            "Solrock line up facing the sun and absorb\n"
            "its light."),
        .pokemonScale = 328,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Solrock, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Solrock,
        .frontAnimId = ANIM_ROTATE_TO_SIDES_TWICE,
        .enemyMonElevation = 4,
        BACK_PIC(Solrock, 64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Solrock),
        ICON(Solrock, 0),
        FOOTPRINT(Solrock)
        LEARNSETS(Solrock),
    },
#endif //P_FAMILY_SOLROCK

#if P_FAMILY_BARBOACH
    [SPECIES_BARBOACH] =
    {
        .baseHP        = 50,
        .baseAttack    = 48,
        .baseDefense   = 43,
        .baseSpeed     = 60,
        .baseSpAttack  = 46,
        .baseSpDefense = 41,
        .types = MON_TYPES(TYPE_WATER, TYPE_EARTH),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 58 : 92,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_ANTICIPATION, ABILITY_HYDRATION },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Barboach"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_BARBOACH,
        .categoryName = _("Whiskers"),
        .height = 4,
        .weight = 19,
        .description = COMPOUND_STRING(
            "Its body is covered with a slimy film.\n"
            "The film acts as a barrier to prevent germs\n"
            "in muddy water from entering the\n"
            "Barboach's body."),
        .pokemonScale = 581,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Barboach, 48, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Barboach,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW,
        .enemyMonElevation = 7,
        BACK_PIC(Barboach, 56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_STRETCH,
        PALETTES(Barboach),
        ICON(Barboach, 0),
        FOOTPRINT(Barboach)
        LEARNSETS(Barboach),
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_WHISCASH}),
    },

    [SPECIES_WHISCASH] =
    {
        .baseHP        = 110,
        .baseAttack    = 78,
        .baseDefense   = 73,
        .baseSpeed     = 60,
        .baseSpAttack  = 76,
        .baseSpDefense = 71,
        .types = MON_TYPES(TYPE_WATER, TYPE_EARTH),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 164 : 158,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_ANTICIPATION, ABILITY_HYDRATION },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Whiscash"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_WHISCASH,
        .categoryName = _("Whiskers"),
        .height = 9,
        .weight = 236,
        .description = COMPOUND_STRING(
            "Mysteriously, it can foretell earthquakes.\n"
            "In the daytime, it sleeps in mud at the\n"
            "bottom of a pond. When it awakens, it\n"
            "continually feeds throughout the night."),
        .pokemonScale = 317,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Whiscash, 64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Whiscash,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW,
        BACK_PIC(Whiscash, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Whiscash),
        ICON(Whiscash, 0),
        FOOTPRINT(Whiscash)
        LEARNSETS(Whiscash),
    },
#endif //P_FAMILY_BARBOACH

#if P_FAMILY_CORPHISH
    [SPECIES_CORPHISH] =
    {
        .baseHP        = 43,
        .baseAttack    = 80,
        .baseDefense   = 65,
        .baseSpeed     = 35,
        .baseSpAttack  = 50,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 205,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 62 : 111,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_HIGH_STRENGTH, ABILITY_SHELL_ARMOR, ABILITY_ADAPTABILITY },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Corphish"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CORPHISH,
        .categoryName = _("Ruffian"),
        .height = 6,
        .weight = 115,
        .description = COMPOUND_STRING(
            "Once it grips prey with its large pincers,\n"
            "it will never let go, no matter what.\n"
            "It is a hardy Pokémon that can thrive\n"
            "in any environment."),
        .pokemonScale = 484,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Corphish, 56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Corphish,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Corphish, 64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Corphish),
        ICON(Corphish, 0),
        FOOTPRINT(Corphish)
        LEARNSETS(Corphish),
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_CRAWDAUNT}),
    },

    [SPECIES_CRAWDAUNT] =
    {
        .baseHP        = 63,
        .baseAttack    = 120,
        .baseDefense   = 85,
        .baseSpeed     = 55,
        .baseSpAttack  = 90,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_WATER, TYPE_DARK),
        .catchRate = 155,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 164 : 161,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_HIGH_STRENGTH, ABILITY_SHELL_ARMOR, ABILITY_ADAPTABILITY },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Crawdaunt"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CRAWDAUNT,
        .categoryName = _("Rogue"),
        .height = 11,
        .weight = 328,
        .description = COMPOUND_STRING(
            "A brutish Pokémon that loves to battle.\n"
            "A veteran Crawdaunt that has prevailed in\n"
            "hundreds of battles has giant pincers\n"
            "marked with countless scars."),
        .pokemonScale = 365,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Crawdaunt, 64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Crawdaunt,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Crawdaunt, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Crawdaunt),
        ICON(Crawdaunt, 0),
        FOOTPRINT(Crawdaunt)
        LEARNSETS(Crawdaunt),
    },
#endif //P_FAMILY_CORPHISH

#if P_FAMILY_BALTOY
    [SPECIES_BALTOY] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 55,
        .baseSpeed     = 55,
        .baseSpAttack  = 40,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_EARTH, TYPE_REASON),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 58,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_LIGHT_CLAY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Baltoy"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_BALTOY,
        .categoryName = _("Clay Doll"),
        .height = 5,
        .weight = 215,
        .description = COMPOUND_STRING(
            "A Baltoy moves by spinning on its single\n"
            "foot. It has been depicted in murals \n"
            "adorning the walls of a once-bustling city\n"
            "in an ancient age."),
        .pokemonScale = 457,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Baltoy, 40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Baltoy,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 8,
        BACK_PIC(Baltoy, 64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Baltoy),
        ICON(Baltoy, 2),
        FOOTPRINT(Baltoy)
        LEARNSETS(Baltoy),
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_CLAYDOL}),
    },

    [SPECIES_CLAYDOL] =
    {
        .baseHP        = 60,
        .baseAttack    = 70,
        .baseDefense   = 105,
        .baseSpeed     = 75,
        .baseSpAttack  = 70,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_EARTH, TYPE_REASON),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 175 : 189,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_LIGHT_CLAY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE },
        .sourceGame = SOURCE_MS,
        .speciesName = _("Claydol"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CLAYDOL,
        .categoryName = _("Clay Doll"),
        .height = 15,
        .weight = 1080,
        .description = COMPOUND_STRING(
            "A Claydol sleeps while hovering in midair.\n"
            "Its arms are separate from its body.\n"
            "They are kept floating by the Pokémon's\n"
            "manipulation of psychic power."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 280,
        .trainerOffset = 1,
        FRONT_PIC(Claydol, 56, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Claydol,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .enemyMonElevation = 10,
        BACK_PIC(Claydol, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Claydol),
        ICON(Claydol, 0),
        FOOTPRINT(Claydol)
        LEARNSETS(Claydol),
    },
#endif //P_FAMILY_BALTOY

#if P_FAMILY_LILEEP
    [SPECIES_LILEEP] =
    {
        .baseHP        = 66,
        .baseAttack    = 41,
        .baseDefense   = 77,
        .baseSpeed     = 23,
        .baseSpAttack  = 61,
        .baseSpDefense = 87,
        .types = MON_TYPES(TYPE_BEAST, TYPE_NATURE),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 71,
    #elif P_UPDATED_EXP_YIELDS >= GEN_4
        .expYield = 99,
    #else
        .expYield = 121,
    #endif
        .evYield_SpDefense = 1,
        .itemRare = ITEM_BIG_ROOT,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_GATE_KEEPER, ABILITY_NONE, ABILITY_STORM_DRAIN },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Lileep"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_LILEEP,
        .categoryName = _("Sea Lily"),
        .height = 10,
        .weight = 238,
        .description = COMPOUND_STRING(
            "It disguises itself as seaweed by making\n"
            "its tentacles sway. Unsuspecting prey\n"
            "that come too close are swallowed whole.\n"
            "It became extinct 100 million years ago."),
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Lileep, 48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Lileep,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Lileep, 48, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_STRETCH,
        PALETTES(Lileep),
        ICON(Lileep, 2),
        FOOTPRINT(Lileep)
        LEARNSETS(Lileep),
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_CRADILY}),
    },

    [SPECIES_CRADILY] =
    {
        .baseHP        = 86,
        .baseAttack    = 81,
        .baseDefense   = 97,
        .baseSpeed     = 43,
        .baseSpAttack  = 81,
        .baseSpDefense = 107,
        .types = MON_TYPES(TYPE_BEAST, TYPE_NATURE),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 173,
    #elif P_UPDATED_EXP_YIELDS >= GEN_4
        .expYield = 199,
    #else
        .expYield = 201,
    #endif
        .evYield_SpDefense = 2,
        .itemRare = ITEM_BIG_ROOT,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_GATE_KEEPER, ABILITY_NONE, ABILITY_STORM_DRAIN },
        .sourceGame = SOURCE_LLS,
        .speciesName = _("Cradily"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CRADILY,
        .categoryName = _("Barnacle"),
        .height = 15,
        .weight = 604,
        .description = COMPOUND_STRING(
            "It drags its heavy body along the\n"
            "seafloor. It makes its nest in the shallows\n"
            "of warm seas. Cradily can be seen on\n"
            "beaches when the tide goes out."),
        .pokemonScale = 267,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Cradily, 56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Cradily,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        BACK_PIC(Cradily, 56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_STRETCH,
        PALETTES(Cradily),
        ICON(Cradily, 1),
        FOOTPRINT(Cradily)
        LEARNSETS(Cradily),
    },
#endif //P_FAMILY_LILEEP

#if P_FAMILY_ANORITH
    [SPECIES_ANORITH] =
    {
        .baseHP        = 45,
        .baseAttack    = 95,
        .baseDefense   = 50,
        .baseSpeed     = 75,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_BEAST, TYPE_HEART),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 71,
    #elif P_UPDATED_EXP_YIELDS >= GEN_4
        .expYield = 99,
    #else
        .expYield = 119,
    #endif
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_GUARD_ARMOR, ABILITY_NONE, ABILITY_SWIFT_SWIM },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Anorith"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_ANORITH,
        .categoryName = _("Old Shrimp"),
        .height = 7,
        .weight = 125,
        .description = COMPOUND_STRING(
            "It was resurrected from a fossil using the\n"
            "power of science. It swims by undulating\n"
            "the eight wings at its sides. They were\n"
            "feet that adapted to life in the sea."),
        .pokemonScale = 296,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Anorith, 48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Anorith,
        .frontAnimId = ANIM_TWIST,
        BACK_PIC(Anorith, 56, 32),
        .backPicYOffset = 19,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Anorith),
        ICON(Anorith, 0),
        FOOTPRINT(Anorith)
        LEARNSETS(Anorith),
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_ARMALDO}),
    },

    [SPECIES_ARMALDO] =
    {
        .baseHP        = 75,
        .baseAttack    = 125,
        .baseDefense   = 100,
        .baseSpeed     = 45,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_BEAST, TYPE_HEART),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 173,
    #elif P_UPDATED_EXP_YIELDS >= GEN_4
        .expYield = 199,
    #else
        .expYield = 200,
    #endif
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_GUARD_ARMOR, ABILITY_NONE, ABILITY_SWIFT_SWIM },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Armaldo"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_ARMALDO,
        .categoryName = _("Plate"),
        .height = 15,
        .weight = 682,
        .description = COMPOUND_STRING(
            "Armaldo usually lives on land. However,\n"
            "when it hunts for prey, it dives beneath\n"
            "the ocean. It swims around using its two\n"
            "large wings."),
        .pokemonScale = 312,
        .pokemonOffset = 3,
        .trainerScale = 271,
        .trainerOffset = 0,
        FRONT_PIC(Armaldo, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Armaldo,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Armaldo, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Armaldo),
        ICON(Armaldo, 2),
        FOOTPRINT(Armaldo)
        LEARNSETS(Armaldo),
    },
#endif //P_FAMILY_ANORITH

#if P_FAMILY_FEEBAS
    [SPECIES_FEEBAS] =
    {
        .baseHP        = 20,
        .baseAttack    = 15,
        .baseDefense   = 20,
        .baseSpeed     = 80,
        .baseSpAttack  = 10,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 40 : 61,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_OBLIVIOUS, ABILITY_ADAPTABILITY },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Feebas"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_FEEBAS,
        .categoryName = _("Fish"),
        .height = 6,
        .weight = 74,
        .description = COMPOUND_STRING(
            "Feebas live in ponds that are heavily\n"
            "infested with weeds. Because of its\n"
            "hopelessly shabby appearance, it\n"
            "seems as if few Trainers raise it."),
        .pokemonScale = 423,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Feebas, 40, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Feebas,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW,
        BACK_PIC(Feebas, 48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SPRING,
        PALETTES(Feebas),
        ICON(Feebas, 2),
        FOOTPRINT(Feebas)
        LEARNSETS(Feebas),
        .evolutions = EVOLUTION({EVO_BEAUTY, 170, SPECIES_MILOTIC},
                                {EVO_TRADE_ITEM, ITEM_PRISM_SCALE, SPECIES_MILOTIC},
                                {EVO_ITEM, ITEM_PRISM_SCALE, SPECIES_MILOTIC}),
    },

    [SPECIES_MILOTIC] =
    {
        .baseHP        = 95,
        .baseAttack    = 60,
        .baseDefense   = 79,
        .baseSpeed     = 81,
        .baseSpAttack  = 100,
        .baseSpDefense = 125,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 189 : 213,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SPRING_CHARM, ABILITY_COMPETITIVE, ABILITY_CUTE_CHARM },
        .sourceGame = SOURCE_MOF,
        .speciesName = _("Milotic"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_MILOTIC,
        .categoryName = _("Tender"),
        .height = 62,
        .weight = 1620,
        .description = COMPOUND_STRING(
            "It is said to live at the bottom of\n"
            "large lakes. Considered to be the most\n"
            "beautiful of all Pokémon, it has been\n"
            "depicted in paintings and statues."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 360,
        .trainerOffset = 7,
        FRONT_PIC(Milotic, 64, 64),
        FRONT_PIC_FEMALE(Milotic, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Milotic,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .frontAnimDelay = 45,
        BACK_PIC(Milotic, 64, 64),
        BACK_PIC_FEMALE(Milotic, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(Milotic),
        ICON(Milotic, 2),
        FOOTPRINT(Milotic)
        LEARNSETS(Milotic),
    },
#endif //P_FAMILY_FEEBAS

#if P_FAMILY_CASTFORM
#define CASTFORM_MISC_INFO                                               \
        .baseHP        = 70,                                             \
        .baseAttack    = 70,                                             \
        .baseDefense   = 70,                                             \
        .baseSpeed     = 70,                                             \
        .baseSpAttack  = 70,                                             \
        .baseSpDefense = 70,                                             \
        .catchRate = 45,                                                 \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 147 : 145,         \
        .evYield_HP = 1,                                                 \
        .itemCommon = ITEM_SWIMSUIT,                                 \
        .itemRare = ITEM_SWIMSUIT,                                   \
        .genderRatio = PERCENT_FEMALE(50),                               \
        .eggCycles = 25,                                                 \
        .friendship = STANDARD_FRIENDSHIP,                               \
        .growthRate = GROWTH_MEDIUM_FAST,                                \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_AMORPHOUS),\
        .abilities = { ABILITY_FORECAST, ABILITY_NONE },                 \
        .speciesName = _("Castform"),                                    \
        .cryId = CRY_PORYGON,                                           \
        .natDexNum = NATIONAL_DEX_CASTFORM,                              \
        .categoryName = _("Weather"),                                    \
        .height = 3,                                                     \
        .weight = 8,                                                     \
        .pokemonScale = 435,                                             \
        .pokemonOffset = -5,                                             \
        .trainerScale = 256,                                             \
        .trainerOffset = 0,                                              \
        FOOTPRINT(Castform)                                              \
        LEARNSETS(Castform),                                             \
        .formSpeciesIdTable = sCastformFormSpeciesIdTable,               \
        .formChangeTable = sCastformFormChangeTable

    [SPECIES_CASTFORM_NORMAL] =
    {
        CASTFORM_MISC_INFO,
        .types = MON_TYPES(TYPE_ILLUSION),
        .sourceGame = SOURCE_IN,
        .description = COMPOUND_STRING(
            "It alters its form depending on the\n"
            "weather. Changes in the climate such as\n"
            "the temperature and humidity appear to\n"
            "affect its cellular structure."),
        FRONT_PIC(CastformNormal, 24, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_CastformNormal,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 16,
        BACK_PIC(CastformNormal, 32, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(CastformNormal),
        ICON(CastformNormal, 0),
    },

    [SPECIES_CASTFORM_SUNNY] =
    {
        CASTFORM_MISC_INFO,
        .types = MON_TYPES(TYPE_FIRE),
        .sourceGame = SOURCE_HRTP,
        .description = COMPOUND_STRING(
            "Castform takes this form on bright days.\n"
            "In an experiment where is was placed in\n"
            "front of a heater, it didn't change to this\n"
            "form. Its body is warm and toasty."),
        FRONT_PIC(CastformSunny, 40, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_CastformSunny,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .enemyMonElevation = 5,
        BACK_PIC(CastformSunny, 56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(CastformSunny),
        ICON(CastformSunny, 0),
    },

    [SPECIES_CASTFORM_RAINY] =
    {
        CASTFORM_MISC_INFO,
        .types = MON_TYPES(TYPE_WATER),
        .sourceGame = SOURCE_SOEW,
        .description = COMPOUND_STRING(
            "This is Castform's form while it's raining.\n"
            "In an experiment where it was placed in a\n"
            "shower, it didn't change to this form. Its\n"
            "body is soft, slightly swollen with water."),
        FRONT_PIC(CastformRainy, 32, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_CastformRainy,
        .frontAnimId = ANIM_SWING_CONVEX_FAST,
        .enemyMonElevation = 5,
        BACK_PIC(CastformRainy, 40, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(CastformRainy),
        ICON(CastformRainy, 0),
    },

    [SPECIES_CASTFORM_SNOWY] =
    {
        CASTFORM_MISC_INFO,
        .types = MON_TYPES(TYPE_ICE),
        .sourceGame = SOURCE_POFV,
        .description = COMPOUND_STRING(
            "This is Castform's form in a hailstorm.\n"
            "In an experiment where it was placed\n"
            "in a freezer, it didn't change to this form.\n"
            "Its cold skin is as smooth as ice."),
        FRONT_PIC(CastformSnowy, 40, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_CastformSnowy,
        .frontAnimId = ANIM_V_STRETCH,
        .enemyMonElevation = 5,
        BACK_PIC(CastformSnowy, 56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(CastformSnowy),
        ICON(CastformSnowy, 0),
    },
#endif //P_FAMILY_CASTFORM

#if P_FAMILY_KECLEON
    [SPECIES_KECLEON] =
    {
        .baseHP        = 60,
        .baseAttack    = 90,
        .baseDefense   = 70,
        .baseSpeed     = 40,
        .baseSpAttack  = 60,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_ILLUSION),
        .catchRate = 200,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 154 : 132,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_MYSTERIOUS, ABILITY_NONE, ABILITY_PROTEAN },
        .sourceGame = SOURCE_LLS,
        .speciesName = _("Kecleon"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_KECLEON,
        .categoryName = _("Color Swap"),
        .height = 10,
        .weight = 220,
        .description = COMPOUND_STRING(
            "A Pokémon that has the ability to alter its\n"
            "body colors to match its surroundings.\n"
            "A Kecleon reverts to its original colors if\n"
            "it is startled."),
        .pokemonScale = 316,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Kecleon, 48, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Kecleon,
        .frontAnimId = ANIM_FLICKER_INCREASING,
        .frontAnimDelay = 30,
        BACK_PIC(Kecleon, 56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(Kecleon),
        ICON(Kecleon, 1),
        FOOTPRINT(Kecleon)
        LEARNSETS(Kecleon),
    },
#endif //P_FAMILY_KECLEON

#if P_FAMILY_SHUPPET
    [SPECIES_SHUPPET] =
    {
        .baseHP        = 44,
        .baseAttack    = 75,
        .baseDefense   = 35,
        .baseSpeed     = 45,
        .baseSpAttack  = 63,
        .baseSpDefense = 33,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 225,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 59 : 97,
        .evYield_Attack = 1,
        .itemRare = ITEM_BURIAL_DRESS,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_INSOMNIA, ABILITY_FRISK, ABILITY_CURSED_BODY },
        .sourceGame = SOURCE_MS,
        .speciesName = _("Shuppet"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SHUPPET,
        .categoryName = _("Puppet"),
        .height = 6,
        .weight = 23,
        .description = COMPOUND_STRING(
            "This Pokémon roams about deep in the\n"
            "night seeking such negative emotions as\n"
            "grudges and envy. It retreats to its nest\n"
            "when the sun begins to rise."),
        .pokemonScale = 440,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Shuppet, 40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Shuppet,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 14,
        BACK_PIC(Shuppet, 56, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(Shuppet),
        ICON(Shuppet, 0),
        FOOTPRINT(Shuppet)
        LEARNSETS(Shuppet),
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_BANETTE}),
    },

#define BANETTE_MISC_INFO                                           \
        .types = MON_TYPES(TYPE_GHOST),                             \
        .catchRate = 45,                                            \
        .evYield_Attack = 2,                                        \
        .itemRare = ITEM_BURIAL_DRESS,                                 \
        .genderRatio = PERCENT_FEMALE(50),                          \
        .eggCycles = 25,                                            \
        .friendship = 35,                                           \
        .growthRate = GROWTH_FAST,                                  \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),           \
        .sourceGame = SOURCE_MS,                              \
        .speciesName = _("Banette"),                                \
        .natDexNum = NATIONAL_DEX_BANETTE,                          \
        .categoryName = _("Marionette"),                            \
        FOOTPRINT(Banette)                                          \
        LEARNSETS(Banette),                                         \
        .formSpeciesIdTable = sBanetteFormSpeciesIdTable,           \
        .formChangeTable = sBanetteFormChangeTable

    [SPECIES_BANETTE] =
    {
        BANETTE_MISC_INFO,
        .baseHP        = 64,
        .baseAttack    = 115,
        .baseDefense   = 65,
        .baseSpeed     = 65,
        .baseSpAttack  = 83,
        .baseSpDefense = 63,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 159 : 179,
        .abilities = { ABILITY_INSOMNIA, ABILITY_FRISK, ABILITY_CURSED_BODY },
        .cryId = CRY_PORYGON,
        .height = 11,
        .weight = 125,
        .description = COMPOUND_STRING(
            "An abandoned plush doll became this\n"
            "Pokémon. They are said to live in garbage\n"
            "dumps and wander about in search of the\n"
            "children that threw them away."),
        .pokemonScale = 262,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Banette, 56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Banette,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        BACK_PIC(Banette, 64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(Banette),
        ICON(Banette, 0),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_BANETTE_MEGA] =
    {
        BANETTE_MISC_INFO,
        .baseHP        = 64,
        .baseAttack    = 165,
        .baseDefense   = 75,
        .baseSpeed     = 75,
        .baseSpAttack  = 93,
        .baseSpDefense = 83,
        .expYield = 194,
        .abilities = { ABILITY_PRANKSTER, ABILITY_PRANKSTER, ABILITY_PRANKSTER },
        .cryId = CRY_PORYGON,
        .height = 12,
        .weight = 130,
        .description = COMPOUND_STRING(
            "Extraordinary energy amplifies its\n"
            "cursing power to such an extent that it\n"
            "can't help but curse its own Trainer."),
        .pokemonScale = 262,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(BanetteMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_BanetteMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        BACK_PIC(BanetteMega, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(BanetteMega),
        ICON(BanetteMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SHUPPET

#if P_FAMILY_DUSKULL
    [SPECIES_DUSKULL] =
    {
        .baseHP        = 20,
        .baseAttack    = 40,
        .baseDefense   = 90,
        .baseSpeed     = 25,
        .baseSpAttack  = 30,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 59 : 97,
        .evYield_Defense = (P_UPDATED_EVS >= GEN_4) ? 0 : 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_BURIAL_DRESS,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_FRISK },
        .sourceGame = SOURCE_MS,
        .speciesName = _("Duskull"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_DUSKULL,
        .categoryName = _("Requiem"),
        .height = 8,
        .weight = 150,
        .description = COMPOUND_STRING(
            "A glare from its single scarlet eye makes\n"
            "even burly grown-ups freeze in utter fear.\n"
            "It is a nocturnal Pokémon that roams\n"
            "about under the cloak of darkness."),
        .pokemonScale = 406,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Duskull, 40, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Duskull,
        .frontAnimId = ANIM_ZIGZAG_FAST,
        .enemyMonElevation = 13,
        BACK_PIC(Duskull, 56, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(Duskull),
        ICON(Duskull, 0),
        FOOTPRINT(Duskull)
        LEARNSETS(Duskull),
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_DUSCLOPS}),
    },

    [SPECIES_DUSCLOPS] =
    {
        .baseHP        = 40,
        .baseAttack    = 70,
        .baseDefense   = 130,
        .baseSpeed     = 25,
        .baseSpAttack  = 60,
        .baseSpDefense = 130,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 159 : 179,
        .evYield_Defense = 1,
        .evYield_SpDefense = (P_UPDATED_EVS >= GEN_4) ? 1 : 2,
        .itemRare = ITEM_BURIAL_DRESS,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_FRISK },
        .sourceGame = SOURCE_MS,
        .speciesName = _("Dusclops"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_DUSCLOPS,
        .categoryName = _("Beckon"),
        .height = 16,
        .weight = 306,
        .description = COMPOUND_STRING(
            "It is thought that its body is hollow with\n"
            "only a spectral ball of fire burning inside.\n"
            "However, no one has been able to\n"
            "confirm this theory as fact."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 299,
        .trainerOffset = 1,
        FRONT_PIC(Dusclops, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Dusclops,
        .frontAnimId = ANIM_H_VIBRATE,
        .frontAnimDelay = 30,
        BACK_PIC(Dusclops, 64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(Dusclops),
        ICON(Dusclops, 0),
        FOOTPRINT(Dusclops)
        LEARNSETS(Dusclops),
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_REAPER_CLOTH, SPECIES_DUSKNOIR},
                                {EVO_ITEM, ITEM_REAPER_CLOTH, SPECIES_DUSKNOIR}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_DUSKNOIR] =
    {
        .baseHP        = 45,
        .baseAttack    = 100,
        .baseDefense   = 135,
        .baseSpeed     = 45,
        .baseSpAttack  = 65,
        .baseSpDefense = 135,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 263,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 236,
    #else
        .expYield = 210,
    #endif
        .evYield_Defense = 1,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_BURIAL_DRESS,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_FRISK },
        .sourceGame = SOURCE_MS,
        .speciesName = _("Dusknoir"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_DUSKNOIR,
        .categoryName = _("Gripper"),
        .height = 22,
        .weight = 1066,
        .description = COMPOUND_STRING(
            "This feared Pokémon is said to travel to\n"
            "worlds unknown. Some even believe that\n"
            "it takes lost spirits into its pliant body\n"
            "and guides them home."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
        FRONT_PIC(Dusknoir, 64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Dusknoir,
        .frontAnimId = ANIM_H_SLIDE,
        .enemyMonElevation = 6,
        BACK_PIC(Dusknoir, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Dusknoir),
        ICON(Dusknoir, 2),
        FOOTPRINT(Dusknoir)
        LEARNSETS(Dusknoir),
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_DUSKULL

#if P_FAMILY_TROPIUS
    [SPECIES_TROPIUS] =
    {
        .baseHP        = 99,
        .baseAttack    = 68,
        .baseDefense   = 83,
        .baseSpeed     = 51,
        .baseSpAttack  = 72,
        .baseSpDefense = 87,
        .types = MON_TYPES(TYPE_NATURE, TYPE_FLYING),
        .catchRate = 200,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 161 : 169,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_SOLAR_POWER, ABILITY_HARVEST },
        .sourceGame = SOURCE_LLS,
        .speciesName = _("Tropius"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_TROPIUS,
        .categoryName = _("Fruit"),
        .height = 20,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "It flies by flapping its broad leaves.\n"
            "The bunch of fruit that grows around its\n"
            "neck is deliciously sweet. In the spring,\n"
            "it scatters pollen from its neck."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 344,
        .trainerOffset = 7,
        FRONT_PIC(Tropius, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Tropius,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Tropius, 56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(Tropius),
        ICON(Tropius, 1),
        FOOTPRINT(Tropius)
        LEARNSETS(Tropius),
    },
#endif //P_FAMILY_TROPIUS

#if P_FAMILY_CHIMECHO
#if P_GEN_4_CROSS_EVOS
    [SPECIES_CHINGLING] =
    {
        .baseHP        = 45,
        .baseAttack    = 30,
        .baseDefense   = 50,
        .baseSpeed     = 45,
        .baseSpAttack  = 65,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_REASON),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 57 : 74,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_CLEANSE_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE },
        .sourceGame = SOURCE_PODD,
        .speciesName = _("Chingling"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CHINGLING,
        .categoryName = _("Bell"),
        .height = 2,
        .weight = 6,
        .description = COMPOUND_STRING(
            "There is an orb inside its mouth.\n"
            "When it hops, the orb bounces all\n"
            "over and makes a ringing sound.\n"
            "It can cry for an awfully long time."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Chingling, 40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Chingling,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        BACK_PIC(Chingling, 48, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Chingling),
        ICON(Chingling, 1),
        FOOTPRINT(Chingling)
        LEARNSETS(Chingling),
        .evolutions = EVOLUTION({EVO_FRIENDSHIP_NIGHT, 0, SPECIES_CHIMECHO}),
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_CHIMECHO] =
    {
        .baseAttack    = 50,
        .baseSpeed     = 65,
        .baseSpAttack  = 95,
        #if P_UPDATED_STATS >= GEN_7
            .baseHP        = 75,
            .baseDefense   = 80,
            .baseSpDefense = 90,
        #else
            .baseHP        = 65,
            .baseDefense   = 70,
            .baseSpDefense = 80,
        #endif
        .types = MON_TYPES(TYPE_REASON),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 159,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 149,
    #else
        .expYield = 147,
    #endif
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_CLEANSE_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Chimecho"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CHIMECHO,
        .categoryName = _("Wind Chime"),
        .height = 6,
        .weight = 10,
        .description = COMPOUND_STRING(
            "They fly about very actively when the hot\n"
            "season arrives. They communicate among\n"
            "themselves using seven different and\n"
            "distinguishing cries."),
        .pokemonScale = 505,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Chimecho, 48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Chimecho,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 16,
        BACK_PIC(Chimecho, 64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Chimecho),
        ICON(Chimecho, 0),
        FOOTPRINT(Chimecho)
        LEARNSETS(Chimecho),
    },
#endif //P_FAMILY_CHIMECHO

#if P_FAMILY_ABSOL
#define ABSOL_MISC_INFO                                     \
        .types = MON_TYPES(TYPE_DARK),                      \
        .catchRate = 30,                                    \
        .evYield_Attack = 2,                                \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 25,                                    \
        .friendship = 35,                                   \
        .growthRate = GROWTH_MEDIUM_SLOW,                   \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),       \
        .sourceGame = SOURCE_POFV,                      \
        .noFlip = TRUE,                                     \
        .speciesName = _("Absol"),                          \
        .natDexNum = NATIONAL_DEX_ABSOL,                    \
        .categoryName = _("Disaster"),                      \
        .height = 12,                                       \
        .pokemonScale = 301,                                \
        .pokemonOffset = 3,                                 \
        .trainerScale = 256,                                \
        .trainerOffset = 0,                                 \
        FOOTPRINT(Absol)                                    \
        LEARNSETS(Absol),                                   \
        .formSpeciesIdTable = sAbsolFormSpeciesIdTable,     \
        .formChangeTable = sAbsolFormChangeTable

    [SPECIES_ABSOL] =
    {
        ABSOL_MISC_INFO,
        .baseHP        = 65,
        .baseAttack    = 130,
        .baseDefense   = 60,
        .baseSpeed     = 75,
        .baseSpAttack  = 75,
        .baseSpDefense = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 163 : 174,
        .abilities = { ABILITY_PRESSURE, ABILITY_SUPER_LUCK, ABILITY_JUSTIFIED },
        .cryId = CRY_PORYGON,
        .weight = 470,
        .description = COMPOUND_STRING(
            "It sharply senses even subtle changes in\n"
            "the sky and the land to predict natural\n"
            "disasters. It is a long-lived Pokémon that\n"
            "has a life-span of 100 years."),
        FRONT_PIC(Absol, 56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Absol,
        .frontAnimId = ANIM_CIRCULAR_VIBRATE,
        .frontAnimDelay = 45,
        BACK_PIC(Absol, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Absol),
        ICON(Absol, 0),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_ABSOL_MEGA] =
    {
        ABSOL_MISC_INFO,
        .baseHP        = 65,
        .baseAttack    = 150,
        .baseDefense   = 60,
        .baseSpeed     = 115,
        .baseSpAttack  = 115,
        .baseSpDefense = 60,
        .expYield = 198,
        .abilities = { ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE },
        .cryId = CRY_PORYGON,
        .weight = 490,
        .description = COMPOUND_STRING(
            "As the energy of Mega Evolution fills it,\n"
            "its fur bristles. What you see on its back\n"
            "are not true wings, and this Pokémon isn't\n"
            "able to fly."),
        FRONT_PIC(AbsolMega, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_AbsolMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(AbsolMega, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(AbsolMega),
        ICON(AbsolMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_ABSOL

#if P_FAMILY_SNORUNT
    [SPECIES_SNORUNT] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 74,
        .evYield_HP = 1,
        .itemRare = ITEM_SNOWBALL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_MINERAL),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_ICE_BODY, ABILITY_MOODY },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Snorunt"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SNORUNT,
        .categoryName = _("Snow Hat"),
        .height = 7,
        .weight = 168,
        .description = COMPOUND_STRING(
            "They tend to move about in groups of\n"
            "around five Snorunt. In snowy regions,\n"
            "it is said that when they are seen late at\n"
            "night, snowfall will arrive by morning."),
        .pokemonScale = 380,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Snorunt, 32, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Snorunt,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .frontAnimDelay = 20,
        BACK_PIC(Snorunt, 56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Snorunt),
        ICON(Snorunt, 2),
        FOOTPRINT(Snorunt)
        LEARNSETS(Snorunt),
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_GLALIE},
                                {EVO_ITEM_FEMALE, ITEM_DAWN_STONE, SPECIES_FROSLASS}),
    },

#define GLALIE_MISC_INFO                                               \
        .types = MON_TYPES(TYPE_ICE),                                  \
        .catchRate = 75,                                               \
        .evYield_HP = 2,                                               \
        .genderRatio = PERCENT_FEMALE(50),                             \
        .eggCycles = 20,                                               \
        .friendship = STANDARD_FRIENDSHIP,                             \
        .growthRate = GROWTH_MEDIUM_FAST,                              \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_MINERAL),\
        .sourceGame = SOURCE_IN,                                  \
        .speciesName = _("Glalie"),                                    \
        .natDexNum = NATIONAL_DEX_GLALIE,                              \
        .categoryName = _("Face"),                                     \
        FOOTPRINT(Glalie)                                              \
        LEARNSETS(Glalie),                                             \
        .formSpeciesIdTable = sGlalieFormSpeciesIdTable,               \
        .formChangeTable = sGlalieFormChangeTable

    [SPECIES_GLALIE] =
    {
        GLALIE_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 80,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 168 : 187,
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_ICE_BODY, ABILITY_MOODY },
        .cryId = CRY_PORYGON,
        .height = 15,
        .weight = 2565,
        .description = COMPOUND_STRING(
            "A Glalie has the power to instantaneously\n"
            "freeze moisture in the atmosphere.\n"
            "A dazzling cloud of diamondlike ice\n"
            "crystals forms around its body."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 344,
        .trainerOffset = 0,
        FRONT_PIC(Glalie, 56, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Glalie,
        .frontAnimId = ANIM_ZIGZAG_FAST,
        .enemyMonElevation = 12,
        BACK_PIC(Glalie, 64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Glalie),
        ICON(Glalie, 0),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_GLALIE_MEGA] =
    {
        GLALIE_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 120,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 120,
        .baseSpDefense = 80,
        .expYield = 203,
        .abilities = { ABILITY_REFRIGERATE, ABILITY_REFRIGERATE, ABILITY_REFRIGERATE },
        .cryId = CRY_PORYGON,
        .height = 21,
        .weight = 3502,
        .description = COMPOUND_STRING(
            "The power of Mega Evolution was so strong\n"
            "that it smashed Glalie's jaw. Its inability\n"
            "to eat very well leaves Glalie irritated."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 344,
        .trainerOffset = 0,
        FRONT_PIC(GlalieMega, 56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_GlalieMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        BACK_PIC(GlalieMega, 64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(GlalieMega),
        ICON(GlalieMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GEN_4_CROSS_EVOS
    [SPECIES_FROSLASS] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 110,
        .baseSpAttack  = 80,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_ICE, TYPE_GHOST),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 168 : 187,
        .evYield_Speed = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_MINERAL),
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_CURSED_BODY },
        .sourceGame = SOURCE_POFV,
        .speciesName = _("Froslass"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_FROSLASS,
        .categoryName = _("Snow Land"),
        .height = 13,
        .weight = 266,
        .description = COMPOUND_STRING(
            "When it finds people or Pokémon it likes,\n"
            "it freezes them and takes them to its\n"
            "chilly den, where they become its\n"
            "decorations."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Froslass, 48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Froslass,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 7,
        BACK_PIC(Froslass, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Froslass),
        ICON(Froslass, 0),
        FOOTPRINT(Froslass)
        LEARNSETS(Froslass),
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_SNORUNT

#if P_FAMILY_SPHEAL
    [SPECIES_SPHEAL] =
    {
        .baseHP        = 70,
        .baseAttack    = 40,
        .baseDefense   = 50,
        .baseSpeed     = 25,
        .baseSpAttack  = 55,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_ICE, TYPE_WATER),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 58 : 75,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_WALL_OF_ICE, ABILITY_ICE_BODY, ABILITY_OBLIVIOUS },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Spheal"),
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
        FRONT_PIC(Spheal, 40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Spheal,
        .frontAnimId = ANIM_SPIN_LONG,
        .frontAnimDelay = 15,
        BACK_PIC(Spheal, 48, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Spheal),
        ICON(Spheal, 2),
        FOOTPRINT(Spheal)
        LEARNSETS(Spheal),
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_SEALEO}),
    },

    [SPECIES_SEALEO] =
    {
        .baseHP        = 90,
        .baseAttack    = 60,
        .baseDefense   = 70,
        .baseSpeed     = 45,
        .baseSpAttack  = 75,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_ICE, TYPE_WATER),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 144 : 128,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_WALL_OF_ICE, ABILITY_ICE_BODY, ABILITY_OBLIVIOUS },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Sealeo"),
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
        FRONT_PIC(Sealeo, 56, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Sealeo,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Sealeo, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Sealeo),
        ICON(Sealeo, 2),
        FOOTPRINT(Sealeo)
        LEARNSETS(Sealeo),
        .evolutions = EVOLUTION({EVO_LEVEL, 44, SPECIES_WALREIN}),
    },

    [SPECIES_WALREIN] =
    {
        .baseHP        = 110,
        .baseAttack    = 80,
        .baseDefense   = 90,
        .baseSpeed     = 65,
        .baseSpAttack  = 95,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_ICE, TYPE_WATER),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 265,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 239,
    #else
        .expYield = 192,
    #endif
        .evYield_HP = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_WALL_OF_ICE, ABILITY_ICE_BODY, ABILITY_OBLIVIOUS },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Walrein"),
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
        FRONT_PIC(Walrein, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Walrein,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Walrein, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Walrein),
        ICON(Walrein, 0),
        FOOTPRINT(Walrein)
        LEARNSETS(Walrein),
    },
#endif //P_FAMILY_SPHEAL

#if P_FAMILY_CLAMPERL
    [SPECIES_CLAMPERL] =
    {
        .baseHP        = 35,
        .baseAttack    = 64,
        .baseDefense   = 85,
        .baseSpeed     = 32,
        .baseSpAttack  = 74,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 69 : 142,
        .evYield_Defense = 1,
        .itemCommon = ITEM_PEARL,
        .itemRare = ITEM_BIG_PEARL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_SHELL_ARMOR, ABILITY_NONE, ABILITY_RATTLED },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Clamperl"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CLAMPERL,
        .categoryName = _("Bivalve"),
        .height = 4,
        .weight = 525,
        .description = COMPOUND_STRING(
            "A Clamperl slams its shell closed on prey\n"
            "to prevent escape. The pearl it creates\n"
            "upon evolution is said to be infused with\n"
            "a mysterious energy."),
        .pokemonScale = 691,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Clamperl, 40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Clamperl,
        .frontAnimId = ANIM_TWIST,
        BACK_PIC(Clamperl, 56, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Clamperl),
        ICON(Clamperl, 0),
        FOOTPRINT(Clamperl)
        LEARNSETS(Clamperl),
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_DEEP_SEA_TOOTH, SPECIES_HUNTAIL},
                                {EVO_TRADE_ITEM, ITEM_DEEP_SEA_SCALE, SPECIES_GOREBYSS},
                                {EVO_ITEM, ITEM_DEEP_SEA_TOOTH, SPECIES_HUNTAIL},
                                {EVO_ITEM, ITEM_DEEP_SEA_SCALE, SPECIES_GOREBYSS}),
    },

    [SPECIES_HUNTAIL] =
    {
        .baseHP        = 55,
        .baseAttack    = 104,
        .baseDefense   = 105,
        .baseSpeed     = 52,
        .baseSpAttack  = 94,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 170 : 178,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .itemRare = ITEM_DEEP_SEA_TOOTH,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_WATER_VEIL },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Huntail"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_HUNTAIL,
        .categoryName = _("Deep Sea"),
        .height = 17,
        .weight = 270,
        .description = COMPOUND_STRING(
            "To withstand the crushing pressure of\n"
            "water deep under the sea, its spine is very\n"
            "thick and sturdy. Its tail, which is shaped\n"
            "like a small fish, has eyes that light up."),
        .pokemonScale = 307,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Huntail, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Huntail,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Huntail, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Huntail),
        ICON(Huntail, 0),
        FOOTPRINT(Huntail)
        LEARNSETS(Huntail),
    },

    [SPECIES_GOREBYSS] =
    {
        .baseHP        = 55,
        .baseAttack    = 84,
        .baseDefense   = 105,
        .baseSpeed     = 52,
        .baseSpAttack  = 114,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 170 : 178,
        .evYield_SpAttack = 2,
        .itemRare = ITEM_DEEP_SEA_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_HYDRATION },
        .sourceGame = SOURCE_MOF,
        .speciesName = _("Gorebyss"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_GOREBYSS,
        .categoryName = _("South Sea"),
        .height = 18,
        .weight = 226,
        .description = COMPOUND_STRING(
            "A Gorebyss siphons the body fluids of prey\n"
            "through its thin, tubular mouth. Its light\n"
            "pink body color turns vivid when it\n"
            "finishes feeding."),
        .pokemonScale = 278,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Gorebyss, 64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Gorebyss,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        BACK_PIC(Gorebyss, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Gorebyss),
        ICON(Gorebyss, 0),
        FOOTPRINT(Gorebyss)
        LEARNSETS(Gorebyss),
    },
#endif //P_FAMILY_CLAMPERL

#if P_FAMILY_RELICANTH
    [SPECIES_RELICANTH] =
    {
        .baseHP        = 100,
        .baseAttack    = 90,
        .baseDefense   = 130,
        .baseSpeed     = 55,
        .baseSpAttack  = 45,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_WATER, TYPE_BEAST),
        .catchRate = 25,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 170 : 198,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .itemRare = ITEM_DEEP_SEA_SCALE,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_2),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_ROCK_HEAD, ABILITY_STURDY },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Relicanth"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_RELICANTH,
        .categoryName = _("Longevity"),
        .height = 10,
        .weight = 234,
        .description = COMPOUND_STRING(
            "A Pokémon that was once believed to have\n"
            "been extinct. The species has not changed\n"
            "its form for 100 million years. It walks on\n"
            "the seafloor using its pectoral fins."),
        .pokemonScale = 316,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Relicanth, 56, 56),
        FRONT_PIC_FEMALE(Relicanth, 56, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Relicanth,
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        BACK_PIC(Relicanth, 64, 40),
        BACK_PIC_FEMALE(Relicanth, 64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Relicanth),
        ICON(Relicanth, 2),
        FOOTPRINT(Relicanth)
        LEARNSETS(Relicanth),
    },
#endif //P_FAMILY_RELICANTH

#if P_FAMILY_LUVDISC
    [SPECIES_LUVDISC] =
    {
        .baseHP        = 43,
        .baseAttack    = 30,
        .baseDefense   = 55,
        .baseSpeed     = 97,
        .baseSpAttack  = 40,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 225,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 116 : 110,
        .evYield_Speed = 1,
        .itemCommon = ITEM_HEART_SCALE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_HYDRATION },
        .sourceGame = SOURCE_MOF,
        .speciesName = _("Luvdisc"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_LUVDISC,
        .categoryName = _("Rendezvous"),
        .height = 6,
        .weight = 87,
        .description = COMPOUND_STRING(
            "Luvdisc make the branches of Corsola\n"
            "their nests. There is a custom from long\n"
            "ago of giving a Luvdisc as a gift to\n"
            "express one's feelings of love."),
        .pokemonScale = 371,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Luvdisc, 32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Luvdisc,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        BACK_PIC(Luvdisc, 40, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SPRING_REPEATED,
        PALETTES(Luvdisc),
        ICON(Luvdisc, 0),
        FOOTPRINT(Luvdisc)
        LEARNSETS(Luvdisc),
    },
#endif //P_FAMILY_LUVDISC

#if P_FAMILY_BAGON
    [SPECIES_BAGON] =
    {
        .baseHP        = 45,
        .baseAttack    = 75,
        .baseDefense   = 60,
        .baseSpeed     = 50,
        .baseSpAttack  = 40,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_FAITH),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 89,
        .evYield_Attack = 1,
        .itemRare = ITEM_PRIESTESS,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_NONE, ABILITY_SHEER_FORCE },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Bagon"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_BAGON,
        .categoryName = _("Rock Head"),
        .height = 6,
        .weight = 421,
        .description = COMPOUND_STRING(
            "Although it is small, this Pokémon is very\n"
            "powerful because its body is a bundle of\n"
            "muscles. It launches head-butts with its\n"
            "ironlike skull."),
        .pokemonScale = 448,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Bagon, 32, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Bagon,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Bagon, 48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Bagon),
        ICON(Bagon, 0),
        FOOTPRINT(Bagon)
        LEARNSETS(Bagon),
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_SHELGON}),
    },

    [SPECIES_SHELGON] =
    {
        .baseHP        = 65,
        .baseAttack    = 95,
        .baseDefense   = 100,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_FAITH),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 147 : 144,
        .evYield_Defense = 2,
        .itemRare = ITEM_PRIESTESS,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_NONE, ABILITY_OVERCOAT },
        .sourceGame = SOURCE_POFV,
        .speciesName = _("Shelgon"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SHELGON,
        .categoryName = _("Endurance"),
        .height = 11,
        .weight = 1105,
        .description = COMPOUND_STRING(
            "It hardly eats while it awaits evolution.\n"
            "It becomes hardier by enduring hunger.\n"
            "Its shell peels off the instant it begins\n"
            "to evolve."),
        .pokemonScale = 311,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Shelgon, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Shelgon,
        .frontAnimId = ANIM_V_SLIDE,
        BACK_PIC(Shelgon, 64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Shelgon),
        ICON(Shelgon, 2),
        FOOTPRINT(Shelgon)
        LEARNSETS(Shelgon),
        .evolutions = EVOLUTION({EVO_LEVEL, 50, SPECIES_SALAMENCE}),
    },

#define SALAMENCE_MISC_INFO                                 \
        .types = MON_TYPES(TYPE_FAITH, TYPE_FLYING),       \
        .catchRate = 45,                                    \
        .evYield_Attack = 3,                                \
        .itemRare = ITEM_PRIESTESS,                       \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 40,                                    \
        .friendship = 35,                                   \
        .growthRate = GROWTH_SLOW,                          \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),      \
        .sourceGame = SOURCE_SOEW,                       \
        .speciesName = _("Salamence"),                      \
        .natDexNum = NATIONAL_DEX_SALAMENCE,                \
        .categoryName = _("Dragon"),                        \
        FOOTPRINT(Salamence)                                \
        LEARNSETS(Salamence),                               \
        .formSpeciesIdTable = sSalamenceFormSpeciesIdTable, \
        .formChangeTable = sSalamenceFormChangeTable

    [SPECIES_SALAMENCE] =
    {
        SALAMENCE_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 135,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 110,
        .baseSpDefense = 80,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 300,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 270,
    #else
        .expYield = 218,
    #endif
        .abilities = { ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_MOXIE },
        .cryId = CRY_PORYGON,
        .height = 15,
        .weight = 1026,
        .description = COMPOUND_STRING(
            "After many long years, its cellular\n"
            "structure underwent a sudden mutation to\n"
            "grow wings. When angered, it loses all\n"
            "thought and rampages out of control."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Salamence, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Salamence,
        .frontAnimId = ANIM_H_SHAKE,
        .frontAnimDelay = 70,
        BACK_PIC(Salamence, 56, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_H_SHAKE,
        PALETTES(Salamence),
        ICON(Salamence, 0),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_SALAMENCE_MEGA] =
    {
        SALAMENCE_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 145,
        .baseDefense   = 130,
        .baseSpeed     = 120,
        .baseSpAttack  = 120,
        .baseSpDefense = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 350 : 315,
        .abilities = { ABILITY_AERILATE, ABILITY_AERILATE, ABILITY_AERILATE },
        .cryId = CRY_PORYGON,
        .height = 18,
        .weight = 1126,
        .description = COMPOUND_STRING(
            "Mega Evolution fuels its brutality, and it\n"
            "may even turn on the Trainer who raised it.\n"
            "It's been dubbed the blood-soaked.\n"
            "crescent."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(SalamenceMega, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SalamenceMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SalamenceMega, 56, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_H_SHAKE,
        PALETTES(SalamenceMega),
        ICON(SalamenceMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BAGON

#if P_FAMILY_BELDUM
    [SPECIES_BELDUM] =
    {
        .baseHP        = 40,
        .baseAttack    = 55,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 35,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_STEEL, TYPE_REASON),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 103,
        .evYield_Defense = 1,
        .itemRare = ITEM_MAID_UNIFORM,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_HAKUREI_MIKO, ABILITY_NONE, ABILITY_LIGHT_METAL },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Beldum"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_BELDUM,
        .categoryName = _("Iron Ball"),
        .height = 6,
        .weight = 952,
        .description = COMPOUND_STRING(
            "When Beldum gather in a swarm, they move\n"
            "in perfect unison as if they were but one\n"
            "Pokémon. They communicate with each other\n"
            "using brain waves."),
        .pokemonScale = 414,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Beldum, 48, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Beldum,
        .frontAnimId = ANIM_H_SHAKE,
        .enemyMonElevation = 8,
        BACK_PIC(Beldum, 64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Beldum),
        ICON(Beldum, 0),
        FOOTPRINT(Beldum)
        LEARNSETS(Beldum),
        .tmIlliterate = TRUE,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_METANG}),
    },

    [SPECIES_METANG] =
    {
        .baseHP        = 60,
        .baseAttack    = 75,
        .baseDefense   = 100,
        .baseSpeed     = 50,
        .baseSpAttack  = 55,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_STEEL, TYPE_REASON),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 147 : 153,
        .evYield_Defense = 2,
        .itemRare = ITEM_MAID_UNIFORM,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_HAKUREI_MIKO, ABILITY_NONE, ABILITY_LIGHT_METAL },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Metang"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_METANG,
        .categoryName = _("Iron Claw"),
        .height = 12,
        .weight = 2025,
        .description = COMPOUND_STRING(
            "The claws tipping its arms pack the\n"
            "destructive power to tear through thick\n"
            "iron sheets as if they were silk. It flies\n"
            "at over 60 miles per hour."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Metang, 64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Metang,
        .frontAnimId = ANIM_V_SLIDE,
        BACK_PIC(Metang, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Metang),
        ICON(Metang, 0),
        FOOTPRINT(Metang)
        LEARNSETS(Metang),
        .evolutions = EVOLUTION({EVO_LEVEL, 45, SPECIES_METAGROSS}),
    },

#define METAGROSS_MISC_INFO                                     \
        .types = MON_TYPES(TYPE_STEEL, TYPE_REASON),           \
        .catchRate = 3,                                         \
        .evYield_Defense = 3,                                   \
        .itemRare = ITEM_MAID_UNIFORM,                            \
        .genderRatio = MON_GENDERLESS,                          \
        .eggCycles = 40,                                        \
        .friendship = 35,                                       \
        .growthRate = GROWTH_SLOW,                              \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),         \
        .sourceGame = SOURCE_SOEW,                           \
        .speciesName = _("Metagross"),                          \
        .natDexNum = NATIONAL_DEX_METAGROSS,                    \
        .categoryName = _("Iron Leg"),                          \
        FOOTPRINT(Metagross)                                    \
        LEARNSETS(Metagross),                                   \
        .formSpeciesIdTable = sMetagrossFormSpeciesIdTable,     \
        .formChangeTable = sMetagrossFormChangeTable

    [SPECIES_METAGROSS] =
    {
        METAGROSS_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 135,
        .baseDefense   = 130,
        .baseSpeed     = 70,
        .baseSpAttack  = 95,
        .baseSpDefense = 90,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 300,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 270,
    #else
        .expYield = 210,
    #endif
        .abilities = { ABILITY_HAKUREI_MIKO, ABILITY_NONE, ABILITY_LIGHT_METAL },
        .cryId = CRY_PORYGON,
        .height = 16,
        .weight = 5500,
        .description = COMPOUND_STRING(
            "Metagross has four brains that are joined\n"
            "by a complex neural network. As a result of\n"
            "integration, this Pokémon is smarter than\n"
            "a supercomputer."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 447,
        .trainerOffset = 9,
        FRONT_PIC(Metagross, 64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Metagross,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Metagross, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Metagross),
        ICON(Metagross, 0),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_METAGROSS_MEGA] =
    {
        METAGROSS_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 145,
        .baseDefense   = 150,
        .baseSpeed     = 110,
        .baseSpAttack  = 105,
        .baseSpDefense = 110,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 350 : 315,
        .abilities = { ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS },
        .cryId = CRY_PORYGON,
        .height = 25,
        .weight = 9429,
        .description = COMPOUND_STRING(
            "When it knows it can't win, it digs the\n"
            "claws on its legs into its opponent and\n"
            "starts the countdown to a big explosion."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 447,
        .trainerOffset = 9,
        FRONT_PIC(MetagrossMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_MetagrossMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        BACK_PIC(MetagrossMega, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(MetagrossMega),
        ICON(MetagrossMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BELDUM

#if P_FAMILY_REGIROCK
    [SPECIES_REGIROCK] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 200,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_BEAST),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 290,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 261,
    #else
        .expYield = 217,
    #endif
        .evYield_Defense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_HAKUREI_MIKO, ABILITY_NONE, ABILITY_STURDY },
        .sourceGame = SOURCE_EOSD,
        .noFlip = TRUE,
        .isLegendary = TRUE,
        .speciesName = _("Regirock"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_REGIROCK,
        .categoryName = _("Rock Peak"),
        .height = 17,
        .weight = 2300,
        .description = COMPOUND_STRING(
            "A Pokémon that is made entirely of rocks\n"
            "and boulders. If parts of its body chip off\n"
            "in battle, Regirock repairs itself by\n"
            "adding new rocks."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 309,
        .trainerOffset = 1,
        FRONT_PIC(Regirock, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Regirock,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        BACK_PIC(Regirock, 64, 56),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Regirock),
        ICON(Regirock, 2),
        FOOTPRINT(Regirock)
        LEARNSETS(Regirock),
    },
#endif //P_FAMILY_REGIROCK

#if P_FAMILY_REGICE
    [SPECIES_REGICE] =
    {
        .baseHP        = 80,
        .baseAttack    = 50,
        .baseDefense   = 100,
        .baseSpeed     = 50,
        .baseSpAttack  = 100,
        .baseSpDefense = 200,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 290,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 261,
    #else
        .expYield = 216,
    #endif
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_HAKUREI_MIKO, ABILITY_NONE, ABILITY_ICE_BODY },
        .sourceGame = SOURCE_SOEW,
        .isLegendary = TRUE,
        .speciesName = _("Regice"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_REGICE,
        .categoryName = _("Iceberg"),
        .height = 18,
        .weight = 1750,
        .description = COMPOUND_STRING(
            "Its entire body is made of Antarctic ice.\n"
            "After extensive studies, researchers\n"
            "believe the ice was formed during an\n"
            "ice age."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 301,
        .trainerOffset = 2,
        FRONT_PIC(Regice, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Regice,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        BACK_PIC(Regice, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Regice),
        ICON(Regice, 0),
        FOOTPRINT(Regice)
        LEARNSETS(Regice),
    },
#endif //P_FAMILY_REGICE

#if P_FAMILY_REGISTEEL
    [SPECIES_REGISTEEL] =
    {
        .baseHP        = 80,
        .baseAttack    = 75,
        .baseDefense   = 150,
        .baseSpeed     = 50,
        .baseSpAttack  = 75,
        .baseSpDefense = 150,
        .types = MON_TYPES(TYPE_STEEL),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 290,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 261,
    #else
        .expYield = 215,
    #endif
        .evYield_Defense = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_HAKUREI_MIKO, ABILITY_NONE, ABILITY_LIGHT_METAL },
        .sourceGame = SOURCE_IN,
        .isLegendary = TRUE,
        .speciesName = _("Registeel"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_REGISTEEL,
        .categoryName = _("Iron"),
        .height = 19,
        .weight = 2050,
        .description = COMPOUND_STRING(
            "Its body is harder than any other kind of\n"
            "metal. The body metal is composed of a\n"
            "mysterious substance. Not only is it hard,\n"
            "it shrinks and stretches flexibly."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 359,
        .trainerOffset = 6,
        FRONT_PIC(Registeel, 64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Registeel,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Registeel, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Registeel),
        ICON(Registeel, 2),
        FOOTPRINT(Registeel)
        LEARNSETS(Registeel),
    },
#endif //P_FAMILY_REGISTEEL

#if P_FAMILY_LATIAS
#define LATIAS_MISC_INFO                                                \
        .types = MON_TYPES(TYPE_FAITH, TYPE_REASON),                  \
        .catchRate = 3,                                                 \
        .evYield_SpDefense = 3,                                         \
        .genderRatio = MON_FEMALE,                                      \
        .eggCycles = 120,                                               \
        .friendship = 90,                                               \
        .growthRate = GROWTH_SLOW,                                      \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),      \
        .speciesName = _("Latias"),                                     \
        .natDexNum = NATIONAL_DEX_LATIAS,                               \
        .categoryName = _("Eon"),                                       \
        FOOTPRINT(Latias)                                               \
        LEARNSETS(Latias),                                              \
        .formSpeciesIdTable = sLatiasFormSpeciesIdTable,                \
        .formChangeTable = sLatiasFormChangeTable,                      \
        .isLegendary = TRUE

    [SPECIES_LATIAS] =
    {
        LATIAS_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 90,
        .baseSpeed     = 110,
        .baseSpAttack  = 110,
        .baseSpDefense = 130,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 300,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 270,
    #else
        .expYield = 211,
    #endif
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE },
        .sourceGame = SOURCE_HRTP,
        .cryId = CRY_PORYGON,
        .height = 14,
        .weight = 400,
        .description = COMPOUND_STRING(
            "They make a small herd of only several\n"
            "members. They rarely make contact with\n"
            "people or other Pokémon. They disappear\n"
            "if they sense enemies."),
        .pokemonScale = 304,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Latias, 64, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Latias,
        .frontAnimId = ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = 12,
        BACK_PIC(Latias, 56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(Latias),
        ICON(Latias, 0),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_LATIAS_MEGA] =
    {
        LATIAS_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 120,
        .baseSpeed     = 110,
        .baseSpAttack  = 140,
        .baseSpDefense = 150,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 350 : 315,
        .abilities = { ABILITY_LEVITATE, ABILITY_LEVITATE, ABILITY_LEVITATE },
        .sourceGame = SOURCE_PCB,
        .cryId = CRY_PORYGON,
        .height = 18,
        .weight = 520,
        .description = COMPOUND_STRING(
            "Its body is smaller than Mega Latios's\n"
            "body. It is more agile and can make very\n"
            "sharp turns. When it Mega Evolves, its\n"
            "defensive strength grows substantially."),
        .pokemonScale = 304,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(LatiasMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_LatiasMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        BACK_PIC(LatiasMega, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(LatiasMega),
        ICON(LatiasMega, 2),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_LATIAS

#if P_FAMILY_LATIOS
#define LATIOS_MISC_INFO                                                \
        .types = MON_TYPES(TYPE_FAITH, TYPE_REASON),                  \
        .catchRate = 3,                                                 \
        .evYield_SpAttack = 3,                                          \
        .genderRatio = MON_MALE,                                        \
        .eggCycles = 120,                                               \
        .friendship = 90,                                               \
        .growthRate = GROWTH_SLOW,                                      \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),      \
        .isLegendary = TRUE,                                            \
        .speciesName = _("Latios"),                                     \
        .natDexNum = NATIONAL_DEX_LATIOS,                               \
        .categoryName = _("Eon"),                                       \
        FOOTPRINT(Latios)                                               \
        LEARNSETS(Latios),                                              \
        .formSpeciesIdTable = sLatiosFormSpeciesIdTable,                \
        .formChangeTable = sLatiosFormChangeTable

    [SPECIES_LATIOS] =
    {
        LATIOS_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 90,
        .baseDefense   = 80,
        .baseSpeed     = 110,
        .baseSpAttack  = 130,
        .baseSpDefense = 110,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 300,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 270,
    #else
        .expYield = 211,
    #endif
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE },
        .sourceGame = SOURCE_SOEW,
        .cryId = CRY_PORYGON,
        .height = 20,
        .weight = 600,
        .description = COMPOUND_STRING(
            "Even in hiding, it can detect the locations\n"
            "of others and sense their emotions since\n"
            "it has telepathy. Its intelligence allows\n"
            "it to understand human languages."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 294,
        .trainerOffset = 3,
        FRONT_PIC(Latios, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Latios,
        .frontAnimId = ANIM_CIRCLE_C_CLOCKWISE_SLOW,
        .enemyMonElevation = 6,
        BACK_PIC(Latios, 56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(Latios),
        ICON(Latios, 0),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_LATIOS_MEGA] =
    {
        LATIOS_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 130,
        .baseDefense   = 100,
        .baseSpeed     = 110,
        .baseSpAttack  = 160,
        .baseSpDefense = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 350 : 315,
        .abilities = { ABILITY_LEVITATE, ABILITY_LEVITATE, ABILITY_LEVITATE },
        .sourceGame = SOURCE_PCB,
        .cryId = CRY_PORYGON,
        .height = 23,
        .weight = 700,
        .description = COMPOUND_STRING(
            "It's larger than Mega Latias, and can\n"
            "achieve higher speeds in flight.\n"
            "This Pokémon can use its speed in battle\n"
            "to unleash a flurry of attacks."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 294,
        .trainerOffset = 3,
        FRONT_PIC(LatiosMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_LatiosMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        BACK_PIC(LatiosMega, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(LatiosMega),
        ICON(LatiosMega, 2),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_LATIOS

#if P_FAMILY_KYOGRE
#define KYOGRE_MISC_INFO                                                            \
        .types = MON_TYPES(TYPE_WATER),                                             \
        .catchRate = 3,                                                             \
        .evYield_SpAttack = 3,                                                      \
        .genderRatio = MON_GENDERLESS,                                              \
        .eggCycles = 120,                                                           \
        .friendship = 0,                                                            \
        .growthRate = GROWTH_SLOW,                                                  \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),                  \
        .sourceGame = SOURCE_SOEW,                                               \
        .isLegendary = TRUE,                                                        \
        .speciesName = _("Kyogre"),                                                 \
        .natDexNum = NATIONAL_DEX_KYOGRE,                                           \
        .categoryName = _("Sea Basin"),                                             \
        FOOTPRINT(Kyogre)                                                           \
        LEARNSETS(Kyogre),                                                          \
        .formSpeciesIdTable = sKyogreFormSpeciesIdTable,                            \
        .formChangeTable = sKyogreFormChangeTable

    [SPECIES_KYOGRE] =
    {
        KYOGRE_MISC_INFO,
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 150,
        .baseSpDefense = 140,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 335,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 302,
    #else
        .expYield = 218,
    #endif
        .abilities = { ABILITY_DRIZZLE, ABILITY_NONE },
        .cryId = CRY_PORYGON,
        .height = 45,
        .weight = 3520,
        .description = COMPOUND_STRING(
            "Kyogre has appeared in mythology as the\n"
            "creator of the sea. After long years of\n"
            "feuding with Groudon, it took to sleep at\n"
            "the bottom of the sea."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 614,
        .trainerOffset = 13,
        FRONT_PIC(Kyogre, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Kyogre,
        .frontAnimId = ANIM_SWING_CONCAVE_FAST_SHORT,
        .frontAnimDelay = 60,
        BACK_PIC(Kyogre, 64, 32),
        .backPicYOffset = 18,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(Kyogre),
        ICON(Kyogre, 2),
    },
#if P_PRIMAL_REVERSIONS
    [SPECIES_KYOGRE_PRIMAL] =
    {
        KYOGRE_MISC_INFO,
        .baseHP        = 100,
        .baseAttack    = 150,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 180,
        .baseSpDefense = 160,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 385 : 347,
        .abilities = { ABILITY_PRIMORDIAL_SEA, ABILITY_PRIMORDIAL_SEA },
        .cryId = CRY_PORYGON,
        .height = 98,
        .weight = 4300,
        .description = COMPOUND_STRING(
            "When Kyogre roared, water poured forth\n"
            "and the seas spread outward.\n"
            "Dark clouds enshrouded the world,\n"
            "and the deluge fell upon all…"),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 515,
        .trainerOffset = 14,
        FRONT_PIC(KyogrePrimal, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_KyogrePrimal,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(KyogrePrimal, 64, 32),
        .backPicYOffset = 18,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(KyogrePrimal),
        ICON(KyogrePrimal, 0),
        .isPrimalReversion = TRUE,
    },
#endif //P_PRIMAL_REVERSIONS
#endif //P_FAMILY_KYOGRE

#if P_FAMILY_GROUDON
#define GROUDON_MISC_INFO                                                           \
        .catchRate = 3,                                                             \
        .evYield_Attack = 3,                                                        \
        .genderRatio = MON_GENDERLESS,                                              \
        .eggCycles = 120,                                                           \
        .friendship = 0,                                                            \
        .growthRate = GROWTH_SLOW,                                                  \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),                  \
        .sourceGame = SOURCE_HRTP,                                                \
        .isLegendary = TRUE,                                                        \
        .speciesName = _("Groudon"),                                                \
        .cryId = CRY_PORYGON,                                                       \
        .natDexNum = NATIONAL_DEX_GROUDON,                                          \
        .categoryName = _("Continent"),                                             \
        FOOTPRINT(Groudon)                                                          \
        LEARNSETS(Groudon),                                                         \
        .formSpeciesIdTable = sGroudonFormSpeciesIdTable,                           \
        .formChangeTable = sGroudonFormChangeTable

    [SPECIES_GROUDON] =
    {
        GROUDON_MISC_INFO,
        .baseHP        = 100,
        .baseAttack    = 150,
        .baseDefense   = 140,
        .baseSpeed     = 90,
        .baseSpAttack  = 100,
        .baseSpDefense = 90,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 335,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 302,
    #else
        .expYield = 218,
    #endif
        .types = MON_TYPES(TYPE_EARTH),
        .abilities = { ABILITY_DROUGHT, ABILITY_NONE },
        .height = 35,
        .weight = 9500,
        .description = COMPOUND_STRING(
            "Groudon has appeared in mythology as the\n"
            "creator of the land. It sleeps in magma\n"
            "underground and is said to make volcanoes\n"
            "erupt on awakening."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 515,
        .trainerOffset = 14,
        FRONT_PIC(Groudon, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Groudon,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Groudon, 64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(Groudon),
        ICON(Groudon, 0),
    },

#if P_PRIMAL_REVERSIONS
    [SPECIES_GROUDON_PRIMAL] =
    {
        GROUDON_MISC_INFO,
        .baseHP        = 100,
        .baseAttack    = 180,
        .baseDefense   = 160,
        .baseSpeed     = 90,
        .baseSpAttack  = 150,
        .baseSpDefense = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 385 : 347,
        .types = MON_TYPES(TYPE_EARTH, TYPE_FIRE),
        .abilities = { ABILITY_DESOLATE_LAND, ABILITY_DESOLATE_LAND },
        .height = 50,
        .weight = 9997,
        .description = COMPOUND_STRING(
            "When Groudon howled, the earth swelled and\n"
            "the land grew wide. The sun blazed atop\n"
            "and all the world around the creature\n"
            "was enveloped in incandescent heat."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 515,
        .trainerOffset = 14,
        FRONT_PIC(GroudonPrimal, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_GroudonPrimal,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GroudonPrimal,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(GroudonPrimal),
        ICON(GroudonPrimal, 0),
        .isPrimalReversion = TRUE,
    },
#endif //P_PRIMAL_REVERSIONS
#endif //P_FAMILY_GROUDON

#if P_FAMILY_RAYQUAZA
#define RAYQUAZA_MISC_INFO                                                          \
        .types = MON_TYPES(TYPE_FAITH, TYPE_FLYING),                               \
        .catchRate = 45,                                                            \
        .evYield_Attack = 2,                                                        \
        .evYield_SpAttack = 1,                                                      \
        .genderRatio = MON_GENDERLESS,                                              \
        .eggCycles = 120,                                                           \
        .friendship = 0,                                                            \
        .growthRate = GROWTH_SLOW,                                                  \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),                  \
        .sourceGame = SOURCE_LLS,                                              \
        .speciesName = _("Rayquaza"),                                               \
        .cryId = CRY_PORYGON,                                                      \
        .natDexNum = NATIONAL_DEX_RAYQUAZA,                                         \
        .categoryName = _("Sky High"),                                              \
        FOOTPRINT(Rayquaza)                                                         \
        LEARNSETS(Rayquaza),                                                        \
        .formSpeciesIdTable = sRayquazaFormSpeciesIdTable,                          \
        .formChangeTable = sRayquazaFormChangeTable,                                \
        .isLegendary = TRUE

    [SPECIES_RAYQUAZA] =
    {
        RAYQUAZA_MISC_INFO,
        .baseHP        = 105,
        .baseAttack    = 150,
        .baseDefense   = 90,
        .baseSpeed     = 95,
        .baseSpAttack  = 150,
        .baseSpDefense = 90,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 340,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 306,
    #else
        .expYield = 220,
    #endif
        .abilities = { ABILITY_HISOUTEN, ABILITY_NONE },
        .height = 70,
        .weight = 2065,
        .description = COMPOUND_STRING(
            "A Pokémon that flies endlessly in the\n"
            "ozone layer. It is said it would descend\n"
            "to the ground if Kyogre and Groudon\n"
            "were to fight."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 448,
        .trainerOffset = 12,
        FRONT_PIC(Rayquaza, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Rayquaza,
        .frontAnimId = ANIM_H_SHAKE,
        .frontAnimDelay = 60,
        .enemyMonElevation = 6,
        BACK_PIC(Rayquaza, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        PALETTES(Rayquaza),
        ICON(Rayquaza, 1),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_RAYQUAZA_MEGA] =
    {
        RAYQUAZA_MISC_INFO,
        .baseHP        = 105,
        .baseAttack    = 180,
        .baseDefense   = 100,
        .baseSpeed     = 115,
        .baseSpAttack  = 180,
        .baseSpDefense = 100,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 390 : 351,
        .abilities = { ABILITY_DELTA_STREAM, ABILITY_DELTA_STREAM, ABILITY_DELTA_STREAM },
        .height = 108,
        .weight = 3920,
        .description = COMPOUND_STRING(
            "Particles stream from the filaments that\n"
            "extend from its jaw. They can control the\n"
            "density and humidity of the air, allowing\n"
            "Rayquaza to manipulate the weather."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 448,
        .trainerOffset = 12,
        FRONT_PIC(RayquazaMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_RayquazaMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        BACK_PIC(RayquazaMega, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        PALETTES(RayquazaMega),
        ICON(RayquazaMega, 1),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_RAYQUAZA

#if P_FAMILY_JIRACHI
    [SPECIES_JIRACHI] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_STEEL, TYPE_REASON),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 300,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 270,
    #else
        .expYield = 215,
    #endif
        .evYield_HP = 3,
        .itemCommon = ITEM_STAR_PIECE,
        .itemRare = ITEM_STAR_PIECE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SERENE_GRACE, ABILITY_NONE },
        .sourceGame = SOURCE_PODD,
        .isMythical = TRUE,
        .speciesName = _("Jirachi"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_JIRACHI,
        .categoryName = _("Wish"),
        .height = 3,
        .weight = 11,
        .description = COMPOUND_STRING(
            "Jirachi is said to make wishes come true.\n"
            "While it sleeps, a tough crystalline shell\n"
            "envelops the body to protect it from\n"
            "enemies."),
        .pokemonScale = 608,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Jirachi, 56, 48),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Jirachi,
        .frontAnimId = ANIM_RISING_WOBBLE,
        .enemyMonElevation = 14,
        BACK_PIC(Jirachi, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Jirachi),
        ICON(Jirachi, 0),
        FOOTPRINT(Jirachi)
        LEARNSETS(Jirachi),
    },
#endif //P_FAMILY_JIRACHI

#if P_FAMILY_DEOXYS
#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define DEOXYS_EXP_YIELD 300
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define DEOXYS_EXP_YIELD 270
#else
    #define DEOXYS_EXP_YIELD 215
#endif

#define DEOXYS_MISC_INFO                                                            \
        .types = MON_TYPES(TYPE_REASON),                                           \
        .catchRate = 3,                                                             \
        .expYield = DEOXYS_EXP_YIELD,                                               \
        .genderRatio = MON_GENDERLESS,                                              \
        .eggCycles = 120,                                                           \
        .friendship = 0,                                                            \
        .growthRate = GROWTH_SLOW,                                                  \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),                  \
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE },                            \
        .sourceGame = SOURCE_HRTP,                                                \
        .isMythical = TRUE,                                                         \
        .speciesName = _("Deoxys"),                                                 \
        .cryId = CRY_PORYGON,                                                        \
        .natDexNum = NATIONAL_DEX_DEOXYS,                                           \
        .categoryName = _("DNA"),                                                   \
        .height = 17,                                                               \
        .weight = 608,                                                              \
        .description = gDeoxysNormalPokedexText,                                    \
        .pokemonScale = 256,                                                        \
        .pokemonOffset = 0,                                                         \
        .trainerScale = 290,                                                        \
        .trainerOffset = 2,                                                         \
        FOOTPRINT(Deoxys)                                                           \
        .formSpeciesIdTable = sDeoxysFormSpeciesIdTable

    [SPECIES_DEOXYS_NORMAL] =
    {
        DEOXYS_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 150,
        .baseDefense   = 50,
        .baseSpeed     = 150,
        .baseSpAttack  = 150,
        .baseSpDefense = 50,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        FRONT_PIC(DeoxysNormal, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_DeoxysNormal,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(DeoxysNormal, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(DeoxysNormal),
        ICON(DeoxysNormal, 0),
        LEARNSETS(DeoxysNormal),
        .formChangeTable = sDeoxysNormalFormChangeTable,
    },

    [SPECIES_DEOXYS_ATTACK] =
    {
        DEOXYS_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 180,
        .baseDefense   = 20,
        .baseSpeed     = 150,
        .baseSpAttack  = 180,
        .baseSpDefense = 20,
        .evYield_Attack = 2,
        .evYield_SpAttack = 1,
        FRONT_PIC(DeoxysAttack, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_DeoxysAttack,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(DeoxysAttack, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(DeoxysAttack),
        ICON(DeoxysAttack, 0),
        LEARNSETS(DeoxysAttack),
        .formChangeTable = sDeoxysAttackFormChangeTable,
    },

    [SPECIES_DEOXYS_DEFENSE] =
    {
        DEOXYS_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 70,
        .baseDefense   = 160,
        .baseSpeed     = 90,
        .baseSpAttack  = 70,
        .baseSpDefense = 160,
        .evYield_Defense = 2,
        .evYield_SpDefense = 1,
        FRONT_PIC(DeoxysDefense, 56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_DeoxysDefense,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(DeoxysDefense, 64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(DeoxysDefense),
        ICON(DeoxysDefense, 0),
        LEARNSETS(DeoxysDefense),
        .formChangeTable = sDeoxysDefenseFormChangeTable,
    },

    [SPECIES_DEOXYS_SPEED] =
    {
        DEOXYS_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 95,
        .baseDefense   = 90,
        .baseSpeed     = 180,
        .baseSpAttack  = 95,
        .baseSpDefense = 90,
        .evYield_Speed = 3,
        .noFlip = TRUE,
        FRONT_PIC(DeoxysSpeed, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_DeoxysSpeed,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(DeoxysSpeed, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(DeoxysSpeed),
        ICON(DeoxysSpeed, 0),
        LEARNSETS(DeoxysSpeed),
        .formChangeTable = sDeoxysSpeedFormChangeTable,
    },
#endif //P_FAMILY_DEOXYS

#ifdef __INTELLISENSE__
};
#endif