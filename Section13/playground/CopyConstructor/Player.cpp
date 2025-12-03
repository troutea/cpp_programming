#include "Player.h"

Player::Player(std::string name_val, int health_val, int xp_val)
                :name{name_val}, health{health_val}, xp{xp_val} {
std::cout << "Three args constructor for " + name << '\n';
}

// Player::Player(std::string name_val, int health_val, int xp_val) 
//     : name{name_val}, health{health_val}, xp{xp_val} {
//             std::cout << "Three-args constructor for " + name << std::endl;
// }

Player::Player(const Player &source)
    :name(source.name), health(source.health), xp(source.xp) {
        std::cout << "Copy constructor of " << source.name << '\n';
    }

// void Player::display_player(Player p) {
//     std::cout << "Name: " << p.get_name() << '\n';
//     std::cout << "Health: " << p.get_health() << '\n';
//     std::cout << "XP: " << p.get_xp() << '\n';
// }

std::string Player::get_name() {
    return name;
};

int Player::get_health(){
    return health;;
}

int Player::get_xp() {
    return xp;
}