/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/

#include <iostream>
#include <string>

#include "SunlightRoom.h"
#include "actionClass.h"

    SunlightRoom::SunlightRoom() {}

    SunlightRoom::~SunlightRoom() {}

void SunlightRoom::entryDescription() {
    UI* print = new UI();
    system("clear");
    print->printIng3Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "As you open the heavy metal door, "
    "an intense burst of blinding light momentarily "
    "overwhelms your senses.\n";
    print->printSpaces();
    std::cout << "As your vision adjusts, "
    "you step into a room suffused with pure "
    "sunlight. A shallow pool at the center\n";
    print->printSpaces();
    std::cout << "reflects the celestial glow. "
    "Magnifying glasses are strategically hung "
    "above the pool, focusing their beams\n";
    print->printSpaces();
    std::cout << "onto a magical instrument "
    "that gracefully drips sunlight "
    "into the tranquil pool. The sun's rays, "
    "filtering\n";
    print->printSpaces();
    std::cout << "through a crack in the ceiling.\n\n";
    print->printEndBuffer();
    delete print;
    }

void SunlightRoom::interact() {
    UI* print = new UI();
    system("clear");
    print->printIng3Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "Retrieving a crystal vial from "
    "your bag and averting your eyes from the "
    "radiant pool, you gently dip the vial\n";
    print->printSpaces();
    std::cout << "into the shimmering sunlight. "
    "The crystal vessel fills with the essence "
    "of celestial radiance, its brilliance\n";
    print->printSpaces();
    std::cout << "captured within the confines "
    "of the delicate container. You secure the "
    "filled vial back into your bag.\n\n";
    std::cout << std::setw(93) << "YOU HAVE GAINED ";
    getItem(Items::SUNLIGHT);
    std::cout << "\n\n";
    print->printEndBuffer();
    std::cout << std::endl;
    delete print;
    }

void SunlightRoom::move() {
    std::string choice;
    UI* print = new UI();
    do {
    system("clear");
    print->printIng3Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "Where would you like to move?\n";
    print->printSpaces();
    std::cout << "1. Move North\n";
    print->printSpaces();
    std::cout <<"2. Move East\n";
    print->printSpaces();
    std::cout <<"3. Move South\n";
    print->printSpaces();
    std::cout <<"4. Move West\n";
    print->printStdBorder();
    print->printInput();
    std::cin >> choice;
    system("clear");
    if (choice == "1") { // North
    system("clear");
    print->printIng3Border();
    print->printStdBorder();
    print->printSpaces();
        std::cout << "You see instruments littering the walls...\n\n";
    print->printEndBuffer();
    }
    if (choice == "2") { //East
    system("clear");
    print->printIng3Border();
    print->printStdBorder();
    print->printSpaces();
        std::cout << "The light is so blinding I "
        "should get out of here...\n\n";
    print->printEndBuffer();
    }
    if (choice == "3") { // South
    system("clear");
    print->printIng3Border();
    print->printStdBorder();
    print->printSpaces();
        std::cout << "I have no idea what any of these "
        "instrumets do...\n\n";
    print->printEndBuffer();
    }
    if (choice == "4") { //West
    system("clear");
    print->printIng3Border();
    print->printStdBorder();
    print->printSpaces();
        std::cout << "You return to the ancient library...\n\n";
    print->printEndBuffer();
    }
    } while (choice != "4");
    delete print;
}

void SunlightRoom::inspect() {
    UI* print = new UI();
    system("clear");
    print->printIng3Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "The room is so bright you are having a "
    "hard time finding things to look at.\n\n";
    print->printEndBuffer();
    delete print;
}
