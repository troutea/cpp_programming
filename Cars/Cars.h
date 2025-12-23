#ifndef CARS_H
#define CARS_H

#include<iostream>
#include<string>
#pragma once

class Cars
{
public:
    Cars();
    ~Cars();

    virtual void speed() = 0; 
    

private:
std::string tyres;
std::string engine_type;



};

#endif