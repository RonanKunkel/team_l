#include <sstream>
#include "gtest/gtest.h"
#include "GolemRoom.h"

TEST(GolemRoomTest, MoveNorth) {
    GolemRoom golemRoom;

    // Provide the choice for moving North
    std::istringstream simulated_input("1\n");
    std::cin.rdbuf(simulated_input.rdbuf());

    testing::internal::CaptureStdout();
    golemRoom.move();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("You go through "
    "the hidden passage") != std::string::npos);
}


TEST(GolemRoomTest, InspectOutput) {
    GolemRoom golemRoom;

    testing::internal::CaptureStdout();
    golemRoom.inspect();
    std::string output = testing::internal::GetCapturedStdout();

    // Adjust the expected message based on your actual output
    EXPECT_TRUE(output.find("Nature's embrace bears witness "
    "to the aftermath of the battle") != std::string::npos);
}

TEST(GolemRoomTest, InteractOutput) {
    GolemRoom golemRoom;

    testing::internal::CaptureStdout();
    golemRoom.interact();
    std::string output = testing::internal::GetCapturedStdout();

    // Adjust the expected message based on your actual output
    EXPECT_TRUE(output.find("There is nothing to "
    "interact with") != std::string::npos);
}

TEST(GolemRoomTest, CombatInteraction) {
    GolemRoom golemRoom;

    // Simulate a combat interaction
    std::istringstream simulated_input("1\n");
    std::cin.rdbuf(simulated_input.rdbuf());

    // Capture the output of the combat interaction
    testing::internal::CaptureStdout();
    golemRoom.interact();
    std::string output = testing::internal::GetCapturedStdout();

    // Adjust the expected message based on your actual output
    EXPECT_TRUE(output.find("There is nothing to "
    "interact with") != std::string::npos);
}

