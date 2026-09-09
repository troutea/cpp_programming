#include <iostream>

class Employee {


    private:
    int salary;

    public:
    Employee(int s) {
        salary = s;
    }


    //Declare friend function

    friend void displaySalary(Employee emp) {
        std::cout << "Salary: " << emp.salary;
    }

};

int main() {
    Employee myEmp(50000);
    displaySalary(myEmp);
    return 0;
}







