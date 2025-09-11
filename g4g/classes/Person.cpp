#include <string>
#include "Person.h"


Person::Person(std::string n, int id) {

    name = n;
    socialID = id;
    std::cout << "calling the constructor" << '\n';

}


std::string Person::getName() const
{
    return name;
}

void Person::setName(std::string newName)
{
    name = newName;
}

bool Person::validateID() const
{
    return (socialID >= 0 && socialID <= 1001);
}