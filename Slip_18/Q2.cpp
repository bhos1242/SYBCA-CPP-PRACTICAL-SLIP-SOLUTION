// 2.Write a C++ program to read student information such as rollno, name and percentage of n
// students. Write the student information using file handling

#include <iostream>
#include <fstream>

using namespace std;

class Student {
    private:
        int rollno;
        string name;
        float percentage;
    public:
        void read_data() {
            cout << "Enter rollno: ";
            cin >> rollno;
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter percentage: ";
            cin >> percentage;
        }
        void write_data() {
            ofstream file("students.txt", ios::app);
            file << rollno << "," << name << "," << percentage << endl;
            file.close();
        }
};

int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        Student s;
        s.read_data();
        s.write_data();
    }

    cout << "Data written to file successfully!" << endl;

    return 0;
}
