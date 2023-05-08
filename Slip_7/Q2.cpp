// Create a class College containing data members as College_Id, College_Name,
// Establishment_year, University_Name. Write a C++ program with following functions
// a. Accept n College details
// b. Display College details of specified University
// c. Display College details according to Establishment year (Use Array of Objects and
// Function Overloading). [

      #include <iostream>
#include <string>
using namespace std;

class College {
  private:
    int collegeId;
    string collegeName;
    int establishmentYear;
    string universityName;

  public:
    // Default constructor
    College() {
      collegeId = 0;
      collegeName = "";
      establishmentYear = 0;
      universityName = "";
    }

    // Parameterized constructor
    College(int id, string name, int year, string uni) {
      collegeId = id;
      collegeName = name;
      establishmentYear = year;
      universityName = uni;
    }

    // Function to display college details
    void displayCollegeDetails() {
      cout << "College ID: " << collegeId << endl;
      cout << "College Name: " << collegeName << endl;
      cout << "Establishment Year: " << establishmentYear << endl;
      cout << "University Name: " << universityName << endl;
      cout << endl;
    }

    // Function to check if the college belongs to a specified university
    bool isUniversity(string uni) {
      return universityName == uni;
    }

    // Function to check if the college was established in a specified year
    bool isEstablishmentYear(int year) {
      return establishmentYear == year;
    }
};

int main() {
  int n;
  string uniName;
  int estYear;
  
  // Accept number of colleges
  cout << "Enter the number of colleges: ";
  cin >> n;

  // Create array of College objects and accept college details
  College colleges[n];
  for(int i=0; i<n; i++) {
    int id, year;
    string name, uni;

    cout << "\nEnter details of college " << i+1 << ":" << endl;

    cout << "College ID: ";
    cin >> id;

    cout << "College Name: ";
    cin >> name;

    cout << "Establishment Year: ";
    cin >> year;

    cout << "University Name: ";
    cin >> uni;

    colleges[i] = College(id, name, year, uni);
  }

  // Display college details of specified university
  cout << "\nEnter the name of the university: ";
  cin >> uniName;

  cout << "\nColleges under " << uniName << ":" << endl;
  for(int i=0; i<n; i++) {
    if(colleges[i].isUniversity(uniName)) {
      colleges[i].displayCollegeDetails();
    }
  }

  // Display college details according to establishment year
  cout << "\nEnter the establishment year: ";
  cin >> estYear;

  cout << "\nColleges established in " << estYear << ":" << endl;
  for(int i=0; i<n; i++) {
    if(colleges[i].isEstablishmentYear(estYear)) {
      colleges[i].displayCollegeDetails();
    }
  }

  return 0;
}
