#include "Book.h"
#include "Library.h"
#include <iostream>
using namespace std;

// Zero argument constructor
Book::Book() : bookTitle(""), bookAuthor(""), bookCopyrightYear(0), isHardbound(false) {}

// Four argument constructor
Book::Book(string title, string author, int year, bool hardbound)
    : bookTitle(title), bookAuthor(author), bookCopyrightYear(year), isHardbound(hardbound) {}


void Book::setBookTitle(string title) { bookTitle = title; }
string Book::getBookTitle() const { return bookTitle; }

void Book::setBookAuthor(string author) { bookAuthor = author; }
string Book::getBookAuthor() const { return bookAuthor; }

void Book::setBookCopyrightYear(int year) { bookCopyrightYear = year; }
int Book::getBookCopyrightYear() const { return bookCopyrightYear; }

void Book::setIsHardbound(bool hardbound) { isHardbound = hardbound; }
bool Book::getIsHardbound() const { return isHardbound; }


// Displays the book info
void Book::listBookInfo() const {
        cout << "\n";
        cout << " * " << bookTitle << " by " << bookAuthor<< " Copyright - " << bookCopyrightYear << (isHardbound ? " Hardbound " : " PaperBack ");
      
    
}
