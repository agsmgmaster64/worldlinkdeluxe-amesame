#include "global.h"
#include "test/battle.h"

// Note: Since these tests are recorded battle, they don't test the right battle controller
// behaviors. These have been tested in-game, in double, in multi, and in link battles. AI will always
// revive their first fainted party member in order.

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_REVIVAL_BLESSING].effect == EFFECT_REVIVAL_BLESSING);
}

SINGLE_BATTLE_TEST("Revival Blessing revives a chosen fainted party member for the player")
{
    GIVEN {
        PLAYER(SPECIES_CHIBI_YUUGI);
        PLAYER(SPECIES_CHIBI_YUUGI) { HP(0); }
        PLAYER(SPECIES_NORMAL_KOSUZU) { HP(0); }
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN { MOVE(player, MOVE_REVIVAL_BLESSING); SEND_OUT(player, 2); }
    } SCENE {
        MESSAGE("Wobbuffet used Revival Blessing!");
        MESSAGE("Wynaut was revived and is ready to fight again!");
    }
}

SINGLE_BATTLE_TEST("Revival Blessing revives a fainted party member for an opponent")
{
    GIVEN {
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_NORMAL_KOAKUMA);
        OPPONENT(SPECIES_ATTACK_NITORI) { HP(0); }
        OPPONENT(SPECIES_CHIBI_KOAKUMA) { HP(0); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_REVIVAL_BLESSING); SEND_OUT(opponent, 1); }
    } SCENE {
        MESSAGE("Foe Raichu used Revival Blessing!");
        MESSAGE("Pichu was revived and is ready to fight again!");
    }
}

SINGLE_BATTLE_TEST("Revival Blessing fails if no party members are fainted")
{
    GIVEN {
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN { MOVE(player, MOVE_REVIVAL_BLESSING); }
    } SCENE {
        MESSAGE("Wobbuffet used Revival Blessing!");
        MESSAGE("But it failed!");
    }
}

// Note: There isn't a good way to test multi battles at the moment, but
// this PASSES in game!
TO_DO_BATTLE_TEST("Revival Blessing cannot revive a partner's party member");
// DOUBLE_BATTLE_TEST("Revival Blessing cannot revive a partner's party member")
// {
//     struct BattlePokemon *user;
//     gBattleTypeFlags |= BATTLE_TYPE_TWO_OPPONENTS;
//     PARAMETRIZE { user = opponentLeft; }
//     PARAMETRIZE { user = opponentRight; }
//     GIVEN {
//         ASSUME((gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS) != FALSE);
//         PLAYER(SPECIES_CHIBI_YUUGI);
//         PLAYER(SPECIES_CHIBI_YUUGI);
//         OPPONENT(SPECIES_CHIBI_YUUGI);
//         OPPONENT(SPECIES_CHIBI_YUUGI);
//         OPPONENT(SPECIES_CHIBI_YUUGI);
//         OPPONENT(SPECIES_NORMAL_KOSUZU);
//         OPPONENT(SPECIES_NORMAL_KOSUZU) { HP(0); }
//         OPPONENT(SPECIES_NORMAL_KOSUZU);
//     } WHEN {
//         TURN { MOVE(user, MOVE_REVIVAL_BLESSING); }
//     } SCENE {
//         if (user == opponentLeft) {
//             MESSAGE("Foe Wobbuffet used Revival Blessing!");
//             MESSAGE("But it failed!");
//         } else {
//             MESSAGE("Foe Wynaut used Revival Blessing!");
//             MESSAGE("Wynaut was revived and is ready to fight again!");
//         }
//     }
// }

// Note: The test runner gets upset about "sending out" a battler on the field,
// but this PASSES in game!
TO_DO_BATTLE_TEST("Revived battlers still lose their turn");
// DOUBLE_BATTLE_TEST("Revived battlers still lose their turn")
// {
//     GIVEN {
//         PLAYER(SPECIES_CHIBI_YUUGI);
//         PLAYER(SPECIES_NORMAL_KOSUZU);
//         OPPONENT(SPECIES_CHIBI_YUUGI);
//         OPPONENT(SPECIES_NORMAL_KOSUZU) { HP(1); }
//     } WHEN {
//         TURN { MOVE(playerLeft, MOVE_TACKLE, target: opponentRight);
//                MOVE(opponentLeft, MOVE_REVIVAL_BLESSING);
//                SEND_OUT(opponentLeft, 1); }
//     } SCENE {
//         MESSAGE("Wobbuffet used Tackle!");
//         MESSAGE("Foe Wynaut fainted!");
//         MESSAGE("Foe Wobbuffet used Revival Blessing!");
//         MESSAGE("Wynaut was revived and is ready to fight again!");
//         NOT { MESSAGE("Wynaut used Celebrate!"); }
//     }
// }
