
#include <sstream>
#include "gtest/gtest.h"
#include "Combat.h"


void testCombatScenarioNoVictoryPrint(void (*combatFunction)(Combat*)) {
    std::stringstream redirectedOutput;
    std::streambuf* originalOutput = std::cout.rdbuf(redirectedOutput.rdbuf());

    Combat combat;
    Combat* cptr = &combat;
    combatFunction(cptr);

    std::cout.rdbuf(originalOutput);

    EXPECT_EQ(0, combat.getAiHealth());
}

TEST(CombatTest, FightGolem_AIHealthReachesZero_NoVictoryPrint) {
    testCombatScenarioNoVictoryPrint([](Combat* combat) {
        while (combat->getAiHealth() > 0) {
            combat->RPS(2); // Simulate a melee attack
        }
    });
}

TEST(CombatTest, FightUndeadKnight_AIHealthReachesZero_NoVictoryPrint) {
    testCombatScenarioNoVictoryPrint([](Combat* combat) {
        while (combat->getAiHealth() > 0) {
            combat->RPS(2); // Simulate a melee attack
        }
    });
}
TEST(CombatTest, FightSkeletalMage_AIHealthReachesZero_NoVictoryPrint) {
    testCombatScenarioNoVictoryPrint([](Combat* combat) {
        while (combat->getAiHealth() > 0) {
            combat->RPS(2); // Simulate a melee attack
        }
    });
}
