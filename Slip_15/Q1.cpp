// Q1.Write a C++ program to check minimum and maximum of two integer number (use inline
// function and conditional operator) 

#include <iostream>

using namespace std;

inline void minmax(int a, int b, int &min, int &max) {
    min = (a < b) ? a : b;
    max = (a > b) ? a : b;
}

int main() {
    int num1, num2, min, max;
    cout << "Enter two integer numbers: ";
    cin >> num1 >> num2;
    minmax(num1, num2, min, max);
    cout << "Minimum number is " << min << endl;
    cout << "Maximum number is " << max << endl;
    return 0;
}
