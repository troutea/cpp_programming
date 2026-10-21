#include "calculator.h"

calculator::calculator()
{

}

calculator::~calculator()
{

}

std::string calculator::getCourse() const
{
    return course;
}
   
int calculator::getGrade() const 
{
    return grade;
}

void calculator::setCourse(const std::string& newCourse)
{
    course = newCourse;
}

void calculator::setGrade(int newGrade)
{
    grade = newGrade;
}

int calculator::calculateTotalcredits()
{
    // Add your calculation logic here
    return 0;
}
int calculator::totalGradepoints()
{
    // Add your calculation logic here
    return 0;
}