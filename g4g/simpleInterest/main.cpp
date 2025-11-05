#include "simpleInterest.h"



int main() 
{

std::cout << "hello world" << '\n';

simpleInterest interest(1,2,3);
interest.calculateInterest(2,2,9);


std::cout << interest.calculateInterest(3,4,7)<< '\n';
}