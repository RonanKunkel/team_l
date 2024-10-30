/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/

#ifndef ITEMS_H_INCLUDED
#define ITEMS_H_INCLUDED

#include <string>

/**
 * 
 * @class Items Items.h "Items.h"
 * @brief Items implementations.
 */

class Items {
 public:
/**
 * @brief Default constuctor.
*/
  Items() {}
/**
 * @brief Default destructor.
*/
  ~Items() {}
  enum Item {EARTHSHARD = 1, MOONBLOSSOM = 2, SUNLIGHT = 3};
};

#endif //Items_H_INCLUDED
