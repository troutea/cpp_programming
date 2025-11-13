#include "Player.h"


// Player::Player() : Player {"None",0,0}
// {
//    std::cout << "Calling the no arg  constructor" << '\n';
// }

// Player::Player(std::string name_val) : Player {"None", 0,0} 
// {
// std::cout << "Calling the one arg constructor" << '\n';
// }


Player::Player(std::string name_val, int health_val, int xp_val) :  name{name_val}, health{health_val}, xp{xp_val}
{
std::cout << "Calling the three  arg  constructor" << '\n';
}