// CGPA Calculator
// Classes: Course -> Semester -> Student
// Compile: g++ -std=c++17 -o cgpa_calculator cgpa_calculator.cpp

#include <algorithm>
#include <cctype>
#include <iomanip>
#include <iostream>
#include <limits>
#include <string>
#include <vector>

using namespace std;

// ---------------------------------------------------------------------------
// Course: one course with its credit hours and letter grade
// ---------------------------------------------------------------------------
class Course {
private:
    string name;
    double credits;
    string grade;       // e.g. "A", "B+", "C-"
    double gradePoint;  // 4.0 scale

public:
    Course(const string& name, double credits, const string& grade)
        : name(name), credits(credits), grade(grade) {
        gradePoint = gradeToPoint(grade);
    }

    // Returns the grade point for a letter grade, or -1 if invalid.
    static double gradeToPoint(string g) {
        transform(g.begin(), g.end(), g.begin(),
                  [](unsigned char c) { return toupper(c); });
        if (g == "A+" || g == "A") return 4.0;
        if (g == "A-") return 3.7;
        if (g == "B+") return 3.3;
        if (g == "B")  return 3.0;
        if (g == "B-") return 2.7;
        if (g == "C+") return 2.3;
        if (g == "C")  return 2.0;
        if (g == "C-") return 1.7;
        if (g == "D+") return 1.3;
        if (g == "D")  return 1.0;
        if (g == "F")  return 0.0;
        return -1.0;
    }

    static bool isValidGrade(const string& g) { return gradeToPoint(g) >= 0.0; }

    const string& getName() const { return name; }
    double getCredits() const { return credits; }
    const string& getGrade() const { return grade; }
    double getGradePoint() const { return gradePoint; }
    double getQualityPoints() const { return gradePoint * credits; }
};

// ---------------------------------------------------------------------------
// Semester: a collection of courses; computes credits, points and GPA
// ---------------------------------------------------------------------------
class Semester {
private:
    int number;
    vector<Course> courses;

public:
    explicit Semester(int number) : number(number) {}

    void addCourse(const Course& c) { courses.push_back(c); }

    int getNumber() const { return number; }
    const vector<Course>& getCourses() const { return courses; }

    double getTotalCredits() const {
        double total = 0;
        for (const auto& c : courses) total += c.getCredits();
        return total;
    }

    double getTotalGradePoints() const {
        double total = 0;
        for (const auto& c : courses) total += c.getQualityPoints();
        return total;
    }

    double getGPA() const {
        double credits = getTotalCredits();
        return credits > 0 ? getTotalGradePoints() / credits : 0.0;
    }

    void display() const {
        cout << "\n--- Semester " << number << " ---\n";
        cout << left << setw(25) << "Course"
             << setw(10) << "Credits"
             << setw(8)  << "Grade"
             << setw(12) << "Grade Pts"
             << "Quality Pts\n";
        cout << string(65, '-') << "\n";
        cout << fixed << setprecision(2);
        for (const auto& c : courses) {
            cout << left << setw(25) << c.getName()
                 << setw(10) << c.getCredits()
                 << setw(8)  << c.getGrade()
                 << setw(12) << c.getGradePoint()
                 << c.getQualityPoints() << "\n";
        }
        cout << string(65, '-') << "\n";
        cout << "Total credits      : " << getTotalCredits() << "\n";
        cout << "Total grade points : " << getTotalGradePoints() << "\n";
        cout << "Semester GPA       : " << getGPA() << "\n";
    }
};

// ---------------------------------------------------------------------------
// Student: owns all semesters and computes the overall CGPA
// ---------------------------------------------------------------------------
class Student {
private:
    string name;
    string id;
    vector<Semester> semesters;

public:
    Student(const string& name, const string& id) : name(name), id(id) {}

    void addSemester(const Semester& s) { semesters.push_back(s); }

    double getTotalCredits() const {
        double total = 0;
        for (const auto& s : semesters) total += s.getTotalCredits();
        return total;
    }

    double getTotalGradePoints() const {
        double total = 0;
        for (const auto& s : semesters) total += s.getTotalGradePoints();
        return total;
    }

    double getCGPA() const {
        double credits = getTotalCredits();
        return credits > 0 ? getTotalGradePoints() / credits : 0.0;
    }

    void displayReport() const {
        cout << "\n==================== ACADEMIC REPORT ====================\n";
        cout << "Student: " << name << "   ID: " << id << "\n";

        for (const auto& s : semesters) s.display();

        cout << fixed << setprecision(2);
        cout << "\n==================== SUMMARY ====================\n";
        for (const auto& s : semesters) {
            cout << "Semester " << s.getNumber() << " GPA: " << s.getGPA() << "\n";
        }
        cout << "Total credits (all semesters)      : " << getTotalCredits() << "\n";
        cout << "Total grade points (all semesters) : " << getTotalGradePoints() << "\n";
        cout << "CUMULATIVE GPA (CGPA)              : " << getCGPA() << "\n";
        cout << "=========================================================\n";
    }
};

// ---------------------------------------------------------------------------
// Input helpers
// ---------------------------------------------------------------------------
int readInt(const string& prompt, int minVal) {
    int value;
    while (true) {
        cout << prompt;
        if (cin >> value && value >= minVal) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return value;
        }
        cout << "Invalid input. Enter a whole number >= " << minVal << ".\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

double readCredits(const string& prompt) {
    double value;
    while (true) {
        cout << prompt;
        if (cin >> value && value > 0) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return value;
        }
        cout << "Invalid input. Credits must be a positive number.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

string readGrade(const string& prompt) {
    string g;
    while (true) {
        cout << prompt;
        getline(cin, g);
        if (Course::isValidGrade(g)) return g;
        cout << "Invalid grade. Use A, A-, B+, B, B-, C+, C, C-, D+, D or F.\n";
    }
}

// ---------------------------------------------------------------------------
// main
// ---------------------------------------------------------------------------
int main() {
    cout << "========== CGPA CALCULATOR ==========\n";

    string name, id;
    cout << "Student name: ";
    getline(cin, name);
    cout << "Student ID  : ";
    getline(cin, id);

    Student student(name, id);

    int numSemesters = readInt("Number of semesters: ", 1);

    for (int s = 1; s <= numSemesters; ++s) {
        cout << "\n--- Semester " << s << " ---\n";
        Semester semester(s);

        int numCourses = readInt("Number of courses taken: ", 1);
        for (int i = 1; i <= numCourses; ++i) {
            cout << "\nCourse " << i << ":\n";
            string courseName;
            cout << "  Name   : ";
            getline(cin, courseName);
            double credits = readCredits("  Credits: ");
            string grade = readGrade("  Grade  : ");
            semester.addCourse(Course(courseName, credits, grade));
        }
        student.addSemester(semester);
    }

    student.displayReport();
    return 0;
}
