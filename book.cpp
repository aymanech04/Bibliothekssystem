#include "book.h"
#include <iostream>

Book::Book(std::string t, std::string a, int dummy)
    : title(t), author(a), available(true) {}

void Book::display() const {
    std::cout << "Titel: " << title << ", Autor: " << author
              << ", Verfuegbar: " << (available ? "Ja" : "Nein") << std::endl;
}

bool Book::isAvailable() const {
    return available;
}

void Book::borrow() {
    available = false;
}

void Book::giveBack() {
    available = true;
}

std::string Book::getTitle() const {
    return title;
}
