#ifndef BST_H
#define BST_H

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

public:
    BST();      // Constructor
    ~BST();     // Destructor

    
    void insert(int key);
    bool search(int key) const;
    void inorder() const;
};

#endif
