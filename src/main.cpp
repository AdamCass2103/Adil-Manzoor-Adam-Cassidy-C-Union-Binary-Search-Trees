#include <iostream>
#include "BST.h"

int main() {
    BST tree;

    std::cout << "Inserting values...\n";
    int values[] = {50, 30, 70, 20, 40, 60, 80};
    for (int v : values) {
        tree.insert(v);
    }

    std::cout << "\nIn-order traversal (should be sorted): ";
    tree.inorder();

    int key = 40;
    std::cout << "\nSearching for " << key << ": ";
    std::cout << (tree.search(key) ? "FOUND" : "NOT FOUND") << std::endl;

    int missing = 99;
    std::cout << "Searching for " << missing << ": ";
    std::cout << (tree.search(missing) ? "FOUND" : "NOT FOUND") << std::endl;

    return 0;
}
 