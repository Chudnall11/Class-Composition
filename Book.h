#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {

public:
    // Constructors
    Book();
    Book(string title, string author, int year, bool hardbound);

    void setBookTitle(string title);
    string getBookTitle() const;

    void setBookAuthor(string author);
    string getBookAuthor() const;

    void setBookCopyrightYear(int year);
    int getBookCopyrightYear() const;

    void setIsHardbound(bool hardbound);
    bool getIsHardbound() const; 

    // Displays the book info
    void listBookInfo() const;

private:
    string bookTitle;
    string bookAuthor;
    int bookCopyrightYear;
    bool isHardbound;


};

#endif

