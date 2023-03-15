//
// Created by Owner on 2/25/2023.
//

#include "Movie.h"

using namespace std;

Movie::~Movie() {}

void Movie::increaseStock()
{
    stock_ = stock_ + 1;
}

void Movie::decreaseStock()
{
    stock_ = stock_ - 1;
}
void Movie::print(ostream &os) const
{
    os << getGenre() << ", " << getStock() << ", " << getDirector() << ", " << getTitle() << ", " << getYear() << endl;
}

std::ostream &operator<<(ostream &os, const Movie &movie)
{
    movie.print(os);
    return os;
}

/// @brief this operator uses genre, director, title, and year to compare
/// @param rhs
/// @return return true if movie is same
bool Movie::operator==(const Movie *rhs)
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

bool Movie::operator!=(const Movie *rhs)
{
    return (this == rhs);
}

/// @brief this operator compares movie's stock
/// @param rhs
/// @return
bool Movie::operator<(const Movie *rhs)
{
    // first check if movie we compare is the same
    if (!(this == rhs))
    {
        std::cout << "Movie is not the same" << std::endl;
        return false;
    }
    if (stock_ < rhs->getStock())
    {
        return true;
    }
    else
    {
        return false;
    }
}

/// @brief this operator compares movie's stock
/// @param rhs
/// @return
bool Movie::operator>(const Movie *rhs)
{
    // first check if movie we compare is the same
    if (!(this == rhs))
    {
        std::cout << "Movie is not the same" << std::endl;
        return false;
    }
    if (stock_ > rhs->getStock())
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Movie::parseString(string &movieInfo)
{
    string str;
    stringstream ss(movieInfo);

    // parse genre
    getline(ss, str, ',');
    genre_ = str[0];

    // parse stock
    getline(ss, str, ',');
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    stock_ = stoi(str);

    // parse director
    getline(ss, str, ',');
    director_ = str;

    // parse title
    getline(ss, str, ',');
    title_ = str;

    // parse year
    getline(ss, str, ',');
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    year_ = stoi(str);
}

char Movie::getGenre() const
{
    return genre_;
}
int Movie::getStock() const
{
    return stock_;
}
string Movie::getDirector() const
{
    return director_;
}
string Movie::getTitle() const
{
    return title_;
}
int Movie::getYear() const
{
    return year_;
}