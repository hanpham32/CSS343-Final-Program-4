//
// Created by Owner on 2/25/2023.
//

#ifndef PROGRAM4PHAMCHEN_CLASSICS_H
#define PROGRAM4PHAMCHEN_CLASSICS_H

#include <string>
#include "Movie.h"

using namespace std;

class Classics : public Movie
{
protected:
    string major_actor;
    int date;
};

#endif // PROGRAM4PHAMCHEN_CLASSICS_H
