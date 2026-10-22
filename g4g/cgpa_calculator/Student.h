#ifndef STUDENT_H
#define STUDENT_H
#include <string>

#pragma once

class Student
{

    private:
std::string StudentName;
std::string course;
int grade;
int numberOfCourses;



public:
    Student(); 
    ~Student();

    std::string getStudentName() const;

    void setStudentName(const std::string& newName);

    //getters
    std::string getCourseName() const;
    int getCourseGrade() const;

    //setters
    void setCourseName(const std::string& newCourse);
    void setCourseGrade(int newGrade);

    //getter and setter for how many courses
    void setHowManyCourses(int numberOfCourses);
    int getHowManyCourses() const;


protected:

};

#endif    //STUDENT_H