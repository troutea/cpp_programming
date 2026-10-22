#include <iostream>
#include "Student.h"

//Student::Student()
//Constructor initialise list
Student::Student(std::string studentName) : StudentName(studentName) 
{
std::cout << "Calling the Student Constructor" << std::endl;

}

Student::~Student()
{

}


//getter
std::string Student::getStudentName() const 
{
    return StudentName;
}


//Setter 
void Student::setStudentName(const std::string& newName) 
{
      this->StudentName = newName;
}

std::string Student::getCourseName() const
{
    return course;
}
   
int Student::getCourseGrade() const 
{
    return grade;
}

void Student::setCourseGrade(int newGrade)
{
    grade = newGrade;
}

void Student::setCourseName(const std::string& newCourse)
{
    course = newCourse;
}



void Student::setHowManyCourses(int newNumberOfCourses)
{
    numberOfCourses = newNumberOfCourses;
}


int Student::getHowManyCourses() const
{
    return numberOfCourses;
}