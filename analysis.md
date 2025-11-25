(Adam’s half — Big-O theory/classic analysis)**


```markdown
# Analysis — Big-O Performance

This section covers the theoretical time and space complexity of an **unbalanced Binary Search Tree**.

---

# 1. Time Complexity

BST operations depend on the **height of the tree**.

Let **h** = height of the tree  
Let **n** = number of nodes  

### If the tree is reasonably balanced:
- Height **h ≈ log₂(n)**  
- Each operation follows one path down the tree

### If the tree becomes skewed:
- Height **h = n**  
- Operations degrade to linear time

---

## Summary Table

| Operation         | Best / Average Case | Worst Case |
|------------------|---------------------|------------|
| Search           | O(log n)            | O(n)       |
| Insert           | O(log n)            | O(n)       |
| Delete           | O(log n)            | O(n)       |
| Traversal        | O(n)                | O(n)       |
| Space Complexity | O(n)                | O(n)       |

---

# 2. Why performance changes

### ✔ **Balanced-like shape (random inserts)**  
Tree height stays low → operations divide the search space like binary search.

### ✔ **Skewed shape (sorted inserts)**  
Tree becomes a straight line (like a linked list).  
This causes:

- Search = O(n)  
- Insert = O(n)  
- Delete = O(n)

---

# 3. Inputs that help or hurt

### **Help (keep tree shallow):**
- Random insertion order  
- Mixed insert/delete operations  
- Diverse value ranges  

### **Hurt (make tree skewed):**
- Sorted input (e.g., 1,2,3,4,5…)  
- Reverse-sorted input  
- Repeated inserts that create long chains  

---

# 4. Takeaway

An unbalanced BST performs well **only when its height stays small**.  
This is why balanced trees (like AVL or Red-Black Trees) are used in real libraries —  
but unbalanced BSTs are perfect for demonstrating:

- Tree shape  
- Recursion  
- Insert/search paths  
- How complexity depends on data

(Done By Adam Cassidy)