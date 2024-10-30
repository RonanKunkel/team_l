// Minimal source file that allows the pipeline to pass.

#include "Combat.h"
#include "actionClass.h"
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
#include "UI.h"
#include "Snail.h"
#include "Raven.h"
#include "Game.h"

#include <iostream>
#include <string>
#include <iomanip>

int main() {
    Game player;
    player.playGame();
    return 0;
}
