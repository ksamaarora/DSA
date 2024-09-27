#include<iostream>
#include<vector>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* back;
    Node(int val, Node* next1 = nullptr, Node* back1 = nullptr){
        data = val;
        next = next1;
        back = back1;
    }
};

Node* convertarr2DLL(vector<int> &arr){
    if(arr.empty()) return nullptr;
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1; i < arr.size(); i++){
        Node* current = new Node(arr[i]);
        prev->next = current;
        current->back = prev;
        prev = current;
    }
    return head;
}

void printDLL(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data;
        if(temp->next != NULL) cout << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

Node* deleteHead(Node* head){
    if(head == NULL) return NULL;

    if(head->next == NULL){ // Only one node
        delete head;
        return NULL;
    }

    Node* temp=head;
    head=head->next;
    head->back=NULL;
    temp->next=NULL;
    delete temp;
    return head;
}

Node* deleteTail(Node* head){
    if(head == NULL) return NULL;

    if(head->next == NULL){ // Only one node
        delete head;
        return NULL;
    }

    Node* tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }

    Node* newTail=tail->back;
    tail->back=NULL;
    newTail->next=NULL;
    delete tail;
    return head;
}

Node* delete_kth_element(Node* head, int k){
    if(k == 1){
        return deleteHead(head); // Special case for head
    }

    int cnt = 1;
    Node* temp = head;
    while(temp != NULL && cnt < k){
        temp = temp->next;
        cnt++;
    }

    if(temp == NULL) return head; // Kth element not found

    Node* prev = temp->back;
    Node* front = temp->next;

    if(prev == NULL && front == NULL){ // Only one node
        delete temp;
        return NULL;
    } 
    else if(prev == NULL && front != NULL){ // Deleting head
        return deleteHead(head);
    } 
    else if(prev != NULL && front == NULL){ // Deleting tail
        return deleteTail(head);
    } 
    else { // Deleting middle node
        prev->next=front;
        front->back=prev;
        temp->next=NULL;
        temp->back=NULL;
        delete temp;    
    }
    return head;
}

Node* deleteNode(Node* head, int val){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==val) break;
        temp=temp->next;
    }
    if(temp==NULL) return head;
    Node* prev=temp->back;
    Node* front=temp->next;
    if(prev==NULL && front==NULL){
        delete temp;
        return NULL;
    }
    else if(prev==NULL && front!=NULL){
        return deleteHead(head);
    }
    else if(prev!=NULL && front==NULL){
        return deleteTail(head);
    }
    else{
        prev->next=front;
        front->back=prev;
        temp->next=NULL;
        temp->back=NULL;
        delete temp;
        return head;
    }
}

Node* insertBeforeHead(Node* head, int val){
    Node* temp=head;
    if(temp==NULL) return NULL;
    Node* newNode= new Node(val, head, NULL);
    temp->back=newNode;
    head=newNode;
    return head;
}

Node* insertBeforeTail(Node* head, int val){
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* prev=temp->back;
    Node* newNode= new Node(val, temp, prev);
    prev->next=newNode;
    temp->back=newNode;
    return head;
}

Node* insertAfterTail(Node* head, int val){
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newTail=new Node(val, NULL, temp);
    temp->next=newTail;
    return head;
} // can do after function for other cases as well (for practise)

Node* insert_before_KthElement(Node* head, int k, int val){
    if(k==1){
        return insertBeforeHead(head, val);
    }
    Node* temp=head;
    int cnt=1;
    while(temp!=NULL){
        if(cnt==k) break;
        temp=temp->next;
        cnt++;
    }
    if(temp==NULL) return head; // if k>array size return same arr
    Node* prev=temp->back;
    Node* newNode=new Node(val, temp, prev);
    prev->next=newNode;
    temp->back=newNode;
    return head;
}

void insertBeforeNode(Node* node, int val){
    Node* prev=node->back;
    Node* newNode= new Node(val, node, prev);
    prev->next=newNode;
    node->back=newNode;
}

int main(){
    // vector<int> arr = {8, 3, 10, 5, 31, 40, 15};
    vector<int> arr;
    arr.push_back(8);
    arr.push_back(3);
    arr.push_back(10);
    arr.push_back(5);
    arr.push_back(31);
    arr.push_back(40);
    arr.push_back(15);
    Node* head = convertarr2DLL(arr);

    printDLL(head);

    head = deleteHead(head);
    printDLL(head);

    head = deleteTail(head);
    printDLL(head);

    head = delete_kth_element(head, 1);
    printDLL(head);

    head=deleteNode(head, 10);
    printDLL(head);

    head=insertBeforeHead(head, 12);
    printDLL(head);

    head=insertBeforeTail(head, 33);
    printDLL(head);

    head=insertAfterTail(head, 9);
    printDLL(head);

    head=insert_before_KthElement(head,4, 71);
    printDLL(head);

    insertBeforeNode(head->next->next, 100);
    printDLL(head);

    return 0;
}