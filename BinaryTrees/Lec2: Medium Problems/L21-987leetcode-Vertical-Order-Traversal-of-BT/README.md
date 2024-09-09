https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/ - Hard Problem

---

### Problem 987: Vertical Order Traversal of a Binary Tree (Hard)

Given the root of a binary tree, the goal is to compute the vertical order traversal of the tree.

For each node positioned at `(row, col)`, its left child will be positioned at `(row + 1, col - 1)` and its right child at `(row + 1, col + 1)`. The root of the tree starts at `(0, 0)`.

The vertical order traversal of the binary tree is a list of node values arranged top-to-bottom for each column index, starting from the leftmost column and moving to the rightmost column. If multiple nodes share the same row and column, they should be sorted by their values.

#### Example 1:
**Input:** `root = [3,9,20,null,null,15,7]`  
**Output:** `[[9],[3,15],[20],[7]]`

**Explanation:**
- Column -1: Only node 9 is in this column.
- Column 0: Nodes 3 and 15 are in this column, ordered top-to-bottom.
- Column 1: Only node 20 is in this column.
- Column 2: Only node 7 is in this column.

#### Example 2:
**Input:** `root = [1,2,3,4,5,6,7]`  
**Output:** `[[4],[2],[1,5,6],[3],[7]]`

**Explanation:**
- Column -2: Only node 4 is in this column.
- Column -1: Only node 2 is in this column.
- Column 0: Nodes 1, 5, and 6 are in this column. Node 1 is at the top, followed by 5 and 6, sorted by value.
- Column 1: Only node 3 is in this column.
- Column 2: Only node 7 is in this column.

#### Example 3:
**Input:** `root = [1,2,3,4,6,5,7]`  
**Output:** `[[4],[2],[1,5,6],[3],[7]]`

**Explanation:**
This example is identical to Example 2, but nodes 5 and 6 are swapped. The output remains the same as nodes are sorted by value when at the same position.

#### Constraints:
- The number of nodes in the tree is between `1` and `1000`.
- Each node value is between `0` and `1000`.

---
