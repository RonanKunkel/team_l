#include "gtest/gtest.h"
#include "SkeletalMageRoom.h"

// Test the entry description of SkeletalMageRoom
TEST(SkeletalMageRoomTest, EntryDescription) {
    SkeletalMageRoom skeletalMageRoom;

    // Capture the output of the entry description
    testing::internal::CaptureStdout();
    skeletalMageRoom.entryDescription();
    std::string output = testing::internal::GetCapturedStdout();

    // Adjust the expected message based on your actual output
    EXPECT_TRUE(output.find("As you enter the ancient "
    "sprawling library") != std::string::npos);
    EXPECT_TRUE(output.find("the archmage's spectral form "
    "launches an ethereal") != std::string::npos);
}

// Test the interact function of SkeletalMageRoom
TEST(SkeletalMageRoomTest, Interact) {
    SkeletalMageRoom skeletalMageRoom;

    // Capture the output of the interact function
    testing::internal::CaptureStdout();
    skeletalMageRoom.interact();
    std::string output = testing::internal::GetCapturedStdout();

    // Adjust the expected message based on your actual output
    EXPECT_TRUE(output.find("You attempt to pick up a book and "
    "it crumbles into dust.") != std::string::npos);
}

TEST(SkeletalMageRoomTest, Move) {
    SkeletalMageRoom skeletalMageRoom;

    // Provide the choice for moving North
    std::istringstream simulated_input("2\n");
    std::cin.rdbuf(simulated_input.rdbuf());

    testing::internal::CaptureStdout();
    skeletalMageRoom.move();
    std::string output = testing::internal::GetCapturedStdout();

    // Adjust the expected message based on your actual output
    EXPECT_TRUE(output.find("You pull open the "
    "heavy metal") != std::string::npos);
}

TEST(SkeletalMageRoomTest, MoveAnotherWay) {
    SkeletalMageRoom skeletalMageRoom;

    // Provide the choice for moving North
    std::istringstream simulated_input("4\n");
    std::cin.rdbuf(simulated_input.rdbuf());

    testing::internal::CaptureStdout();
    skeletalMageRoom.move4();
    std::string output = testing::internal::GetCapturedStdout();

    // Adjust the expected message based on your actual output
    EXPECT_TRUE(output.find("You return to the comfort "
    "of the shop...") != std::string::npos);
}

// Test the inspect function of SkeletalMageRoom
TEST(SkeletalMageRoomTest, Inspect) {
    SkeletalMageRoom skeletalMageRoom;

    // Capture the output of the inspect function
    testing::internal::CaptureStdout();
    skeletalMageRoom.inspect();
    std::string output = testing::internal::GetCapturedStdout();

    // Adjust the expected message based on your actual output
    EXPECT_TRUE(output.find("After a tense confrontation "
    "in the ancient library") != std::string::npos);
    EXPECT_TRUE(output.find("shrouded in the remnants of "
    "arcane energy.") != std::string::npos);
}
