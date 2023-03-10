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
    virtual ~Movie() = default;
    void increaseStock();
    void decreaseStock();
    int getStock();
    // virtual bool operator==(const Movie *other);
    // virtual bool operator!=(const Movie *other);
    // virtual bool operator>(const Movie *other);
    // virtual bool operator<(const Movie *other);
    virtual void parseString(string &movieInfo);

protected:
    char genre;
    int stock;
    string director;
    string title;
    int year;
};

#endif // PROGRAM4PHAMCHEN_MOVIE_H
