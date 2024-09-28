https://leetcode.com/problems/sort-list/

### **Sort a linked list of 0s, 1s, and 2s**

**Difficulty**: Easy  
**Accuracy**: 60.75%  
**Submissions**: 199K+  
**Points**: 2

#### Problem Statement:
Given a singly linked list where nodes can contain values `0`, `1`, and `2` only. The task is to **segregate** the linked list such that all `0`s come at the head of the list, all `2`s come at the end, and all `1`s remain in the middle.

#### Examples:

**Example 1:**
```
Input: LinkedList: 1 -> 2 -> 2 -> 1 -> 2 -> 0 -> 2 -> 2
Output: 0 -> 1 -> 1 -> 2 -> 2 -> 2 -> 2 -> 2
Explanation: 
- All `0`s are at the head.
- All `1`s are in the middle.
- All `2`s are at the end.
```

**Example 2:**
```
Input: LinkedList: 2 -> 2 -> 0 -> 1
Output: 0 -> 1 -> 2 -> 2
Explanation: 
- After arranging the linked list, `0` comes first, followed by `1`, and then the `2`s.
```

#### Expected Time Complexity:
- **O(n)**

#### Expected Auxiliary Space:
- **O(1)**

#### Constraints:
- `1 <= no. of nodes <= 10^6`
- `0 <= node->data <= 2`
