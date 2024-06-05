#include <iostream>
#include <string>
#include <vector>



using namespace std;

class Player {

    public:

string name {"Player"};
int health {100};
int xp {3};

//methods
void talk(string text_to_say) {cout << name << "says" << text_to_say << endl;}
bool is_dead();

};
class Account {

    public:
string name;
double balance {0.0};

//methods
bool deposit(double bal) {balance += bal; cout << "In deposit" << endl;}
bool withdraw(double bal) {balance -= bal; cout << "In withdraw" << endl;}

};





main() {

Account frank_account;
frank_account.name = "Franks account";
frank_account.balance = 5000.0;
frank_account.deposit(1000.0);
frank_account.withdraw(500.0);


Player frank;
frank.name = "Frank";
frank.health = 100;
frank.xp = 12;
frank.talk("Hi there");


Player *enemy = new Player;
(*enemy).name = "Enemy";
(*enemy).health = 100;
enemy->xp = 15;

enemy->talk("I will destryo you");



return 0;


}