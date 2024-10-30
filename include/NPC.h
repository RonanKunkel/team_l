/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/

#ifndef NPC_H_INCLUDED
#define NPC_H_INCLUDED

#include "actionClass.h"
#include "Combat.h"

#include <string>
#include <vector>

/**
 * @class Npc Npc.h "Npc.h"
 * @brief Abstract class NPC implementations.
 */
class Npc {
 public:
/**
 * @brief Default constuctor.
*/
  Npc();
/**
 * @brief Default destuctor.
*/
  ~Npc();
/**
 * @brief Gets npc dialogue and displays it.
*/
  virtual void dialogue() = 0;
};

#endif //Npc_H_INCLUDED
