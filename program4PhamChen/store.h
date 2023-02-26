//
// Created by Owner on 2/25/2023.
//

#ifndef CSS343_FINAL_PROGRAM_4_STORE_H
#define CSS343_FINAL_PROGRAM_4_STORE_H

#include "customerSystem.h"
#include "inventorySystem.h"
#include "transactionSystem.h"

class store {
    public:
        void buildStore(ifstream&, ifstream&);
        void readCommands(ifstream&);

    private:
    CustomerSystem customerSystem;
    inventorySystem inventorySystem;
    transactionSystem transactionSystem;
};


#endif //CSS343_FINAL_PROGRAM_4_STORE_H
