/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/

#ifndef SUNLIGHTROOM_H_INCLUDED
#define SUNLIGHTROOM_H_INCLUDED

#include "actionClass.h"
#include "Items.h"
#include "UI.h"

#include <iostream>
#include <string>

/**
 * @class SunlightRoom SunlightRoom.h "SunlightRoom.h"
 * @brief Implimentation of actionClass in Sunlight Room
 */

// roomID 8
class SunlightRoom : public actionClass {
 public:
/**
 * @brief Default constuctor.
*/
    SunlightRoom();
/**
 * @brief Default destructor.
*/
    ~SunlightRoom();
    // inheriting from action class
    void entryDescription();
/**
 * @brief Displays interact info, and uses getItem to
 * insert Iteam::SUNLIGHT item into inventory.
*/
    void interact();
/**
 * @brief Gets user input and allows them to move west.
*/
    void move();
    void inspect();
};

#endif //SUNLIGHTROOM_H_INCLUDED
