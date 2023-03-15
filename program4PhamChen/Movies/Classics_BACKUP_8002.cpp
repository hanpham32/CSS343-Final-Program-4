//
// Created by Owner on 2/25/2023.
//

#include "Classics.h"
<<<<<<< HEAD

using namespace std;

Classics::~Classics() {}

string Classics::getMajorActor() const
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
    vector<string> vec;

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

    char delim = ' ';
    // parse major actor and release date and year
    getline(ss, str, delim); // this is to ignore blank space in front
    getline(ss, str, delim);
    major_actor_ = str; // get first name
    getline(ss, str, delim);
    major_actor_ += str;
    getline(ss, str, delim);
    date_ = stoi(str);
    getline(ss, str, delim);
    year_ = stoi(str);
}
=======
>>>>>>> ad1261bb5de4893fd5421bd339657b4a99aefeab
