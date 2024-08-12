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
