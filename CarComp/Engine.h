#ifndef ENGINE_H
#define ENGINE_H

#pragma once
#include "Engine.h"
#include "Battery.h"

class Engine
{
public:
std::string type;
virtual void start() const = 0;
    Engine();
    ~Engine();

private:

};

#endif