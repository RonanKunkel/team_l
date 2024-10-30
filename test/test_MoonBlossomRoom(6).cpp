#include <sstream>
#include "gtest/gtest.h"
#include "MoonBlossomRoom.h"

TEST(MoonBlossomRoomTest, MoveEast) {
    MoonBlossomRoom moonBlossomRoom;

    // Simulate moving east
    std::istringstream simulated_input("2\n");
    std::cin.rdbuf(simulated_input.rdbuf());

    // Capture output of moving east
    testing::internal::CaptureStdout();
    moonBlossomRoom.move();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_TRUE(output.find("You return to the "
    "undead knight's room...") != std::string::npos);
}


TEST(MoonBlossomRoomTest, InspectOutput) {
    MoonBlossomRoom moonBlossomRoom;

    testing::internal::CaptureStdout();
    moonBlossomRoom.inspect();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_TRUE(output.find("There is a stillness in "
    "the air and a calming silence...") != std::string::npos);
}


TEST(MoonBlossomRoomTest, Interact) {
    MoonBlossomRoom moonBlossomRoom;


    // Capture the output of the interaction
    testing::internal::CaptureStdout();
    moonBlossomRoom.interact();
    std::string output = testing::internal::GetCapturedStdout();

    // Adjust the expected message based on your actual output
    EXPECT_TRUE(output.find("YOU HAVE GAINED THE ") != std::string::npos);
}

