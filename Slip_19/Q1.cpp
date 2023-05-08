// Q1. Write a C++ program to display factors of a number.

#include<iostream>
using namespace std;

int factors(int n){
      for(int i =1;i<=n;i++){
            if(n%i==0){
                  cout<<i<<endl;
            }
      }
      return 0;
}

int main(){
      factors(16);
 return 0;
}