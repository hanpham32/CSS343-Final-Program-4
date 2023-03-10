//
// Created by Owner on 2/25/2023.
//

#ifndef CSS343_FINAL_PROGRAM_4_STORE_H
#define CSS343_FINAL_PROGRAM_4_STORE_H

#include <fstream>
#include "CustomerSystem.h"
#include "InventorySystem.h"
#include "TransactionSystem.h"

using namespace std;

class Store
{
public:
    // build store from given movies and customers data files
    void buildStore(ifstream &, ifstream &);
    void readCommands(ifstream &);

private:
    CustomerSystem customerSystem;
    InventorySystem inventorySystem;
    TransactionSystem transactionSystem;
};

#endif // CSS343_FINAL_PROGRAM_4_STORE_H
