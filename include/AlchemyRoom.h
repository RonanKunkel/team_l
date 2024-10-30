/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/

#ifndef ALCHEMYROOM_H_INCLUDED
#define ALCHEMYROOM_H_INCLUDED

#include "actionClass.h"
#include "UI.h"

#include <iostream>
#include <string>

/**
 * @class AlchemyRoom AlchemyRoom.h "AlchemyRoom.h"
 * @brief Implimentation of actionClass in Alchemy Room
*/

// roomID 9
class AlchemyRoom : public actionClass {
 public:
/**
 * @brief Default Constructor
*/
    AlchemyRoom();

/**
 * @brief Default Destructor
*/
    ~AlchemyRoom();

    void entryDescription();

/**
 * @brief Allows the user to choose between three options 
 * each pertaining to a seperate ending.
*/
    void interact();

/**
 * @brief Displays the rooms riddle to the user.
*/
    void inspect();
};

#endif //ALCHEMYROOM_H_INCLUDED
