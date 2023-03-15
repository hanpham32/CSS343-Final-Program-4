//
// Created by Owner on 2/25/2023.
//

#include "Comedy.h"

Comedy::~Comedy() {}

bool Comedy::operator==(const Movie *rhs)
{
    bool isSameGenre = genre_ == rhs->getGenre();
    bool isSameDirector = director_ == rhs->getDirector();
    bool isSameTitle = title_ == rhs->getTitle();
    bool isSameYear = year_ == rhs->getYear();
    if (isSameGenre && isSameDirector && isSameTitle && isSameYear)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Comedy::operator!=(const Movie *rhs)
{
}

bool Comedy::operator<(const Movie *rhs)
{
}

bool Comedy::operator>(const Movie *rhs)
{
}