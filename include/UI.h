/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/

#ifndef UI_H_INCLUDED
#define UI_H_INCLUDED

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

/**
 * @class UI UI.h "UI.h"
 * @brief Used for displaying information.
 */

class UI {
 public:
/**
 * @brief Default constuctor.
*/
  UI();
/**
 * @brief Default destructor.
*/
  virtual ~UI();
/**
 * @brief Creates an end border, and takes in a string to break
 * up the displaying of large amounts of text.
*/
void printEndBuffer();
/**
 * @brief Creates a centered line for users cursor to sit.
*/
void printInput();
/**
 * @brief Prints a set amount of spaces to center text to the
 * terminal.
*/
void printSpaces();
/**
 * @brief Creates a header defining the Golem room.
*/
void printCombat1Border();
/**
 * @brief Creates a header defining the UndeadKnight room.
*/
void printCombat2Border();
/**
 * @brief Creates a header defining the SkeletalMage room.
*/
void printCombat3Border();
/**
 * @brief Creates a header defining the DungeonDoors room.
*/
void printPuzzle1Border();
/**
 * @brief Creates a header defining the Alchemy room.
*/
void printPuzzle2Border();
/**
 * @brief Creates a header defining the EarthShard room.
*/
void printIng1Border();
/**
 * @brief Creates a header defining the Moonblossom room.
*/
void printIng2Border();
/**
 * @brief Creates a header defining the Sunlight room.
*/
void printIng3Border();
/**
 * @brief Creates a header defining the Shop room.
*/
void printShopBorder();
/**
 * @brief Creates a header defining the Throne room.
*/
void printThroneBorder();
/**
 * @brief Creates a header defining the Princess room.
*/
void printPrincessBorder();
/**
 * @brief prints the standard boarder to encase general text.
*/
void printStdBorder();
/**
 * @brief prints the standard boarder to encase combat text.
*/
void printCombatBorder();

 private:
/**< A string of 30 spaces.*/
  std::string t8Spaces = "                              ";
/**< A string of 🭸 to simulate a boarder.*/
  std::string stdBorder = "                            🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸"
  "🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸"
  "🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸"
  "🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸🭸\n";
/**< A string of to simulate a boarder.*/
  std::string combatBorder = "                             (===||::::::::"
  ":::::::>  (===||:::::::::::::::>  (===||:::::::::::::::>  (===||:::"
  "::::::::::::>  (===||:::::::::::::::>\n";
/**< A string of to simulate a boarder.*/
  std::string puzzleBorder = "                            ᛚᛖᚨᚾ ᛚᛖᚨᚾ ᛚᛖᚨᚾ "
  "ᛚᛖᚨᚾ ᛚᛖᚨᚾ ᛚᛖᚨᚾ ᛚᛖᚨᚾ ᛚᛖᚨᚾ ᛚᛖᚨᚾ ᛚᛖᚨᚾ ᛚᛖᚨᚾ ᛚᛖᚨᚾ ᛚᛖᚨᚾ ᛚᛖᚨᚾ ᛚᛖᚨᚾ ᛚᛖᚨᚾ ᛚ"
  "ᛖᚨᚾ ᛚᛖᚨᚾ ᛚᛖᚨᚾ ᛚᛖᚨᚾ ᛚᛖᚨᚾ ᛚᛖᚨᚾ ᛚᛖᚨᚾ ᛚᛖᚨᚾ\n";
/**< A string of to simulate a boarder.*/
  std::string ingBorder = "                            ==============="
  "============================================+====================="
  "======================================\n";
/**< A string of to simulate a boarder.*/
  std::string friendBorder = "                            ┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉"
  "┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉"
  "┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉\n";
};

#endif //UI_H_INCLUDED
