//
// Created by Owner on 2/25/2023.
//

#include "customer.h"

//
// Created by Owner on 2/25/2023.
//

#include "customer.h"

Customer::Customer() {
    setFirstName("");
    setLastName("");
    setCustomerID(0);
}

Customer::Customer(string firstName, string lastName, int ID) {
    setFirstN(firstName);
    setLastN(lastName);
    setCustomerID(ID);
}

Customer::~Customer() {
    delete firstN;
    delete lastN;
    delete ID;
}

bool Customer::setCustomerID(int ID) {
    if (ID.length == MAX_ID_SIZE) {
        this.customerID = ID;
        return true;
    }
    else {return false;}        // invalid ID given
}

bool Customer::setFirstN(string firstName) const {
    this->firstN = firstName;
    return true;
}

bool Customer::setLastN(string lastName) const {
    this->lastN = lastName;
    return true;
}

int Customer::etCustomerID() const {
    return customerID;
}

int Customer::getFirstName() const {
    return firstN;
}

int Customer::getLastName() const {
    return lastN;
}

int Customer::hash() const {
    
}

void Customer::updateHistory(string history) {
    
}

ostream& operator<< (ostream & output, const Customer& other) {
    
}
