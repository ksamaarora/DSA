Important (difficult)

https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/

---

### LeetCode Challenge: Binary Tree Zigzag Level Order Traversal (Medium)

In this challenge, we need to traverse a binary tree in a zigzag manner, alternating the direction of traversal at each level. The problem is defined as follows:

**Problem Statement:**

Given the root of a binary tree, return the zigzag level order traversal of its nodes' values. Specifically, the traversal should go from left to right on one level, then right to left on the next, and continue to alternate between directions for each subsequent level.

**Examples:**

- **Example 1:**

    ```python
    Input: root = [3,9,20,null,null,15,7]
    Output: [[3],[20,9],[15,7]]
    ```

- **Example 2:**

    ```python
    Input: root = [1]
    Output: [[1]]
    ```

- **Example 3:**

    ```python
    Input: root = []
    Output: []
    ```

**Constraints:**

- The number of nodes in the tree is in the range `[0, 2000]`.
- The value of each node lies within the range `[-100, 100]`.

Here is the code:

```cpp
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (root == NULL)
            return result;
        
        queue<TreeNode*> nodesQueue;
        nodesQueue.push(root);
        bool leftToRight = true;

        while (!nodesQueue.empty()) {
            int size = nodesQueue.size();
            vector<int> row(size);

            for (int i = 0; i < size; i++) {
                TreeNode* node = nodesQueue.front();
                nodesQueue.pop();

                // Find position to fill node's value
                int index = leftToRight ? i : size - 1 - i;
                row[index] = node->val;

                if (node->left) {
                    nodesQueue.push(node->left);
                }
                if (node->right) {
                    nodesQueue.push(node->right);
                }
            }

            // After this level
            leftToRight = !leftToRight;
            result.push_back(row);
        }

        return result;
    }
};
```

### Explanation of the Code:

This code solves the problem of performing a zigzag (or spiral) level-order traversal of a binary tree. The zigzag level-order traversal alternates between left-to-right and right-to-left directions for each level of the tree.

#### Step-by-Step Breakdown:

1. **Base Case Check**: 
    - If the `root` is `NULL`, the function immediately returns an empty `result`.

2. **Initialization**:
    - A queue `nodesQueue` is used to facilitate a level-order traversal (BFS).
    - The `root` node is pushed onto the queue.
    - A boolean variable `leftToRight` is used to control the direction of traversal for each level.

3. **Level Order Traversal**:
    - The outer `while` loop runs until all levels are traversed (i.e., until `nodesQueue` is empty).
    - For each level, determine the number of nodes using `size = nodesQueue.size()`.
    - A `row` vector is initialized with the current `size` to store the values of nodes at this level.

4. **Processing Each Node**:
    - A `for` loop iterates over all nodes in the current level.
    - The front node of the queue is removed and stored in `node`.
    - The index where the node’s value will be placed in `row` is calculated based on the `leftToRight` flag:
        - If `leftToRight` is `true`, values are inserted left-to-right.
        - If `leftToRight` is `false`, values are inserted right-to-left (using the formula `size - 1 - i`).
    - The left and right children of the current node (if they exist) are then added to the queue for processing in the next level.

5. **After Processing the Level**:
    - The `leftToRight` flag is toggled to alternate the direction for the next level.
    - The `row` is added to the `result` vector.

6. **Return**:
    - After all levels are processed, the `result` vector, which contains the zigzag level-order traversal, is returned.

### Key Concepts:
- **Breadth-First Search (BFS)**: The code uses a queue to perform BFS, ensuring that nodes are processed level by level.
- **Zigzag Traversal**: The alternating direction for each level is handled using the `leftToRight` flag, with careful index manipulation to ensure correct ordering of node values.
