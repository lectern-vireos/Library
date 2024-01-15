// Library.cpp
#include <iostream>
#include "Book.h"
#include "Author.h"
#include <vector>

class Library {
public:
    void addBook(Book* book);
    void displayBooks();

private:
    std::vector<Book*> books;
};

// Library member function implementations
void Library::addBook(Book* book) {
    books.push_back(book);
}

void Library::displayBooks() {
    std::cout << "Library Books:" << std::endl;
    for (const auto& book : books) {
        std::cout << "Title: " << book->getTitle() <<
                     ", Author: " << book->getAuthor()->getName() <<
                     ", Year: " << book->getYear() << std::endl;
    }
}

int main() {
    Author author1("John Doe", 1980);
    Author author2("Jane Smith", 1990);

    Book book1("Java Programming", &author1, 2022);
    Book book2("Data Structures", &author2, 2021);

    Library library;
    library.addBook(&book1);
    library.addBook(&book2);

    library.displayBooks();

    return 0;
}
