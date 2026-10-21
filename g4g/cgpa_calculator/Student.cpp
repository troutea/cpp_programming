#include <iostream>
#include "Student.h"

Student::Student()
{
std::cout << "Calling the Student Constructor" << std::endl;

}

Student::~Student()
{

}


//getter
std::string Student::getName() const 
{
    return name;
}


//Setter 
void Student::setName(const std::string& newName) 
{
      this->name = newName;
}