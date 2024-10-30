/**
* @author C. Adam Chan [a.chan@uleth.ca], Ronan Kunkel [r.kunkel@uleth.ca], Luke Zosiuk [luke.zosiuk@uleth.ca]
* @date 2023-11
*/
#ifndef COMBAT_H_INCLUDED
#define COMBAT_H_INCLUDED

/**
* @class Combat Combat.h "Combat.h"
* @brief Interface for the combat between characters.
*/

class Combat {
 public:
  enum Moves {MAGIC = 1, MELEE = 2, BLOCK = 3};

/**
 * @brief Default Constructor.
*/
  Combat();

/**
 * @brief Default destructor.
*/
  ~Combat();

/**
 * @brief Returns player health.
*/
  int getPlayerHealth();

/**
 * @brief Returns ai health.
*/
  int getAiHealth();

/**
 * @brief Returns player combat choice.
*/
  int get_player_choice();

/**
 * @brief Sets player health.
 * @param [in] newHealth new player health
*/
  void setPlayerHealth(int newHealth);

/**
 * @brief Sets ai health.
 * @param [in] newHealth new ai health
*/
  void setAiHealth(int newHealth);

/**
 * @brief Reduces player health by 1
*/
  void playerTakeDamage();

/**
 * @brief Reduces player health by 1
*/
  void aiTakeDamage();

/**
 * @brief Simulates 1 round of combat between player
 * and computer.
 * @param [in] userMove The chosen action of magic, melee, or blocking.
*/
  void RPS(int userMove);
/**
 * @brief Simulates fight loop between player and golem.
*/
  void fightGolem();

/**
 * @brief Simulates fight loop between player and undead knight.
*/
  void fightUndeadKnight();

/**
 * @brief Simulates fight loop between player and skeletal mage
*/
  void fightSkeletalMage();

 protected:
  int _aiHealth;
  int _health;
};

#endif //Combat_H_INCLUDED
