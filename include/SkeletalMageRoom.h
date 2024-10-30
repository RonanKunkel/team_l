/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/

#ifndef SKELETALMAGEROOM_H_INCLUDED
#define SKELETALMAGEROOM_H_INCLUDED

#include "actionClass.h"
#include "NPC.h"
#include "Items.h"
#include "UI.h"

#include <iostream>
#include <string>

/**
 * @class SkeletalMageRoom SkeletalMageRoom.h "SkeletalMageRoom.h"
 * @brief Implimentation of actionClass in SkeletalMage Room
 */

// roomID 7
class SkeletalMageRoom : public actionClass {
 public:
/**
 * @brief Default constuctor.
*/
    SkeletalMageRoom();
/**
 * @brief Default destructor.
*/
    ~SkeletalMageRoom();
    // inheriting from action class
    void entryDescription();
    void interact();
/**
 * @brief Gets user input and allows them to move east.
*/
    void move();
/**
 * @brief Gets user input and allows them to move west.
*/
    void move4();
    void inspect();
};

#endif //SKELETALMAGEROOM_H_INCLUDED
