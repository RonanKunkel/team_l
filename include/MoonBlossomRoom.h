/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/

#ifndef MOONBLOSSOMROOM_H_INCLUDED
#define MOONBLOSSOMROOM_H_INCLUDED

#include "actionClass.h"
#include "Items.h"
#include "UI.h"

#include <iostream>
#include <string>

/**
 * @class MoonBlossomRoom MoonBlossomRoom.h "MoonBlossomRoom.h"
 * @brief Implimentation of actionClass in MoonBlossom Room
 */

// roomID 6
class MoonBlossomRoom : public actionClass {
 public:
/**
 * @brief Default constuctor.
*/
    MoonBlossomRoom();
/**
 * @brief Default destructor.
*/
    ~MoonBlossomRoom();
    // inheriting from action class
    void entryDescription();
/**
 * @brief Displays interact info, and uses getItem to
 * insert Iteam::MOONBLOSSOM item into inventory.
*/
    void interact();
/**
 * @brief Gets user choice and allows them to move east.
*/
    void move();
    void inspect();
};

#endif //MOONBLOSSOMROOM_H_INCLUDED
