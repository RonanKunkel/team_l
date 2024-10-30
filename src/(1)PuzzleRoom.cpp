/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

#include "PuzzleRoom.h"
#include "actionClass.h"


PuzzleRoom::PuzzleRoom() {}

PuzzleRoom::~PuzzleRoom() {}

void PuzzleRoom::entryDescription() {
    UI* print = new UI();
    system("clear");
    print->printPuzzle1Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "Deep within an ancient cave an imposing "
    "stone door stands before you, adorned with intricate "
    "carvings and arcane\n";
    print->printSpaces();
    std::cout << "runes that seem to conceal a cryptic"
    " message. The air is filled with an eerie stillness as you"
    " approach.\n\n";
    print->printEndBuffer();
    delete print;
}

void PuzzleRoom::interact() {
    int answer;
    UI* print = new UI();
    system("clear");
    print->printPuzzle1Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "How Many Birds? (int)\n";
    print->printStdBorder();
    print->printInput();
    std::cin >> answer;

    for (int i = 0; i < 3; ++i) {
    if (answer == 2) {
    system("clear");
    print->printPuzzle1Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "As the words leave your mouth "
    "the magical door yields, its arcane "
    "defences unlocking to reveal the path ahead.\n\n";
        i = 3;
    print->printEndBuffer();
    delete print;
    } else if (i == 0) {
    system("clear");
    print->printPuzzle1Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "A faint tremor courses through the chamber,"
    "the ambient light dims ominously,\n";
    print->printSpaces();
    std::cout << "signaling the escalating "
    "strain on the arcane energies.\n\n";
    print->printSpaces();
    std::cout << "How Many Birds? (int)\n";
    print->printStdBorder();
    print->printInput();
    std::cin >> answer;
    } else if (i == 1) {
    system("clear");
    print->printPuzzle1Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "The air in the chamber thickens, "
    "spectral wisps materialize, swirling in disarray "
    "as if protesting the intrusion,\n";
    print->printSpaces();
    std::cout << "casting an eerie gloom that heightens "
    "the sense of foreboding.\n\n";
    print->printSpaces();
    std::cout << "How Many Birds? (int)\n";
    print->printStdBorder();
    print->printInput();
    std::cin >> answer;
    } else if (i == 2) {
    system("clear");
    print->printPuzzle1Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "The very fabric of the dungeon appears to warp and distort, "
    "reality itself quivering in protest. A chilling silence\n";
    print->printSpaces();
    std::cout << "ensues, and in a heart-stopping moment, the "
    "dungeon seems to blink out of existence.\n\n";
    std::cout << std::setw(95) << "YOU LOSE!\n\n";
    print->printStdBorder();
    delete print;
    exit(0);
        }
    }
}

void PuzzleRoom::move() {
    std::string choice;
    UI* print = new UI();
    do {
    system("clear");
    print->printPuzzle1Border();
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
    print->printPuzzle1Border();
    print->printStdBorder();
    print->printSpaces();
        std::cout << "You step through the large doors into the dungeon...\n\n";
    print->printEndBuffer();
    }
    if (choice == "2") { //East
    system("clear");
    print->printPuzzle1Border();
    print->printStdBorder();
    print->printSpaces();
        std::cout << "You stare deep into the cave.. "
        "I probably shouldn't go that way...\n\n";
        print->printEndBuffer();
    }
    if (choice == "3") { // South
    system("clear");
    print->printPuzzle1Border();
    print->printStdBorder();
    print->printSpaces();
        std::cout << "I can't go back yet..\n\n";
    print->printEndBuffer();
    }
    if (choice == "4") { //West
    system("clear");
    print->printPuzzle1Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "You run right into a wall...\n\n";
    print->printEndBuffer();
    }
    } while (choice != "1");
delete print;
}

void PuzzleRoom::inspect() {
    UI* print = new UI();
    system("clear");
    print->printPuzzle1Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "You inspect the door, and see a riddle "
    "in an ancient languge. "
    "Luckily you've dabbled a bit in the tounges.\n\n";
    print->printSpaces();
    std::cout << "Seven Birds Fly Out\n";
    print->printSpaces();
    std::cout << "Five Return\n";
    print->printSpaces();
    std::cout << "How Many Birds\n";
    print->printSpaces();
    std::cout << "Didn't Make It Home\n\n";
    print->printEndBuffer();
    delete print;
}
