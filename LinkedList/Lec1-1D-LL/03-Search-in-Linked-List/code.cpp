/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, struct Node* head, int key) {
        Node* temp=head;
        while(temp!=NULL){
            if(temp->data==key) return 1;
            temp=temp->next;
        }
        return 0;
    }
};
