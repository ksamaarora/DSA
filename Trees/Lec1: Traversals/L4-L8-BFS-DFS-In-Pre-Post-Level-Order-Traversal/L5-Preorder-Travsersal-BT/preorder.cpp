// METHOD 1 - Striver Method 

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

void preorder_traverse(struct node *root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preorder_traverse(root->left);
    preorder_traverse(root->right);
}

int main(){
    struct node *root=new node(1);
    root->left = new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->left->right->left=new node(6);
    root->right->left=new node(7);
    root->right->right=new node(8);
    cout<<"Pre order traversal";
    preorder_traverse(root);
    cout<<endl;
    return 0;
}

// Method 2 - Lengthy

#include<iostream>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};

typedef struct node snode;
snode* createnode(int val){
    snode *newnode=new snode;
    newnode->data=val;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

void preorder_traverse(struct node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preorder_traverse(root->left);
    preorder_traverse(root->right);
}

int main(){
    snode* root=createnode(1);
    root->left=createnode(2);
    root->right=createnode(3);
    root->left->left=createnode(4);
    root->left->right=createnode(5);
    root->right->left=createnode(6);
    root->right->right=createnode(7);

    cout<<"Pre-order traversal";
    preorder_traverse(root);
    cout<<endl;
    return 0;
}


