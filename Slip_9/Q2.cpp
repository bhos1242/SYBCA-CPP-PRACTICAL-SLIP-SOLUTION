#include<iostream>
#include<string>
using namespace std;

class Train {
    protected:
        int train_no;
        string train_name;
    public:
        void get_train_details() {
            cout << "Enter Train Number: ";
            cin >> train_no;
            cout << "Enter Train Name: ";
            cin.ignore();
            getline(cin, train_name);
        }
};

class Route: public Train {
    protected:
        int route_id;
        string source;
        string destination;
    public:
        void get_route_details() {
            cout << "Enter Route ID: ";
            cin >> route_id;
            cout << "Enter Source: ";
            cin.ignore();
            getline(cin, source);
            cout << "Enter Destination: ";
            getline(cin, destination);
        }
};

class Reservation: public Route {
    private:
        int number_of_seats;
        string train_class;
        float fare;
        string travel_date;
    public:
        void get_reservation_details() {
            cout << "Enter Number of Seats: ";
            cin >> number_of_seats;
            cout << "Enter Train Class: ";
            cin >> train_class;
            cout << "Enter Fare: ";
            cin >> fare;
            cout << "Enter Travel Date: ";
            cin.ignore();
            getline(cin, travel_date);
        }
        
        void display_reservation_details() {
            cout << "\nReservation Details: " << endl;
            cout << "Train Number: " << train_no << endl;
            cout << "Train Name: " << train_name << endl;
            cout << "Route ID: " << route_id << endl;
            cout << "Source: " << source << endl;
            cout << "Destination: " << destination << endl;
            cout << "Number of Seats: " << number_of_seats << endl;
            cout << "Train Class: " << train_class << endl;
            cout << "Fare: " << fare << endl;
            cout << "Travel Date: " << travel_date << endl;
        }
        
        void display_train_class_reservations(string tc) {
            if(tc == train_class) {
                  display_reservation_details();
            }
        }
        
        static int count;
        
        Reservation() {
            count++;
        }
        
        static int get_count() {
            return count;
        }
};

int Reservation::count = 0;

int main() {
    int n;
    cout << "Enter Number of Reservations: ";
    cin >> n;
    Reservation* reservations[n];
    for(int i=0; i<n; i++) {
        reservations[i] = new Reservation();
        reservations[i]->get_train_details();
        reservations[i]->get_route_details();
        reservations[i]->get_reservation_details();
    }
    
    cout << "\nAll Reservations: " << endl;
    for(int i=0; i<n; i++) {
        reservations[i]->display_reservation_details();
    }
    
    string tc;
    cout << "\nEnter Train Class to Display Reservations: ";
    cin >> tc;
    cout << "\nReservations for Train Class " << tc << ":" << endl;
for(int i=0; i<n; i++) {
    reservations[i]->display_train_class_reservations(tc);
}

cout << "\nTotal Number of Reservations: " << Reservation::get_count() << endl;

// Free the memory allocated for reservations
for(int i=0; i<n; i++) {
    delete reservations[i];
}
return 0;
}
