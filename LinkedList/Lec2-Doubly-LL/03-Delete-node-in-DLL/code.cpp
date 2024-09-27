/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        // Your code here
        if(head==NULL) return NULL;
        if(x==1){
            Node* temp=head;
            head=head->next;
            head->prev=NULL;
            delete temp;
            return head;
        }
        Node* temp=head;
        int postn=1;
        while(temp!=NULL && postn<x){
            if(postn==x) break;
            temp=temp->next;
            postn++;
        }
        if(temp==NULL) return head;
        Node* back=temp->prev;
        Node* front=temp->next;
        if(front==NULL){
            back->next=NULL;
            delete temp;
            delete front;
            return head;
        }
        else{
            back->next=front;
            front->prev=back;
            delete temp;
            return head;
        }
    }
};
