### 237. Delete Node in a Linked List
- **Difficulty:** Medium

#### Problem Statement:
Given a singly-linked list, delete a node from it. You are given direct access to the node that needs to be deleted. You do not have access to the head of the list.  
You are **not** allowed to delete the node from memory, but you should update the linked list such that:
1. The value of the given node should not exist in the linked list.
2. The number of nodes in the linked list should decrease by one.
3. The order of nodes before the given node should remain the same.
4. The order of nodes after the given node should remain the same.

#### Custom Testing:
- For testing purposes, you will provide the entire linked list `head` and the `node` to be deleted. 
- It is guaranteed that the given `node` is not the last node of the list and is an actual node in the list.

#### Examples:
1. **Example 1:**
   - **Input:** 
     - `head = [4,5,1,9]`
     - `node = 5`
   - **Output:** 
     - `[4,1,9]`
   - **Explanation:** 
     - The linked list becomes `4 -> 1 -> 9` after deleting the node with value `5`.

2. **Example 2:**
   - **Input:** 
     - `head = [4,5,1,9]`
     - `node = 1`
   - **Output:** 
     - `[4,5,9]`
   - **Explanation:** 
     - The linked list becomes `4 -> 5 -> 9` after deleting the node with value `1`.

#### Constraints:
- The number of nodes in the list is in the range `[2, 1000]`.
- `-1000 <= Node.val <= 1000`
- The value of each node in the list is unique.
- The node to be deleted is in the list and is **not** a tail node.