// Q2.Create a base class Student (Roll_No, Name) which derives two classes Theory and Practical.
// Theory class contains marks of five Subjects and Practical class contains marks of two practical
// subjects. Class Result (Total_Marks, Class) inherits both Theory and Practical classes. (Use
// concept of Virtual Base Class) Write a menu driven program to perform the following functions:
// a. Build a master table.
// b. Display master table.

#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    Student(int rollNo, string name) : rollNo(rollNo), name(name) {}

    virtual void inputMarks() = 0;
    virtual void displayMarks() const = 0;

protected:
    int rollNo;
    string name;
};

class Theory : virtual public Student {
public:
    Theory(int rollNo, string name) : Student(rollNo, name) {}

    void inputMarks() override {
        cout << "Enter marks for Theory subjects:\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i+1 << ": ";
            cin >> marks[i];
        }
    }

    void displayMarks() const override {
        cout << "Theory Marks:\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i+1 << ": " << marks[i] << endl;
        }
    }

protected:
    int marks[5];
};

class Practical : virtual public Student {
public:
    Practical(int rollNo, string name) : Student(rollNo, name) {}

    void inputMarks() override {
        cout << "Enter marks for Practical subjects:\n";
        for (int i = 0; i < 2; i++) {
            cout << "Subject " << i+1 << ": ";
            cin >> marks[i];
        }
    }

    void displayMarks() const override {
        cout << "Practical Marks:\n";
        for (int i = 0; i < 2; i++) {
            cout << "Subject " << i+1 << ": " << marks[i] << endl;
        }
    }

protected:
    int marks[2];
};

class Result : public Theory, public Practical {
public:
    Result(int rollNo, string name) : Student(rollNo, name), Theory(rollNo, name), Practical(rollNo, name) {}

    int getTotalMarks() const {
        int total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
        for (int i = 0; i < 2; i++) {
            total += marks[i];
        }
        return total;
    }

    string getClass() const {
        int total = getTotalMarks();
        if (total >= 350) {
            return "First Class with Distinction";
        } else if (total >= 250) {
            return "First Class";
        } else if (total >= 200) {
            return "Second Class";
        } else {
            return "Fail";
        }
    }
};

int main() {
    Result* results[100];
    int count = 0;

    int choice;
    do {
        cout << "MENU\n";
        cout << "1. Add student\n";
        cout << "2. Display all students\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int rollNo;
                string name;
                cout << "Enter Roll No: ";
                cin >> rollNo;
                cin.ignore(); // ignore newline left in the input stream
                cout << "Enter Name: ";
                getline(cin, name);

                results[count] = new Result(rollNo, name);
                results[count]->inputMarks();
                count++;
                break;
            }
            case 2: {
                cout << "MASTER TABLE\n
