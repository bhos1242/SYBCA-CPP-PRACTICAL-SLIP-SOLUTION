#include <iostream>
#include <fstream>
using namespace std;

class Department {
private:
    int Dept_Id;
    string Dept_Name;
    int Number_Of_staff;
    string hod;
public:
    void read_data() {
        cout << "Enter Id of department: ";
        cin >> Dept_Id;
        cout << "Enter name of department: ";
        cin >> Dept_Name;
        cout << "Enter number of staff: ";
        cin >> Number_Of_staff;
        cout << "Enter Hod: ";
        cin >> hod;
    }

    void write_data(ofstream &file) {
        file << Dept_Id << endl;
        file << Dept_Name << endl;
        file << Number_Of_staff << endl;
        file << hod << endl;
    }

    void read_file(ifstream &file) {
        file >> Dept_Id >> Dept_Name >> Number_Of_staff >> hod;
    }

    void display_data() {
        cout << "Id: " << Dept_Id << endl;
        cout << "Name: " << Dept_Name << endl;
        cout << "Number of staff: " << Number_Of_staff << endl;
        cout << "Hod: " << hod << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of departments: ";
    cin >> n;

    Department d;
    ofstream file("Dept.txt");

    for (int i = 0; i < n; i++) {
        cout << "Enter details for department " << i+1 << ":" << endl;
        d.read_data();
        d.write_data(file);
    }

    file.close();

    ifstream infile("Dept.txt");

    while (!infile.eof()) {
        d.read_file(infile);
        if (!infile.eof()) {
            cout << "Department details:" << endl;
            d.display_data();
        }
    }

    infile.close();

    return 0;
}
