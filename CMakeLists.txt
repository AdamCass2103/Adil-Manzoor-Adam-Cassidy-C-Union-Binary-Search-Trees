cmake_minimum_required(VERSION 3.10)
project(BSTProject)

set(CMAKE_CXX_STANDARD 17)

# Adam's demo program
add_executable(bst_demo
    src/main.cpp
    src/BST.cpp
    src/BST.h
)

# Adil's deletion test program
add_executable(bst_delete_test
    src/bst_deletion_test.cpp
    src/BST.cpp
    src/BST.h
)
