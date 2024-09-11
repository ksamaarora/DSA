Memory Limit Exceeded in Iterative Approach (M2)
Same quest of leetcode as L5 

> ### Method 1 - Using recursion - L5
```c++
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        if (root == nullptr) return result;
        result.push_back(root->val);
        vector<int> left = preorderTraversal(root->left);
        vector<int> right = preorderTraversal(root->right); 
        result.insert(result.end(), left.begin(), left.end());
        result.insert(result.end(), right.begin(), right.end());
        return result;
    }
};
```
> ### Method 2 - Using Stack - L9
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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==nullptr) return ans;
        stack<TreeNode*> st;
        st.push_back(root);
        while(!st.empty()){
            
        }

    }
};
```

https://leetcode.com/problems/binary-tree-preorder-traversal/

### 144. Binary Tree Preorder Traversal

**Difficulty**: Easy

---

**Problem Statement:**

Given the `root` of a binary tree, return the preorder traversal of its nodes' values.

---

**Example 1:**

- **Input:** `root = [1, null, 2, 3]`
- **Output:** `[1, 2, 3]`

**Example 2:**

- **Input:** `root = []`
- **Output:** `[]`

**Example 3:**

- **Input:** `root = [1]`
- **Output:** `[1]`

---

**Constraints:**

- The number of nodes in the tree is in the range `[0, 100]`.
- The value of each node is within the range `[-100, 100]`.

---

**Notes:**

- The preorder traversal of a binary tree involves visiting the root node first, then recursively visiting the left subtree, followed by the right subtree.