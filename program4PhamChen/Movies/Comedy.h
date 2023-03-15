//
// Created by Owner on 2/25/2023.
//

#ifndef PROGRAM4PHAMCHEN_COMEDY_H
#define PROGRAM4PHAMCHEN_COMEDY_H

#include <string>
#include "Movie.h"
#include <iostream>
#include <fstream>

class Comedy : public Movie
{
public:
    virtual ~Comedy();
    const char GENRE = 'D';
    // Drama(const string &);
    // Drama(const string &, const string &);

    bool operator==(const Movie *) override;
    bool operator!=(const Movie *) override;
    bool operator<(const Movie *) override;
    bool operator>(const Movie *) override;
    // virtual string createMovie() const;
    // virtual string createHistory() const;
};

#endif // PROGRAM4PHAMCHEN_COMEDY_H
