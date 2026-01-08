#include "Car.h"

Car::Car()
{
std::cout << "Calling the Car constructor" << std::endl;
}


void Car::start() {

    std::cout << "Calling the Car start function from Car class" << std::endl; 
}


void Car::stop() {
    std::cout << "Calling the Car stop function" << std::endl;
}