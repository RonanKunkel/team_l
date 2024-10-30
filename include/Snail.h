/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/

#ifndef SNAIL_H_INCLUDED
#define SNAIL_H_INCLUDED

#include "actionClass.h"
#include "NPC.h"

#include <string>

/**
 * @class Snail Snail.h "Snail.h"
 * @brief Implements Snail npc info broker
 */
class Snail: public Npc {
 public:
/**
 * @brief Default constuctor.
*/
  Snail();
/**
 * @brief Default destuctor.
*/
  ~Snail();
  // inheriting from action class
/**
 * @brief Displays the snail dialouge, which is general
 * information about the game and enemies.
*/
  void dialogue();
};

#endif //SNAIL_H_INCLUDED
