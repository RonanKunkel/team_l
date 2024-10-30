/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/

#ifndef ACTIONCLASS_H_INCLUDED
#define ACTIONCLASS_H_INCLUDED

#include "Items.h"
#include "UI.h"

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

/**
 * @class actionClass actionClass.h "actionClass.h"
 * @brief Abstract superclass used for "Player" implementations.
 */
class actionClass {
 public:
/**
 * @brief Default constructor.
*/
actionClass();

/**
 * @brief Default destructor.
*/
~actionClass();

/**
 * @brief Gets user choice and runs appropriate interact, move,
 *  or inspect functions.
*/
void getChoice();

/**
 * @brief Gets user choice and runs appropriate move or
 *  inspect functions.
*/
void getChoice1();

/**
 * @brief Gets user choice and runs appropriate interact
 * or inspect functions.
*/
void getChoice2();

/**
 * @brief Gets user choice and runs appropriate interact, move,
 *  and inspect functions. Allows for multiple action loops.
*/
void getChoice3();

/**
 * @brief Gets user choice and runs appropriate interact, move,
 * and inspect functions. Specifieys which move function to call
 *  using moveType.
 * @param [in] moveType which room you are moving to.
*/
void getChoice4(std::string moveType);

/**
 * @brief Gets user choice and runs appropriate interact, move,
 * and inspect functions. Allows for only one interact.
*/
void getChoice5();

/**
 * @brief Inserts one item into the inventory, depending on
 * itemID.
 * @param [in] itemID the ID pertaining to one item.
*/
void getItem(int itemID);

/**
 * @brief Gets user choice and allows them to walk south.
*/
virtual void move();

/**
 * @brief Gets user choice and allows them to walk east or west.
*/
virtual void move4();

/**
 * @brief Gets user choice and allows them to walk east.
*/
virtual void move7();

/**
 * @brief Gets user choice and allows them to walk north.
*/
virtual void move9();

/**
 * @brief Displays the entry information for a room.
*/
virtual void entryDescription() = 0;

/**
 * @brief Displays the interact options for a room.
*/
virtual void interact() = 0;

/**
 * @brief Displays the inspect information for a room.
*/
virtual void inspect() = 0;

 protected:
  std::vector<std::string> inventory;
};

#endif //Player_H_INCLUDED
