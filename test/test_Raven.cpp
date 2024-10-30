#include "gtest/gtest.h"
#include "Raven.h"
#include "NPC.h"
#include "UI.h"

// Test if the Raven's dialogue provides the correct options
TEST(RavenTest, DialogueOptions) {
    Raven raven;

    // Simulate choosing to trade
    std::istringstream simulated_input("1\n");
    std::cin.rdbuf(simulated_input.rdbuf());

    // Capture the output of the dialogue
    testing::internal::CaptureStdout();
    raven.dialogue();
    std::string output = testing::internal::GetCapturedStdout();

    // Adjust the expected message based on your actual output
    EXPECT_TRUE(output.find("Could I interest "
    "you in my wares?") != std::string::npos);
    EXPECT_TRUE(output.find("1: Wisdom potion") != std::string::npos);
}

// Test if the Raven's trade for wisdom potion works correctly
TEST(RavenTest, TradeForWisdomPotion) {
    Raven raven;

    // Set the last trade type to wisdom potion
    raven.setLastTradeType(1);

    // Simulate choosing wisdom potion
    std::istringstream simulated_input("1\n");
    std::cin.rdbuf(simulated_input.rdbuf());

    // Capture the output of the trade
    testing::internal::CaptureStdout();
    raven.trade();
    std::string output = testing::internal::GetCapturedStdout();

    // Adjust the expected message based on your actual output
    EXPECT_TRUE(output.find("Ahh, a fine choice! This "
    "will increase your arcane knowledge.") != std::string::npos);
    EXPECT_TRUE(output.find("Guess i'm too "
    "smart for this.") != std::string::npos);
}

// Test if returning to the room after trade provides the correct message
TEST(RavenTest, ReturnToRoomAfterTrade) {
    Raven raven;

    // Simulate choosing to return to the room
    std::istringstream simulated_input("2\n");
    std::cin.rdbuf(simulated_input.rdbuf());

    // Capture the output of returning to the room
    testing::internal::CaptureStdout();
    raven.dialogue();
    std::string output = testing::internal::GetCapturedStdout();

    // Adjust the expected message based on your actual output
    EXPECT_TRUE(output.find("Very well if you see anything "
    "shiny don't be afraid to bring it here.") != std::string::npos);
}
