
#include "Derived.h"
#include <iostream>


int main() {

Base base;

Derived d;

d.func();

d.printN();

std::cout << "Direct Access to inherited member: " << d.n << std::endl;

d.n = 100;

std::cout << "After direct modification: ";
d.printN();

return 0;


}