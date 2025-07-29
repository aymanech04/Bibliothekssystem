#ifndef LIBRARY_H
#define LIBRARY_H

#include "book.h"
#include <vector>
#include <string>

class Library {
private:
    std::vector<Book> books;

public:
    void addBook(const Book& book);
    void listBooks() const;
    void borrowBook(const std::string& title);
    void returnBook(const std::string& title);
};

#endif
