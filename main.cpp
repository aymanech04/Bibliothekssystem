#include "Library.h"
#include <iostream>

int main() {
    Library lib;

    lib.addBook(Book("1984", "George Orwell", 1));
    lib.addBook(Book("To Kill a Mockingbird", "Harper Lee", 1));
    lib.addBook(Book("The Great Gatsby", "F. Scott Fitzgerald", 1));

    lib.listBooks();

    std::string title;
    std::cout << "\nGib den Titel des Buches ein, das du ausleihen moechtest: ";
    std::getline(std::cin, title);
    lib.borrowBook(title);

    std::cout << "\nAktueller Buchbestand:\n";
    lib.listBooks();

    std::cout << "\nGib den Titel des Buches ein, das du zurueckgeben moechtest: ";
    std::getline(std::cin, title);
    lib.returnBook(title);

    std::cout << "\nAktueller Buchbestand:\n";
    lib.listBooks();

    return 0;
}
