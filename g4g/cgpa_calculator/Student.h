#ifndef STUDENT_H
#define STUDENT_H
#include <string>

#pragma once

class Student
{

    private:
std::string name;


public:
    Student(); 
    ~Student();

    std::string getName() const;

    void setName(const std::string& newName);




protected:

};

#endif    //STUDENT_H