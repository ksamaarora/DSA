/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while (fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                slow=head; // put slow to head and fast already at collision point
                while(slow!=fast){ // move slow and fast by one step till both collide again
                    slow=slow->next;
                    fast=fast->next;
                }
                return slow; // return starting point
            }
        }
        return NULL; // no loop
    }
};