#ifndef _DOG_H_
#define  _DOG_H_

#include <string>

class Dog {

    

private:
std::string name;
int age;

public:

Dog() {
    name = "None";
    age = 0;
}

std::string  get_name();
int get_age(); 
void set_name(std::string name);
void set_age(int age);


protected:


};

#endif