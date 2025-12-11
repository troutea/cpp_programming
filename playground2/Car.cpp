#include <iostream>
#include "Car.h"

void Car::setCarType(std::string carType)
{
    std::cout << "The Car type is  " << carType << '\n';
    Type = carType;
}

std::string Car::getCarType()
{
    std::cout << "The car type from getCarType is " << Type << '\n';
    return Type;
}

Car::Car()
{

}

Car::~Car()
{

}