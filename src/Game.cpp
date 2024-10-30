/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/

#include "actionClass.h"
#include "Combat.h"
#include "ThroneRoom.h"
#include "PuzzleRoom.h"
#include "GolemRoom.h"
#include "EarthShardRoom.h"
#include "ShopRoom.h"
#include "UndeadKnightRoom.h"
#include "MoonBlossomRoom.h"
#include "SkeletalMageRoom.h"
#include "SunlightRoom.h"
#include "AlchemyRoom.h"
#include "Game.h"

#include <iostream>
#include <string>
#include <iomanip>

Game::Game() {}

Game::~Game() {}

void Game::playGame() {
    Combat* K = new Combat;
    actionClass* player = new ThroneRoom();
    actionClass* trade = new ShopRoom();

    // Throne room
    player = new ThroneRoom();
    player->entryDescription();
    delete player;

    // Puzzle room
     player = new PuzzleRoom();
     player->entryDescription();
     player->getChoice2();
     delete player;

    //Golem room
    player = new GolemRoom();
    player->entryDescription();
    K->fightGolem();
    player->getChoice();
    delete player;

    // Earth shard room
    player = new EarthShardRoom();
    player->entryDescription();
    player->getChoice2();
    delete player;

    //FIRST entrance into shop
     trade->entryDescription();
     trade->getChoice3();

    //Undeadknight room
    player = new UndeadKnightRoom();
    player->entryDescription();
    K->fightUndeadKnight();
    player->getChoice();
    delete player;

    //MoonBlossom room
    player = new MoonBlossomRoom();
    player->entryDescription();
    player->getChoice2();
    delete player;

    //Undeadknight room
     player = new UndeadKnightRoom();
     player->getChoice4("2");
     delete player;

    //SECOND time into shop
    trade->getChoice4("3");

    //SkeletalMageRoom
    player = new SkeletalMageRoom();
    player->entryDescription();
    K->fightSkeletalMage();
    player->getChoice();
    delete player;

    //SunlightRoom
    player = new SunlightRoom();
    player->entryDescription();
    player->getChoice2();
    delete player;

    //SECOND time into Skelly room
    player = new SkeletalMageRoom();
    player->getChoice4("2");
    delete player;

    //THIRD time into shop
    trade->getChoice4("4");

    //Alchemy Room
    player = new AlchemyRoom();
    player->entryDescription();
    player->getChoice5();
    }
