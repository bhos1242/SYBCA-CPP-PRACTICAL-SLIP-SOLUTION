// Q1.Write a C++ program to create a class employee containing salary as a data member. Write
// necessary member functions to overload the operator unary pre and post decrement "--"
// for decrementing salary.

#include<iostream>
using namespace std;

class Employee{
      private:
            int salary;
      public:
            Employee(int s){
                  salary = s;
            }

            void displaySalary(){
                  cout<<"Current Salary:"<<salary<<endl;
            }

            Employee operator--(){ //prefix decrement
                  salary--;
                  return *this;
            }

            Employee operator--(int){
                  Employee temp(*this);
                  salary--;
                  return temp;
            }
                
            //     we first create a temporary copy of the Employee object, decrement the salary member variable of the original object, and then return the temporary copy.
};