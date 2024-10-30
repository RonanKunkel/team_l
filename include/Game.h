/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/
#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include "actionClass.h"
#include "Combat.h"
#include "UI.h"

#include <iostream>
#include <string>
#include <iomanip>

/**
* @class Game Game.h "Game.h"
* @brief Implementation of game loop 
*/

class Game {
 public:
/**
 * @brief Default constuctor.
*/
    Game();
/**
 * @brief Default destructor.
*/
    ~Game();

/**
 * @brief Runs the gameloop allowing users to play the game.
*/
    void playGame();
};

#endif //GAME_H_INCLUDED
