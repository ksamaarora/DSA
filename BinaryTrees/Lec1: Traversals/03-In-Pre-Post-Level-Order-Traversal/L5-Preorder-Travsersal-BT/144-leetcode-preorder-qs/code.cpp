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

// Method 1: Using Recursion
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        if (root == nullptr) return result;
        result.push_back(root->val);// Visit the root node
        vector<int> left = preorderTraversal(root->left);//Traverse the left subtree
        vector<int> right = preorderTraversal(root->right); //Traverse the right subtree
        result.insert(result.end(), left.begin(), left.end());//Add left subtree values
        result.insert(result.end(), right.begin(), right.end());//Add right subtree values
        return result;
    }
};

// Method 2:
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        if (root == nullptr) return preorder;

        stack<TreeNode*> st;
        st.push(root);

        while (!st.empty()) {
            TreeNode* node = st.top();
            st.pop();
            preorder.push_back(node->val);
            // Push right child first to ensure left is processed first
            if (node->right) st.push(node->right);
            if (node->left) st.push(node->left);
        }
        return preorder;
    }
};

