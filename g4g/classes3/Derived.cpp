#include "Derived.h"


Derived::Derived()
{

    std::cout << "Calling the derived Constructor" << '\n';
}

void Derived::func() 
{
    n = 22;
}