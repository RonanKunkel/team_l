/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/

#include <iostream>
#include <string>

#include "GolemRoom.h"
#include "actionClass.h"

GolemRoom::GolemRoom() {}

GolemRoom::~GolemRoom() {}

void GolemRoom::entryDescription() {
    UI* print = new UI();
    system("clear");
    print->printCombat1Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "Upon entering the room, your attention is immediately drawn "
    "to the towering golem at the center, its once\n";
    print->printSpaces();
    std::cout << "formidable stone form now harmoniously "
    "entwined with vibrant, "
    "overgrown vines and moss. The air is thick with a\n";
    print->printSpaces();
    std::cout << "nearthy fragrance as the greenery climbs the carved walls. "
    "Suddenly, a subtle rumble reverberates through the\n";
    print->printSpaces();
    std::cout << "chamber, and the golem's eyes flare with "
    "an otherworldly glow. "
    "With an unexpected burst of life, the golem comes\n";
    print->printSpaces();
    std::cout << "to existence, vines and moss cascading off "
    "its awakening form, "
    "and it lunges forward.\n\n";
    print->printEndBuffer();
    delete print;
}

void GolemRoom::move() {
    std::string choice;
    UI* print = new UI();
    do {
    system("clear");
    print->printCombat1Border();
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
    print->printCombat1Border();
    print->printStdBorder();
    print->printSpaces();
        std::cout << "You go through the hidden passage...\n\n";
    print->printEndBuffer();
    }
    if (choice == "2") { //East
    system("clear");
    print->printCombat1Border();
    print->printStdBorder();
    print->printSpaces();
        std::cout << "You stare at the walls covered in "
        "vegitation...\n\n";
    print->printEndBuffer();
    }
    if (choice == "3") { // South
    system("clear");
    print->printCombat1Border();
    print->printStdBorder();
    print->printSpaces();
        std::cout << "You remember the kings words and refuse to leave...\n\n";
    print->printEndBuffer();
    }
    if (choice == "4") { //West
    system("clear");
    print->printCombat1Border();
    print->printStdBorder();
    print->printSpaces();
        std::cout << "Though the walls look nice there "
         "is no way forward...\n\n";
    print->printEndBuffer();
    }
    } while (choice != "1");
delete print;
}

void GolemRoom::interact() {
    UI* print = new UI();
    system("clear");
    print->printCombat1Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "There is nothing to interact with\n\n";
    print->printEndBuffer();
    delete print;
}

void GolemRoom::inspect() {
    UI* print = new UI();
    system("clear");
    print->printCombat1Border();
    print->printStdBorder();
    print->printSpaces();
std::cout << "Nature's embrace bears witness "
"to the aftermath of the battle that unfolded. "
"The defeated stone golem lies on the\n";
print->printSpaces();
std::cout << "ground, its once formidable form "
"now surrounded by vibrant foliage that cascades down "
"the cavern walls, entwined\n";
print->printSpaces();
std::cout << "with the ancient stone. Dripping water echoes, "
"creating a rhythmic melody reverberating through the lush, "
"overgrown\n";
print->printSpaces();
std::cout << "space as if the very heart "
"of the cave still pulsates with life. Amidst "
"this tranquility, a dislodged stone\n";
print->printSpaces();
std::cout << "reveals a hidden passage to the north.\n\n";
print->printEndBuffer();
delete print;
}


// REMEMBER TO RECALL GETCHOICE FOR INSPECT AND INTERACT.
