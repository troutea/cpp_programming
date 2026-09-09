#ifndef CARS_H
#define CARS_H

#include<iostream>
#include<string>
#pragma once


//Car is the bases class
class Car {

private:
std::string licenseNumber;
std::string VIN;
std::string brand;
std::string engineType;
std::string fuelType;
std::string batteryType;
int year;



public:
Car();

// the class is not a abstract class
// if it was you would be unable to instantiate an object
// since it is virtual then this ensures the child start function is called.

virtual void start();
void stop();


protected:

};

#endif