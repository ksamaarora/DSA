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

// Method 1: Brute force TC:O(2N) SC:O(N)
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        vector<int> arr;
        ListNode* odd = head;

        // Traverse and collect values of odd-indexed nodes
        while (odd != NULL && odd->next!=NULL) {
            arr.push_back(odd->val);
            odd = odd->next->next; // Jump to the next odd node
        }
        if(odd){
            arr.push_back(odd->val);
        }

        // Traverse and collect values of even-indexed nodes
        ListNode* even = head->next;
        while (even != NULL && even->next!=NULL) {
            arr.push_back(even->val);
            even = even->next->next; // Jump to the next even node
        }
        if(even){
            arr.push_back(even->val);
        }

        ListNode* temp = head;
        int i = 0;
        while (temp != NULL) {
            temp->val = arr[i]; 
            i++;
            temp = temp->next; 
        }

        return head;
    }
};


// Method 2: Optimized solution TC:O(N) SC:O(1)
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;

        // Initialize odd and even pointers
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = even;  // Save the head of even list

        // Rearrange odd and even nodes
        while(even != NULL && even->next != NULL) {
            odd->next = odd->next->next;   // Link odd to the next odd node
            odd = odd->next;          // Move odd pointer forward
            even->next = odd->next;   // Link even to the next even node which is next to odd
            even = even->next;        // Move even pointer forward
        }

        // Connect the end of odd list to the head of even list
        odd->next = evenHead;

        return head;
    }
};