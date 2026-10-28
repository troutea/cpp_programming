#include <iostream>
#include <string>
#include <map>
#include "Student.h"

int main() {
    Student student("Alice");

    // Option A: Assign an existing map directly
    std::map<std::string, int> studentProfile = {
        {"maths", 60}, 
        {"english", 45}, 
        {"Latin", 29}
    };
    student.setCourses(studentProfile);

    // Option B: Add more courses individually
    student.addCourse("history", 75);

    // Display student information
    std::cout << "\nStudent: " << student.getStudentName() << '\n';
    std::cout << "Courses and Grades:\n";

    for (const auto& entry : student.getCourses()) {
        std::cout << " - " << entry.first << ": " << entry.second << '\n';
    }

    std::cout << "Average Mark: " << student.calculateAverage() << '\n';

    return 0;
}