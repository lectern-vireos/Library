// Book.h
#ifndef BOOK_H
#define BOOK_H

#include <string>

class Author; // Forward declaration

class Book {
public:
    Book(const std::string& title, Author* author, int year);
    
    // Getters and setters
    const std::string& getTitle() const;
    Author* getAuthor() const;
    int getYear() const;

private:
    std::string title;
    Author* author;
    int year;
};

#endif
