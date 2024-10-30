/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

#include "ThroneRoom.h"
#include "actionClass.h"
#include "UI.h"

    ThroneRoom::ThroneRoom() {}

    ThroneRoom::~ThroneRoom() {}

    // Start of game dialogue
    void ThroneRoom::entryDescription() {
        UI* print = new UI();
        system("clear");
        print->printThroneBorder();
        print->printStdBorder();
        print->printSpaces();
        std::cout << "In the tranquil world of Leanurion, "
        "a land where tales of knights and wizards "
        "intertwine with everyday life,\n";
        print->printSpaces();
        std::cout << "you find yourself on the cusp of "
        "an unforeseen journey. As a simple alchemist, "
        "you have navigated the rolling hills\n";
        print->printSpaces();
        std::cout << "and bustling towns. However, "
        "destiny takes an unexpected turn, leading "
        "you to a grand chamber that echoes with\n";
        print->printSpaces();
        std::cout << "the weight of both history and "
        "weariness. The king, once a symbol "
        "of strength and prosperity now sits on his throne,\n";
        print->printSpaces();
        std::cout << "draped in rich velvet robes, the weight "
        "of the crown evident in his haggard and exhausted gaze.\n\n";
        print->printEndBuffer();

        print->printThroneBorder();
        print->printStdBorder();
        print->printSpaces();
        std::cout << "With a solemn resonance, the kings "
        "voice bears the weight of sorrow as he discloses "
        "his daughter's succumbing of a\n";
        print->printSpaces();
        std::cout << "dire illness. 'In this, our kingdom's "
        "darkest hour, I implore, "
        "noble adventurers. Who among you will rise to "
        "the\n";
        print->printSpaces();
        std::cout << "challenge and aid us in our time of need?'\n\n";
        print->printEndBuffer();

        print->printThroneBorder();
        print->printStdBorder();
        print->printSpaces();
        std::cout << "With a resolute gaze, you step forward, "
        "addressing the king, "
        "'Your Majesty, I will do what must be done. \n";
        print->printSpaces();
        std::cout << "Fear not; I shall embark on this quest to heal "
        "your daughter.'\n\n";
        print->printEndBuffer();

        print->printThroneBorder();
        print->printStdBorder();
        print->printSpaces();
        std::cout << "The king with gratitude in his "
        "eyes, addresses you, 'Valiant alchemist, your "
        "courage is our beacon of hope.\n";
        print->printSpaces();
        std::cout << "Within the depths of the ancient dungeons lies an "
        "alchemical wellspring. Venture forth, gather "
        "the rare\n";
        print->printSpaces();
        std::cout << "ingredients needed, and brew a "
        "potent curative potion that will break "
        "the vile curse ensnaring my daughter.\n";
        print->printSpaces();
        std::cout << "The fate of the kingdom rests upon your shoulders!'\n\n";
        print->printEndBuffer();
        delete print;
    }

    void ThroneRoom::interact() {}

    void ThroneRoom::move() {}

    void ThroneRoom::inspect() {}
