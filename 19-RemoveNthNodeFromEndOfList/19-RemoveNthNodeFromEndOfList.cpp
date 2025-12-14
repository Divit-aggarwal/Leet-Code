// Last updated: 14/12/2025, 21:56:10
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if(head->next == NULL){
            return NULL;
        }

        int c = 0;
        ListNode* temp = head;
        while(temp != NULL){
            c++;
            temp = temp->next;
        }

        int del = c - n;

        if(del == 0){
            return head->next;
        }

        temp = head;
        for(int i = 0; i < del - 1; i++){
            temp = temp->next;
        }

        temp->next = temp->next->next;

        return head;
    }
};
