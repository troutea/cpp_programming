#include "Tesla.h"

Tesla::Tesla(std::string maxSpeed)
{
std::cout << "Calling the Tesla constructuor" << "\n";
std::string teslaMaxSpeed = maxSpeed;

}

void Tesla::speed() {
    std::cout << "Calling the Tesla speed function" << '\n';
}

Tesla::~Tesla()
{

}


void Tesla::setTeslaMaxSpeed(std::string teslaSpeed)
{
   
     teslaMaxSpeed = teslaSpeed;
    
}

std::string Tesla::getTeslaMaxSpeed()
{
    
    return teslaMaxSpeed;
}

