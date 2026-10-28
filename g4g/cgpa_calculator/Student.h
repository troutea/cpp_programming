#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <map>

class Student
{
private:
    std::string StudentName;
    std::map<std::string, int> courses; // course name -> mark

public:
    Student(std::string studentName); 
    ~Student();

    std::string getStudentName() const;
    void setStudentName(const std::string& newName);

    // Set or get the entire map of courses
    void setCourses(const std::map<std::string, int>& newCourses);
    const std::map<std::string, int>& getCourses() const;

    // Helper: add a single course and mark
    void addCourse(const std::string& courseName, int grade);

    // Helper: calculate average mark for this student
    double calculateAverage() const;
};

#endif // STUDENT_H