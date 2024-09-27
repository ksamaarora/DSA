/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        // Method 1: Brute Force: using stack DS TC:O(2N) SC:O(N)
        if(head==NULL || head->next==NULL) return head;
        stack<int> st;
        ListNode* temp=head;
        while(temp!=NULL){
            st.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            temp->val=st.top();
            st.pop();
            temp=temp->next;
        }
        return head;
        
        // Method 2: Iterative approach: using swapping TC:O(N) SC:O(1)
        ListNode* prev=NULL;
        ListNode* temp=head;
        while(temp!=NULL){
            ListNode* front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        return prev;
        
        // Method 3: Recursive method TC:O(N) SC:O(N) as its a recursive stack space
        if(head==NULL || head->next==NULL) return head;
        
        ListNode* newHead=reverseList(head->next);
        ListNode* front=head->next;
        front->next=head;
        head->next=NULL;
        return newHead;
    }
};