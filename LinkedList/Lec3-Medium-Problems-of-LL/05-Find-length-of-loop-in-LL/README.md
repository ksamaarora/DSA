### Find Length of Loop

**Difficulty:** Easy  
**Accuracy:** 44.26%  
**Submissions:** 199K+  
**Points:** 2

Given the head of a linked list, determine whether the list contains a loop. If a loop is present, return the number of nodes in the loop; otherwise, return 0.

**Note:** 'c' is the position of the node which is the next pointer of the last node of the linked list. If c is 0, then there is no loop.

### Examples:

1. **Input:** 
   - LinkedList: `25 -> 14 -> 19 -> 33 -> 10 -> 21 -> 39 -> 90 -> 58 -> 45`, `c = 4`  
   **Output:** `7`  
   **Explanation:** The loop is from `33` to `45`. So the length of the loop is `33 -> 10 -> 21 -> 39 -> 90 -> 58 -> 45 = 7`. The number `33` is connected to the last node of the linked list to form the loop because, according to the input, the 4th node from the beginning (1-based indexing) will be connected to the last node for the loop.

2. **Input:** 
   - LinkedList: `5 -> 4`, `c = 0`  
   **Output:** `0`  
   **Explanation:** There is no loop.

### Expected Time Complexity: 
- O(n)

### Expected Auxiliary Space: 
- O(1)

### Constraints:
- \(1 \leq \text{number of nodes} \leq 10^6\)
- \(0 \leq \text{node.data} \leq 10^6\)
- \(0 \leq c \leq n - 1\)

--- 
