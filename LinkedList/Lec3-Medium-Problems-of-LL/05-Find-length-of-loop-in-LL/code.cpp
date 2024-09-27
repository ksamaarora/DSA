/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                slow=head;
                while(slow!=fast){
                    slow=slow->next;
                    fast=fast->next;
                } // starting point of loop found
                
                // length function part
                slow=slow->next;
                int cnt=1;
                while(slow!=fast){ // till slow reaches the starting point i.e. fast again
                    slow=slow->next;
                    cnt++;
                }
                return cnt;
            }
        }
        return NULL;
    }
};
