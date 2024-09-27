/*
class DLLNode {
  public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/
class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        // Your code here

        // Method1: Swapping nodes TC:O(2N) SC:O(N)
        stack<int> st;
        DLLNode* temp=head;
        while(temp!=NULL){
            st.push(temp->data);
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            temp->data=st.top();
            st.pop();
            temp=temp->next;
        }
        return head;

        // Method 2: TC:O(N) SC:1
        if(head==NULL || head->next==NULL) return head;
        DLLNode* last=NULL;
        DLLNode* current=head;
        while(current!=NULL){
            // swapping
            last=current->prev;
            current->prev=current->next;
            current->next=last;
            
            // iterating ahead
            current=current->prev;
        }
        head=last->prev;
        return head;
    }
};
