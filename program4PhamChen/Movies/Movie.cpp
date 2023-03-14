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