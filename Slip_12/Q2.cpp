// Q2.Write a C++ program to create a class which contains single dimensional integer array of
// given size. Define member function to display median of a given array. (Use Dynamic
// Constructor to allocate and Destructor to free memory of an object). 

#include <iostream>
#include <algorithm> // for std::sort

using namespace std;

class Array {
    int size;
    int* arr;

public:
    Array(int n) {
        size = n;
        arr = new int[size];
    }

    ~Array() {
        delete[] arr;
    }

    void input() {
        cout << "Enter " << size << " integers: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    void display() {
        cout << "The array is: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    double median() {
        sort(arr, arr + size);

        if (size % 2 == 0) {
            return (arr[size/2] + arr[size/2 - 1]) / 2.0;
        }
        else {
            return arr[size/2];
        }
    }
};

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    Array arr(n);
    arr.input();
    arr.display();

    double m = arr.median();
    cout << "The median of the array is: " << m << endl;

    return 0;
}
