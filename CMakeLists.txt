cmake_minimum_required(VERSION 3.10)
project(BSTProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(bst_demo
    src/main.cpp
    src/BST.cpp
    src/BST.h
)
