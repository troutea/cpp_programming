#include <iostream>
#include "Student.h"

Student::Student(std::string studentName) : StudentName(studentName) 
{
    std::cout << "Calling the Student Constructor" << std::endl;
}

Student::~Student() {}

std::string Student::getStudentName() const 
{
    return StudentName;
}

void Student::setStudentName(const std::string& newName) 
{
    this->StudentName = newName;
}

// Assign the whole map
void Student::setCourses(const std::map<std::string, int>& newCourses) 
{
    courses = newCourses;
}

// Return the map
const std::map<std::string, int>& Student::getCourses() const 
{
    return courses;
}

// Add an individual course and grade
void Student::addCourse(const std::string& courseName, int grade) 
{
    courses[courseName] = grade;
}

// Calculate the average grade
double Student::calculateAverage() const 
{
    if (courses.empty()) {
        return 0.0;
    }
    double total = 0;
    for (const auto& entry : courses) {
        total += entry.second;
    }
    return total / courses.size();
}