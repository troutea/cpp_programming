#include <iostream>


float conversion(float n)
{

 float x = ((n -32.0) * 5.0/9.0);
 return x;

}

int main() 
{
std::cout << "Enter the value in farenhe";
float n;
std::cin >> n;
float x{conversion(n)};
std::cout << x << '\n';

}
