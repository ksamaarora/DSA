note: do level order traversal (imp)

```c++
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans; // This vector will store the final result.
        if(root==nullptr) return ans; // If the tree is empty, return an empty vector.
        
        queue<TreeNode*> q; // A queue to help with level order traversal.
        q.push(root); // Start by pushing the root node into the queue.
        
        while(!q.empty()){ // Continue until there are no more nodes to process.
            int size=q.size(); // Get the number of nodes at the current level.
            vector<int> level; // This vector will store the nodes' values at the current level.
            for(int i=0; i<size; i++){ // Loop through all nodes at the current level.
                TreeNode *node=q.front(); // Get the front node in the queue.
                q.pop(); // Remove the front node from the queue.
                if(node->left!=nullptr) q.push(node->left); // If the left child exists, add it to the queue.
                if(node->right!=nullptr) q.push(node->right); // If the right child exists, add it to the queue.
                level.push_back(node->val); // Add the current node's value to the level vector.
            }
            ans.push_back(level); // Add the level vector to the final result.
        }
        return ans; // Return the level order traversal as a 2D vector.
    }
};
```

### What the Code Does:
This code performs a **level order traversal** of a binary tree, which means it visits the nodes level by level, from top to bottom and left to right. It returns the values of the nodes in a 2D vector, where each sub-vector represents one level of the tree.

### Example Tree:
Imagine you have a tree like this:

```
      1
     / \
    2   3
   / \   \
  4   5   6
```

### Step-by-Step Explanation:
1. **Initialization**:
   - `ans` is an empty vector that will store the final result.
   - `q` is a queue that helps in processing nodes level by level.
   - The root node (1) is pushed into the queue to start the traversal.

2. **Level-by-Level Traversal**:
   - **First Level**:
     - The queue has one node: `[1]`.
     - We remove `1` from the queue, and add its children `2` and `3` to the queue.
     - The first level vector becomes `[1]`, and it’s added to `ans`.
     - Now, `ans = [[1]]`.
   - **Second Level**:
     - The queue now has nodes `[2, 3]`.
     - We remove `2`, add its children `4` and `5` to the queue.
     - We remove `3`, add its child `6` to the queue.
     - The second level vector becomes `[2, 3]`, and it’s added to `ans`.
     - Now, `ans = [[1], [2, 3]]`.
   - **Third Level**:
     - The queue has nodes `[4, 5, 6]`.
     - We remove `4`, `5`, and `6`. They have no children, so nothing new is added to the queue.
     - The third level vector becomes `[4, 5, 6]`, and it’s added to `ans`.
     - Now, `ans = [[1], [2, 3], [4, 5, 6]]`.

3. **End of Traversal**:
   - The queue is now empty, meaning all nodes have been processed. The final result is returned.

### Simple Mnemonic to Remember:
- **Queue the Tree:** Start with the root.
- **Level by Level:** Process all nodes at the current level before moving to the next.
- **Left to Right:** Always check left children first, then right.

### Final Output:
For the example tree, the output will be `[[1], [2, 3], [4, 5, 6]]`.

### Summary:
The code uses a queue to visit each level of the tree in order. By processing all nodes at the current level before moving to the next, it efficiently captures the structure of the tree in a 2D vector.