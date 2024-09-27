### Problem: 2095. Delete the Middle Node of a Linked List

**Difficulty:** Medium

You are given the `head` of a linked list. Delete the middle node, and return the head of the modified linked list.

The middle node of a linked list of size `n` is the ⌊n / 2⌋th node from the start using 0-based indexing, where ⌊x⌋ denotes the largest integer less than or equal to `x`.

For `n = 1, 2, 3, 4, 5`, the middle nodes are at indices `0, 1, 1, 2, 2`, respectively.

### Example 1:

**Input:** `head = [1, 3, 4, 7, 1, 2, 6]`  
**Output:** `[1, 3, 4, 1, 2, 6]`

### Example 2:

**Input:** `head = [1, 2, 3, 4]`  
**Output:** `[1, 2, 4]`

### Example 3:

**Input:** `head = [2, 1]`  
**Output:** `[2]`

### Constraints:

- The number of nodes in the list is in the range `[1, 10^5]`.
- `1 <= Node.val <= 10^5`