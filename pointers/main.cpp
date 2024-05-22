#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
 
 int *p;
int x = 5;
 cout << "Value of p is : " << p << endl;
 cout << "Address of p is: " << &p << endl;
 p = &x;

 cout << "value of p point to x is " << p << endl;
 cout << "the value contained in x is " << *p << endl;

 cout << "the address of x is: " << &x << endl;


cout << endl;

}