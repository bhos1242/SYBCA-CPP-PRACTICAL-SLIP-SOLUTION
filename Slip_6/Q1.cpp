// # Q1.Write a C++ program to implement a class printdata to overload print function as follows:
// # void print(int) - outputs value followed by the value of the integer.
// # Eg. print(10) outputs - value 10
// # void print(char *) – outputs value followed by the string in double quotes.
// # Eg. print(“hi”) outputs value “hi”

#include<iostream>
using namespace std;

class printdata{
      public:
            void print(int num){
            
                  cout<<"value:"<<num<<endl;
            }

            void print(const char* str){
                  cout<<"Value:"<<str<<endl;
            }
};

int main(){
      printdata pd;
      pd.print(10);
      pd.print("vivek");

      return 0;
}