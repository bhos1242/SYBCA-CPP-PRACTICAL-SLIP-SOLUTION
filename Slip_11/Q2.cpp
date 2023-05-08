// Q2.Write a C++ program to create a class Person that contains data members as Person_Name, City,
// Mob_No. Write a C++ program to perform following functions:
// a. To accept and display Person information
// b. To search the Person details of a given mobile number
// c. To search the Person details of a given city.
// // (Use Function Overloading)

#include<iostream>
#include<string>
using namespace std;

class Person {
    private:
        string Person_Name;
        string City;
        string Mob_No;
    public:
        void accept() {
            cout << "Enter Person Name: ";
            cin >> Person_Name;
            cout << "Enter City: ";
            cin >> City;
            cout << "Enter Mobile Number: ";
            cin >> Mob_No;
        }

        void display() {
            cout << "Person Name: " << Person_Name << endl;
            cout << "City: " << City << endl;
            cout << "Mobile Number: " << Mob_No << endl;
        }

        bool search(string s) {
            return Mob_No == s;
        }

        bool search(string s1, string s2) {
            return City == s1 && Mob_No == s2;
        }
};

int main() {
    int n;
    cout << "Enter the number of persons: ";
    cin >> n;
    Person persons[n];

    for(int i=0; i<n; i++) {
        cout << "\nEnter details of person " << i+1 << ":" << endl;
        persons[i].accept();
    }

    cout << "\nDetails of all persons: " << endl;
    for(int i=0; i<n; i++) {
        cout << "\nDetails of person " << i+1 << ":" << endl;
        persons[i].display();
    }

    string search_num, search_city;
    cout << "\nEnter mobile number to search: ";
    cin >> search_num;
    bool found_num = false;

    cout << "\nSearch results by mobile number: " << endl;
    for(int i=0; i<n; i++) {
        if(persons[i].search(search_num)) {
            persons[i].display();
            found_num = true;
        }
    }
    if(!found_num) {
        cout << "No person found with given mobile number." << endl;
    }

    cout << "\nEnter city to search: ";
    cin >> search_city;
    cout << "Enter mobile number to search: ";
    cin >> search_num;
    bool found_city = false;

    cout << "\nSearch results by city and mobile number: " << endl;
    for(int i=0; i<n; i++) {
        if(persons[i].search(search_city, search_num)) {
            persons[i].display();
            found_city = true;
        }
    }
    if(!found_city) {
        cout << "No person found with given city and mobile number." << endl;
    }

    return 0;
}
