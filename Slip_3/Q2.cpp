// Q2.Write a C++ program with Student as abstract class and create derive classes Engineering,
// Medicine and Science having data member rollno and name from base class Student. Create
// objects of the derived classes and access them using array of pointer of base class Student

#include<iostream>
#include<string>

using namespace std;

class Student{
      protected:
            int rollno;
            string name;
      public:
            Student(int r,string n){
                  rollno = r;
                  name = n;
            }

            virtual void display()=0;//Pure virtual function

};

class Engineering:public Student{
      public:
            Engineering(int rollno,string name){
                  this->rollno = rollno;
                  this->name = name;
            }

            void display(){
                  cout<<"Engineering Student: Roll No= "<<rollno<<,"Name= "<<name;
            }
};

class Medicine:public student{
      public: 
           Medicine(int rollno, string name) {
        this->rollno = rollno;
        this->name = name;
    }
    void display() {
        cout << "Medicine Student: Roll No = " << rollno << ", Name = " << name << endl;
    }
};

class Science : public Student {
public:
    Science(int rollno, string name) {
        this->rollno = rollno;
        this->name = name;
    }
    void display() {
        cout << "Science Student: Roll No = " << rollno << ", Name = " << name << endl;
    }
};

int main() {
    Student *s1, *s2, *s3;
    s1 = new Engineering(101, "John");
    s2 = new Medicine(102, "Emma");
    s3 = new Science(103, "Alex");
    s1->display();
    s2->display();
    s3->display();
    return 0;
}
