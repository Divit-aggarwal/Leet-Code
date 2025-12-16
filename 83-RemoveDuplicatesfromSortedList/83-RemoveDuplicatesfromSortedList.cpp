// Last updated: 16/12/2025, 22:57:18
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* deleteDuplicates(ListNode* head) {
14          if (head == nullptr || head -> next ==nullptr) {
15            return head;
16        } else {
17            ListNode* temp1 = head;
18            ListNode* temp2 = temp1 ->next ;
19            while (temp1 != nullptr && temp2 !=nullptr) {
20                if (temp1->val == temp2->val){
21                    temp2 = temp2 ->next;
22                    temp1 ->next = temp2;
23                }
24                else{
25                    temp1 = temp1 ->next;
26                    temp2 = temp2 ->next;
27                }
28            }
29            return head;
30        }
31    }
32};