### **Add Two Numbers**

**Difficulty**: Medium

---

#### **Problem Statement**:
You are given two non-empty **singly linked lists**, where each linked list represents a **non-negative integer**. The digits are stored in **reverse order**, meaning the least significant digit is at the head of the list. Each node contains a single digit, and your task is to add the two numbers and return the sum as a new linked list.

You may assume that the two numbers **do not contain any leading zeros**, except for the number 0 itself.

---

#### **Examples**:

**Example 1**:
- **Input**:  
  `l1 = [2, 4, 3]`  
  `l2 = [5, 6, 4]`  
- **Output**:  
  `[7, 0, 8]`
- **Explanation**: The numbers represented by the linked lists are `342` and `465` (since the digits are in reverse order). Their sum is `342 + 465 = 807`. The result, `807`, is stored in reverse order as `7 -> 0 -> 8`.

---

**Example 2**:
- **Input**:  
  `l1 = [0]`  
  `l2 = [0]`
- **Output**:  
  `[0]`
- **Explanation**: Both lists represent the number `0`, and their sum is `0`.

---

**Example 3**:
- **Input**:  
  `l1 = [9, 9, 9, 9, 9, 9, 9]`  
  `l2 = [9, 9, 9, 9]`
- **Output**:  
  `[8, 9, 9, 9, 0, 0, 0, 1]`
- **Explanation**: The numbers represented are `9999999` and `9999`. Their sum is `9999999 + 9999 = 10009998`, which is represented in reverse order as `8 -> 9 -> 9 -> 9 -> 0 -> 0 -> 0 -> 1`.

---

#### **Constraints**:
- The number of nodes in each linked list is in the range `[1, 100]`.
- `0 ≤ Node.val ≤ 9`
- It is guaranteed that the input numbers do not have leading zeros, except the number `0` itself.

---
