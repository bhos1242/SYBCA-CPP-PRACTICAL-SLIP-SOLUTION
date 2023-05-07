// Q2. Create a class Time containing members as:
// - hours
// - minutes
// - seconds
// Write a C++ program for overloading operators >> and << to accept and display a Time
// also write a member function to display time in total seconds.

#include <iostream>

using namespace std;

class Time {
  private:
    int hours, minutes, seconds;
  public:
    Time() {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    friend istream& operator>>(istream& input, Time& t) {
        cout << "Enter hours: ";
        input >> t.hours;
        cout << "Enter minutes: ";
        input >> t.minutes;
        cout << "Enter seconds: ";
        input >> t.seconds;
        return input;
    }

    friend ostream& operator<<(ostream& output, const Time& t) {
        output << t.hours << " hours, " << t.minutes << " minutes, " << t.seconds << " seconds";
        return output;
    }

    void displayTotalSeconds() {
        int totalSeconds = (hours * 3600) + (minutes * 60) + seconds;
        cout << "Total seconds: " << totalSeconds << endl;
    }
};

int main() {
    Time t1;
    cin >> t1;
    cout << "Time: " << t1 << endl;
    t1.displayTotalSeconds();
    return 0;
}
