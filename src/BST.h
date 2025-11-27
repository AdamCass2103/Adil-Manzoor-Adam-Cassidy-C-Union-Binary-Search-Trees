#ifndef BST_H
#define BST_H

#include <stdexcept>
#include <iostream>

class BST {
private:
    struct Node {
        int key;
        Node* left;
        Node* right;

        explicit Node(int k) : key(k), left(nullptr), right(nullptr) {}
    };

    Node* root;

    // Helper functions (private, recursive)
    Node* insert(Node* node, int key);
    Node* search(Node* node, int key) const;
    void inorder(Node* node) const;
    void destroy(Node* node);

    // Private helper for remove
    Node* remove(Node* node, int key);

public:
    BST();      // Constructor
    ~BST();     // Destructor

    void insert(int key);
    bool search(int key) const;
    void inorder() const;

    // New methods for advanced operations
    void remove(int key); // Remove a node with the given key
    int findMin() const;  // Find the minimum key in the BST
};

#endif
