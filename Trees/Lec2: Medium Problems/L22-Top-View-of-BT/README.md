https://www.geeksforgeeks.org/problems/top-view-of-binary-tree/1

### Problem: Top View of a Binary Tree (Medium)

Given a binary tree, the objective is to print the top view of the tree. The top view of a binary tree is the set of nodes visible when the tree is viewed from the top.

For instance, consider the following binary tree:

```
       1
     /   \
    2     3
   / \   / \
  4   5 6   7
```

The top view of this tree would be: `4 2 1 3 7`.

**Note:**
- The output should include nodes from the leftmost node to the rightmost node.
- If two nodes share the same horizontal position but are at different levels, the node that appears first when viewed from the top is the one that should be included in the top view.

#### Example 1:
**Input:**
```
      1
    /   \
   2     3
```
**Output:** `2 1 3`

#### Example 2:
**Input:**
```
       10
     /    \
   20      30
  /  \    /  \
40   60  90  100
```
**Output:** `40 20 10 30 100`

#### Your Task:
You don’t need to handle input or output. Complete the function `topView()` that takes the root node of the binary tree as its parameter and returns a list of nodes visible from the top view, from left to right.

#### Expected Time Complexity: 
- `O(NlogN)`

#### Expected Auxiliary Space: 
- `O(N)`

#### Constraints:
- `1 ≤ N ≤ 10^5`
- `1 ≤ Node Data ≤ 10^5`
