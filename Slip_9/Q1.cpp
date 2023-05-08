// Q1. Write a C++ program to create a class Item with data members Item_code, Item_name, Item_Price.
// Write member functions to accept and display item information and also display number of objects
// created for a class. (Use Static data member and Static member function)

#include <iostream>
using namespace std;

class Item {
    int Item_code;
    string Item_name;
    float Item_Price;
    static int count;

public:
    Item() {
        Item_code = 0;
        Item_name = "";
        Item_Price = 0.0;
        count++;
    }
    
    Item(int code, string name, float price) {
        Item_code = code;
        Item_name = name;
        Item_Price = price;
        count++;
    }

    void accept() {
        cout << "Enter Item code: ";
        cin >> Item_code;
        cout << "Enter Item name: ";
        cin >> Item_name;
        cout << "Enter Item price: ";
        cin >> Item_Price;
    }

    void display() {
        cout << "Item code: " << Item_code << endl;
        cout << "Item name: " << Item_name << endl;
        cout << "Item price: " << Item_Price << endl;
    }

    static int getCount() {
        return count;
    }
};

int Item::count = 0;

int main() {
    Item item1;
    item1.accept();
    cout << "Item 1 details:" << endl;
    item1.display();

    Item item2(2, "Item2", 100.0);
    cout << "Item 2 details:" << endl;
    item2.display();

    cout << "Number of objects created: " << Item::getCount() << endl;

    return 0;
}
