//
// Created by Owner on 2/25/2023.
//

#ifndef PROGRAM4PHAMCHEN_HASHTABLE_H
#define PROGRAM4PHAMCHEN_HASHTABLE_H

#include "Customers/customer.h"
#include <iostream>
#include <vector>
#include <string>

int const row = 100;
int const column = 200;

class Hashtable
{

public:
    Hashtable();  //  constructor
    ~Hashtable(); //  destructor
    Customer *retrieveCustomer(const int &) const;
    bool addCustomer(Customer *newCustomer);
    bool removeCustomer(const int &);

private:
    Customer *customerTable[row][column];
};

#endif // PROGRAM4PHAMCHEN_HASHTABLE_H
