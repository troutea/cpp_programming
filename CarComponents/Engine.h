#ifndef ENGINE_H
#define ENGINE_H

#include "Car.h"

#pragma once

class Engine : public Car
{

private:
    int horsepower;
    std:: engineDesc;


public:
    Engine();
    ~Engine();
    void start();
    void setHorsePower(int horsepower);
    int getHorsePower();
    



};

#endif