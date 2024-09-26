// #include<iostream>
// #include<vector>
// using namespace std;
// struct Node{
//     int data;
//     Node* next;
//     Node* back;
//     Node(int val, Node* next1=nullptr, Node* back1=nullptr){
//         data=val;
//         next=next1;
//         back=back1;
//     }
// };
// Node* convertarr2DLL(vector<int> &arr){
//     if(arr.empty()) return nullptr;
//     Node* head=new Node(arr[0]);
//     Node* prev=head;
//     for(int i=1; i<arr.size(); i++){
//         Node* current=new Node(arr[i]);
//         prev->next=current;
//         current->back=prev;
//         prev=current;
//     }
//     return head;
// }
// void printDLL(Node* head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data;
//         if(temp->next!=NULL) cout<<" -> ";
//         temp=temp->next;
//     }
// }
// Node* deleteHead(Node* head){
//     if(head==NULL || head->next==NULL){
//         return NULL;
//     }
//     Node* temp=head;
//     head=head->next;
//     head->back=NULL;
//     temp->next=NULL;
//     delete temp;
//     return head;
// }
// Node* deleteTail(Node* head){
//     if(head==NULL || head->next==NULL){
//         delete head;
//         return NULL;
//     }
//     // Node* temp=head;
//     // while(temp->next->next!=NULL){
//     //     temp=temp->next;
//     // }
//     // Node* del=temp->next;
//     // del->back=NULL;
//     // delete(del);
//     // temp->next=NULL;
//     // return head;
//     Node* tail=head;
//     while(tail->next!=NULL){
//         tail=tail->next;
//     }
//     Node* newTail=tail->back;
//     tail->back=NULL;
//     newTail->next=NULL;
//     delete tail;
//     return head;
// }
// Node* delete_kth_element(Node* head, int k){
//     if(k==1){
//         Node* temp=head;
//         head=head->next;
//         head->back=NULL;
//         delete temp;
//         return head;
//     }
//     int cnt=1;
//     Node* temp=head;
//     while(temp!=NULL){
//         if(cnt==k) break;
//         temp=temp->next;
//     }
//     Node* prev=temp->back;
//     Node* front=temp->next;
//     if(prev==NULL && front==NULL){ // only one node
//         delete temp;
//         return NULL;
//     }
//     else if(prev==NULL && front!=NULL){ // at first node
//         return deleteHead(head); // call head function
//     }
//     else if(prev!=NULL && front==NULL){ // at last node
//         return deleteTail(head); // call delete tail function
//     }
//     else{
//         prev->next=front;
//         front->back=prev;
//         temp->next=NULL;
//         temp->back=NULL;
//         delete temp;
//     }
//     return head;
// }
// int main(){
//     vector<int> arr;
//     arr.push_back(8);
//     arr.push_back(3);
//     arr.push_back(10);
//     arr.push_back(5);
//     arr.push_back(31);
//     arr.push_back(40);
//     arr.push_back(15);
//     Node* head=convertarr2DLL(arr);
//     printDLL(head);
//     cout<<endl;
//     head=deleteHead(head);
//     printDLL(head);
//     cout<<endl;
//     head=deleteTail(head);
//     printDLL(head);
//     cout<<endl;
//     cout<<endl;
//     head=delete_kth_element(head,3);
//     printDLL(head);
//     cout<<endl;
//     return 0;
// }

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
    } else if(prev == NULL && front != NULL){ // Deleting head
        return deleteHead(head);
    } else if(prev != NULL && front == NULL){ // Deleting tail
        return deleteTail(head);
    } else { // Deleting middle node
        prev->next=front;
        front->back=prev;
        temp->next=NULL;
        temp->back=NULL;
        delete temp;    
    }

    return head;
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

    head = delete_kth_element(head, 3);
    printDLL(head);

    return 0;
}