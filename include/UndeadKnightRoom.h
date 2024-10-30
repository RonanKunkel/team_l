/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/

#ifndef UNDEADKNIGHTROOM_H_INCLUDED
#define UNDEADKNIGHTROOM_H_INCLUDED

#include "actionClass.h"
#include "UI.h"

#include <iostream>
#include <string>

/**
 * @class UndeadKnightRoom UndeadKnightRoom.h "UndeadKnightRoom.h"
 * @brief Implimentation of actionClass in UndeadKnight Room
 */

// roomID 5
class UndeadKnightRoom : public actionClass {
 public:
/**
 * @brief Default constuctor.
*/
    UndeadKnightRoom();
/**
 * @brief Default destructor.
*/
    ~UndeadKnightRoom();
    // inheriting from action class
    void entryDescription();
    void interact();
/**
 * @brief Gets user input and allows them to move west.
*/
    void move();
/**
 * @brief Gets user input and allows them to move east.
*/
    void move4();
    void inspect();
};

#endif //UNDEADKNIGHTROOM_H_INCLUDED
