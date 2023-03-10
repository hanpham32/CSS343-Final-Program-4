//
// Created by Owner on 2/25/2023.
//

#include "Movie.h"

// Movie::~Movie() {}

void Movie::increaseStock()
{
    stock++;
}

void Movie::decreaseStock()
{
    stock--;
}

int Movie::getStock()
{
    return stock;
}

void Movie::parseString(string &movieInfo)
{
    string str;
    stringstream ss(movieInfo);
    while (getline(ss, str, ','))
    {
        std::cout << str << std::endl;
    }
    // genre = movieInfo[0];
}