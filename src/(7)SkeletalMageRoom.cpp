/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/

#include <iostream>
#include <string>

#include "SkeletalMageRoom.h"
#include "actionClass.h"

SkeletalMageRoom::SkeletalMageRoom() {}

SkeletalMageRoom::~SkeletalMageRoom() {}

void SkeletalMageRoom::entryDescription() {
    UI* print = new UI();
    system("clear");
    print->printCombat3Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "As you enter the ancient sprawling "
    "library, the musty scent of decaying books "
    "envelops the air, each shelf bearing\n";
    print->printSpaces();
    std::cout << "the weight of forgotten tomes. "
    "In the center, a skeletal archmage hovers "
    "amidst floating volumes, its bones\n";
    print->printSpaces();
    std::cout << "rattling with arcane energy. With a chilling "
    "screech, the archmage's spectral form launches "
    "an ethereal\n";
    print->printSpaces();
    std::cout << "assault that resonates through the ancient "
    "repository of lost wisdom.\n\n";
    print->printEndBuffer();
    delete print;
}

void SkeletalMageRoom::interact() {
    UI* print = new UI();
    system("clear");
    print->printCombat3Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "You attempt to pick up a book and "
    "it crumbles into dust.\n\n";
    print->printEndBuffer();
    delete print;
}

void SkeletalMageRoom::move() {
    std::string choice;
    UI* print = new UI();
    do {
    system("clear");
    print->printCombat3Border();
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
    print->printCombat3Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "Most of the books here are falling apart...\n\n";
    print->printEndBuffer();
    }
    if (choice == "2") { //East
    print->printCombat3Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "You pull open the heavy metal"
    "door and walk through...\n\n";
    print->printEndBuffer();
    }
    if (choice == "3") { // South
    print->printCombat3Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "You see one book that stands out from the rest, "
    "'The Art Of Bingo'. No one would want to read this...\n\n";
    print->printEndBuffer();
    }
    if (choice == "4") { //West
    print->printCombat3Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "You remember the Raven, and think you could ";
    std::cout << "use a break from them\n\n";
    print->printEndBuffer();
    }
    } while (choice != "2");
delete print;
}

void SkeletalMageRoom::move4() {
    std::string choice;
    UI* print = new UI();
    do {
    print->printCombat3Border();
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
    print->printCombat3Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "Most of the books here are falling apart...\n\n";
    print->printEndBuffer();
    }
    if (choice == "2") { //East
    system("clear");
    print->printCombat3Border();
    print->printStdBorder();
    print ->printSpaces();
    std::cout << "That room is way to bright, I shouldn't go back "
    "in there\n\n";
    print->printEndBuffer();
    }
    if (choice == "3") { // South
    system("clear");
    print->printCombat3Border();
    print->printStdBorder();
    print ->printSpaces();
    std::cout << "You see one book that stands out from the rest, "
    "'The Art Of Bingo'. No one would want to read this...\n\n";
    print->printEndBuffer();
    }
    if (choice == "4") { //West
    system("clear");
    print->printCombat3Border();
    print->printStdBorder();
    print ->printSpaces();
    std::cout << "You return to the comfort of the shop...\n\n";
    print->printEndBuffer();
    }
    } while (choice != "4");
    delete print;
}


    void SkeletalMageRoom::inspect() {
    UI* print = new UI();
    system("clear");
    print->printCombat3Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "After a tense confrontation in the "
    "ancient library, shelves bear signs of spectral "
    "impact, books slightly displaced\n";
    print->printSpaces();
    std::cout << "in the aftermath. In the void where the "
    "skeletal archmage once loomed, a haunting silence "
    "replaced its screeches.\n";
    print->printSpaces();
    std::cout << "Amidst this mystical aftermath, your "
    "discerning eyes catch sight of a heavy metal door "
    "at the back of the room,\n";
    print->printSpaces();
    std::cout << "shrouded in the remnants of arcane energy.\n\n";
    print->printEndBuffer();
    delete print;
    }
