/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/

#include <iostream>
#include <string>


#include "MoonBlossomRoom.h"
#include "actionClass.h"

MoonBlossomRoom::MoonBlossomRoom() {}

MoonBlossomRoom::~MoonBlossomRoom() {}

void MoonBlossomRoom::entryDescription() {
    UI* print = new UI();
    system("clear");
    print->printIng2Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "Stepping into the room, your senses are immediately "
    "captivated by an array of diverse relics, each whispering tales\n";
    print->printSpaces();
    std::cout << "of bygone eras. At the room's center, within "
    "a carefully crafted glass box, lies the Ethereal Moon Blossom \n";
    print->printSpaces();
    std::cout << "a delicate bloom bathed in a soft, azure glow. "
    "Its ethereal presence creates a focal point of serene beauty.\n\n";
    print->printEndBuffer();
    delete print;
}

void MoonBlossomRoom::interact() {
    UI* print = new UI();
    system("clear");
    print->printIng2Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "Approaching the glass box you carefully lift its lid, "
    "revealing the radiant Ethereal Moon Blossom held within.\n";
    print->printSpaces();
    std::cout << "The azure glow intensifies, casting an enchanting "
    "illumination across the room. With a steady hand, you pluck the\n";
    print->printSpaces();
    std::cout << "delicate blossom from its ethereal display, feeling "
    "a subtle energy resonate through your fingertips. You faintly hear\n";
    print->printSpaces();
    std::cout << "a click from one of the previous rooms.\n\n";
    std::cout << std::setw(92) << "YOU HAVE GAINED THE ";
    getItem(Items::MOONBLOSSOM);
    std::cout << "\n\n";
    print->printEndBuffer();
    delete print;
    //Gain Moon Blossom
}

void MoonBlossomRoom::move() {
    std::string choice;
    UI* print = new UI();
    do {
    system("clear");
    print->printIng2Border();
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
    print->printIng2Border();
    print->printStdBorder();
    print->printSpaces();
        std::cout << "You look at the wall and see a portrait..."
            "is.. is that a rubber duck...?\n\n";
    print->printEndBuffer();
    }
    if (choice == "2") { //East
    system("clear");
    print->printIng2Border();
    print->printStdBorder();
    print->printSpaces();
        std::cout << "You return to the undead knight's room...\n\n";
    print->printEndBuffer();
    }
    if (choice == "3") { // South
    system("clear");
    print->printIng2Border();
    print->printStdBorder();
    print->printSpaces();
        std::cout << "There is nothing this way for me...\n\n";
    print->printEndBuffer();
    }
    if (choice == "4") { //West
    system("clear");
    print->printIng2Border();
    print->printStdBorder();
    print->printSpaces();
        std::cout << "Though these relics are amazing,"
        "I can't go this way...\n\n";
    print->printEndBuffer();
    }
    } while (choice != "2");
delete print;
}

void MoonBlossomRoom::inspect() {
    UI* print = new UI();
    system("clear");
    print->printIng2Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "There is a stillness in the air and a calming silence...\n\n";
    print->printEndBuffer();
    delete print;
}
