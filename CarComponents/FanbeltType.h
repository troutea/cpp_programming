#ifndef FANBELTTYPE_H
#define FANBELTTYPE_H

#include <string>
#include "Car.h"
#pragma once

class FanbeltType
{
public:
    FanbeltType();
    ~FanbeltType();

    void setFanbeltType(std::string fanbelt);
    std::string getFanbeltType();
   
    
    
   

private:
std::string fanbelt;

};

#endif