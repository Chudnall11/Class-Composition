#include "Library.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Zero-argument constructor
Library::Library() : libraryName(""), libraryLocation(""), maxBooksInList(0) {}

// Three-argument constructor
Library::Library(string name, string location, int maxBooks)
    : libraryName(name), libraryLocation(location), maxBooksInList(maxBooks) {}

void Library::setLibraryName(string name) { libraryName = name; }
string Library::getLibraryName() const { return libraryName; }

void Library::setLibraryLocation(string location) { libraryLocation = location; }
string Library::getLibraryLocation() const { return libraryLocation; }

void Library::setMaxBooksInList(int maxBooks) { maxBooksInList = maxBooks; }
int Library::getMaxBooksInList() const { return maxBooksInList; }

// Adding book to list
void Library::addBook(Book book) {
    if (booksList.size() < maxBooksInList) {
        booksList.push_back(book);
    }
    else {
        cout << "Book limit reached!" << endl;
    }
}
// Sorts the books by title
void Library::sortBooks() {
    sort(booksList.begin(), booksList.end(), [](const Book& a, const Book& b) {
        return a.getBookTitle() < b.getBookTitle();
        });
}

// Displays the library info
void Library::listLibraryInfo() const {
    cout << libraryName << endl;
    for (const auto& book : booksList) {
        book.listBookInfo();
    }
}
