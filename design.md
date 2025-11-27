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

Three Cases for Node Deletion

Case 1: Node is a Leaf (0 Children)
This is the simplest case.

The node is simply removed (deleted) from the tree.

The pointer from its parent (either the left or right pointer) is set to NULL (or nullptr).

Case 2: Node has 1 Child
The node to be deleted is skipped in the lineage.

The child node is directly linked to the parent of the deleted node, taking the deleted node's place.

The node is then deleted.

Case 3: Node has 2 Children
This is the most complex case, as simply deleting the node would leave a "hole" in the tree with two subtrees needing to connect.

The node to be deleted is replaced by its In-order Successor.

The In-order Successor is the node that comes immediately after the deleted node in a sorted (in-order) list, which is always the smallest node in the right subtree (found by traversing left repeatedly from the right child).

The data of the successor is copied into the node to be deleted.

The successor node itself (which is guaranteed to have 0 or 1 child) is then recursively deleted from the right subtree using Case 1 or Case 2 logic.

![from Geekforgeeks.com](Introduction-to-Binary-Tree.webp)

