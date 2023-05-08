// Q2. Create a base class Media. Derive two different classes Book (Book_id, Book_name,
// Publication, Author, Book_price) and CD (CD_title, CD_price) from Media. Write a program
// to accept and display information of both Book and CD. (Use pure virtual function)

#include <iostream>
#include <string>

using namespace std;

// Base class Media
class Media {
public:
    virtual void accept() = 0; // Pure virtual function
    virtual void display() = 0; // Pure virtual function
};

// Derived class Book
class Book : public Media {
private:
    int book_id;
    string book_name;
    string publication;
    string author;
    double book_price;
public:
    void accept() {
        cout << "Enter Book ID: ";
        cin >> book_id;
        cout << "Enter Book Name: ";
        cin.ignore();
        getline(cin, book_name);
        cout << "Enter Publication: ";
        getline(cin, publication);
        cout << "Enter Author: ";
        getline(cin, author);
        cout << "Enter Book Price: ";
        cin >> book_price;
    }
    void display() {
        cout << "Book ID: " << book_id << endl;
        cout << "Book Name: " << book_name << endl;
        cout << "Publication: " << publication << endl;
        cout << "Author: " << author << endl;
        cout << "Book Price: " << book_price << endl;
    }
};

// Derived class CD
class CD : public Media {
private:
    string cd_title;
    double cd_price;
public:
    void accept() {
        cout << "Enter CD Title: ";
        cin.ignore();
        getline(cin, cd_title);
        cout << "Enter CD Price: ";
        cin >> cd_price;
    }
    void display() {
        cout << "CD Title: " << cd_title << endl;
        cout << "CD Price: " << cd_price << endl;
    }
};

int main() {
    Media *m[2]; // Array of pointers to base class
    m[0] = new Book(); // Allocate memory for derived class Book
    m[1] = new CD(); // Allocate memory for derived class CD

    // Accept information for each object
    for (int i = 0; i < 2; i++) {
        cout << "Enter details for object " << i+1 << endl;
        m[i]->accept();
    }

    // Display information for each object
    for (int i = 0; i < 2; i++) {
        cout << "Details for object " << i+1 << endl;
        m[i]->display();
    }

    // Free memory for each object
    for (int i = 0; i < 2; i++) {
        delete m[i];
    }

    return 0;
}
