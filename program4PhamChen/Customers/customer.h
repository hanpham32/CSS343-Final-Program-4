//
// Created by Owner on 2/25/2023.
//

#ifndef PROGRAM4PHAMCHEN_CUSTOMER_H
#define PROGRAM4PHAMCHEN_CUSTOMER_H

#include <stdio.h>
#include <fstream>
#include <iostream>
#include <string>
#include "../Movies/Movie.h"

const int MAX_ID_SIZE = 4;
using namespace std;

class Customer
{
public:
    Customer();  // constructor
    ~Customer(); // Destructor for customer

    Customer(string, string, int);   // setter for customer data
    bool setCustomerID(int id);      // setter for ID
    bool setFirstName(string first); // setter for first name
    bool setLastName(string last);   // setter for last name

    int getCustomerID() const;   // getter for ID
    string getFirstName() const; // getter for firstName
    string getLastName() const;  // getter for last name

    int hash() const;                   // to get Hashkey
    void updateHistory(string history); // will update history with new transaction

private:
    int customerID;
    string firstN;
    string lastN;

    vector<string> history;
};

#endif // PROGRAM4PHAMCHEN_CUSTOMER_H
