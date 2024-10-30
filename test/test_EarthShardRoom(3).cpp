#include <sstream>
#include <algorithm>
#include "gtest/gtest.h"
#include "EarthShardRoom.h"
#include "actionClass.h"

TEST(EarthShardRoomTest, MoveNorth) {
    EarthShardRoom earthShardRoom;

    // Simulate moving north
    std::istringstream simulated_input("1\n");
    std::cin.rdbuf(simulated_input.rdbuf());

    // Capture the output of moving north
    testing::internal::CaptureStdout();
    earthShardRoom.move();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_TRUE(output.find("Your hand opens the wooden "
    "door and you walk through") != std::string::npos);
}

TEST(EarthShardRoomTest, Inspect) {
    EarthShardRoom earthShardRoom;

    // Simulate an inspection
    std::istringstream simulated_input("1\n");
    std::cin.rdbuf(simulated_input.rdbuf());

    // Capture the output of the inspection
    testing::internal::CaptureStdout();
    earthShardRoom.inspect();
    std::string output = testing::internal::GetCapturedStdout();

    // Adjust the expected message based on your actual output
    EXPECT_TRUE(output.find("There is nothing to inspect "
    "in this room.") != std::string::npos);
}
