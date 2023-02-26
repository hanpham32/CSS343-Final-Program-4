//
// Created by Owner on 2/25/2023.
//

#ifndef PROGRAM4PHAMCHEN_BINARYSEARCHTREE_H
#define PROGRAM4PHAMCHEN_BINARYSEARCHTREE_H
#include "Movie.h"
#include <string>
#include <stdio.h>
#include <iostream>

template<class ItemType>
class BinarySearchTree {

public:
    BinarySearchTree();                                     //  Constructor
                    ~BinarySearchTree();                    //  Destructor
    void makeEmpty();                                       //  Method to empty BST
Movie* retrieve(const Movie*);                              //  Retrieve method to return movie pointer
    bool insert(Movie*);                                    //  Inserting a new movie into the BST
    void display() const;                                   //  Display tree of movies (will be used for inventory)


private:
    struct  Node {
        Movie* data;
        Node* left;
        Node* right;
        Node(Movie* data): data(data), left(nullptr), right(nullptr) {};
    };
    Node* root;

    void makeEmptyHelper(Node*&);                           //  makeEmpty helper method
    void inorder(Node*) const;                              //  display helper method prints inorder
    Movie* retrieveBSTHelper(Node*&, const Movie*) const;   //  retrieve helper method
    bool insertHelper(Node*&, Movie*);                      // insertion helper method
};



#endif //PROGRAM4PHAMCHEN_BINARYSEARCHTREE_H
