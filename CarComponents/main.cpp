
#include <iostream>
#include "Car.h"
#include "Engine.h"

/*
This is the driver code 


*/
int main() {


    std::cout << "Hello world" << std::endl;

    Car car;
    car.fanbelt = 2;
    
    //car.start();

    Car* p;

    Engine engine;

    p = &engine;
    p->start();
    
    // Engine engine;
    // engine.start();

}





