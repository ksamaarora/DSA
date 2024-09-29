/*
  Node is defined as:
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

    // Method 1: Extreme Brute force TC:O(N + N logN + N)  SC:O(N)
    Node* segregate(Node* head) {
        Node* temp=head;
        if(temp==NULL || temp->next==NULL) return head;
        vector<int> arr;
        while(temp!=NULL){
            arr.push_back(temp->data);
            temp=temp->next;
        }
        sort(arr.begin(), arr.end());
        temp=head;
        int i=0;
        while(temp!=NULL){
            temp->data=arr[i];
            i++;
            temp=temp->next;
        }
        return head;

    // Method 2: Better TC: O(2N) SC:O(1)
    Node* segregate(Node* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        int cnt0 = 0, cnt1 = 0, cnt2 = 0;
        
        Node* temp = head;
        while (temp != NULL) {
            if (temp->data == 0) {
                cnt0++;
            } else if (temp->data == 1) {
                cnt1++;
            } else {
                cnt2++;
            }
            temp = temp->next;
        }
        
        temp = head;
        while (temp != NULL) {
            if (cnt0 > 0) {
                temp->data = 0;
                cnt0--;
            } else if (cnt1 > 0) {
                temp->data = 1;
                cnt1--;
            } else {
                temp->data = 2;
                cnt2--;
            }
            temp = temp->next;
        }
        return head;
    }
};


// Method 3: Optimised code IMPORTANT
*/
class Solution {
  public:
    // Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node* head) {
        if(head==NULL || head->next==NULL) return head;
        Node* temp=head;
        Node* zerohead=new Node(-1);
        Node* onehead=new Node(-1);
        Node* twohead=new Node(-1);
        Node* zero=zerohead;
        Node* one=onehead;
        Node* two=twohead;
        while(temp!=NULL){
            if(temp->data==0){
                zero->next=temp;
                zero=zero->next;
            }
            else if(temp->data==1){
                one->next=temp;
                one=one->next;
            }
            else{
                two->next=temp;
                two=two->next;
            }
            temp=temp->next;
        }
        zero->next=(onehead->next) ? (onehead->next) : (twohead->next);
        one->next=twohead->next;
        two->next=NULL;
        Node* newhead=(zerohead->next) ? zerohead->next : (onehead->next ? onehead->next : twohead->next);
        delete onehead;
        delete zerohead;
        delete twohead;
        return newhead;
    }
};

