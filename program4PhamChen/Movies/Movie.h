//
// Created by Owner on 2/25/2023.
//

#ifndef PROGRAM4PHAMCHEN_MOVIE_H
#define PROGRAM4PHAMCHEN_MOVIE_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

class Movie
{
public:
    // virtual string createMovie() const = 0;
    virtual ~Movie();
    void increaseStock();
    void decreaseStock();
    virtual void print(ostream &) const;
    virtual bool operator==(const Movie *other);
    virtual bool operator!=(const Movie *other);
    virtual bool operator>(const Movie *other);
    virtual bool operator<(const Movie *other);
    friend std::ostream &operator<<(std::ostream &os, const Movie &movie);

    // read line and parse movie info
    virtual void parseString(string &);

    // ACCESSORS
    char getGenre() const;
    int getStock() const;
    string getDirector() const;
    string getTitle() const;
    int getYear() const;

protected:
    char genre_;
    int stock_;
    string director_;
    string title_;
    int year_;
};

#endif // PROGRAM4PHAMCHEN_MOVIE_H
