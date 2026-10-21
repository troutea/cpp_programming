#include <iostream>
#include "Student.h"
#include "calculator.h"

int main() {

std::cout << "Hello World" << std::endl;

Student student;

student.setName("Alice");

std::cout << "The Students name  is " << student.getName() << std::endl;

return 0;
}