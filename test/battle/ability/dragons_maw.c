#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Dragon's Maw increases Dragon-type move damage", s16 damage)
{
    u32 move;
    u16 ability;

    PARAMETRIZE { move = MOVE_TACKLE; ability = ABILITY_KLUTZ; }
    PARAMETRIZE { move = MOVE_TACKLE; ability = ABILITY_DRAGONS_MAW; }
    PARAMETRIZE { move = MOVE_HEART_BREAK; ability = ABILITY_KLUTZ; }
    PARAMETRIZE { move = MOVE_HEART_BREAK; ability = ABILITY_DRAGONS_MAW; }
    PARAMETRIZE { move = MOVE_DECISION; ability = ABILITY_KLUTZ; }
    PARAMETRIZE { move = MOVE_DECISION; ability = ABILITY_DRAGONS_MAW; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_TACKLE].type != TYPE_FAITH);
        ASSUME(gMovesInfo[MOVE_HEART_BREAK].type == TYPE_FAITH);
        ASSUME(gMovesInfo[MOVE_DECISION].type == TYPE_FAITH);
        ASSUME(gMovesInfo[MOVE_HEART_BREAK].category == DAMAGE_CATEGORY_PHYSICAL);
        ASSUME(gMovesInfo[MOVE_DECISION].category == DAMAGE_CATEGORY_SPECIAL);
        PLAYER(SPECIES_REGIDRAGO) { Ability(ability); }
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_EQ(results[0].damage, results[1].damage); // Tackle should be unaffected
        EXPECT_MUL_EQ(results[2].damage, Q_4_12(1.5), results[3].damage); // Dragon Claw should be affected
        EXPECT_MUL_EQ(results[4].damage, Q_4_12(1.5), results[5].damage); // Dragon Breath should be affected
    }
}
