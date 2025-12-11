#include <iostream>
#include "Car.h"

int main() 
{

Car car;

car.setCarType("Polo");
//car.getCarType();
std::cout << "the car type is " << car.getCarType() << '\n';

}