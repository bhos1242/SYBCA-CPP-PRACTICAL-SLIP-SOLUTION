// Q2.Create a base class Conversion. Derive three different classes Weight (Gram, Kilogram), Volume
// (Milliliter, Liter), Currency (Rupees, Paise) from Conversion class. Write a program to perform
// read, convert and display operations. (Use Pure virtual function)

#include <iostream>
using namespace std;

class Conversion {
public:
    virtual void read() = 0;
    virtual void convert() = 0;
    virtual void display() = 0;
};

class Weight : public Conversion {
protected:
    double value;
    string unit;
public:
    void read() {
        cout << "Enter value and unit of weight (g or kg): ";
        cin >> value >> unit;
    }
    void convert() {
        if (unit == "g") {
            value /= 1000;
            unit = "kg";
        }
    }
    void display() {
        cout << "Weight: " << value << " " << unit << endl;
    }
};

class Volume : public Conversion {
protected:
    double value;
    string unit;
public:
    void read() {
        cout << "Enter value and unit of volume (mL or L): ";
        cin >> value >> unit;
    }
    void convert() {
        if (unit == "mL") {
            value /= 1000;
            unit = "L";
        }
    }
    void display() {
        cout << "Volume: " << value << " " << unit << endl;
    }
};

class Currency : public Conversion {
protected:
    double value;
    string unit;
public:
    void read() {
        cout << "Enter value and unit of currency (Rs or paise): ";
        cin >> value >> unit;
    }
    void convert() {
        if (unit == "paise") {
            value /= 100;
            unit = "Rs";
        }
    }
    void display() {
        cout << "Currency: " << value << " " << unit << endl;
    }
};

int main() {
    Conversion *ptr;
    int choice;
    char ch;
    do {
        cout << "Enter your choice (1 - Weight, 2 - Volume, 3 - Currency): ";
        cin >> choice;
        switch (choice) {
            case 1:
                ptr = new Weight;
                break;
            case 2:
                ptr = new Volume;
                break;
            case 3:
                ptr = new Currency;
                break;
            default:
                cout << "Invalid choice!" << endl;
                continue;
        }
        ptr->read();
        ptr->convert();
        ptr->display();
        cout << "Do you want to continue (y/n)? ";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
    return 0;
}
