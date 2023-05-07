// Q1.Write a C++ program to accept length and width of a rectangle. Calculate and display perimeter
// as well as area of a rectangle by using inline function

#include <iostream>

using namespace std;

class Rectangle {
  private:
    int length;
    int width;

  public:
    void setDimensions(int l, int w) {
        length = l;
        width = w;
    }

    inline int area() {
        return length * width;
    }
//     This eliminates the function call overhead, resulting in faster execution.

// Note that the inline keyword is a suggestion to the compiler, and the compiler may choose to ignore it in some cases. In general, inline functions are most effective for small, simple functions that are called frequently.

    inline int perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    int length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    Rectangle rect;
    rect.setDimensions(length, width);

    cout << "Area of the rectangle = " << rect.area() << endl;
    cout << "Perimeter of the rectangle = " << rect.perimeter() << endl;

    return 0;
}
