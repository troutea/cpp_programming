#include <iostream>
#include "Car.h"
#include "Engine.h"
#include "Battery.h"

/*
Refer to the class descriptions for the Car classes
https://gemini.google.com/app/fd3052dd10ca5378

*/


int main() {
  std::cout << "Hello World" << '\n';

  

    Car myHybrid;
    myHybrid.setBrand("Toyota");
    myHybrid.setEngineType("V4 Hybrid");
    myHybrid.setBatteryKwh(15);

    myHybrid.prepareForTrip();


}