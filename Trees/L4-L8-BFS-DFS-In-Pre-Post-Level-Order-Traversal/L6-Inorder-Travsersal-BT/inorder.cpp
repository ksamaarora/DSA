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

void inorder_traverse(struct node *root){
    if(root==NULL) return;
    inorder_traverse(root->left);
    cout<<root->data<<" ";
    inorder_traverse(root->right);
}

int main(){
    struct node *root= new node(1);
    root->left= new node(2);
    root->right= new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->left->right->left=new node(6);
    root->right->left=new node(7);
    root->right->right=new node(8);
    inorder_traverse(root);
    cout<<endl;
    return 0;
}