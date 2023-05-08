// Q2.Write a C++ programto create a class Distance which contains data members as kilometer, meter.
// Write a program to perform the following functions
// a.To accept distance
// b.To display distance
// c.To overload > operator to compare two distance


#include<iostream>
using namespace std;

class Distance {
  private:
    int kilometer, meter;
  public:
    Distance() {
      kilometer = 0;
      meter = 0;
    }

    void acceptDistance() {
      cout << "Enter distance in kilometers: ";
      cin >> kilometer;
      cout << "Enter distance in meters: ";
      cin >> meter;
    }

    void displayDistance() {
      cout << "Distance: " << kilometer << " km " << meter << " m" << endl;
    }

    bool operator > (Distance d2) {
      int dist1 = kilometer*1000 + meter;
      int dist2 = d2.kilometer*1000 + d2.meter;
      if(dist1 > dist2) {
        return true;
      } else {
        return false;
      }
    }
};

int main() {
  Distance d1, d2;

  cout << "Enter distance 1:" << endl;
  d1.acceptDistance();

  cout << "Enter distance 2:" << endl;
  d2.acceptDistance();

  d1.displayDistance();
  d2.displayDistance();

  if(d1 > d2) {
    cout << "Distance 1 is greater than Distance 2" << endl;
  } else {
    cout << "Distance 2 is greater than Distance 1" << endl;
  }

  return 0;
}
