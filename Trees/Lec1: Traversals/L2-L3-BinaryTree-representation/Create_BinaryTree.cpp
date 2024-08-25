// method 2 of initialization creation 

#include<iostream>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};

typedef struct node snode;

snode* create_node(int val){
    snode *newnode=new snode;
    newnode->data=val;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

int main(){
    snode* root=create_node(1);
    root->left=create_node(2);
    root->right=create_node(3);
    root->left->left=create_node(4);
    root->left->right=create_node(5);
    return 0;
}