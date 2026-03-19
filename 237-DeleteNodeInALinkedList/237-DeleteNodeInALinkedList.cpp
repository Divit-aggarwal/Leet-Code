// Last updated: 19/03/2026, 20:24:37
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
        ListNode* temp = node;
        ListNode* temp2 = node;
        while(temp -> next!=nullptr){
            if( temp ->next->next ==nullptr){
                temp2=temp;
            }
            temp -> val = temp -> next -> val;
            temp = temp -> next;
        }
         temp2->next =nullptr;
    }
};