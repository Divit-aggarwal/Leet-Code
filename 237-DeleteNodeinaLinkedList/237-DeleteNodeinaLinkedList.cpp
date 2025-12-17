// Last updated: 17/12/2025, 23:16:16
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    void deleteNode(ListNode* node) {
12        ListNode* temp = node;
13        ListNode* temp2 = node;
14        while(temp -> next!=nullptr){
15            if( temp ->next->next ==nullptr){
16                temp2=temp;
17            }
18            temp -> val = temp -> next -> val;
19            temp = temp -> next;
20        }
21         temp2->next =nullptr;
22    }
23};