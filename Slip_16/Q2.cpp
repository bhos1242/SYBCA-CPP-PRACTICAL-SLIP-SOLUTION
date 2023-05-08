// 2. Create two base classes Learn_Info(Roll_No, Stud_Name, Class, Percentage) and
// Earn_Info(No_of_hours_worked, Charges_per_hour). Derive a class Earn_Learn_info from
// above two classes. Write necessary member functions to accept and display Student
// information. Calculate total money earned by the student. (Use constructor in derived class)

#include <iostream>
#include <string>

using namespace std;

// Base class for learning information
class Learn_Info {
protected:
    int roll_no;
    string stud_name;
    string class_;
    double percentage;
public:
    // Member function to read student information
    void read_student_info() {
        cout << "Enter roll number: ";
        cin >> roll_no;
        cout << "Enter student name: ";
        cin.ignore();
        getline(cin, stud_name);
        cout << "Enter class: ";
        getline(cin, class_);
        cout << "Enter percentage: ";
        cin >> percentage;
    }
    
    // Member function to display student information
    void display_student_info() {
        cout << "Roll number: " << roll_no << endl;
        cout << "Student name: " << stud_name << endl;
        cout << "Class: " << class_ << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

// Base class for earning information
class Earn_Info {
protected:
    int no_of_hours_worked;
    double charges_per_hour;
public:
    // Member function to read earning information
    void read_earning_info() {
        cout << "Enter number of hours worked: ";
        cin >> no_of_hours_worked;
        cout << "Enter charges per hour: ";
        cin >> charges_per_hour;
    }
    
    // Member function to display earning information
    void display_earning_info() {
        cout << "Number of hours worked: " << no_of_hours_worked << endl;
        cout << "Charges per hour: " << charges_per_hour << endl;
    }
    
    // Member function to calculate total money earned
    double calculate_total_earning() {
        return no_of_hours_worked * charges_per_hour;
    }
};

// Derived class from Learn_Info and Earn_Info
class Earn_Learn_Info : public Learn_Info, public Earn_Info {
public:
    // Constructor to read student information and earning information
    Earn_Learn_Info() {
        read_student_info();
        read_earning_info();
    }
    
    // Member function to display all information and total money earned
    void display_all_info() {
        display_student_info();
        display_earning_info();
        double total_earning = calculate_total_earning();
        cout << "Total money earned: $" << total_earning << endl;
    }
};

int main() {
    // Create object of derived class and display all information
    Earn_Learn_Info student;
    student.display_all_info();
    return 0;
}
