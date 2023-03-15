// ------------------------------------------------ store.h----------------------------------------------------------
// Kristina Chen Hannah Pham CSS 343 D
// 03/10/23
// 03/15/23
//--------------------------------------------------------------------------------------------------------------------
// Purpose - The header file of a store that holds a hashtable of customers,
//           BST(s) of movies of different genres, and takes input of transactions
//           inventory
//--------------------------------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions
// Store will be able to handle input files
// Store will be able to hold the hashtable of customers
// Store will be able to hold an array/set of 3 BST(s) for our 3 movie genres
//--------------------------------------------------------------------------------------------------------------------

#ifndef STORE_H
#define STORE_H
#include <string>
#include <map>
#include <queue>
#include <set>
#include "customer.h"
#include "Hashtable.h"
#include "BinarySearchTree.h"
#include <set>
#include "Movies/Movie.h"
#include "Movies/Drama.h"
#include "Movies/Comedy.h"
#include "Movies/Classics.h"
#include "Actions/Transactions.h"
#include "inputProcessing.h"
const int movieGenres = 3;

using namespace std;

class Store
{

public:
    Store();
    ~Store();
    void execute();
private:

    //  A set of arrays that hold BST(s) holding movies
    //  In this case we have 3 BST(s) for 3 genres
    set<Movie*> movies[movieGenres];

    // A hashtable holding customers
    HashTable<Customer> customers;


    // This class will be used to input files and store our data
    inputProcessing inputProcessing;

};

#endif