#ifndef ENGINE_H
#define ENGINE_H

#include "Car.h"

#pragma once

class Engine : public Car
{
public:
    Engine();
    ~Engine();
    void start();
    

private:
int horsepower;

};

#endif