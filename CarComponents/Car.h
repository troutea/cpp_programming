#ifndef CARS_H
#define CARS_H

#include<iostream>
#include<string>
#pragma once

class Car {

private:
std::string licenseNumber;
std::string VIN;
std::string brand;



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