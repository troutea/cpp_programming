#include <iostream>
#include "Person.h"


int main() {

std::cout << "Calling main" << '\n';
Person p1("five9", 1002);
p1.setName("John");

std::cout << p1.getName() << '\n';

}