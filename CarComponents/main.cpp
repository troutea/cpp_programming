
#include <iostream>
#include "Car.h"
#include "Engine.h"
#include "FanbeltType.h"

/*
This is the driver code 


*/
int main() {


    std::cout << "Hello world" << std::endl;


    //Create and engine object
    Engine engine;

    //start the enging function
    engine.start();
    //set the horsepowe of the engine
    engine.setHorsePower(50);
    std::cout << engine.getHorsePower() << '\n';


    // create an instance of fanbelt
     FanbeltType fanbelttype;

     //set the type of fan belt
     fanbelttype.setFanbeltType("chain_belt");
     std::cout << fanbelttype.getFanbeltType() << '\n';


}







