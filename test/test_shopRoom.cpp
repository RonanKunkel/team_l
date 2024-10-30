#include "gtest/gtest.h"
#include "ShopRoom.h"
#include "Raven.h"

// Test fixture for ShopRoom
class ShopRoomTest : public testing::Test {
 protected:
    ShopRoom shopRoom;
};

// Test entryDescription function
TEST_F(ShopRoomTest, EntryDescription) {
    testing::internal::CaptureStdout();
    shopRoom.entryDescription();
    std::string output = testing::internal::GetCapturedStdout();

    // Add your expectations for the output here
    EXPECT_NE(output.find("Upon opening the wooden door"), std::string::npos);
    EXPECT_NE(output.find("you find yourself in "
    "a quaint wooden shop"), std::string::npos);
}

// Test move function
TEST_F(ShopRoomTest, Move) {
    testing::internal::CaptureStdout();

    // Redirect cin to simulate user input
    std::istringstream simulated_input("4\n");
    std::streambuf* orig_cin = std::cin.rdbuf(simulated_input.rdbuf());

    shopRoom.move();

    // Restore original cin buffer
    std::cin.rdbuf(orig_cin);

    std::string output = testing::internal::GetCapturedStdout();

    // Check if the output contains key phrases
    EXPECT_NE(output.find("struggle to open "
    "the wrought iron door"), std::string::npos);

    // Check that the loop exits as expected without using regex
    EXPECT_NE(output.find("Where would you "
    "like to move"), std::string::npos);
    EXPECT_NE(output.find("1. Move North"), std::string::npos);
    EXPECT_NE(output.find("2. Move East"), std::string::npos);
    EXPECT_NE(output.find("3. Move South"), std::string::npos);
    EXPECT_NE(output.find("4. Move West"), std::string::npos);
}

// Test inspect function
TEST_F(ShopRoomTest, Inspect) {
    testing::internal::CaptureStdout();

    // Redirect cin to simulate user input
    std::istringstream simulated_input("dummy\n");
    std::streambuf* orig_cin = std::cin.rdbuf(simulated_input.rdbuf());

    shopRoom.inspect();

    // Restore original cin buffer
    std::cin.rdbuf(orig_cin);

    std::string output = testing::internal::GetCapturedStdout();

    // Add your expectations for the output here
    EXPECT_NE(output.find("You gaze upon the "
    "statue of the god"), std::string::npos);
    EXPECT_NE(output.find("*Bonzo The All Consuming*"), std::string::npos);
    EXPECT_NE(output.find("I would not want "
    "to meet this god"), std::string::npos);
}

