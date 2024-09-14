class Solution{
public:
    vector<vector<int>> preInPostTraversal(TreeNode* root){
        vector<int> pre, in, post;
        vector<vector<int>> result;

        stack<pair<TreeNode*, int>> st;
        st.push({root, 1});
        
        while(!st.empty()){
            auto it = st.top();
            st.pop();
            
            // Preorder
            // this is part of pre
            // increment 1 to 2
            // push the left side of the tree
            if(it.second == 1){
                pre.push_back(it.first->val);
                it.second++;
                st.push(it);
                
                if(it.first->left != NULL){
                    st.push({it.first->left, 1});
                }
            }
            // Inorder
            // this is a part of in
            // increment 2 to 3
            // push right
            else if(it.second == 2){
                in.push_back(it.first->val);
                it.second++;
                st.push(it);
                
                if(it.first->right != NULL){
                    st.push({it.first->right, 1});
                }
            }
            // Postorder
            // don't push it back again
            else {
                post.push_back(it.first->val);
            }
        }

        // Store the results in a vector of vectors
        result.push_back(pre);
        result.push_back(in);
        result.push_back(post);
        return result;
    }
};
