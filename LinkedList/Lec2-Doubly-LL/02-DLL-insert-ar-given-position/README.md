### **Doubly Linked List Insertion at a Given Position**

**Difficulty:** Basic  
**Accuracy:** 47.13%  
**Submissions:** 115K+  
**Points:** 1

---

#### **Problem Statement:**

Given a **doubly linked list**, a position `p`, and an integer `x`, your task is to insert a new node with value `x` immediately **after the p-th node** in the doubly linked list.

---

#### **Example 1:**

**Input:**

    LinkedList: 2 <-> 4 <-> 5  
    p = 2, x = 6  

**Output:**

    2 <-> 4 <-> 5 <-> 6  

**Explanation:**  
The value `6` is inserted after the `p = 2` node (0-based indexing), so `6` is placed at position `3`.

---

#### **Example 2:**

**Input:**

    LinkedList: 1 <-> 2 <-> 3 <-> 4  
    p = 0, x = 44  

**Output:**

    1 <-> 44 <-> 2 <-> 3 <-> 4  

**Explanation:**  
The value `44` is inserted after the `p = 0` node (0-based indexing), so `44` is placed at position `1`.

---

#### **Expected Time Complexity:**  
`O(n)`

#### **Expected Auxiliary Space:**  
`O(1)`

---

#### **Constraints:**

- `1 <= p < size of doubly linked list <= 10^6`
- `1 <= x <= 10^6`
