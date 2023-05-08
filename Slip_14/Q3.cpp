#include <iostream>

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;
public:
    Fraction(int n = 0, int d = 1) {
        numerator = n;
        denominator = d;
    }

    friend ostream& operator<<(ostream& os, const Fraction& f) {
        os << f.numerator << "/" << f.denominator;
        return os;
    }

    friend istream& operator>>(istream& is, Fraction& f) {
        char slash;
        is >> f.numerator >> slash >> f.denominator;
        return is;
    }

    Fraction operator++() {
        numerator += denominator;
        return *this;
    }

    Fraction operator++(int) {
        Fraction temp = *this;
        numerator += denominator;
        return temp;
    }
};

int main() {
    Fraction f1, f2;
    cout << "Enter a fraction in the form n/d: ";
    cin >> f1;
    cout << "f1 = " << f1 << endl;

    cout << "Enter another fraction in the form n/d: ";
    cin >> f2;
    cout << "f2 = " << f2 << endl;

    cout << "f1++ = " << f1++ << endl;
    cout << "++f2 = " << ++f2 << endl;

    return 0;
}
