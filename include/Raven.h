/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/

#ifndef RAVEN_H_INCLUDED
#define RAVEN_H_INCLUDED

#include "actionClass.h"
#include "NPC.h"
#include "Combat.h"

#include <string>
#include <vector>

/**
 * @class Raven Raven.h "Raven.h"
 * @brief Implements Raven shop keeper npc
 */
class Raven : public Npc {
 public:
/**
 * @brief Default constuctor.
*/
  Raven();
/**
 * @brief Default destructor
*/
  ~Raven();
  // inheriting from Npc
/**
 * @brief Displays option to trade or return room.
*/
  void dialogue();
/**
 * @brief Shows trade options. Can trade for wisdom or strength potion, 
 * wisdom is cosmetic, strength is game over.
*/
  void trade();
/**
 * @brief Variable to log what items have been selected in shop.
*/
  void setLastTradeType(int tradeType);
  std::vector<std::string> inventory;

 protected:
  int lastTradeType;
};

#endif //RAVEN_H_INCLUDED
