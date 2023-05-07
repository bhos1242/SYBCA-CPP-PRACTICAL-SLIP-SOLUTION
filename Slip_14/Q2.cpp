// Q2. Write a C++ program to define a class Bus with the following specifications: Bus No, Bus
// Name, No of Seats, Starting point, Destination .Write a menu driven program by using
// appropriate manipulators to
// a. Accept details of n buses.
// b. Display all bus details.
// c. Display details of bus from specified starting point to destination

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

class Bus {
private:
    string busNo;
    string busName;
    int seats;
    string startingPoint;
    string destination;
public:
    Bus(string no, string name, int s, string sp, string dest) {
        busNo = no;
        busName = name;
        seats = s;
        startingPoint = sp;
        destination = dest;
    }

    void display() {
        cout << setw(10) << busNo << setw(15) << busName << setw(10) << seats << setw(20) << startingPoint << setw(20) << destination << endl;
    }

    string getStartingPoint() {
        return startingPoint;
    }

    string getDestination() {
        return destination;
    }
};

int main() {
    vector<Bus> buses;
    int choice;

    do {
        cout << "Menu:\n";
        cout << "1. Add a new bus\n";
        cout << "2. Display all bus details\n";
        cout << "3. Display details of bus from specified starting point to destination\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string busNo, busName, startingPoint, destination;
                int seats;

                cout << "Enter bus number: ";
                cin >> busNo;
                cout << "Enter bus name: ";
                cin.ignore();
                getline(cin, busName);
                cout << "Enter number of seats: ";
                cin >> seats;
                cout << "Enter starting point: ";
                cin.ignore();
                getline(cin, startingPoint);
                cout << "Enter destination: ";
                getline(cin, destination);

                Bus bus(busNo, busName, seats, startingPoint, destination);
                buses.push_back(bus);
                break;
            }

            case 2: {
                cout << setw(10) << "Bus No" << setw(15) << "Bus Name" << setw(10) << "Seats" << setw(20) << "Starting Point" << setw(20) << "Destination" << endl;
                for (Bus bus : buses) {
                    bus.display();
                }
                break;
            }

            case 3: {
                string startingPoint, destination;

                cout << "Enter starting point: ";
                cin.ignore();
                getline(cin, startingPoint);
                cout << "Enter destination: ";
                getline(cin, destination);

                cout << setw(10) << "Bus No" << setw(15) << "Bus Name" << setw(10) << "Seats" << setw(20) << "Starting Point" << setw(20) << "Destination" << endl;
                for (Bus bus : buses) {
                    if (bus.getStartingPoint() == startingPoint && bus.getDestination() == destination) {
                        bus.display();
                    }
                }
                break;
            }

            case 4: {
                cout << "Exiting program...\n";
                break;
            }

            default: {
                cout << "Invalid choice! Please try again.\n";
                break;
            }
        }
    } while (choice != 4);

    return 0;
}
