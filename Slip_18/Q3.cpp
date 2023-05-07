// Q2. Create a class called LIST with two pure virtual function store() and retrieve(). To store a
// value call store and to retrieve call retrieves function. Derive two classes stack and queue
// from it and override store and retrieve.

#include <iostream>

using namespace std;

class LIST {
    public:
        virtual void store() = 0;
        virtual void retrieve() = 0;
      //    A virtual function is a member function that is declared within a base class and is re-defined (Overridden) by a derived class
};

class Stack : public LIST {
    public:
        void store() {
            cout << "Store in Stack" << endl;
        }
        void retrieve() {
            cout << "Retrieve from Stack" << endl;
        }
};

class Queue : public LIST {
    public:
        void store() {
            cout << "Store in Queue" << endl;
        }
        void retrieve() {
            cout << "Retrieve from Queue" << endl;
        }
};

int main() {
    LIST *list = new Stack();
//     When a base class pointer points to a derived class object, we can call the virtual function of the derived class through the base class pointer.
    list->store();
    list->retrieve();

    list = new Queue();
    list->store();
    list->retrieve();

    delete list;

    return 0;
}
