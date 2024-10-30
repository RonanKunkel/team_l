#include <sstream>
#include "gtest/gtest.h"
#include "PuzzleRoom.h"

TEST(PuzzleRoomTest, InteractCorrectAnswer) {
    PuzzleRoom puzzleRoom;

    // Provide the correct answer for testing success scenario
    std::istringstream simulated_input("2\n");
    std::cin.rdbuf(simulated_input.rdbuf());

    testing::internal::CaptureStdout();
    puzzleRoom.interact();
    std::string output = testing::internal::GetCapturedStdout();

    // Adjust the expected message based on your actual output
    EXPECT_TRUE(output.find("As the words leave your mouth "
    "the magical door yields") != std::string::npos);
}

TEST(PuzzleRoomTest, MoveNorth) {
    PuzzleRoom puzzleRoom;

    // Provide the choice for moving North
    std::istringstream simulated_input("1\n");
    std::cin.rdbuf(simulated_input.rdbuf());

    testing::internal::CaptureStdout();
    puzzleRoom.move();
    std::string output = testing::internal::GetCapturedStdout();

    // Adjust the expected message based on your actual output
    EXPECT_TRUE(output.find("You step through the large doors "
    "into the dungeon") != std::string::npos);
}

TEST(PuzzleRoomTest, InspectOutput) {
    PuzzleRoom puzzleRoom;

    testing::internal::CaptureStdout();
    puzzleRoom.inspect();
    std::string output = testing::internal::GetCapturedStdout();

    // Adjust the expected message based on your actual output
    EXPECT_TRUE(output.find("You inspect the door, "
    "and see a riddle") != std::string::npos);
}
