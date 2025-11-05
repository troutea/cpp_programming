#include "simpleInterest.h"



simpleInterest::simpleInterest(float P, float R, float T) {
 this->P = P;
 this->R = R;
 this->T = T;
 std::cout << "calling the simplei terets constructor" << '\n';

}

float simpleInterest::calculateInterest(float P, float R, float T)
{
//float sum = 0;
float SI = (P * T * R);
std::cout << "Simpel Interest is  " << SI << '\n';

return SI;

}
