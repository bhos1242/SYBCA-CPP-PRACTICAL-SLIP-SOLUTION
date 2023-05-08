// 1.Write a C++ program to check if number is prime or not.

#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPrime(n)) {
        cout << n << " is prime." << endl;
    } else {
        cout << n << " is not prime." << endl;
    }
    return 0;
}
