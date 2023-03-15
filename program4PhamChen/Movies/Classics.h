//
// Created by Owner on 2/25/2023.
//

#ifndef PROGRAM4PHAMCHEN_CLASSICS_H
#define PROGRAM4PHAMCHEN_CLASSICS_H

#include <string>
#include "Movie.h"
#include <iostream>
#include <fstream>
#include <vector>

class Classics : public Movie
{
public:
    ~Classics();
    std::string getMajorActor() const;
    int getDate() const;

    void print(ostream &os) const override;
    void parseString(string &) override;

private:
    std::string major_actor_;
    int date_;
};

#endif // PROGRAM4PHAMCHEN_CLASSICS_H
