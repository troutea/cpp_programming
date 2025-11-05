#include <iostream>


class Account {

private:
std::string name;
double balance;

public:
      Account() {
        std::cout << "Calling the default" << '\n';
      }
      Account(std::string name, double balance);
      Account(std::string name);
      Account(double balance);


protected:


};

int main()
{

     Account account;

    return 0;
}
   


