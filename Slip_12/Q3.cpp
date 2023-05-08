// Implement the following class hierarchy:
// Employee: code, ename, desg
// Manager (derived from Employee): year_of_experience, salary
// Define appropriate functions to accept and display details.
// Create n objects of the manager class and display the records.
// Write main function that uses the above class and its member functions.

#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int code;
    string ename;
    string desg;
public:
    void acceptDetails() {
        cout << "Enter employee code: ";
        cin >> code;
        cout << "Enter employee name: ";
        cin >> ename;
        cout << "Enter employee designation: ";
        cin >> desg;
    }
    void displayDetails() {
        cout << "Employee Code: " << code << endl;
        cout << "Employee Name: " << ename << endl;
        cout << "Employee Designation: " << desg << endl;
    }
};

class Manager : public Employee {
private:
    int year_of_experience;
    int salary;
public:
    void acceptDetails() {
        Employee::acceptDetails();
        cout << "Enter manager's years of experience: ";
        cin >> year_of_experience;
        cout << "Enter manager's salary: ";
        cin >> salary;
    }
    void displayDetails() {
        Employee::displayDetails();
        cout << "Manager's Years of Experience: " << year_of_experience << endl;
        cout << "Manager's Salary: " << salary << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of managers: ";
    cin >> n;

    Manager *mgrs = new Manager[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for manager #" << i+1 << endl;
        mgrs[i].acceptDetails();
    }

    cout << "\nDetails of all managers:\n";

    for (int i = 0; i < n; i++) {
        cout << "\nDetails for manager #" << i+1 << endl;
        mgrs[i].displayDetails();
    }

    delete[] mgrs;
    return 0;
}
