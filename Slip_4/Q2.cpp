// Q2.Create a base class Flight containing protected data members as Flight_no, Flight_Name. Derive
// a class Route(Source, Destination) from class Flight. Also derive a class Reservation (no_seats,
// class, fare, travel_date) from Route. Write a C++ program to perform the following necessary
// functions.
// a. Enter details of n reservations.
// b. Display reservation details of Business class.

#include <iostream>
#include <string>

using namespace std;

class Flight {
    protected:
        string Flight_no;
        string Flight_Name;
};

class Route : public Flight {
    protected:
        string Source;
        string Destination;
};

class Reservation : public Route {
    private:
        int no_seats;
        string Class;
        double fare;
        string travel_date;

    public:
        void EnterDetails() {
            cout << "Enter Flight Number: ";
            cin >> Flight_no;
            cout << "Enter Flight Name: ";
            cin >> Flight_Name;
            cout << "Enter Source: ";
            cin >> Source;
            cout << "Enter Destination: ";
            cin >> Destination;
            cout << "Enter No. of Seats: ";
            cin >> no_seats;
            cout << "Enter Class: ";
            cin >> Class;
            cout << "Enter Fare: ";
            cin >> fare;
            cout << "Enter Travel Date: ";
            cin >> travel_date;
        }

        void DisplayBusinessDetails() {
            if (Class == "Business") {
                cout << "Flight Number: " << Flight_no << endl;
                cout << "Flight Name: " << Flight_Name << endl;
                cout << "Source: " << Source << endl;
                cout << "Destination: " << Destination << endl;
                cout << "No. of Seats: " << no_seats << endl;
                cout << "Class: " << Class << endl;
                cout << "Fare: " << fare << endl;
                cout << "Travel Date: " << travel_date << endl;
            }
        }
};

int main() {
    int n;
    cout << "Enter the number of reservations: ";
    cin >> n;
    Reservation *reservations = new Reservation[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter details of Reservation " << i+1 << endl;
        reservations[i].EnterDetails();
    }
    cout << endl;
    cout << "Reservation Details of Business Class:" << endl;
    for (int i = 0; i < n; i++) {
        reservations[i].DisplayBusinessDetails();
    }
    delete[] reservations;
    return 0;
}
