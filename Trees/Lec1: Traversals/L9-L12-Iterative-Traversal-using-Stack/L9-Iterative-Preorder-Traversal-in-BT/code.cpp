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
// Method 1: Using Stack
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;  // This will store the result of the traversal.
        if (root == nullptr) return preorder;  // If the tree is empty, return an empty list.

        stack<TreeNode*> st;  // Stack to help us traverse the tree iteratively.
        st.push(root);  // Start with the root node.

        while (!st.empty()) {  // Continue until all nodes are processed.
            TreeNode* node = st.top();  // Get the current node from the top of the stack.
            st.pop();  // Remove the current node from the stack.
            preorder.push_back(node->val);  // Add the current node's value to the result.

            // Push the right child first because stack is LIFO (Last-In, First-Out).
            // This ensures that the left child is processed before the right child.
            if (node->right) st.push(node->right);
            if (node->left) st.push(node->left);
        }
        return preorder;  // Return the result after the traversal is complete.
    }
};



