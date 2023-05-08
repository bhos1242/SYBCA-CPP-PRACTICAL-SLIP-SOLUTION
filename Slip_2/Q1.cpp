// .Write a C++ program to create two classes Rectangle1 and Rectangle2. Compare area of both the
// rectangles using friend function.

#include <iostream>
using namespace std;

class Rectangle2;

class Rectangle1 {
    private:
        double length;
        double breadth;
    public:
        Rectangle1(double l = 0.0, double b = 0.0) {
            length = l;
            breadth = b;
        }
        double getArea() {
            return length * breadth;
        }
        friend void compare(Rectangle1, Rectangle2);
};

class Rectangle2 {
    private:
        double length;
        double breadth;
    public:
        Rectangle2(double l = 0.0, double b = 0.0) {
            length = l;
            breadth = b;
        }
        double getArea() {
            return length * breadth;
        }
        friend void compare(Rectangle1, Rectangle2);
};

void compare(Rectangle1 r1, Rectangle2 r2) {
    double area1 = r1.getArea();
    double area2 = r2.getArea();
    if (area1 > area2) {
        cout << "Area of Rectangle1 is greater than area of Rectangle2\n";
    } else if (area2 > area1) {
        cout << "Area of Rectangle2 is greater than area of Rectangle1\n";
    } else {
        cout << "Area of both Rectangles is equal\n";
    }
}

int main() {
    Rectangle1 r1(5, 6);
    Rectangle2 r2(6, 7);
    compare(r1, r2);
    return 0;
}
