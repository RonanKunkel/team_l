/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/

#ifndef THRONEROOM_H_INCLUDED
#define THRONEROOM_H_INCLUDED

#include "actionClass.h"
#include "UI.h"

/**
 * @class ThroneRoom ThroneRoom.h "ThroneRoom.h"
 * @brief Implimentation of actionClass in Throne Room
 */

//roomID 0
class ThroneRoom : public actionClass {
 public:
/**
 * @brief Default constuctor.
*/
    ThroneRoom();
/**
 * @brief Default destructor.
*/
    ~ThroneRoom();
    // inheriting from action class
    void entryDescription();
    void interact();
    void move();
    void inspect();
};

#endif //THRONEROOM_H_INCLUDED
