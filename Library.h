#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
#include <vector>
#include "Book.h"
using namespace std;

class Library {
private:
    string libraryName;
    string libraryLocation;
    int maxBooksInList;
    vector<Book> booksList;

public:
    // Constructors
    Library();
    Library(string name, string location, int maxBooks);

    void setLibraryName(string name);
    string getLibraryName() const;

    void setLibraryLocation(string location);
    string getLibraryLocation() const;

    void setMaxBooksInList(int maxBooks);
    int getMaxBooksInList() const;

    // Adds the book to list
    void addBook(Book book);

    // Sorts the books by title
    void sortBooks();

    // Displays the library info
    void listLibraryInfo() const;
};

#endif

