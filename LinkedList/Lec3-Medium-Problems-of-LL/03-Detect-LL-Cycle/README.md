### Problem: 141. Linked List Cycle

**Difficulty**: Easy

#### Problem Statement:
Given `head`, the head of a singly linked list, determine if the linked list contains a cycle.

A cycle exists if some node in the list can be revisited by following the `next` pointer continuously. Internally, `pos` is used to denote the index of the node that tail's next pointer connects to. However, `pos` is not passed as a parameter to the function.

Return `true` if there is a cycle in the list, otherwise return `false`.

---

#### Example 1:

- **Input**: `head = [3,2,0,-4]`, `pos = 1`
- **Output**: `true`
- **Explanation**: There is a cycle in the linked list where the tail connects to the 1st node (0-indexed).

#### Example 2:

- **Input**: `head = [1,2]`, `pos = 0`
- **Output**: `true`
- **Explanation**: There is a cycle in the linked list where the tail connects to the 0th node.

#### Example 3:

- **Input**: `head = [1]`, `pos = -1`
- **Output**: `false`
- **Explanation**: There is no cycle in the linked list.

---

#### Constraints:
- The number of nodes in the list is in the range [0, 10<sup>4</sup>].
- -10<sup>5</sup> ≤ `Node.val` ≤ 10<sup>5</sup>.
- `pos` is -1 or a valid index in the linked list.