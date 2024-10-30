/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/

#include "Combat.h"
#include "UI.h"

#include <cstdlib>
#include <string>
#include <iostream>
#include <algorithm>

// Constructor
Combat::Combat() {
    _health = 3;
    _aiHealth = 3;
}

Combat::~Combat() {}

// Getters
int Combat::getPlayerHealth() { return _health; }
int Combat::getAiHealth() { return _aiHealth; }

// Setters
void Combat::setPlayerHealth(int h) { _health = h; }
void Combat::setAiHealth(int h) { _aiHealth = h; }

int Combat::get_player_choice() {
    int choice;
    UI* print = new UI();
    print->printSpaces();
    std::cout << "♥ Health: " << getPlayerHealth();
    std::cout << std::setw(105) << "♥ Enemy Health: " << getAiHealth() <<
    "\n";
    print->printStdBorder();
    std::cout << "\n";
    print->printSpaces();
    std::cout << "Choose your action:\n";
    print->printSpaces();
    std::cout << "1. Magic ❈\n";
    print->printSpaces();
    std::cout << "2. Melee 🗡\n";
    print->printSpaces();
    std::cout << "3. Block ⛨\n";
    std::cout << "\n";
    print->printStdBorder();
    print->printInput();
    std::cin >> choice;
    system("clear");
    while (choice != 1 && choice != 2 && choice != 3) {
    print->printCombatBorder();
    std::cout << std::setw(105) << "Invalid action. Please try again.\n";
    print->printSpaces();
    std::cout << "♥ Health: " << getPlayerHealth();
    std::cout << std::setw(105) << "♥ Enemy Health: " << getAiHealth() <<
    "\n";
    print->printStdBorder();
    std::cout << "\n";
    print->printSpaces();
    std::cout << "Choose your action:\n";
    print->printSpaces();
    std::cout << "1. Magic ❈\n";
    print->printSpaces();
    std::cout << "2. Melee 🗡\n";
    print->printSpaces();
    std::cout << "3. Block ⛨\n";
    std::cout << "\n";
    print->printStdBorder();
    print->printInput();
    std::cin >> choice;
    system("clear");
    }
    delete print;
    return choice;
}

void Combat::playerTakeDamage() {
    int health = getPlayerHealth()-1;
    UI* print = new UI();
    setPlayerHealth(health);

    if (getPlayerHealth() <= 0) {
    setPlayerHealth(0);
    print->printStdBorder();
    std::cout << std::setw(93) << "GAME OVER\n";
    print->printStdBorder();
    delete print;
    exit(0);
    }
}

void Combat::aiTakeDamage() {
    int health = getAiHealth()-1;
    UI* print = new UI();
    setAiHealth(health);

    if (getAiHealth() <= 0) {
    setAiHealth(0);
    print->printStdBorder();
    std::cout << std::setw(92) << "VICTORY\n";
    print->printStdBorder();
    }
    delete print;
}

void Combat::RPS(int userMove) {
    UI* print = new UI();
    system("clear");
    Moves moves[] = {MAGIC, MELEE, BLOCK};
    int nMoves = sizeof(moves) / sizeof(moves[0]);

    std::random_shuffle(moves, moves + nMoves);
    Moves aiMove = moves[0];

    if (userMove < 1 || userMove > 3) {
        std::cout << "Invalid move.\n";
    } else if (userMove == MAGIC && aiMove == BLOCK) {
    print->printCombatBorder();
        std::cout << std::setw(115) << "You blast your foe with magic, "
        "knocking down their guard.\n";
         aiTakeDamage();

    } else if ((userMove == BLOCK && aiMove == MELEE) ||
               (aiMove == BLOCK && userMove == MELEE)) {
    print->printCombatBorder();
        std::cout << std::setw(65) <<
        "A sharp ringing echoes through " <<
        "the dungeon as sword and shield meet."
                  << " Neither you nor your foe are hurt." << std::endl;

    } else if (userMove == MELEE && aiMove == MAGIC) {
    print->printCombatBorder();
        std::cout << std::setw(88) << "Your foe begins to cast a spell, "
         << "but a swift strike interrupts them." << std::endl;
        aiTakeDamage();

    } else if (aiMove == MAGIC && userMove == BLOCK) {
    print->printCombatBorder();
        std::cout << std::setw(83) << "You feel an intense pain as magic "
        << "washes over you, knocking your guard down." << std::endl;
        playerTakeDamage();

    } else if (aiMove == MELEE && userMove == MAGIC) {
    print->printCombatBorder();
        // Add logic for when AI melee beats User magic
        std::cout << std::setw(125) << "You start preparing a spell, "
        "but your foe strikes without hesitation\n";
        playerTakeDamage();

    } else {
    print->printCombatBorder();
        // Draw: Both entities used the same attack, no damage dealt
        std::cout << std::setw(114) << "Your actions mirror each "
        "other and negate the damage\n";
    }
    delete print;
}

void Combat::fightGolem() {
    setAiHealth(3);
    while (getPlayerHealth() > 0 && getAiHealth() > 0) {
        int playerMove = get_player_choice();
        RPS(playerMove);
    }
}
void Combat::fightUndeadKnight() {
    setAiHealth(4);
    while (getPlayerHealth() > 0 && getAiHealth() > 0) {
        int playerMove = get_player_choice();
        RPS(playerMove);
    }
}

void Combat::fightSkeletalMage() {
    setAiHealth(5);
    while (getPlayerHealth() > 0 && getAiHealth() > 0) {
        int playerMove = get_player_choice();
        RPS(playerMove);
    }
}
