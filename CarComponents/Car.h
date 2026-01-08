#ifndef CARS_H
#define CARS_H

#include<iostream>
#include<string>
#pragma once

class Car {

private:
std::string licenseNumber;
std::string VIN;



public:
Car();
virtual void start();
void stop();
int fanbelt;

protected:

};

#endif