#ifndef ELECTRICMOTOR_H
#define ELECTRICMOTOR_H

#include <iostream>
#include "Engine.h"

#pragma once

class ElectricMotor : public Engine
{
public:
    ElectricMotor();
    ~ElectricMotor();

    void start() const override;

private:

};

#endif