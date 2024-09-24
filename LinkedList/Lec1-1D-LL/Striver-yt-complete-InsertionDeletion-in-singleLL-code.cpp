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
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1; i<arr.size(); i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=mover->next;
    }
    return head;
}
void printLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        if(temp->next!=NULL)cout<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
// Delete Head
Node* deleteHead(Node* head){
    if(head==NULL) return head;;
    Node* temp=head;
    head=head->next;
    delete(temp);
    return head;
}
// Delete Tail
Node* removeTail(Node* head){
    if(head==NULL || head->next==NULL){
        delete head;
        return NULL;
    }
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete(temp->next);
    temp->next=NULL;
    return head; // last statement will always be this 
}
// Delete kth element
Node* removek(Node* head, int k){
    if(head==NULL) return head;
    if(k==1){
        Node* temp=head;
        head=head->next;
        delete(temp);
        return head;
    }
    int cnt=1;
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        if(cnt==k){
            prev->next=prev->next->next;
            delete(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
        cnt++;
    }
    return head;
}
// Delete element
Node* remove_element(Node* head, int k){
    if(head==NULL) return head;
    if(head->data==k){
        Node* temp=head;
        head=head->next;
        delete(temp);
        return head;
    }
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        if(temp->data==k){
            prev->next=prev->next->next;
            delete(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
// Insert Head
Node* insertHead(Node* head, int val){
    Node* temp=new Node(val, head);
    return temp;
}
// Insert at Tail
Node* insertTail(Node* head, int val){
    if(head==NULL) return new Node(val,NULL);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newNode=new Node(val,NULL);
    temp->next=newNode;
    return head;
}
// Insert at a kth element
Node* insertk(Node* head, int k, int val){
    if(head==NULL){
        if(k==1){
            Node* newNode= new Node(val,NULL);
            return newNode;
        }
        else{
            return NULL;
        }
    }
    if(k==1){
        Node* temp=new Node(val,head);
        return temp;
    }
    int cnt=1;
    Node* temp=head;

    // Using previous (my method)
    // Node* prev=NULL;
    // while(cnt!=k && temp!=NULL){
    //     prev=temp;
    //     temp=temp->next;
    //     cnt++;
    // }
    // Node* newNode=new Node(val, temp);
    // prev->next=newNode;
    // newNode->next=temp;
    // return head;

    // Strivers method
    while(temp!=NULL){
        if(cnt==k-1){
            Node* newNode= new Node(val,temp->next);
            temp->next=newNode;
        }
        temp=temp->next;
        cnt++;
    }
    return head;
}
// Insert before value
Node* insertBeforeValue(Node* head, int val, int element){
    if(head==NULL){
        return NULL;
    }
    if(head->data==element){
        return new Node(val,head);
    }
    Node* temp=head;
    while(temp!=NULL){
        if(temp->next->data==element){
            Node* newNode= new Node(val, temp->next);
            temp->next=newNode;
            return newNode;
        }
        temp=temp->next;
    }
    return head;
}
int main(){
    // vector<int> arr = {12, 5, 8, 7}; // compiler older version in my mac so this doesnt run 
    vector<int> arr;
    arr.push_back(12);
    arr.push_back(5);
    arr.push_back(8);
    arr.push_back(9);
    arr.push_back(4);
    arr.push_back(2);
    arr.push_back(1);
    Node* head=convertArr2LL(arr);
    printLL(head);
    head=deleteHead(head);
    printLL(head);
    head=removeTail(head);
    printLL(head);
    head=removek(head,3);
    printLL(head);
    head=remove_element(head,5);
    printLL(head);
    head=insertHead(head,10);
    printLL(head);
    head=insertTail(head,100);
    printLL(head);
    insertk(head,3,5);
    printLL(head);
    insertBeforeValue(head,23,10);
    printLL(head);
    return 0;
}

// 12 ->5 ->8 ->9 ->4 ->2 ->1 
// 5 ->8 ->9 ->4 ->2 ->1 
// 5 ->8 ->9 ->4 ->2 
// 5 ->8 ->4 ->2 
// 8 ->4 ->2 
// 10 ->8 ->4 ->2 
// 10 ->8 ->4 ->2 ->100 
// 10 ->8 ->5 ->4 ->2 ->100 
// 10 ->8 ->5 ->4 ->2 ->100 
