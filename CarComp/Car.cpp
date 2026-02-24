#include<iostream>
#include "Car.h"
#include "Engine.h"
#include "Battery.h"


Car::Car()
{
  std::cout << "Calling the Car constructor" << "\n";
}

Car::~Car()
{

}

void Car::setBrand(std::string b) 
{
  brand = b;
}

// void Car::setEngineType(std::string t)
// {
//   engine.type = t;
// }
void Car::setBatteryKwh(int k) 
{
  battery.kwh = k;
}

void Car::prepareForTrip()
{
  std::cout << "Preparing " << brand << ":" << std::endl;
  //engine.start();
  battery.charge();
}