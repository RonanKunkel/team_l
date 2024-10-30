/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

#include "NPC.h"
#include "UI.h"
#include "Snail.h"
#include "Raven.h"
#include "ShopRoom.h"
#include "actionClass.h"

ShopRoom::ShopRoom() {}

ShopRoom::~ShopRoom() {}

void ShopRoom::entryDescription() {
    std::unique_ptr<UI> print = std::make_unique<UI>();
    system("clear");
    print->printShopBorder();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "Upon opening the wooden door, "
    "you find yourself in a quaint wooden shop, "
    "an unexpected sanctuary. A snail and a white \n";
    print->printSpaces();
    std::cout << "raven gracefully tend to the wares, "
    "their eyes holding a mysterious wisdom. "
    "The air is imbued with a soothing energy \n\n";
    print->printEndBuffer();
}

void ShopRoom::interact() { //interact with raven and snail
    std::string choice;
    std::unique_ptr<UI> print = std::make_unique<UI>();
    do {
    system("clear");
    print->printShopBorder();
    print->printStdBorder();
    std::cout << "\n";
    print->printSpaces();
    std::cout << "What do you wish to do?\n";
    print->printSpaces();
    std::cout << "1: Talk to the Raven\n";
    print->printSpaces();
    std::cout << "2: Talk to the Snail\n\n";
    print->printStdBorder();
    print->printInput();
    std::cin >> choice;
    system("clear");
    if (choice == "1") {
        _raven->dialogue();
    } else if (choice == "2") {
        _snail->dialogue();
    }
    } while (choice != "1" && choice != "2");
}

void ShopRoom::move() {
    std::string choice;
    std::unique_ptr<UI> print = std::make_unique<UI>();
    do {
    system("clear");
    print->printShopBorder();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "Where would you like to move?\n";
    print->printSpaces();
    std::cout << "1. Move North\n";
    print->printSpaces();
    std::cout << "2. Move East\n";
    print->printSpaces();
    std::cout << "3. Move South\n";
    print->printSpaces();
    std::cout << "4. Move West\n\n";
    print->printStdBorder();
    print->printInput();
    std::cin >> choice;
    system("clear");

    if (choice == "1") { // North
    system("clear");
    print->printShopBorder();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "There is a magic sigel blocking the way...\n\n";
    print->printEndBuffer();
    }
    if (choice == "2") { //East
    system("clear");
    print->printShopBorder();
    print->printStdBorder();
    print ->printSpaces();
    std::cout << "The intricately carved wooden door "
    "is locked...\n\n";
    print->printEndBuffer();
    }
    if (choice == "3") { // South
    system("clear");
    print->printShopBorder();
    print->printStdBorder();
    print ->printSpaces();
    std::cout << "You can't go back, you've only "
    "started...\n\n";
    print->printEndBuffer();
    }
    if (choice == "4") { //West
    system("clear");
    print->printShopBorder();
    print->printStdBorder();
    print ->printSpaces();
    std::cout << "You struggle to open the wrought iron "
    "door, but you eventually pry it open and walk through...\n\n";
    print->printEndBuffer();
    }
    } while (choice != "4");
}

void ShopRoom::move7() {
    std::string choice;
    std::unique_ptr<UI> print = std::make_unique<UI>();
    do {
    print->printShopBorder();
    print->printStdBorder();
    std::cout << "\n";
    print->printSpaces();
    std::cout << "Where would you like to move?\n";
    print->printSpaces();
    std::cout << "1. Move North\n";
    print->printSpaces();
    std::cout << "2. Move East\n";
    print->printSpaces();
    std::cout << "3. Move South\n";
    print->printSpaces();
    std::cout << "4. Move West\n\n";
    print->printStdBorder();
    print->printInput();
    std::cin >> choice;
    system("clear");

    if (choice == "1") { // North
    system("clear");
    print->printShopBorder();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "There is a magic sigel blocking the way...\n\n";
    print->printEndBuffer();
    }
    if (choice == "2") { //East
    system("clear");
    print->printShopBorder();
    print->printStdBorder();
    print ->printSpaces();
    std::cout << "Checking the intricately carved wooden "
    "door you find that is now unlocked\n";
    print ->printSpaces();
    std::cout << "you open it and walk through...\n\n";
    print->printEndBuffer();
    }
    if (choice == "3") { // South
    system("clear");
    print->printShopBorder();
    print->printStdBorder();
    print ->printSpaces();
    std::cout << "You have two of the ingredients needed, "
    "you cant give up yet...\n\n";
    print->printEndBuffer();
    }
    if (choice == "4") { //West
    system("clear");
    print->printShopBorder();
    print->printStdBorder();
    print ->printSpaces();
    std::cout << "I need to stop thinking in the past, "
    "I must push on...\n\n";
    print->printEndBuffer();
    }
    } while (choice != "2");
}

void ShopRoom::inspect() {
std::unique_ptr<UI> print = std::make_unique<UI>();
    system("clear");
    print->printShopBorder();
    print->printStdBorder();
    print ->printSpaces();
    std::cout << "You gaze upon the statue of the god, "
    "reading the plaque it states.\n";
    print ->printSpaces();
    std::cout << "*Bonzo The All Consuming*\n";
    print ->printSpaces();
    std::cout << "I would not want to meet this god.\n\n";
    print->printEndBuffer();
}
