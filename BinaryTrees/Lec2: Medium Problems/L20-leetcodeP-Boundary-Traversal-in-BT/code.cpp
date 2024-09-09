class Solution {

void addleftboundary(Node *root, vector<int>& res) {
    Node* cur = root->left;
    while (cur) {
        if (!isleaf(cur)) res.push_back(cur->data);
        if (cur->left != NULL) cur = cur->left;
        else cur = cur->right;
    }
}

void addrightboundary(Node *root, vector<int>& res) {
    Node* cur = root->right;
    vector<int> tmp;
    while (cur) {
        if (!isleaf(cur)) tmp.push_back(cur->data);
        if (cur->right != NULL) cur = cur->right;
        else cur = cur->left;
    }
    for (int i = tmp.size() - 1; i >= 0; i--) {
        res.push_back(tmp[i]);
    }
}

void addleafnodes(Node *root, vector<int>& res) {
    if (isleaf(root)) {
        res.push_back(root->data);
        return;
    }
    if (root->left) addleafnodes(root->left, res);
    if (root->right) addleafnodes(root->right, res);
}

public:
    vector<int> printBoundary(Node *root) {
        vector<int> res; 
        if (root == NULL) return res;
        if (!isleaf(root)) res.push_back(root->data);
        addleftboundary(root, res);
        addleafnodes(root, res);
        addrightboundary(root, res);
        return res;
    }
};
