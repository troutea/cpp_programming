#ifndef TESLA_H
#define TESLA_H
#include "Cars.h"


#pragma once

class Tesla : public Cars
{

    
    private:
     std::string MaxSpeed;
     std::string teslaMaxSpeed;
     

     
public:
    Tesla(std::string maxSpeed);
    
    ~Tesla();

    void speed();
    
   
    std::string getTeslaMaxSpeed();
     void setTeslaMaxSpeed(std::string teslaSpeed);
    



};

#endif