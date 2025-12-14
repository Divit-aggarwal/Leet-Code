// Last updated: 14/12/2025, 21:55:57
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
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* cycle = nullptr;
        while(  fast!=nullptr && fast -> next != nullptr && fast -> next -> next !=nullptr){
            fast = fast ->next -> next ;
            slow = slow -> next;
            if(slow == fast){
                cycle = slow;
                break;
            }
         }
         if(cycle){
            slow = head;
            ListNode* intersection = cycle;
            while( slow ->next != nullptr && intersection ->next          !=               nullptr && slow != intersection){
                slow = slow ->next;
                intersection = intersection ->next;
            }
            return slow;
         } 
         else{
            return nullptr;
         }
    }
};