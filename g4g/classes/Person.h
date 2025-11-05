#ifndef _PERSON_H_
#define _PERSON_H_

#include <iostream>
#include <string>

class Person {

private:
int socialID;
std::string name;

public:

Person(std::string n, int id);
std::string getName() const;
void setName(std::string newName);
bool validateID() const;


protected:
    
};







#endif