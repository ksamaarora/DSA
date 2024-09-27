/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

// Function to insert a new node at given position in doubly linked list.
class Solution {
  public:
    // Function to insert a new node at given position in doubly linked list.
    Node* addNode(Node* head, int p, int x) {
        // code here
        int cnt=0;
        Node* temp=head;
        while(temp!=NULL){
            if(cnt==p) break;
            cnt++;
            temp=temp->next;
        }
        if(temp==NULL) return head;
        Node* front=temp->next;
        Node* newNode= new Node(x);
        newNode->next=front;
        newNode->prev=temp;
        temp->next=newNode;
        if(front!=NULL) front->prev=newNode;
        return head;
    }
};
