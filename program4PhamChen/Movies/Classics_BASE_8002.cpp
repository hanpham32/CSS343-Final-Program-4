//
// Created by Owner on 2/25/2023.
//

#include "Classics.h"

Classics::~Classics() {}

std::string Classics::getMajorActor() const
{
    return major_actor_;
}

int Classics::getDate() const
{
    return date_;
}

void Classics::print(ostream &os) const
{
    os << getGenre() << ", " << getStock() << ", " << getDirector() << ", " << getTitle() << ", "
       << getMajorActor() << ", " << getDate() << ", " << getYear() << endl;
}

void Classics::parseString(string &movieInfo)
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

    // parse major actor and release date and year
    getline(ss, str, ',');
    major_actor_ = str;

    // TODO
}