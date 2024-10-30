/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/
#include "NPC.h"
#include "Snail.h"
#include "UI.h"

#include <iostream>
#include <string>

Snail::Snail() {}

Snail::~Snail() {}

void Snail::dialogue() {
    std::string choice;
    UI* print = new UI();
    do {
    print->printShopBorder();
    print->printStdBorder();
    std::cout << "\n";
    print->printSpaces();
    std::cout << "Hello traveler my name is Benzel, ";
    std::cout << "I'm the resident chronicler.\n\n";
    print->printSpaces();
    std::cout << "Is there anything you wish to know?\n";
    print->printSpaces();
    std::cout << "1. Ask about the strong hold\n";
    print->printSpaces();
    std::cout << "2. Ask about the stone golem\n";
    print->printSpaces();
    std::cout << "3. Ask about the undead knight\n";
    print->printSpaces();
    std::cout << "4. Return to room\n\n";
    print->printStdBorder();
    print->printInput();
    std::cin >> choice;
    system("clear");
    if (choice == "1") {
    print->printShopBorder();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "Ahh fort Styroam this is an ancient place, ";
    std::cout << "in the past it was the famed keep of the ";
    std::cout << "royal mage Morphaline. As you \n";
    print->printSpaces();
    std::cout << "know Leanurion was once riddled with war, Morphaline ";
    std::cout << "was tasked with harnessing the power of ";
    std::cout << "sun and moon to create \n";
    print->printSpaces();
    std::cout << "a weapon to end all wars. Unfortunatly on ";
    std::cout << "his quest of power, he called on the god Bonzo ";
    std::cout << "the all gnawing who in \n";
    print->printSpaces();
    std::cout << "their divine judgment ";
    std::cout << "deemed Morphaline a harbinger of dead. Cursing ";
    std::cout << "him to a become an immortal skeleton bound to \n";
    print->printSpaces();
    std::cout << "the halls of Styroam.\n\n";
    print->printEndBuffer();
    } else if (choice == "2") {
    print->printShopBorder();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "The golem? You must mean Lecihin. ";
    std::cout << "Morphaline created him as a defender of the keep.";
    std::cout << " If I remember correctly the \n";
    print->printSpaces();
    std::cout << "material he is made of is imbued ";
    std::cout << "with magic.\n\n";
    print->printEndBuffer();
    } else if (choice == "3") {
    print->printShopBorder();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "The late royal knight Sulfamine. A tragic tale, ";
    std::cout << "he was tasked to put Morphaline to rest and ";
    std::cout << "release his soul however \n";
    print->printSpaces();
    std::cout << "fate works in mysterious ways as after a fierce ";
    std::cout << "fight Morphaline bound the knight's mind and forced ";
    std::cout << "him into service. \n\n";
    print->printEndBuffer();
    } else if (choice == "4") {
    print->printShopBorder();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "Very well if you have any questions please stop by.\n\n";
    print->printEndBuffer();
    }
    } while (choice != "4");
}
