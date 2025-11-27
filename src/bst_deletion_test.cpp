#include <iostream>
#include <algorithm> // for std::max

// 1. Node Structure
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

