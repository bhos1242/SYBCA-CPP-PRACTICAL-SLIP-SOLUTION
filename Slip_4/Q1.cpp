// Q1.Write a C++ program to print area of circle, square and rectangle using inline function. using class

#include <iostream>

using namespace std;

class Geometry {
    public:
        inline double circleArea(double radius) {
            return 3.14159 * radius * radius;
        }

        inline double squareArea(double side) {
            return side * side;
        }

        inline double rectangleArea(double length, double width) {
            return length * width;
        }
};

int main() {
    Geometry geo;
    double radius, side, length, width;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle is " << geo.circleArea(radius) << endl;
    cout << "Enter the length of the square: ";
    cin >> side;
    cout << "Area of the square is " << geo.squareArea(side) << endl;
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of the rectangle is " << geo.rectangleArea(length, width) << endl;
    return 0;
}
