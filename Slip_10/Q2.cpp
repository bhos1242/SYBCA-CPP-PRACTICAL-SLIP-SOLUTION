// 2. Design a base class Product(Product _Id, Product _Name, Price). Derive a class Discount
// (Discount_In_Percentage) from Product. A customer buys n Products. Calculate total price,
// total discount and display bill using appropriate manipulators

#include <iostream>
#include <iomanip>
using namespace std;

class Product {
    protected:
        int productId;
        string productName;
        double price;
    public:
        Product(int _id = 0, string _name = "", double _price = 0.0) {
            productId = _id;
            productName = _name;
            price = _price;
        }
        virtual void display() {
            cout << setw(5) << productId << setw(20) << productName << setw(10) << price << endl;
        }
        double getPrice() {
            return price;
        }
};

class Discount : public Product {
    private:
        int discountPercentage;
    public:
        Discount(int _id = 0, string _name = "", double _price = 0.0, int _discount = 0) 
            : Product(_id, _name, _price) {
            discountPercentage = _discount;
        }
        double getDiscount() {
            return price * (double)discountPercentage / 100.0;
        }
        void display() {
            cout << setw(5) << productId << setw(20) << productName << setw(10) << price << setw(10) << discountPercentage << "%" << setw(10) << getDiscount() << endl;
        }
};

int main() {
    int n;
    double totalPrice = 0.0;
    double totalDiscount = 0.0;

    cout << "Enter number of products: ";
    cin >> n;

    Product **products = new Product*[n];

    for (int i = 0; i < n; i++) {
        int id;
        string name;
        double price;
        int discount;
        cout << "Enter product id, name, price, discount (%): ";
        cin >> id >> name >> price >> discount;
        products[i] = new Discount(id, name, price, discount);
    }

    cout << "\nBill Details\n";
    cout << setw(5) << "ID" << setw(20) << "Name" << setw(10) << "Price" << setw(10) << "Discount" << setw(10) << "Amount" << endl;

    for (int i = 0; i < n; i++) {
        products[i]->display();
        totalPrice += products[i]->getPrice();
        totalDiscount += products[i]->getDiscount();
    }

    cout << "\nTotal Price: " << totalPrice << endl;
    cout << "Total Discount: " << totalDiscount << endl;
    cout << "Net Price: " << totalPrice - totalDiscount << endl;

    for (int i = 0; i < n; i++) {
        delete products[i];
    }

    delete[] products;

    return 0;
}
