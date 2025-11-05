
#include <iostream>

#include "Person.h"

Person::Person(std::string n, int id) {
           name = n;
           socialID = id;
           std::cout << "calling the constructor" << '\n';
           std::cout << "Calling the constructor" << '\n';
        }



void Person::setName(std::string Newname){
    name = Newname;
}

std::string Person::getName() {
    return name;
}