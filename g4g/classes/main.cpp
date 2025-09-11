
#include <iostream>
#include "Person.h"


int main()
{
std::cout << "running" << '\n';
Person p1("five9", 1002);

if(!p1.validateID())
    std::cout << "Invalid SocialID\n";

std::cout << "Name: " << p1.getName() << '\n';



}