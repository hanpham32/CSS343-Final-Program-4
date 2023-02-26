cmake_minimum_required(VERSION 3.23)
project(program4PhamChen)

set(CMAKE_CXX_STANDARD 14)

add_executable(program4PhamChen main.cpp BinarySearchTree.cpp BinarySearchTree.h Movies/Movie.cpp Movies/Movie.h Movies/Drama.cpp Movies/Drama.h Movies/Comedy.cpp Movies/Comedy.h Movies/Classics.cpp Movies/Classics.h Hashtable.cpp Hashtable.h Actions/Transactions.cpp Actions/Transactions.h Customers/customer.cpp Customers/customer.h)
