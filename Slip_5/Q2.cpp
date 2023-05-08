// Q2.Create a class Book containing Book_name, author and Price as a data member and write
// necessary member functions for the following (use function overloading).
// a. To Accept and display the Book Information.
// b. Display book details of a given author
// c. Display book details of specific price

#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    Book() {}

    Book(string name, string author, float price) {
        bookName = name;
        bookAuthor = author;
        bookPrice = price;
    }

    void acceptBook() {
        cout << "Enter book name: ";
        getline(cin, bookName);
        cout << "Enter author name: ";
        getline(cin, bookAuthor);
        cout << "Enter book price: ";
        cin >> bookPrice;
    }

    void displayBook() {
        cout << "Book Name: " << bookName << endl;
        cout << "Author Name: " << bookAuthor << endl;
        cout << "Price: " << bookPrice << endl;
    }

    void displayByAuthor(string author) {
        if (bookAuthor == author) {
            displayBook();
        }
    }

    void displayByPrice(float price) {
        if (bookPrice == price) {
            displayBook();
        }
    }

private:
    string bookName;
    string bookAuthor;
    float bookPrice;
};

int main() {
    Book book1("The Catcher in the Rye", "J.D. Salinger", 8.99);
    Book book2("To Kill a Mockingbird", "Harper Lee", 9.99);
    Book book3("The Great Gatsby", "F. Scott Fitzgerald", 7.99);

    // Display book information
    book1.displayBook();

    // Display books by author
    string author = "Harper Lee";
    cout << "Books by author " << author << ":" << endl;
    book1.displayByAuthor(author);
    book2.displayByAuthor(author);

    // Display books by price
    float price = 9.99;
    cout << "Books with price $" << price << ":" << endl;
    book2.displayByPrice(price);
    book3.displayByPrice(price);

    return 0;
}

