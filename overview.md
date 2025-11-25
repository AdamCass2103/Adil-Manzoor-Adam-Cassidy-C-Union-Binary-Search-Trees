
---

#overview.md (what/why/when)**

Create file: **overview.md**

```markdown
# Overview — Binary Search Trees

## What is a Binary Search Tree?

A **Binary Search Tree (BST)** is a binary tree data structure where:

- Every node contains a key.
- All keys in the **left subtree** are **smaller** than the node’s key.
- All keys in the **right subtree** are **larger** than the node’s key.

This ordering property allows fast searching, insertion and deletion.

---

## Why are BSTs useful?

BSTs are useful because they support:

- **Fast lookups** (on average O(log n))
- **Fast inserts and deletes**
- **Sorted traversal** via in-order traversal
- **Dynamic resizing** (unlike arrays)
- **Efficient organisation of data** with ordering

They are a fundamental building block behind data structures like  
`std::map`, `std::set`, tree-based dictionaries and file-system indexing structures.

---

## When should you use a BST?

Use a BST when you need:

### ✔ Fast search + sorted output  
In-order traversal returns elements **in ascending order**.

### ✔ Frequent insertions and deletions  
Unlike arrays, you don’t need to shift elements.

### ✔ An ordered data structure  
Hash tables are fast but **not sorted**.

### ✔ Dynamic data that changes over time  
BSTs can grow and shrink efficiently.

---

## Real-life Use-Cases

1. **Leaderboards / Rankings**  
   Insert new scores and print them in sorted order.

2. **Symbol Tables in Compilers**  
   Store and look up variable names efficiently.

3. **Auto-complete / Dictionary Structures**  
   Tree ordering helps with alphabetical or numerical search.

The BST we implemented is **unbalanced**, which makes it perfect for teaching  
how performance depends on the structure of the tree.
