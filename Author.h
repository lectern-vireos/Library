// Author.h
#ifndef AUTHOR_H
#define AUTHOR_H

#include <string>

class Author {
public:
    Author(const std::string& name, int birthYear);

    // Getters and setters
    const std::string& getName() const;
    int getBirthYear() const;

private:
    std::string name;
    int birthYear;
};

#endif
