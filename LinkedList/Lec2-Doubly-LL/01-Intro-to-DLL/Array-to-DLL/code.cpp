#include<iostream>
#include<vector>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* back;
    Node(int val, Node* next1=nullptr, Node* back1=nullptr){
        data=val;
        next=next1;
        back=back1;
    }
};
Node* convertArr2DLL(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1; i<arr.size(); i++){
        Node* current=new Node(arr[i], nullptr, prev);
        prev->next=current;
        prev=current; // prev=prev->next;
    }
    return head;
}
void printDLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        if(temp->next!=NULL) cout<<"->";
        temp=temp->next;
    }
}
int main(){
    // vector<int>arr={1,4,2,5}; older compiler
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(4);
    arr.push_back(2);
    arr.push_back(5);
    Node* head=convertArr2DLL(arr);
    printDLL(head); 
    return 0;
}