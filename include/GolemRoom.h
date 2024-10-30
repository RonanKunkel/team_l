/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/

#ifndef GOLEMROOM_H_INCLUDED
#define GOLEMROOM_H_INCLUDED

#include "actionClass.h"
#include "UI.h"

#include <iostream>
#include <string>

/**
 * @class GolemRoom GolemRoom.h "GolemRoom.h"
 * @brief Implimentation of actionClass in Golem Room
 */

// roomID 2
class GolemRoom : public actionClass {
 public:
 /**
 * @brief Default constuctor.
*/
    GolemRoom();
/**
 * @brief Default destructor.
*/
    ~GolemRoom();
    // inheriting from action class
    void entryDescription();
    void interact();

/**
 * @brief Gets user choice and allows them to walk north.
*/
    void move();
    void inspect();
};

#endif //GOLEMROOM_H_INCLUDED
