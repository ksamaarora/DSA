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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // Method 1: Hashing
        map<ListNode*,int> mpp;
        ListNode* temp1=headA;
        while(temp1!=NULL){
            mpp[temp1]=1;
            temp1=temp1->next;
        }
        ListNode* temp2=headB;
        while(temp2!=NULL){
            if(mpp.find(temp2)!=mpp.end()){ //  iterator returned by find() is not equal to mpp.end(), meaning temp2 was found in the map
                return temp2;
            }
            else {
                temp2=temp2->next;
            }
        }
        return NULL;
        
        // Method 3: Optimised solution
        if(headA==NULL || headB==NULL) return NULL;
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        while(temp1!=temp2){
            temp1=temp1->next;
            temp2=temp2->next;
            if(temp1==temp2) return temp1;
            if(temp1==NULL) temp1=headB;
            if(temp2==NULL) temp2=headA;
        }
        return temp1;
    }
};