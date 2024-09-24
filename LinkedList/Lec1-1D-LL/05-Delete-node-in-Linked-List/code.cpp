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
    void deleteNode(ListNode* node) {
        // Since it's guaranteed that node is not the last node, we can safely access node->next
        node->val = node->next->val;         // Copy the value of the next node into the current node
        node->next = node->next->next;       // Bypass the next node to "delete" it
    }
};
