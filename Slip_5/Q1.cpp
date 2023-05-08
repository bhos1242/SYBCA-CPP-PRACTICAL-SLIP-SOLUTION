// .Write a C++ program to create a class Mobile which contains data members as Mobile_Id,
// Mobile_Name, Mobile_Price. Create and Initialize all values of Mobile object by using
// parameterized constructor. Display the values of Mobile object.

#include <iostream>
#include <string>

using namespace std;

class Mobile {
public:
    Mobile(int id, string name, float price) {
        Mobile_Id = id;
        Mobile_Name = name;
        Mobile_Price = price;
    }

    void display() {
        cout << "Mobile ID: " << Mobile_Id << endl;
        cout << "Mobile Name: " << Mobile_Name << endl;
        cout << "Mobile Price: " << Mobile_Price << endl;
    }

private:
    int Mobile_Id;
    string Mobile_Name;
    float Mobile_Price;
};

int main() {
    Mobile mobile1(123, "Samsung Galaxy S21", 799.99);
    mobile1.display();

    return 0;
}
