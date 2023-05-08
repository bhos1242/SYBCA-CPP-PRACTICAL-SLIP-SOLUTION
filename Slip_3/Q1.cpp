// Q1.Write a C++ program to overload function Volume and find Volume of Cube, Cylinder and
// Sphere.

#include <iostream>
using namespace std;

const double PI = 3.14159; // defining the value of PI

double Volume(double length) { // Volume function for Cube
    return length * length * length;
}

double Volume(double radius, double height) { // Volume function for Cylinder
    return PI * radius * radius * height;
}

double Volume(double radius) { // Volume function for Sphere
    return (4 * PI * radius * radius * radius) / 3;
}

int main() {
    double length, radius, height;

    // Asking user for input
    cout << "Enter the length of a side of a cube: ";
    cin >> length;

    cout << "Enter the radius and height of a cylinder: ";
    cin >> radius >> height;

    cout << "Enter the radius of a sphere: ";
    cin >> radius;

    // Calculating volumes using overloaded Volume functions
    double volume_cube = Volume(length);
    double volume_cylinder = Volume(radius, height);
    double volume_sphere = Volume(radius);

    // Printing the results
    cout << "The volume of the cube is " << volume_cube << endl;
    cout << "The volume of the cylinder is " << volume_cylinder << endl;
    cout << "The volume of the sphere is " << volume_sphere << endl;

    return 0;
}
