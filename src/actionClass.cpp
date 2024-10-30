/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/

#include "actionClass.h"
#include "Items.h"
#include "UI.h"

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

actionClass::actionClass() {}

actionClass::~actionClass() {}

void actionClass::getChoice() {
    UI* print = new UI();
    print->printStdBorder();
    std::string choice;
    std::cout << "\n";
    print->printSpaces();
    std::cout << "What would you like to do in this room? \n";
    print->printSpaces();
    std::cout << "1: Interact \n";
    print->printSpaces();
    std::cout << "2: Move \n";
    print->printSpaces();
    std::cout << "3: Inspect \n\n";
    print->printStdBorder();
    print->printInput();
    std:: cin >> choice;
    system("clear");
    if (choice == "1") {
        interact();
        getChoice1();
    } else if (choice == "2") {
        move();
    } else if (choice == "3") {
        inspect();
        getChoice();
    } else {
        print->printStdBorder();
        print->printSpaces();
        std::cout << "> Please select a valid option\n";
        getChoice();
    }
}

void actionClass::getChoice1() {
    UI* print = new UI();
    print->printStdBorder();
    std::cout << "\n";
    std::string choice;
    print->printSpaces();
    std:: cout << "What would you like to do in this room? \n";
    print->printSpaces();
    std:: cout << "1: Move \n";
    print->printSpaces();
    std:: cout << "2: Inspect \n\n";
    print->printStdBorder();
    print->printInput();
    std:: cin >> choice;
    system("clear");
    if (choice == "1") {
        move();
    } else if (choice == "2") {
        inspect();
        getChoice1();
    } else {
        print->printStdBorder();
        print->printSpaces();
        std::cout << "> Please select a valid option\n";
        getChoice1();
    }
}

void actionClass::getChoice2() {
    UI* print = new UI();
    print->printStdBorder();
    std::cout << "\n";
    std::string choice;
    print->printSpaces();
    std:: cout << "What would you like to do in this room? \n";
    print->printSpaces();
    std:: cout << "1: Interact \n";
    print->printSpaces();
    std:: cout << "2: Inspect \n\n";
    print->printStdBorder();
    print->printInput();
    std:: cin >> choice;
    system("clear");
    if (choice == "1") {
        interact();
        getChoice1();
    } else if (choice == "2") {
        inspect();
        getChoice2();
    } else {
        print->printStdBorder();
        print->printSpaces();
        std::cout << "> Please select a valid option\n";
        getChoice2();
    }
}

void actionClass::getChoice3() {
    UI* print = new UI();
    print->printStdBorder();
    std::string choice;
    std::cout << "\n";
    print->printSpaces();
    std::cout << "What would you like to do in this room? \n";
    print->printSpaces();
    std::cout << "1: Interact \n";
    print->printSpaces();
    std::cout << "2: Move \n";
    print->printSpaces();
    std::cout << "3: Inspect \n\n";
    print->printStdBorder();
    print->printInput();
    std:: cin >> choice;
    system("clear");
    if (choice == "1") {
        interact();
        getChoice3();
    } else if (choice == "2") {
        move();
    } else if (choice == "3") {
        inspect();
        getChoice3();
    } else {
        print->printStdBorder();
        print->printSpaces();
        std::cout << "> Please select a valid option\n";
        getChoice3();
    }
}

void actionClass::getChoice4(std::string moveType) {
    UI* print = new UI();
    print->printStdBorder();
    std::string choice;
    std::cout << "\n";
    print->printSpaces();
    std::cout << "What would you like to do in this room? \n";
    print->printSpaces();
    std::cout << "1: Interact \n";
    print->printSpaces();
    std::cout << "2: Move \n";
    print->printSpaces();
    std::cout << "3: Inspect \n\n";
    print->printStdBorder();
    print->printInput();
    std:: cin >> choice;
    system("clear");
    if (choice == "1") {
        interact();
        getChoice4(moveType);
    } else if (choice == "2") {
        if (moveType == "1") {
        move();
        } else if (moveType == "2") {
        move4();
        } else if (moveType == "3") {
        move7();
        } else if (moveType == "4") {
        move9();
        }
    } else if (choice == "3") {
        inspect();
        getChoice4(moveType);
    } else {
        print->printStdBorder();
        print->printSpaces();
        std::cout << "> Please select a valid option\n";
        getChoice4(moveType);
    }
}

void actionClass::getChoice5() {
    UI* print = new UI();
    print->printStdBorder();
    std::cout << "\n";
    std::string choice;
    print->printSpaces();
    std:: cout << "What would you like to do in this room? \n";
    print->printSpaces();
    std:: cout << "1: Interact \n";
    print->printSpaces();
    std:: cout << "2: Inspect \n\n";
    print->printStdBorder();
    print->printInput();
    std:: cin >> choice;
    system("clear");
    if (choice == "1") {
        interact();
    } else if (choice == "2") {
        inspect();
        getChoice5();
    } else {
        print->printStdBorder();
        print->printSpaces();
        std::cout << "> Please select a valid option\n";
        getChoice5();
    }
}

void actionClass::getItem(int itemID) {
    std::string item;

    if (itemID == 1) {
        item = "EARTH SHARD";
    } else if (itemID == 2) {
        item = "MOON BLOSSOM";
    } else if (itemID == 3) {
        item = "SUN LIGHT";
    } else {
        item = "KEY";
    }
    inventory.push_back(item);
    for (unsigned i = 0; i < inventory.size(); i++) {
        std::cout << inventory[i];
    }
}

void actionClass::move() {
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
    if (choice == "4") {
    system("clear");
    print->printIng1Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "Your walk south\n\n";
    print->printEndBuffer();
    }
    if (choice == "1" || choice == "2" || choice == "3") {
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

void actionClass::move4() {
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
    if (choice == "4" || choice == "3") {
    system("clear");
    print->printIng1Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "Your walk forward\n\n";
    print->printEndBuffer();
    }
    if (choice == "2" || choice == "1") {
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

void actionClass::move7() {
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
    if (choice == "2") {
    system("clear");
    print->printIng1Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "Your walk east\n\n";
    print->printEndBuffer();
    }
    if (choice == "1" || choice == "3" || choice == "4") {
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

void actionClass::move9() {
    std::string choice;
    UI* print = new UI();
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

    if (choice == "1") {
    system("clear");
    print->printShopBorder();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "You notice the magic sigel has dissipated, it "
    "must have been when you defeated the Archmage.\n";
    print->printSpaces();
    std::cout << "You step into the next room...\n\n";
    print->printEndBuffer();
    }
    if (choice == "2") {
    system("clear");
    print->printShopBorder();
    print->printStdBorder();
    print ->printSpaces();
    std::cout << "I have all three ingredients now I just "
    "need somewhere to brew it...\n\n";
    print->printEndBuffer();
    }
    if (choice == "3") {
    system("clear");
    print->printShopBorder();
    print->printStdBorder();
    print ->printSpaces();
    std::cout << "I can't leave yet, I have to brew the potion...\n\n";
    print->printEndBuffer();
    }
    if (choice == "4") {
    system("clear");
    print->printShopBorder();
    print->printStdBorder();
    print ->printSpaces();
    std::cout << "There is nothing left for me to get I should "
    "find somewhere to brew the potion...\n\n";
    print->printEndBuffer();
    }
    } while (choice != "1");
}
