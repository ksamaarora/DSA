#include<iostream>
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
void preorder_traversal(struct node *root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preorder_traversal(root->left);
    preorder_traversal(root->right);
}
void inorder_traversal(struct node *root){
    if(root==NULL) return;
    inorder_traversal(root->left);
    cout<<root->data<<" ";
    inorder_traversal(root->right);
}
void postorder_traversal(struct node *root){
    if(root==NULL) return;
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    cout<<root->data<<" ";
}
int main(){
    struct node *root= new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->right=new node(4);
    root->left->left=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    preorder_traversal(root);
    cout<<endl;
    inorder_traversal(root);
    cout<<endl;
    postorder_traversal(root);
    cout<<endl;
    return 0;
}