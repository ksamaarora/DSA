https://www.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=add-1-to-a-number-represented-as-linked-list

### **Add 1 to a Linked List Number**

**Difficulty**: Medium  
**Accuracy**: 31.91%  
**Submissions**: 255K+  
**Points**: 4  

---

#### **Problem Statement**:
You are given a **singly linked list** where each element (node) of the list contains an integer as data. The integers represent digits of a number in sequence, where the **head node** contains the most significant digit, and the **tail node** contains the least significant digit. 

Your task is to **add 1** to the number formed by concatenating all the digits in the linked list and return the head of the modified linked list.

---

#### **Examples**:

**Example 1**:
- **Input**: 
  LinkedList: `4 -> 5 -> 6`
- **Output**: 
  `4 -> 5 -> 7`
- **Explanation**: The number `456` is represented by the linked list. Adding 1 results in `457`, which is represented as `4 -> 5 -> 7` in the linked list.

---

**Example 2**:
- **Input**: 
  LinkedList: `1 -> 2 -> 3`
- **Output**: 
  `1 -> 2 -> 4`
- **Explanation**: The number `123` is represented by the linked list. Adding 1 results in `124`, which is represented as `1 -> 2 -> 4` in the linked list.

---

#### **Expected Time Complexity**:  
O(n), where `n` is the length of the linked list.

#### **Expected Auxiliary Space**:  
O(1) (excluding the space required for the output).

---

#### **Constraints**:
- 1 ≤ len(list) ≤ 10⁵
- 0 ≤ list[i] ≤ 9 (Each node holds a digit between 0 and 9)

--- 
