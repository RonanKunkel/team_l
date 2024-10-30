/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/

#ifndef SHOPROOM_H_INCLUDED
#define SHOPROOM_H_INCLUDED

#include "actionClass.h"
#include "NPC.h"
#include "Snail.h"
#include "Raven.h"
#include "UI.h"

#include <iostream>
#include <string>
#include <memory>

/**
 * @class ShopRoom ShopRoom.h "ShopRoom.h"
 * @brief Implimentation of actionClass and NPC in Shop Room
 */

// roomID 4
class ShopRoom : public actionClass {
 public:
/**
 * @brief Default constuctor.
*/
    ShopRoom();
/**
 * @brief Default destuctor.
*/
    ~ShopRoom();
    // inheriting from action class
    void entryDescription();
/**
 * @brief Displays choice to talk to Snail or Raven.
 * Plays dialogue for the npc chosen.
*/
    void interact();
/**
 * @brief Gets user input and allows them to move west.
*/
    void move();
/**
 * @brief Gets user input and allows them to move east.
*/
    void move7();
    void inspect();

 private:
    std::unique_ptr<Npc> _raven = std::make_unique<Raven>();
    std::unique_ptr<Npc> _snail = std::make_unique<Snail>();
};

#endif //SHOPROOM_H_INCLUDED
