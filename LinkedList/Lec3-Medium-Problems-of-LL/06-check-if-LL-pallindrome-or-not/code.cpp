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
    // Method 2: Tortoise and Hare method - IMP
    ListNode* reverseLL(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* newHead = reverseLL(head->next);
        ListNode* front = head->next;
        front->next = head;
        head->next = NULL;
        return newHead;
    }

    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL) return true;  // Handle edge cases

        ListNode* slow = head;
        ListNode* fast = head;

        // Tortoise and Hare method to find the middle of the list
        while(fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse the second half of the linked list
        ListNode* newHead = reverseLL(slow->next);

        ListNode* first = head;
        ListNode* second = newHead;

        // Compare both halves
        while(second != NULL) {
            if(first->val != second->val) {
                reverseLL(newHead);  // Restore the list before returning false
                return false;
            }
            first = first->next;
            second = second->next;
        }

        reverseLL(newHead);  // Restore the reversed second half
        return true;

        
        // Method 1: Using stack DS TC:O(2N) SC:O(N)
        // reverse function not needed in this method
        ListNode* temp=head;
        stack<int> st; // LIFO
        while(temp!=NULL){
            st.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            if(temp->val==st.top()){
                st.pop();
                temp=temp->next;
            }
            else{
                return false;
            }
        }
        return true;
    }
};