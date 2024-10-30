/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/

#ifndef PUZZLEROOM_H_INCLUDED
#define PUZZLEROOM_H_INCLUDED

#include "actionClass.h"
#include "UI.h"

#include <iostream>
#include <string>

/**
 * @class PuzzleRoom PuzzleRoom.h "PuzzleRoom.h"
 * @brief Implimentation of actionClass in Puzzle Room
 */

// roomID 1
class PuzzleRoom : public actionClass {
 public:
/**
 * @brief Default constuctor.
*/
    PuzzleRoom();
/**
 * @brief Default destructor.
*/
    ~PuzzleRoom();
    // inheriting from action class
    void entryDescription();
/**
 * @brief Gets users answer from riddle,
 * if it is wrong 3 time game over.
*/
    void interact();
/**
 * @brief Gets user input allows them to go north.
*/
    void move();
/**
 * @brief Displays riddle information.
*/
    void inspect();
};

#endif //PUZZLEROOM_H_INCLUDED
