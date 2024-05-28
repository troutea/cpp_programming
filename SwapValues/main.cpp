#include <iostream>

using namespace std;



int main() {

int *ptra;
int *ptrb;
int *tmp {nullptr};

int a = 2;
int b = 4;




ptra = &a;
ptrb = &b;

tmp = ptra;

cout << ptra << endl;
cout << ptrb << endl;
//temp = ptra;
ptra = ptrb;
ptrb = tmp;

cout << "The pointer a value is " << *ptra << endl;
cout << "The pointer b value is " << *ptrb << endl;
cout << "The pointer b value is " << *tmp << endl;





}