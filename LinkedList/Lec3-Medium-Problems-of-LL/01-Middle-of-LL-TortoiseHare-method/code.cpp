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
    ListNode* middleNode(ListNode* head) {
        
        // method 1: creating a vector and returning middle node
        vector<ListNode*> nodes;
        ListNode* temp = head;
        while(temp!=nullptr) {
            nodes.push_back(temp);
            temp=temp->next;
        }
        return nodes[nodes.size()/2]; // return middle node nodes[length/2] for both even odd case
        
        // method 2: tortoise and hair method
        ListNode* middle=head;
        ListNode* end=head;
        while(end!=NULL and end->next!=NULL){ // both end and end->next !=NULL to keep a multiple of 2 empty before reaching end of LL
            middle=middle->next;
            end=end->next->next;
        }
        return middle;
    }
};
