#include "FanbeltType.h"

FanbeltType::FanbeltType()
{

}

FanbeltType::~FanbeltType()
{

}

 void FanbeltType::setFanbeltType(std::string fanbelt) {
        this->fanbelt = fanbelt;
    }

    std::string FanbeltType::getFanbeltType() {
        return fanbelt;
    }