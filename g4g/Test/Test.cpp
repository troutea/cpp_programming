#include "Test.h"

#include <iostream>
Test::Test() {

    std::cout << "Calling the constructor" << '\n';
}

 int Test::ptr(int n) {
    std::cout << "calling the static function" << '\n';
int *p = &n;
std::cout << "The address of n is:  " << p << '\n';
std::cout << "The data stored in the address is  " << *p << '\n';

    return 0;
}