#ifndef CAR_H
#define CAR_H

#pragma once
#include "Engine.h"
#include "Battery.h"

class Car
{

private:
std::string brand;
Engine engine;   //Composition
Battery battery;   //Composition

public:
   
    Car();
    ~Car();

    void setBrand(std::string b);
    void setEngineType(std::string t);
    void setBatteryKwh(int k);
    void prepareForTrip();



};

#endif