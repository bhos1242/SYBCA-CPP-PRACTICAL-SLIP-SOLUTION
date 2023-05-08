// Q1.Write a C++ program using class which contains two data members as type integer. Create and
// initialize the objects using default constructor, parameterized constructor with default value.
// Write a member function to display maximum from given two numbers for all objects.

#include <iostream>
using namespace std;

class MyClass {
private:
    int num1, num2;

public:
    MyClass() {
        num1 = 0;
        num2 = 0;
    }

    MyClass(int n1 = 0, int n2 = 0) {
        num1 = n1;
        num2 = n2;
    }

    void displayMax() {
        if (num1 > num2) {
            cout << "Max is: " << num1 << endl;
        } else {
            cout << "Max is: " << num2 << endl;
        }
    }
};

int main() {
    MyClass obj1;
    obj1.displayMax(); // output: Max is: 0

    MyClass obj2(10, 20);
    obj2.displayMax(); // output: Max is: 20

    MyClass obj3(30);
    obj3.displayMax(); // output: Max is: 30

    return 0;
}
