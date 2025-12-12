// Last updated: 12/12/2025, 14:56:27
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
11    ListNode *detectCycle(ListNode *head) {
12        ListNode* slow = head;
13        ListNode* fast = head;
14        ListNode* cycle = nullptr;
15        while(  fast!=nullptr && fast -> next != nullptr && fast -> next -> next !=nullptr){
16            fast = fast ->next -> next ;
17            slow = slow -> next;
18            if(slow == fast){
19                cycle = slow;
20                break;
21            }
22         }
23         if(cycle){
24            slow = head;
25            ListNode* intersection = cycle;
26            while( slow ->next != nullptr && intersection ->next          !=               nullptr && slow != intersection){
27                slow = slow ->next;
28                intersection = intersection ->next;
29            }
30            return slow;
31         } 
32         else{
33            return nullptr;
34         }
35    }
36};