//
// Created by Owner on 2/25/2023.
//

#include "customer.h"

Customer::Customer()
{
    setFirstName("");
    setLastName("");
    setCustomerID(0);
}

Customer::Customer(string firstName, string lastName, int ID)
{
    setFirstName(firstName);
    setLastName(lastName);
    setCustomerID(ID);
}

Customer::~Customer()
{
    // WHY ARE WE DELETING NON POINTER OBJECTS?
    delete firstN;
    delete lastN;
    delete ID;
}

bool Customer::setCustomerID(int ID)
{
    if (ID.length == MAX_ID_SIZE)
    {
        this.customerID = ID;
        return true;
    }
    else
    {
        return false;
    } // invalid ID given
}

bool Customer::setFirstName(string firstName)
{
    this->firstN = firstName;
    return true;
}

bool Customer::setLastName(string lastName)
{
    this->lastN = lastName;
    return true;
}

int Customer::getCustomerID() const
{
    return customerID;
}

string Customer::getFirstName() const
{
    return firstN;
}

string Customer::getLastName() const
{
    return lastN;
}

int Customer::hash() const
{
}

void Customer::updateHistory(string history)
{
}

ostream &operator<<(ostream &output, const Customer &other)
{
}
