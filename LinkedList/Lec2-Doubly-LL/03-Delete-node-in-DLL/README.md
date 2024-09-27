### **Delete Node in Doubly Linked List**

**Difficulty:** Easy  
**Accuracy:** 42.98%  
**Submissions:** 139K+  
**Points:** 2

---

#### **Problem Statement:**

Given a **doubly linked list** and a position `x`, the task is to delete the node at the given position. The position starts from `1`, and you need to return the head of the modified doubly linked list.

---

#### **Example 1:**

**Input:**

    LinkedList: 1 <--> 3 <--> 4  
    x = 3

**Output:**

    1 <--> 3

**Explanation:**  
After deleting the node at position `3` (1-based indexing), the linked list becomes `1 <--> 3`.

---

#### **Example 2:**

**Input:**

    LinkedList: 1 <--> 5 <--> 2 <--> 9  
    x = 1

**Output:**

    5 <--> 2 <--> 9

**Explanation:**  
After deleting the node at position `1` (1-based indexing), the head is now `5`, and the list becomes `5 <--> 2 <--> 9`.

---

#### **Expected Time Complexity:**  
`O(n)`

#### **Expected Auxiliary Space:**  
`O(1)`

---

#### **Constraints:**

- `2 <= size of the linked list <= 10^6`
- `1 <= x <= size of the linked list`
- `1 <= node->data <= 10^4`
