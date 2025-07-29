#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    bool available;

public:
    Book(std::string t, std::string a, int dummy); // Dummy, da 3 Parameter erwartet wurden
    void display() const;
    bool isAvailable() const;
    void borrow();
    void giveBack();
    std::string getTitle() const;
};

#endif
