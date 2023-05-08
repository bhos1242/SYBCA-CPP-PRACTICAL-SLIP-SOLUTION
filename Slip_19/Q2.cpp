// Q2. Design a two base classes Employee (Name, Designation) and Project(Project_Id, title).
// Derive a class Emp_Proj(Duration) from Employee and Project. Write a menu driven
// program to
// a. Build a master table.
// b. Display a master table
// c. Display Project details in the ascending order of duration.

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

// Class Employee
class Employee{
protected:
    string name, designation;
public:
    // Parameterized constructor
    Employee(string n="", string d=""):name(n),designation(d){}

    // Function to get employee details
    void getDetails(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter designation: ";
        cin>>designation;
    }

    // Function to display employee details
    void displayDetails(){
        cout<<"Name: "<<name<<"\tDesignation: "<<designation<<endl;
    }
};

// Class Project
class Project{
protected:
    int project_id;
    string title;
public:
    // Parameterized constructor
    Project(int id=0, string t=""):project_id(id),title(t){}

    // Function to get project details
    void getDetails(){
        cout<<"Enter project id: ";
        cin>>project_id;
        cout<<"Enter project title: ";
        cin>>title;
    }

    // Function to display project details
    void displayDetails(){
        cout<<"Project Id: "<<project_id<<"\tTitle: "<<title<<endl;
    }
};

// Derived Class Emp_Proj
class Emp_Proj : public Employee, public Project{
private:
    int duration;
public:
    // Parameterized constructor
    Emp_Proj(int d=0):duration(d){}

    // Function to get employee and project details along with duration
    void getDetails(){
        Employee::getDetails();
        Project::getDetails();
        cout<<"Enter project duration (in months): ";
        cin>>duration;
    }

    // Function to display employee, project and duration details
    void displayDetails(){
        Employee::displayDetails();
        Project::displayDetails();
        cout<<"Project Duration: "<<duration<<" months"<<endl;
    }

    // Function to get project duration
    int getDuration(){
        return duration;
    }
};

// Main function
int main(){
    int n, choice;
    cout<<"Enter number of records: ";
    cin>>n;

    // Create an array of objects of class Emp_Proj
    Emp_Proj records[n];

    // Menu driven program
    do{
        cout<<"\n1. Build master table\n2. Display master table\n3. Display Project details in ascending order of duration\n4. Exit\nEnter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                // Build master table
                for(int i=0; i<n; i++){
                    records[i].getDetails();
                }
                break;
            case 2:
                // Display master table
                for(int i=0; i<n; i++){
                    records[i].displayDetails();
                }
                break;
            case 3:
                // Display Project details in ascending order of duration
                sort(records, records+n, [](Emp_Proj x, Emp_Proj y){return x.getDuration()<y.getDuration();});
                cout<<"Project details in ascending order of duration:\n";
                for(int i=0; i<n; i++){
                    records[i].displayDetails();
                }
                break;
            case 4:
                // Exit
                cout<<"Exiting...\n";
                break;
            default:
                // Invalid choice
                cout<<"Invalid choice!\n";
        }
    }while(choice!=4);

    return 0;
}
