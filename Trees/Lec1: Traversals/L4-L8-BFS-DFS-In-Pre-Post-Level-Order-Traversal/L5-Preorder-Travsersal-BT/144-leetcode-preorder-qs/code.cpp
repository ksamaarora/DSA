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
