// Q1.Write a C++ program to implement a class ‘student’ to overload following functions as follows:
// a. int maximum(int, int) – returns the maximum score of two students
// b. int maximum(int *a, int arraylength) – returns the maximum score from an array ‘a’ [

      #include<iostream>
using namespace std;

class student {
  public:
    int maximum(int a, int b) {
      if(a > b) {
        return a;
      } else {
        return b;
      }
    }

    int maximum(int *a, int arraylength) {
      int maxscore = a[0];
      for(int i=1; i<arraylength; i++) {
        if(a[i] > maxscore) {
          maxscore = a[i];
        }
      }
      return maxscore;
    }
};

int main() {
  student s;

  // Using maximum(int, int) function
  int score1 = 90, score2 = 85;
  int maxscore = s.maximum(score1, score2);
  cout << "Maximum score of two students is: " << maxscore << endl;

  // Using maximum(int*, int) function
  int scores[] = {90, 85, 95, 80};
  int arraylength = sizeof(scores)/sizeof(scores[0]);
  maxscore = s.maximum(scores, arraylength);
  cout << "Maximum score from the array is: " << maxscore << endl;

  return 0;
}
