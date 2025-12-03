#include <iostream>


int fun(int=0, int = 0);

int main()
{
  std::cout << fun(5);
  return 0;
}

int fun(int x, int y) { return (x+y); }