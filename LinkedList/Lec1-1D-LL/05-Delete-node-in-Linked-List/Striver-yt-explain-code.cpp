#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int data1, Node* next1 = nullptr) {
        data = data1;
        next = next1;
    }
};

Node* convertarr2LL(vector<int> &arr) {
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++) { 
        Node* temp = new Node(arr[i]);
        mover->next = temp;  
        mover = mover->next;
    }
    return head;
}

void printLL(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data;
        if (temp->next != nullptr) cout << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

Node* removeHead(Node* head) {
    if (head == nullptr) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* removetail(Node* head){
    if(head==nullptr || head->next=nullptr) return nullptr;
    Node* temp=head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    Node* del=temp->next;
    temp->next=nullptr;
    delete(del);
    return head;
}

int main() {
    // vector<int> arr = {12, 5, 8, 7}; // compiler older version in my mac so this doesnt run 
    vector<int> arr;
    arr.push_back(12);
    arr.push_back(5);
    arr.push_back(8);
    arr.push_back(7);
    Node* head = convertarr2LL(arr);
    head=removeHead(head);
    removetail(head);
    printLL(head);
    return 0;
}
