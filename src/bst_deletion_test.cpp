#include "BST.h"
#include <iostream>

int main() {
    BST tree;

    // Insert nodes
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    std::cout << "Inorder traversal before deletion: ";
    tree.inorder();

    // Delete nodes
    tree.remove(20); // Leaf node
    tree.remove(30); // Node with one child
    tree.remove(50); // Node with two children

    std::cout << "Inorder traversal after deletion: ";
    tree.inorder();

    // Test findMin
    std::cout << "Minimum value in the BST: " << tree.findMin() << std::endl;

    return 0;
}