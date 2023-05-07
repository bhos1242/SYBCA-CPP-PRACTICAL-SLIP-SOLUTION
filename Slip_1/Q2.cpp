// // Q2.Write a C++ program to create a class Array that contains one float array as member. Overload
// the Unary ++ and -- operators to increase or decrease the value of each element of an array. Use
// // friend function for operator function. 

#include<iostream>
using namespace std;

class Array {
    private:
        float arr[10];
    public:
        Array() { //constructor to initialize array to zero
            for(int i=0; i<10; i++) {
                arr[i] = 0;
            }
        }
        friend Array operator ++ (Array& obj) { //overloading ++ operator
            for(int i=0; i<10; i++) {
                obj.arr[i]++;
            }
            return obj;
        }
        friend Array operator -- (Array& obj) { //overloading -- operator
            for(int i=0; i<10; i++) {
                obj.arr[i]--;
            }
            return obj;
        }
        void display() { //function to display the array elements
            for(int i=0; i<10; i++) {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};

int main() {
    Array a;
    cout<<"Array before increment:"<<endl;
    a.display();
    ++a;
    cout<<"Array after increment:"<<endl;
    a.display();
    --a;
    --a;
    cout<<"Array after decrement:"<<endl;
    a.display();
    return 0;
}
