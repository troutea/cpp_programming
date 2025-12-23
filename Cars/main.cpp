#include <iostream>
#include "Cars.h"
#include "Tesla.h"



int main() 
{

std::cout << "hello world in the Cars project" << '\n';

Tesla tesla("100mph");

tesla.speed();
tesla.setTeslaMaxSpeed("120");
std::cout << "The tesla max speed is  " << tesla.getTeslaMaxSpeed() << "\n";



    return 0;
}