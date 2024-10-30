/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/

#include <iostream>
#include <string>

#include "AlchemyRoom.h"
#include "actionClass.h"

AlchemyRoom::AlchemyRoom() {}

AlchemyRoom::~AlchemyRoom() {}

void AlchemyRoom::entryDescription() {
    UI* print = new UI();
    system("clear");
    print->printPuzzle2Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "Stepping into the ancient alchemy lab, "
    "the air is thick with the scent of arcane concoctions "
    "and aged knowledge.\n";
    print->printSpaces();
    std::cout << "A table, cluttered with alchemical "
    "instruments, stands at the center, each tool bearing "
    "the marks of countless\n";
    print->printSpaces();
    std::cout << "experiments. Jars filled with "
    "mysterious specimens line the shelves, their "
    "contents ranging from iridescent\n";
    print->printSpaces();
    std::cout << "powders to curious botanical extracts. "
    "At the back wall, a large tapestry hangs in silence, "
    "its intricate\n";
    print->printSpaces();
    std::cout << "patterns and muted colours suggesting a "
    "connection to the mystical pursuits that once "
    "unfolded within this\n";
    print->printSpaces();
    std::cout << "enigmatic space.\n\n";
    print->printEndBuffer();
    delete print;
}
void AlchemyRoom::interact() {
    UI* print = new UI();
    system("clear");
    print->printPuzzle2Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "Approaching the cluttered alchemical table, "
    "you lay out the ingredients you have aquired\n\n";
    print->printEndBuffer();

    std::string choice;
    do {
        system("clear");
    print->printPuzzle2Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "In which order shall you mix the ingredients?\n\n";
    print->printSpaces();
    std::cout << "1: Sun -> Moon -> Earth\n";
    print->printSpaces();
    std::cout << "2: Earth -> Sun -> Moon\n";
    print->printSpaces();
    std::cout << "3: Moon -> Earth -> Sun\n\n";
    print->printStdBorder();
    print->printInput();
    std:: cin >> choice;
    system("clear");
    if (choice == "1") {
        print->printPuzzle2Border();
        print->printStdBorder();
        print->printSpaces();
        std::cout << "With a steady hand you pour the vial of Sunlight, "
        "crush the Moon Blossom and grind the Earth Shard.\n\n";
        print->printEndBuffer();
        system("clear");
        print->printPuzzle2Border();
        print->printStdBorder();
        print->printSpaces();
        std::cout << "As the last ingredient "
        "melds into the alchemical mixture, "
        "a transformative alchemy unfolds. The potion, once a \n";
        print->printSpaces();
        std::cout << "collection of disparate elements, now shimmers "
        "with a radiant golden hue. You are positive that this potion holds \n";
        print->printSpaces();
        std::cout << "the curative power needed to "
        "break the vile curse afflicting "
        "the princess.\n\n";
        print->printEndBuffer();
        system("clear");
        print->printPuzzle2Border();
        print->printStdBorder();
        print->printSpaces();
        std::cout << "Having completed the potion, your urgency "
        "compels you to swiftly leave the dungeon. The alchemical "
        "mixture, \n";
        print->printSpaces();
        std::cout << "pulsating with the combined essences of earth, "
        "moon, and sun, cradles the potential to break the curse \n";
        print->printSpaces();
        std::cout << "afflicting the princess. With determined strides, "
        "you rush to the princess's chambers, each step resonating \n";
        print->printSpaces();
        std::cout << "with the hope that this alchemical remedy may be the "
        "antidote she desperately needs.\n\n";
        print->printEndBuffer();
        system("clear");
        print->printPrincessBorder();
        print->printStdBorder();
        print->printSpaces();
        std::cout << "Entering the princess's chambers, a hushed solemnity "
        "fills the air as she lies bedridden, surrounded by the\n";
        print->printSpaces();
        std::cout << "concerned presence of the king and attendants. The room "
        "is bathed in a soft glow, but the princess's visage\n";
        print->printSpaces();
        std::cout << "appears gaunt and pallid, a stark reflection of the "
        "affliction that has gripped her. The weight of anticipation\n";
        print->printSpaces();
        std::cout << "hangs in the air as you present the alchemical potion, "
        "a beacon of hope in the dimly lit chamber.\n\n";
        print->printEndBuffer();
        system("clear");
        print->printPrincessBorder();
        print->printStdBorder();
        print->printSpaces();
        std::cout << "As you carefully administer the golden-hued potion to "
        "the princess, a luminous warmth seems to emanate from \n";
        print->printSpaces();
        std::cout << "the elixir. The room holds its breath as the "
        "princess's complexion transforms, the pallor fading, and "
        "a renewed\n";
        print->printSpaces();
        std::cout << "vitality returning to her once-languid "
        "features. A gentle, grateful smile graced her lips, mirrored by the\n";
        print->printSpaces();
        std::cout << "astonishment in the eyes of the king and "
        "attendants. The golden elixir has proven its efficacy, "
        "dispelling the curse\n";
        print->printSpaces();
        std::cout << "and restoring the princess to health. The chamber "
        "once filled with apprehension, now resonates with the joyous\n";
        print->printSpaces();
        std::cout << "relief of a kingdom given a second chance.\n\n\n";
        std::cout << std::setw(94) << "YOU WIN!\n\n";
        print->printStdBorder();

    } else if (choice == "2") {
        print->printPuzzle2Border();
        print->printStdBorder();
        print->printSpaces();
        std::cout << "With a steady hand you grind the Earth Shard, "
        "pour the Vial of Sunlight and crush the Moon Blossom.\n\n";
        print->printEndBuffer();
        system("clear");
        print->printPuzzle2Border();
        print->printStdBorder();
        print->printSpaces();
        std::cout << "As the last ingredient melds into the alchemical "
        "mixture, a transformative alchemy unfolds. The potion, once a\n";
        print->printSpaces();
        std::cout << "collection of disparate elements, now shimmers with "
        "a vibrant shade of green. Uncertainty creeps into your\n";
        print->printSpaces();
        std::cout << "thoughts as the hue takes you by surprise, leaving "
        "you to ponder whether this concoction will indeed hold\n";
        print->printSpaces();
        std::cout << "the key to curing the princess.\n\n";
        print->printEndBuffer();
         system("clear");
        print->printPuzzle2Border();
        print->printStdBorder();
        print->printSpaces();
        std::cout << "Having completed the potion, your urgency "
        "compels you to swiftly leave the dungeon. The alchemical "
        "mixture, \n";
        print->printSpaces();
        std::cout << "pulsating with the combined essences of earth, "
        "moon, and sun, cradles the potential to break the curse \n";
        print->printSpaces();
        std::cout << "afflicting the princess. With determined strides, "
        "you rush to the princess's chambers, each step resonating \n";
        print->printSpaces();
        std::cout << "with the hope that this alchemical remedy may be the "
        "antidote she desperately needs.\n\n";
        print->printEndBuffer();
        system("clear");
        print->printPrincessBorder();
        print->printStdBorder();
        print->printSpaces();
        std::cout << "With cautious hope, you administer the vibrant green "
        "potion to the bedridden princess, but the room remains\n";
        print->printSpaces();
        std::cout << "enveloped in an anticipatory silence. Despite the "
        "essence of earth, moon, and sun pulsating within the elixir,\n";
        print->printSpaces();
        std::cout << "there is no immediate change in the "
        "princess's condition. The air becomes charged with uncertainty as "
        "the\n";
        print->printSpaces();
        std::cout << "attendants and the king exchange uncertain glances. "
        "The princess, still gaunt and pallid, offers no discernible\n";
        print->printSpaces();
        std::cout << "reaction to the elixir, leaving the room in a "
        "lingering state of ambivalence.\n\n\n";
        std::cout << std::setw(95) << "YOU LOSE!\n\n";
        print->printStdBorder();

    } else if (choice == "3") {
        print->printPuzzle2Border();
        print->printStdBorder();
        print->printSpaces();
        std::cout << "With a steady hand you crush the Moon Blossom, "
        "grind the Earth Shard and pour the Vial of Sunlight\n\n";
        print->printEndBuffer();
        system("clear");
        print->printPuzzle2Border();
        print->printStdBorder();
        print->printSpaces();
        std::cout << "As the last ingredient melds into the alchemical "
        "mixture, a transformative alchemy unfolds. The potion, once a\n";
        print->printSpaces();
        std::cout << "collection of disparate elements, now shimmers "
        "with a somber, dark blue colour. A tinge of concern creeps "
        "into\n";
        print->printSpaces();
        std::cout << "your thoughts, as this unforeseen coloration "
        "raises doubts about the efficacy of the concoction. While "
        "uncertainty\n";
        print->printSpaces();
        std::cout << "lingers, you can't shake the feeling that this "
        "unexpected shade may not hold the cure for "
        "the princess's affliction.\n\n";
        print->printEndBuffer();
         system("clear");
        print->printPuzzle2Border();
        print->printStdBorder();
        print->printSpaces();
        std::cout << "Having completed the potion, your urgency "
        "compels you to swiftly leave the dungeon. The alchemical "
        "mixture, \n";
        print->printSpaces();
        std::cout << "pulsating with the combined essences of earth, "
        "moon, and sun, cradles the potential to break the curse \n";
        print->printSpaces();
        std::cout << "afflicting the princess. With determined strides, "
        "you rush to the princess's chambers, each step resonating \n";
        print->printSpaces();
        std::cout << "with the hope that this alchemical remedy may be the "
        "antidote she desperately needs.\n\n";
        print->printEndBuffer();
        system("clear");
        print->printPrincessBorder();
        print->printStdBorder();
        print->printSpaces();
        std::cout << "With uncertain hope, you administer the dark blue "
        "potion to the bedridden princess, a disheartening change\n";
        print->printSpaces();
        std::cout << "unfolds. Instead of offering relief, the elixir "
        "seems to hasten her decline. The room is shrouded in mournful\n";
        print->printSpaces();
        std::cout << "silence as the princess's weakened state "
        "deteriorates before your eyes. Her breaths become shallower, "
        "and the\n";
        print->printSpaces();
        std::cout << "attendants exchange glances filled with sorrow "
        "and disbelief. The king, though visibly distressed, remains silent,\n";
        print->printSpaces();
        std::cout << "his eyes reflecting the anguish of a father "
        "witnessing the worsening fate of his beloved daughter. "
        "The unintended\n";
        print->printSpaces();
        std::cout << "consequence of the elixir casts a heavy shadow "
        "over the chamber, signaling a heartbreaking end to "
        "the desperate\n";
        print->printSpaces();
        std::cout << "attempts to save the princess.\n\n\n";
        std::cout << std::setw(95) << "YOU LOSE!\n\n";
        print->printStdBorder();

    } else {
        print->printStdBorder();
        print->printSpaces();
        std::cout << "> Please select a valid option\n";
    }
} while (choice != "1" && choice != "2" && choice != "3");
    delete print;
    exit(0);
}

void AlchemyRoom::inspect() {
    UI* print = new UI();
    system("clear");
    print->printPuzzle2Border();
    print->printStdBorder();
    print->printSpaces();
    std::cout << "Approaching the large tapestry adorning "
    "the lab's back wall, you find yourself drawn "
    "to its intricate weave.\n";
    print->printSpaces();
    std::cout << "The fabric, weathered by time, "
    "unfolds a celestial tableau portraying "
    "the sun, moon, and earth in a harmonious\n";
    print->printSpaces();
    std::cout << "dance. you notice verses "
    "woven into the fabric.\n\n\n";
    std::cout << std::setw(106) << "In the dawn's embrace, the sun did rise,\n";
    std::cout << std::setw(103) <<"A golden orb, the canvas of skies.\n";
    std::cout << std::setw(105) <<"Following its lead, the moon emerged,\n";
    std::cout << std::setw(104) <<"A silver whisper, celestial surge.\n\n";
    std::cout << std::setw(107) <<"With cosmic grace, the earth stood still,\n";
    std::cout << std::setw(102) << "A sentinel in the cosmic quill.\n";
    std::cout << std::setw(103) << "Sun and moon, in celestial play,\n";
    std::cout << std::setw(105) <<"Guide the earth through night and day.\n\n";
    print->printEndBuffer();
    delete print;
}
