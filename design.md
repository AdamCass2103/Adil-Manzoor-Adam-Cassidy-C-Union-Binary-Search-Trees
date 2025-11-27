inary Search Tree (BST) – Design Overview

A Binary Search Tree (BST) is a tree-based data structure where each node follows the BST property:

Left subtree contains smaller values
Right subtree contains larger values
This property applies recursively to every node
Because of this rule, BSTs support fast insert search, and delete operations

BST Node Structure

Each node in our implementation uses a simple struct:

struct Node {
    int key;
    Node* left;
    Node* right;
};

key stores the value
left points to the left child
right points to the right child

BST Operations (Adam’s Part)
Insert (Adam)

Insert compares the new key to the current node:

If key < node → go left
If key > node → go right

Insert when an empty spot is found
This preserves the BST property.

 Search (Adam)

Search works the same way as insert:

Compare target to current node
Move left or right
Stop when found or when a null pointer is reached

Inorder Traversal (Adam)

In-order traversal visits nodes in sorted order:

Left → Node → Right

This is one of the most important BST features.


![from Geekforgeeks.com](Introduction-to-Binary-Tree.webp)

