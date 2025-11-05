
#include "Geeks.h"

Geeks::Geeks()
{
    std::cout << "Calling the constructor" << '\n';
}


void Geeks::add(int a, int b)
{
    std::cout << "Integer Sum = " << a + b << '\n';
}


void Geeks::add(double a, double b)
{
    std::cout << "Float Sum = " << a + b << '\n';
}