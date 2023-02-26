//
// Created by Owner on 2/25/2023.
//

#ifndef PROGRAM4PHAMCHEN_DRAMA_H
#define PROGRAM4PHAMCHEN_DRAMA_H

#include <String>
#include "movie.h"
#include <iostream>
#include <fstream>

class Drama : public Movie {
    public:
    static const char GENRE = 'D';

    Drama(const string&);
    Drama(const string&, const string&);
    virtual ~Drama();

    virtual string createMovie() const;
    virtual string createHistory() const;


};


#endif //PROGRAM4PHAMCHEN_DRAMA_H
