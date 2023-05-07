// Q1. Write a C++ program to create a class Number which contains two integer data members. Create
// and initialize the object by using default constructor, parameterized constructor. Write a
// member function to display maximum from given two numbers for all objects. 

#include <iostream>
using namespace std;

class Number {
private:
    int num1, num2;
public:
    Number() {
        num1 = 0;
        num2 = 0;
    }

    Number(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    void displayMax() {
        cout << "The maximum of " << num1 << " and " << num2 << " is " << ((num1 > num2) ? num1 : num2) << endl;
    }
};

int main() {
    Number n1; // default constructor
    Number n2(5, 10); // parameterized constructor

    n1.displayMax(); // output: The maximum of 0 and 0 is 0
    n2.displayMax(); // output: The maximum of 5 and 10 is 10

    return 0;
}
