//
// Created by Owner on 2/25/2023.
//

#include "BinarySearchTree.h"


template<class ItemType>
BinarySearchTree<ItemType>::BinarySearchTree() = default;

template<class ItemType>
BinarySearchTree<ItemType>::~BinarySearchTree() {

}

template<class ItemType>
void BinarySearchTree<ItemType>::makeEmpty() {

}

template<class ItemType>
Movie *BinarySearchTree<ItemType>::retrieve(const Movie *) {
    return nullptr;
}

template<class ItemType>
bool BinarySearchTree<ItemType>::insert(Movie *) {
    return false;
}

template<class ItemType>
void BinarySearchTree<ItemType>::display() const {

}

template<class ItemType>
void BinarySearchTree<ItemType>::makeEmptyHelper(BinarySearchTree::Node *&) {

}

template<class ItemType>
void BinarySearchTree<ItemType>::inorder(BinarySearchTree::Node *) const {

}

template<class ItemType>
Movie *BinarySearchTree<ItemType>::retrieveBSTHelper(BinarySearchTree::Node *&, const Movie *) const {
    return nullptr;
}

template<class ItemType>
bool BinarySearchTree<ItemType>::insertHelper(BinarySearchTree::Node *&, Movie *) {
    return false;
}
