#include "Library.h"
#include <iostream>

void Library::addBook(const Book& book) {
    books.push_back(book);
}

void Library::listBooks() const {
    std::cout << "Verfuegbare Buecher:\n";
    for (const auto& book : books) {
        book.display();
    }
}

void Library::borrowBook(const std::string& title) {
    for (auto& book : books) {
        if (book.isAvailable() && book.getTitle() == title) {
            book.borrow();
            std::cout << "Das Buch \"" << title << "\" wurde ausgeliehen.\n";
            return;
        }
    }
    std::cout << "Das Buch \"" << title << "\" ist nicht verfuegbar.\n";
}

void Library::returnBook(const std::string& title) {
    for (auto& book : books) {
        if (!book.isAvailable() && book.getTitle() == title) {
            book.giveBack();
            std::cout << "Das Buch \"" << title << "\" wurde zurueckgegeben.\n";
            return;
        }
    }
    std::cout << "Kein ausgeliehenes Buch mit dem Titel \"" << title << "\" gefunden.\n";
}
