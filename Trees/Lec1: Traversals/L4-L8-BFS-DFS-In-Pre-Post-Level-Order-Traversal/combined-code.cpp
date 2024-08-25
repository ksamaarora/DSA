#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
    node(int val){
        data=val;
        left=right=NULL;
    }
};

void preorder(struct node *root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct node *root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(struct node *root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


// IMP - level order traversal
vector<vector<int> > levelorder(struct node *root){
    vector<vector<int> > ans;
    if(root==NULL) return ans;

    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        int size=q.size();
        vector<int> level;
        for(int i=0; i<size; i++){
            node* current = q.front();
            q.pop();
            level.push_back(current->data);
            if(current->left!=NULL) q.push(current->left);
            if(current->right!=NULL) q.push(current->right);
        }
        ans.push_back(level);
    }
    return ans;
}

int main(){
    struct node *root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->left->right->left=new node(6);
    root->right=new node(3);
    root->right->left=new node(7);
    root->right->right=new node(8);
    root->right->right->right=new node(10);
    root->right->right->left=new node(9);
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;

    vector<vector<int> > levels = levelorder(root);
    for(const auto& level:levels){
        for(int val:level){
            cout<<val<<" ";
        }
        cout<<endl;
    }

    return 0;
}