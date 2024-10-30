#include "gtest/gtest.h"
#include "SunlightRoom.h"

// Test the entry description of SunlightRoom
TEST(SunlightRoomTest, EntryDescription) {
    SunlightRoom sunlightRoom;

    // Capture the output of the entry description
    testing::internal::CaptureStdout();
    sunlightRoom.entryDescription();
    std::string output = testing::internal::GetCapturedStdout();

    // Adjust the expected message based on your actual output
    EXPECT_TRUE(output.find("As you open the heavy metal door, "
    "an intense burst of blinding light momentarily "
    "overwhelms your senses.") != std::string::npos);
    EXPECT_TRUE(output.find("Magnifying glasses are "
    "strategically hung above the pool, "
    "focusing their beams") != std::string::npos);
}

// Test the interact function of SunlightRoom
TEST(SunlightRoomTest, Interact) {
    SunlightRoom sunlightRoom;

    // Mock user input for the interact function
    std::istringstream simulated_input("1\n");
    std::cin.rdbuf(simulated_input.rdbuf());

    // Capture the output of the interact function
    testing::internal::CaptureStdout();
    sunlightRoom.interact();
    std::string output = testing::internal::GetCapturedStdout();

    // Adjust the expected message based on your actual output
    EXPECT_TRUE(output.find("Retrieving a crystal vial "
    "from your bag and averting your eyes from the "
    "radiant pool, you gently dip the vial") != std::string::npos);
    EXPECT_TRUE(output.find("YOU HAVE GAINED") != std::string::npos);
}

// Test the move function of SunlightRoom
TEST(SunlightRoomTest, Move) {
    SunlightRoom sunlightRoom;

    // Provide the choice for moving North
    std::istringstream simulated_input("4\n");
    std::cin.rdbuf(simulated_input.rdbuf());

    testing::internal::CaptureStdout();
    sunlightRoom.move();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("You return to the "
    "ancient library...") != std::string::npos);
}

// Test the inspect function of SunlightRoom
TEST(SunlightRoomTest, Inspect) {
    SunlightRoom sunlightRoom;

    // Capture the output of the inspect function
    testing::internal::CaptureStdout();
    sunlightRoom.inspect();
    std::string output = testing::internal::GetCapturedStdout();

    // Adjust the expected message based on your actual output
    EXPECT_TRUE(output.find("The room is so bright you "
    "are having a hard time finding things "
    "to look at.") != std::string::npos);
}
