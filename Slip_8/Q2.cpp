// Q2.Write a C++ program to create a class Date which contains three data members as dd,mm,yyyy.
// Create and initialize the object by using parameterized constructor and display date in dd-monthyyyy format. (Input: 19-12-2014 Output: 19-Dec-2014) Perform validation for month. [20]

#include<iostream>
#include<string>

using namespace std;

class Date{
      private:
            int dd;
            int mm;
            int yyyy;
      public:
            Date(int day,int month,int year){
                  dd = day;
                  mm = month;
                  yyyy = year;
            }

            void displayDate(){
                  string months[12] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sept","Oct","Nov","Dec"};

                  if(mm<1 || mm>12){
                        cout<<"Invalid month."<<endl;
                  }
                  else{
                        cout<<dd<<"-"<<months[mm-1]<<"-"<<yyyy<<endl;
                  }
            }
};


int main(){
      Date myDate(19,12,2014);

      myDate.displayDate();
      return 0;
}