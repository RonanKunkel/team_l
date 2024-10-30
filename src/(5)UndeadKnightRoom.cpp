/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/

#include <iostream>
#include <string>

#include "UndeadKnightRoom.h"
#include "actionClass.h"


UndeadKnightRoom::UndeadKnightRoom() {}

UndeadKnightRoom::~UndeadKnightRoom() {}

void UndeadKnightRoom::entryDescription() {
    UI* print = new UI();
    system("clear");
    print->printCombat2Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "Entering the room, skeletal remains are scattered "
    "across the cold, stone floor, silent witnesses to battles long\n";
    print->printSpaces();
    std::cout << "past. At the room's heart, an imposing figure "
    "stands tall amidst the bones a large undead knight, its presence\n";
    print->printSpaces();
    std::cout << "casting a chilling aura that permeates the chamber. "
    "Suddenly, the undead knight stirs to life, its hollow gaze\n";
    print->printSpaces();
    std::cout << "fixing upon you as it unsheathes its weapon, "
    "and launches a relentless attack.\n\n";
    print->printEndBuffer();
    delete print;
    }

void UndeadKnightRoom::interact() {
    UI* print = new UI();
    system("clear");
    print->printCombat2Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "There is nothing but decay and dust.\n\n";
    print->printEndBuffer();
    delete print;
}

void UndeadKnightRoom::move() {
    std::string choice;
    UI* print = new UI();
    do {
    system("clear");
    print->printCombat2Border();
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
    std::cout << "4. Move West\n";
    print->printStdBorder();
    print->printInput();
    std::cin >> choice;
    system("clear");
    if (choice == "1") { // North
    system("clear");
    print->printCombat2Border();
    print->printStdBorder();
    print->printSpaces();
        std::cout << "There are skeletons hanging on the wall...\n\n";
    print->printEndBuffer();
    }
    if (choice == "2") { //East
    system("clear");
    print->printCombat2Border();
    print->printStdBorder();
    print->printSpaces();
        std::cout << "Though tempting, I probably should press onward...\n\n";
    print->printEndBuffer();
    }
    if (choice == "3") { // South
    system("clear");
    print->printCombat2Border();
    print->printStdBorder();
    print->printSpaces();
        std::cout << "I don't think there is any way forward here...\n\n";
    print->printEndBuffer();
    }
    if (choice == "4") { //West
    system("clear");
    print->printCombat2Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "You open the heavy ornate door and walk through...\n\n";
    print->printEndBuffer();
    }
    } while (choice != "4");
    delete print;
}

void UndeadKnightRoom::move4() {
    std::string choice;
    UI* print = new UI();
    do {
    system("clear");
    print->printCombat2Border();
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
    std::cout << "4. Move West\n";
    print->printStdBorder();
    print->printInput();
    std::cin >> choice;
    system("clear");
    if (choice == "1") { // North
    system("clear");
    print->printCombat2Border();
    print->printStdBorder();
    print->printSpaces();
        std::cout << "There are skeletons hanging on the wall...\n\n";
    print->printEndBuffer();
    }
    if (choice == "2") { //East
    system("clear");
    print->printCombat2Border();
    print->printStdBorder();
    print->printSpaces();
        std::cout << "You return to the comfort of the shop...\n\n";
    print->printEndBuffer();
    }
    if (choice == "3") { // South
    system("clear");
    print->printCombat2Border();
    print->printStdBorder();
    print->printSpaces();
        std::cout << "I don't think there is any way forward here...\n\n";
    print->printEndBuffer();
    }
    if (choice == "4") { //West
    print->printCombat2Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "I have no time to look at the artifacts I must "
    "press forward...\n\n";
    print->printEndBuffer();
    }
    } while (choice != "2");
    delete print;
}

void UndeadKnightRoom::inspect() {
    UI* print = new UI();
    system("clear");
    print->printCombat2Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "Having vanquished the undead knight, the room is now "
    "a testament to your hard-fought victory. Your triumph\n";
    print->printSpaces();
    std::cout << "transforms the space, the remnants of the fallen "
    "knight now serving as a solemn backdrop to your resilience in\n";
    print->printSpaces();
    std::cout << "the face of the macabre challenge. Amidst this scene, "
    "your keen eye catches sight of an ornate door at the back of\n";
    print->printSpaces();
    std::cout << "the room, hinting at the potential for further "
    "exploration to the west.\n\n";
    print->printEndBuffer();
    delete print;
}

