### Linked List Insertion At End
- **Difficulty:** Basic
- **Accuracy:** 43.96%
- **Submissions:** 251K+
- **Points:** 1

#### Problem Statement:
Given the head of a singly linked list and a value `x`, insert that value `x` at the end of the linked list and return the modified linked list.

#### Examples:
1. **Input:**  
   - `LinkedList:` 1 -> 2 -> 3 -> 4 -> 5  
   - `x = 6`  
   
   **Output:**  
   - 1 -> 2 -> 3 -> 4 -> 5 -> 6  
   
   **Explanation:**  
   - `6` is inserted at the end of the linked list.

2. **Input:**  
   - `LinkedList:` 5 -> 4  
   - `x = 1`  
   
   **Output:**  
   - 5 -> 4 -> 1  
   
   **Explanation:**  
   - `1` is inserted at the end of the linked list.

#### Expected Time Complexity:
- O(n)

#### Expected Auxiliary Space:
- O(1)

#### Constraints:
- 0 ≤ number of nodes ≤ 10<sup>5</sup>
- 1 ≤ node->data, x ≤ 10<sup>3</sup>