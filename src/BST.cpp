#include "BST.h"

// Constructor
BST::BST() : root(nullptr) {}

// Destructor
BST::~BST() {
    destroy(root);
}

void BST::destroy(Node* node) {
    if (node == nullptr) return;
    destroy(node->left);
    destroy(node->right);
    delete node;
}

// ------------------------------
// INSERT
// ------------------------------
BST::Node* BST::insert(Node* node, int key) {
    if (node == nullptr) {
        return new Node(key);
    }

    if (key < node->key) {
        node->left = insert(node->left, key);
    } else if (key > node->key) {
        node->right = insert(node->right, key);
    }

    // duplicates ignored (BST normally avoids duplicate keys)
    return node;
}

void BST::insert(int key) {
    root = insert(root, key);
}

// ------------------------------
// SEARCH
// ------------------------------
BST::Node* BST::search(Node* node, int key) const {
    if (node == nullptr || node->key == key) {
        return node;
    }

    if (key < node->key) {
        return search(node->left, key);
    } else {
        return search(node->right, key);
    }
}

bool BST::search(int key) const {
    return search(root, key) != nullptr;
}

// ------------------------------
// INORDER TRAVERSAL (Left, Node, Right)
// ------------------------------
void BST::inorder(Node* node) const {
    if (node == nullptr) return;

    inorder(node->left);
    std::cout << node->key << " ";
    inorder(node->right);
}

void BST::inorder() const {
    inorder(root);
    std::cout << std::endl;
}

// ------------------------------
// REMOVE
// ------------------------------
BST::Node* BST::remove(Node* node, int key) {
    if (node == nullptr) return nullptr;

    if (key < node->key) {
        node->left = remove(node->left, key);
    } else if (key > node->key) {
        node->right = remove(node->right, key);
    } else {
        // Node with only one child or no child
        if (node->left == nullptr) {
            Node* temp = node->right;
            delete node;
            return temp;
        } else if (node->right == nullptr) {
            Node* temp = node->left;
            delete node;
            return temp;
        }

        // Node with two children: Get the inorder successor (smallest in the right subtree)
        Node* temp = node->right;
        while (temp->left != nullptr) {
            temp = temp->left;
        }

        // Copy the inorder successor's content to this node
        node->key = temp->key;

        // Delete the inorder successor
        node->right = remove(node->right, temp->key);
    }
    return node;
}

void BST::remove(int key) {
    root = remove(root, key); // Call the recursive helper function
}

// ------------------------------
// FIND MINIMUM
// ------------------------------
int BST::findMin() const {
    if (root == nullptr) {
        throw std::runtime_error("BST is empty");
    }

    Node* current = root;
    while (current->left != nullptr) {
        current = current->left;
    }
    return current->key;
}
