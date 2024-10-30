/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/

#include "UI.h"

UI::UI() {}

UI::~UI() {}

void UI::printEndBuffer() {
  std::string buffer;
  printSpaces();
  std::cout << "> ENTER ANY CHARACTER TO CONTINUE: \n";
  printStdBorder();
  printInput();
  std::cin >> buffer;
  system("clear");
}

void UI::printInput() {
std::cout << t8Spaces << "< ";
}

void UI::printSpaces() {
std::cout << t8Spaces;
}

void UI::printCombat1Border() {
std::cout << combatBorder;
std::cout << std::setw(94) << "Golem's Grove\n";
std::cout << combatBorder;
std::cout << "\n\n";
}

void UI::printCombat2Border() {
std::cout << combatBorder;
std::cout << std::setw(95) << "Ancient Armory\n";
std::cout << combatBorder;
std::cout << "\n\n";
}

void UI::printCombat3Border() {
std::cout << combatBorder;
std::cout << std::setw(96) << "Mystic Sanctum\n";
std::cout << combatBorder;
std::cout << "\n\n";
}

void UI::printPuzzle1Border() {
std::cout << puzzleBorder;
std::cout << std::setw(95) << "Dungeon Doors\n";
std::cout << puzzleBorder;
std::cout << "\n\n";
}

void UI::printPuzzle2Border() {
std::cout << puzzleBorder;
std::cout << std::setw(97) << "Alchemical Workshop\n";
std::cout << puzzleBorder;
std::cout << "\n\n";
}

void UI::printIng1Border() {
std::cout << ingBorder;
std::cout << std::setw(94) << "Crystal Caves\n";
std::cout << ingBorder;
std::cout << "\n\n";
}

void UI::printIng2Border() {
std::cout << ingBorder;
std::cout << std::setw(96) << "Timeless Treasury\n";
std::cout << ingBorder;
std::cout << "\n\n";
}

void UI::printIng3Border() {
std::cout << ingBorder;
std::cout << std::setw(98) << "Solar Sanctuary\n";
std::cout << ingBorder;
std::cout << "\n\n";
}

void UI::printShopBorder() {
std::cout << friendBorder;
std::cout << std::setw(97) << "Potion Emporium\n";
std::cout << friendBorder;
std::cout << "\n\n";
}

void UI::printStdBorder() {
std::cout << stdBorder;
}

void UI::printCombatBorder() {
std::cout << combatBorder;
}

void UI::printThroneBorder() {
std::cout << friendBorder;
std::cout << std::setw(94) << "Throne Room\n";
std::cout << friendBorder;
std::cout << "\n\n";
}

void UI::printPrincessBorder() {
std::cout << friendBorder;
std::cout << std::setw(97) << "Princess Chambers\n";
std::cout << friendBorder;
std::cout << "\n\n";
}
