#include <sstream>
#include "gtest/gtest.h"
#include "UndeadKnightRoom.h"

TEST(UndeadKnightRoomTest, EntryDescription) {
    UndeadKnightRoom undeadKnightRoom;

    testing::internal::CaptureStdout();
    undeadKnightRoom.entryDescription();
    std::string output = testing::internal::GetCapturedStdout();

    // Adjust the expected message based on your actual output
    EXPECT_TRUE(output.find("Entering the room, skeletal "
    "remains are scattered") != std::string::npos);
}

TEST(UndeadKnightRoomTest, Interact) {
    UndeadKnightRoom undeadKnightRoom;

    testing::internal::CaptureStdout();
    undeadKnightRoom.interact();
    std::string output = testing::internal::GetCapturedStdout();

    // Adjust the expected message based on your actual output
    EXPECT_TRUE(output.find("There is nothing but decay "
    "and dust.") != std::string::npos);
}


TEST(UndeadKnightRoomTest, MoveWest) {
    UndeadKnightRoom undeadKnightRoom;

    // Provide the choice for moving West
    std::istringstream simulated_input("4\n");
    std::cin.rdbuf(simulated_input.rdbuf());

    testing::internal::CaptureStdout();
    undeadKnightRoom.move();
    std::string output = testing::internal::GetCapturedStdout();

    // Adjust the expected message based on your actual output
    EXPECT_TRUE(output.find("You open the heavy ornate "
    "door and walk through") != std::string::npos);
}

TEST(UndeadKnightRoomTest, Inspect) {
    UndeadKnightRoom undeadKnightRoom;

    testing::internal::CaptureStdout();
    undeadKnightRoom.inspect();
    std::string output = testing::internal::GetCapturedStdout();

    // Adjust the expected message based on your actual output
    EXPECT_TRUE(output.find("Having vanquished the undead "
    "knight, the room is now") != std::string::npos);
}
