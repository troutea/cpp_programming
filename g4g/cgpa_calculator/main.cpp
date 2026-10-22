#include <iostream>
 #include <string>
 #include <vector>
#include "Student.h"
#include "Calculator.h"
//using namespace std;

int main() {

std::cout << "Hello World" << std::endl;

 std::vector<std::string> courses {"maths", "english", "irish"};

for (const std::string &course : courses) {
        std::cout << course << std::endl;
    }


Student student("alice");

student.setStudentName("Alice");

std::cout << "The Students name  is " << student.getStudentName() << std::endl;

//get the course
student.setCourseName("Maths");

std::cout << "The Students course is " << student.getCourseName() << std::endl;


//get the grade
student.setCourseGrade(50);


std::cout << "The grade is " << student.getCourseGrade() << std::endl;

student.setHowManyCourses(4);

std::cout << "The number of courses are " << student.getHowManyCourses() << std::endl;

//the grades earned in each one. list the grades for each course using a for loop
//The program also shows each student's overall course grade. 
//CGPA Calculator calculates a student’s Cumulative Grade Point Average (CGPA) from the given exam results.
//The program can show the individual grades of each course,
//calculate total credits and total grade points achieved
//determine the GPA for the semester

return 0;
}




// #include <iostream>
// #include <vector>
// #include <string>
// #include <map>
// using namespace std;
// class Student {
// private:
//     string name;
//     // Maps course name -> grade (e.g., "maths" -> 85.5)
//     map<string, double> courseGrades;
// public:
//     Student(string studentName) : name(studentName) {}
//     // Setter: assigns a grade to a specific course
//     void setCourseGrade(const string &courseName, double grade) {
//         courseGrades[courseName] = grade;
//     }
//     // Display all courses and their grades
//     void printReportCard() const {
//         cout << "\n--- Report Card for " << name << " ---" << endl;
//         for (const auto &pair : courseGrades) {
//             cout << pair.first << ": " << pair.second << endl;
//         }
//     }
// };
// int main() {
//     Student student("John");
//     // Your vector of courses
//     vector<string> courses {"maths", "english", "irish"};
//     // --- Approach 1: Loop through the vector and prompt for grades ---
//     for (const string &course : courses) {
//         double grade;
//         cout << "Enter grade for " << course << ": ";
//         cin >> grade;
        
//         // Calling the setter with the current course and input grade
//         student.setCourseGrade(course, grade);
//     }
//     // Display the results
//     student.printReportCard();
//     return 0;
// }