// Source.cpp --brief statement of the project’s purpose
//CSIS 212-B01--
//<Citations if necessary> --
/*  Sources - Websites I used to help me code were
* W3school.com
* stackoverflow.com
* geeksforgeeks.com
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Library.h"
#include "Book.h"

using namespace std;


 // I have tried to follow the instructions more thorougly and keep everything the same as instructions
int main() {
    std::cout << "Cody Hudnall -- Lab #4 - Class Composition \n";
    cout << "\n";



 // Input for library information
    string libName, libLocation;
    int maxBooks;

    cout << "Library name: ";
    getline(cin, libName);

    cout << "Library location (city state): ";
    getline(cin, libLocation);

    do {
        cout << "Maximum books allowed in the book list (3 to 6 inclusive): ";
        cin >> maxBooks;
    } while (maxBooks < 3 || maxBooks > 6);
    Library myLibrary(libName, libLocation, maxBooks);

    // Menu for adding books and listing library info
    char choice;
    do {
        cout << "\n";
        cout << libName << "\n";
        cout << libLocation << "\n";

        cout << "\nMenu:\n";
        cout << "A - Add a book\n";
        cout << "L - List library and Book Information\n";
        cout << "Q -  Quit the program\n";
        cout << "Selection: ";
        cin >> choice;
        cin.ignore();

        if (choice == 'A') {
          // choice A is add a book
            string title, author;
            int year;
            char isHardbound;

            cout << "Book title (blank not allowed): ";
            getline(cin, title);

            cout << "Book author (blank not allowed): ";
            getline(cin, author);

           //this ensures we only have a year between 1900-2023

            do {
                cout << "Copyright year (4-digits between 1900-2023 inclusive):";
                cin >> year;
                if (year < 1900 || year > 2023) {
                    cout << "Invalid year. Please enter a year between 1900 and 2023.\n";
                }
            } while (year < 1900 || year > 2023);

            cout << "Is the book hardbound? (1=yes / 0=no): ";
            cin >> isHardbound;
            Book newBook(title, author, year, isHardbound == '1');
            myLibrary.addBook(newBook);
        }
        else if (choice == 'L') {
            // Displays the library info
            cout << "\n";
            myLibrary.listLibraryInfo();
            cout << "\n";
            system("pause");
        }
    } while (choice != 'Q'); //quit program


    return 0;
}
