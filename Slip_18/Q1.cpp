// Q1.Write a C++ program to calculate following series:
// (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... +(1+2+3+4+...+n)

#include <iostream>

using namespace std;

class SeriesCalculator {
    private:
        int n;
    public:
        void read_input() {
            cout << "Enter the value of n: ";
            cin >> n;
        }
        int calculate_sum() {
            int sum = 0;
            for (int i = 1; i <= n; i++) {
                int inner_sum = 0;
                for (int j = 1; j <= i; j++) {
                    inner_sum += j;
                }
                sum += inner_sum;
            }
            return sum;
        }
};

int main()
{
    SeriesCalculator calculator;
    calculator.read_input();
    int sum = calculator.calculate_sum();
    cout << "The sum of the series is: " << sum << endl;
    return 0;
}
