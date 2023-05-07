// Q2. Write a C++ program to read the contents of a “Sample.txt” file. Store all the uppercase
// characters in ”Upper.txt”, lowercase characters in ”Lower.txt” and digits in “Digit.txt” files.
// Change the case of each character from “Sample.txt” and store it in “Convert.txt” file

#include <iostream>
#include <fstream>
using namespace std;

class FileHandler {
    private:
        ifstream infile;
        ofstream upperfile, lowerfile, digitfile, convertfile;
    public:
        FileHandler() {
            infile.open("Sample.txt");
            upperfile.open("Upper.txt");
            lowerfile.open("Lower.txt");
            digitfile.open("Digit.txt");
            convertfile.open("Convert.txt");
        }
        void process() {
            char c;
            while (infile.get(c)) {
                if (isupper(c)) {
                    upperfile << c;
                } else if (islower(c)) {
                    lowerfile << c;
                } else if (isdigit(c)) {
                    digitfile << c;
                }

                if (isalpha(c)) {
                    if (islower(c)) {
                        c = toupper(c);
                    } else if (isupper(c)) {
                        c = tolower(c);
                    }
                }

                convertfile << c;
            }
        }
        void close() {
            infile.close();
            upperfile.close();
            lowerfile.close();
            digitfile.close();
            convertfile.close();
            cout << "Files created successfully." << endl;
        }
};

int main() {
    FileHandler fh;
    fh.process();
    fh.close();
    return 0;
}
