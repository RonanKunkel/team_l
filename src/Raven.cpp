/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/
#include "actionClass.h"
#include "NPC.h"
#include "Raven.h"
#include "UI.h"

#include <iostream>
#include <string>


Raven::Raven() {
    setLastTradeType(1);
}

Raven::~Raven() {}

void Raven::dialogue() {
    std::string choice;
    UI* print = new UI();
    do {
    print->printShopBorder();
    print->printStdBorder();
    std::cout << "\n";
    print->printSpaces();
    std::cout << "Hello traveler my name is Mylriphan care to do business? ";
    std::cout << "100% satisfaction guaranteed.\n";
    print->printSpaces();
    std::cout << "1: trade\n";
    print->printSpaces();
    std::cout << "2: return to room\n\n";
    print->printStdBorder();
    print->printInput();
    std::cin >> choice;
    system("clear");
    if (choice == "1") {
         trade();
    } else if (choice == "2") {
        print->printShopBorder();
        print->printStdBorder();
        std::cout << "\n";
        print->printSpaces();
        std::cout << "Very well if you see anything";
        std::cout << " shiny don't be afraid to bring it here.\n\n";
        print->printEndBuffer();
    }
    } while (choice != "1" && choice != "2");
    delete print;
}

void Raven::trade() {
    std::string choice;
    UI* print = new UI();
    print->printShopBorder();
    print->printStdBorder();
    if (lastTradeType == 1) {
        std::cout << "\n";
        print->printSpaces();
        std::cout << "I see you too are an individual of commerce.\n";
        print->printSpaces();
        std::cout << "Could I interest you in my wares?\n";
        print->printSpaces();
        std::cout << "1: Wisdom potion\n";
        print->printSpaces();
        std::cout << "2: Strength potion\n";
        print->printSpaces();
        std::cout << "3: Return to room\n\n";
    } else if (lastTradeType == 2) {
        print->printSpaces();
        std::cout << "I see you too are an individual of commerce.\n";
        print->printSpaces();
        std::cout << "Could I interest you in my wares?\n";
        print->printSpaces();
        std::cout << "1: Strength potion\n";
        print->printSpaces();
        std::cout << "2: Return to room\n\n";
    }
    print->printStdBorder();
    print->printInput();
    std::cin >> choice;
    system("clear");


    print->printShopBorder();
    print->printStdBorder();
    if (choice == "1") {
        if (lastTradeType == 1) {
            print->printSpaces();
            std::cout << "Ahh, a fine choice! This will"
                      << " increase your arcane knowledge.\n\n\n";
            print->printSpaces();
            std::cout << "You pop to cork from your purchase and drink it. ";
            std::cout << "As you drink the potion you feel nothing.... \n";
            print->printSpaces();
            std::cout << "Guess i'm too smart for this.\n\n";
            print->printEndBuffer();
            setLastTradeType(2);
        } else if (lastTradeType == 2) {
            print->printSpaces();
            std::cout << "A fine choice! This will"
                      << " increase your physical strength.\n\n\n";
            print->printSpaces();
            std::cout << "You pop to cork from your purchase and drink it. ";
            std::cout << "As you drink the potion you feel a rush of energy. ";
            std::cout << "You begin to feel \n";
            print->printSpaces();
            std::cout << "the increased blood ";
            std::cout << "flow in your muscles, abruptly followed by a ";
            std::cout << "sharp pain in your chest. It's too much for \n";
            print->printSpaces();
            std::cout << "your frail body.\n\n";
            std::cout << std::setw(94);
            std::cout << "YOU DIED\n\n";
            print->printStdBorder();
            exit(0);
        }
    } else if (choice == "2") {
        if (lastTradeType == 1) {
            print->printSpaces();
            std::cout << "A fine choice! This will"
                      << " increase your physical strength.\n\n\n";
            print->printSpaces();
            std::cout << "You pop to cork from your purchase and drink it. ";
            std::cout << "As you drink the potion you feel a rush of energy. ";
            std::cout << "You begin to feel \n";
            print->printSpaces();
            std::cout << "the increased blood ";
            std::cout << "flow in your muscles, abruptly followed by a ";
            std::cout << "sharp pain in your chest. It's too much for \n";
            print->printSpaces();
            std::cout << "your frail body.\n\n";
            std::cout << std::setw(94);
            std::cout << "YOU DIED\n\n";
            print->printStdBorder();
            exit(0);
        } else if (lastTradeType ==2) {
            print->printSpaces();
            std::cout << "A shame I hope you reconsider\n\n";
            print->printEndBuffer();
        }
    }
    delete print;
}

void Raven::setLastTradeType(int tradeType) {
    lastTradeType = tradeType;
}
