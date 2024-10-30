/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

#include "EarthShardRoom.h"
#include "actionClass.h"
#include "Items.h"
#include "UI.h"

EarthShardRoom::EarthShardRoom() {}

EarthShardRoom::~EarthShardRoom() {}

void EarthShardRoom::entryDescription() {
    UI* print = new UI();
    system("clear");
    print->printIng1Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "Stepping into the next room, the air "
    "is tinged with the scent of minerals as your "
    "surroundings transform. The chamber\n";
    print->printSpaces();
    std::cout << "is adorned with dull green crystal ";
    std::cout << "ore deposits, their muted glow ";
    std::cout << "casting a subtle ambiance across ";
    std::cout << "the cavern walls.\n";
    print->printSpaces();
    std::cout << "However, at the room's focal point, a single crystal"
    "radiates a vibrant glow, its luminescence standing"
    "in stark\n";
    print->printSpaces();
    std::cout << "contrast to the surrounding muted hues,"
    "beckoning with an otherworldly allure.\n\n";
    print->printEndBuffer();
    delete print;
}

void EarthShardRoom::interact() {
    UI* print = new UI();
    system("clear");
    print->printIng1Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "Approaching the radiant crystal at the ";
    std::cout << "room's center, each step echoes through the cavern as ";
    std::cout << "you draw near. With a\n";
    print->printSpaces();
    std::cout << "careful hand, you pluck the crystal from its ";
    std::cout << "embedded embrace, feeling it's cool, ";
    std::cout << "smooth surface resonate with an\n";
    print->printSpaces();
    std::cout << "energy that pulses gently through your ";
    std::cout << "fingertips. Your keen eyes ";
    std::cout << "discern a simple wooden door at the end of the\n";
    print->printSpaces();
    std::cout << "cavern, its edges bathed in the soft fire glow "
    "that beckons you towards an unseen passage.\n\n";
    std::cout << std::setw(93) << "YOU HAVE GAINED THE ";
    getItem(Items::EARTHSHARD);
    std::cout << "\n\n";
    print->printEndBuffer();
    delete print;
    //Gain Earth Shard
}

void EarthShardRoom::move() {
    std::string choice;
    UI* print = new UI();
    do {
    system("clear");
    print->printIng1Border();
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
    print->printIng1Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "Your hand opens the wooden door and "
    "you walk through...\n\n";
    print->printEndBuffer();
    }
    if (choice == "2") { //East
    system("clear");
    print->printIng1Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "The walls are covered in crystals "
    "can't go that way...\n\n";
    print->printEndBuffer();
    }
    if (choice == "3") { // South
    system("clear");
    print->printIng1Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "I just got the first ingredient "
    "I can't leave yet...\n\n";
    print->printEndBuffer();
    }
    if (choice == "4") { //West
    system("clear");
    print->printIng1Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "Looks like I can't go this way...\n\n";
    print->printEndBuffer();
    }
    } while (choice != "1");
    delete print;
}

void EarthShardRoom::inspect() {
    UI* print = new UI();
    system("clear");
    print->printIng1Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "There is nothing to inspect in this room." << "\n\n";
    print->printEndBuffer();
    delete print;
}
