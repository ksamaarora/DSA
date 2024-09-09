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
    int maxPathSum(TreeNode* root) {
        int max_sum = INT_MIN;
        calculateSum(root, max_sum);
        return max_sum;
    }
    
private:
    int calculateSum(TreeNode* node, int& max_sum) {
        if (node==NULL) return 0;
        
        // Calculate max path sum on the left and right
        int left_gain = std::max(0,calculateSum(node->left, max_sum));
        int right_gain = std::max(0,calculateSum(node->right, max_sum));
        
        // Current path sum including the current node
        int current_path_sum = node->val + left_gain + right_gain;
        
        // Update the global maximum path sum
        max_sum = std::max(max_sum, current_path_sum);
        
        // Return the maximum gain if continuing the path through this node
        return node->val + std::max(left_gain, right_gain);
    }
};
