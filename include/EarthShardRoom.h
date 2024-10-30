/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/

#ifndef EARTHSHARDROOM_H_INCLUDED
#define EARTHSHARDROOM_H_INCLUDED

#include "actionClass.h"
#include "Items.h"
#include "UI.h"

#include <iostream>
#include <string>

/**
 * @class EarthShardRoom EarthShardRoom.h "EarthShardRoom.h"
 * @brief Implimentation of actionClass in EarthShard Room
 */

// roomID 3
class EarthShardRoom : public actionClass {
 public:
 /**
 * @brief Default constructor
*/
    EarthShardRoom();

/**
 * @brief Default destructor
*/
    ~EarthShardRoom();
    void entryDescription();
/**
 * @brief Displays interact info, and uses getItem to
 * insert Iteam::EARTHSHARD item into inventory.
*/
    void interact();
/**
 * @brief Gets user choice and allows them to walk north.
*/
    void move();


    void inspect();
};

#endif //EARTHSHARDROOM_H_INCLUDED
