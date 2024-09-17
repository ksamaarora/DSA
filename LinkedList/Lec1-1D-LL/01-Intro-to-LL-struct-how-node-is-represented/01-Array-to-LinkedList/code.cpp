#include<iostream>
#include<vector>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int data1, Node* next1=nullptr){
        data=data1;
        next=next1;
    }
};

Node* convertArr2LL(vector<int> &arr){
    if(arr.empty()) return nullptr; // handle empty array case
    
    Node* head= new Node(arr[0]); // Initialize head
    Node* mover=head;  // move mover pointer
    
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]); // Create new node
        mover->next = temp;            // Link to the new node
        mover = mover->next;           // Move to the next node
    }
    return head;
}

void printLL(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data;
        if(temp->next!=nullptr)cout<<" -> ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    Node* head= convertArr2LL(arr);
    printLL(head);
    return 0;
}