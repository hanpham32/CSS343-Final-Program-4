//
// Created by Owner on 2/25/2023.
//

#ifndef PROGRAM4PHAMCHEN_CUSTOMER_H
#define PROGRAM4PHAMCHEN_CUSTOMER_H

#include <stdio.h>
#include <fstream>
#include <iostream>
#include <string>
#include "Movie.h"

class Customer {
    public:
        Customer();
        Customer(int, string, string);
        ~Customer();
        bool newTransaction();
        void printHistory() const;
        int getID()const;
        string displayID();
        string getFullName();
        string getLastName();
        bool checkReturn(Movie*) const;

    private:
        int ID;
        string firstN;
        string lastN;
        

};


#endif //PROGRAM4PHAMCHEN_CUSTOMER_H
