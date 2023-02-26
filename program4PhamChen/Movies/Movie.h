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



class Movie {
    public:
    virtual ~Movie() {};

    virtual string createMovie() const = 0;
    virtual bool increaseStock();
    virtual bool decreaseStock();
    virtual int getStock();
    virtual bool operator== (const Movie* other) const = 0;
    virtual bool operator!= (const Movie* other) const = 0;
    virtual bool operator> (const Movie* other) const = 0;
    virtual bool operator< (const Movie* other) const = 0;

    protected:
        Movie();
        void parseString (const string& movieInfo);

        char genre;
        int stock;
        string director;
        string title;
        int year;
};


#endif //PROGRAM4PHAMCHEN_MOVIE_H
