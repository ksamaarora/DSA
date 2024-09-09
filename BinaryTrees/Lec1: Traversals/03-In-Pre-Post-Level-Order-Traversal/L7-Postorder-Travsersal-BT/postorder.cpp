#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
    node(int val){
        data=val;
        right=left=NULL;
    }
};

void postorder_traverse(struct node *root){
    if(root==NULL){return;}
    postorder_traverse(root->left);
    postorder_traverse(root->right);
    cout<<root->data<<" ";
}

int main(){
    struct node *root = new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->left->right->left=new node(6);
    root->right=new node(3);
    root->right->left=new node(7);
    root->right->right=new node(8);
    root->right->right->left=new node(9);
    root->right->right->right=new node(10);
    postorder_traverse(root);
    return 0;
}