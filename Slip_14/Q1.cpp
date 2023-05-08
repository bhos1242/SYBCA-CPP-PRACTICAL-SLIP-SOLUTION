// 1. Write a C++ program to interchange values of two integer numbers (use call by reference)

#include<iostream>

using namespace std;

void swap(int &x,int &y){
      int temp = x;
      x = y;
      y = temp;
}

int main() {
    int num1 = 5, num2 = 10;

    cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << endl;

    swap(num1, num2);

    cout << "After swap: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}











