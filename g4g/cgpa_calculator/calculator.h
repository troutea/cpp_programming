#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <string>

#pragma once

class calculator
{

 private:
    std::string course;
    int grade;


public:
    calculator();
    ~calculator();

    int calculateTotalcredits(); 
    int totalGradepoints();

   //getters
    std::string getCourse() const;
    int getGrade() const;

    //setters
    void setCourse(const std::string& newCourse);
    void setGrade(int newGrade);

};

#endif  //CALCULATOR