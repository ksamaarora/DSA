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
    bool hasCycle(ListNode *head) {
        // Method 1: Using maps
        map<ListNode*, int> mpp;
        ListNode* temp = head;
        while(temp != NULL){
            // If node is already in the map, a cycle is detected
            if(mpp.find(temp) != mpp.end()){
                return true;
            }
            // Add the node to the map
            mpp[temp] = 1;
            temp = temp->next;
        }
        
        return false;  // No cycle detected
        
        // Method 2: Tortoise Hare Method TC:O(N) SC:O(1)
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
    }
};