### Explanation of the Code:
[Refer to Link](https://www.youtube.com/watch?v=ySp2epYvgTE)

- **Preorder Traversal (pre)**: Visit the root node, then the left subtree, and finally the right subtree.
- **Inorder Traversal (in)**: Visit the left subtree, then the root node, and finally the right subtree.
- **Postorder Traversal (post)**: Visit the left subtree, then the right subtree, and finally the root node.

```cpp
class Solution {
public:
    vector<int> preInPostTraversal(TreeNode* root) {
        stack<pair<TreeNode*, int>> st;
        st.push({root, 1});
        
        vector<int> pre, in, post;
        if(root == NULL) return;
        
        while(!st.empty()) {
            auto it = st.top();
            st.pop();
            
            // this is part of pre
            // increment 1 to 2
            // push the left side of the tree
            if(it.second == 1) {
                pre.push_back(it.first->val);
                it.second++;
                st.push(it);
                
                if(it.first->left != NULL) {
                    st.push({it.first->left, 1});
                }
            }
            // this is a part of in
            // increment 2 to 3
            // push right
            else if(it.second == 2) {
                in.push_back(it.first->val);
                it.second++;
                st.push(it);
                
                if(it.first->right != NULL) {
                    st.push({it.first->right, 1});
                }
            }
            // don't push it back again
            else {
                post.push_back(it.first->val);
            }
        }
        
        return inorder;
    }
};
```

#### How It Works:
1. **Stack Initialization**: The stack stores pairs where the first element is a pointer to a tree node, and the second element is an integer indicating the traversal state (1 for preorder, 2 for inorder, 3 for postorder).

2. **State 1 (Preorder)**:
   - When `it.second == 1`, the node is in the preorder phase.
   - The value is added to the `pre` list.
   - The state is incremented to 2, and the left child (if present) is pushed onto the stack.

3. **State 2 (Inorder)**:
   - When `it.second == 2`, the node is in the inorder phase.
   - The value is added to the `in` list.
   - The state is incremented to 3, and the right child (if present) is pushed onto the stack.

4. **State 3 (Postorder)**:
   - When `it.second == 3`, the node is in the postorder phase.
   - The value is added to the `post` list, and the node is not pushed back onto the stack.

5. **Final Output**:
   - The code returns the list containing nodes in their inorder traversal. (However, note that in the original image, the function should return all three traversals, so you might need to modify it accordingly).
