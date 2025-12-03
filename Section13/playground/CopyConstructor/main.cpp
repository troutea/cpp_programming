#include "Player.h"
#include <iostream>


void display_player(Player p) {
   std::cout << "Name: " << p.get_name() << '\n';
   std::cout << "Health: " << p.get_health() << '\n';
    std::cout << "XP: " << p.get_xp() << '\n';    
}

int main() {

//Player empty;

//display_player(empty);
// Player frank {"Frank"};
// display_player(frank);
// Player hero {"Hero", 100};
 Player villian {"Villian", 100, 55};
 display_player(villian);


}

