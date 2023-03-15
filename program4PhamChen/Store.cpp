// ------------------------------------------------ store.cpp----------------------------------------------------------
// Kristina Chen, Hannah Pham CSS 343 D
// 03/10/23
// 03/15/23
//--------------------------------------------------------------------------------------------------------------------
// Purpose - The implementation file of a store that holds a hashtable of customers,
//           BST(s) of movies of different genres, and takes input of transactions
//           inventory
//--------------------------------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions
// Store will be able to handle input files
// Store will be able to hold the hashtable of customers
// Store will be able to hold an array/set of 3 BST(s) for our 3 movie genres
//--------------------------------------------------------------------------------------------------------------------

<<<<<<< HEAD
#include "Store.h"

void Store::buildStore(ifstream &movief, ifstream &customerf)
{
=======
#include "store.h"

Store::Store() {}

Store::~Store() {for int i = 0; i < movieGenres; i++) {
        set<Movie*>::iterator iterator = movies[i].begin();

        for (;iterator != movies[i].end(); iterator++) {
            Movie* deleted = *it;
            delete deleted;
        }
    }
}

void Store::execute() {
    inputProcessing.processCustomers(customers);
    inputProcessing.proccessInventory(movies);
    inputProcessing.proccessActions(movie,customers);
>>>>>>> ad1261bb5de4893fd5421bd339657b4a99aefeab
}