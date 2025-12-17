// Last updated: 17/12/2025, 23:20:45
1class Solution {
2public:
3    ListNode* deleteDuplicates(ListNode* head) {
4        ListNode dummy(0);
5        dummy.next = head;
6
7        ListNode* prev = &dummy;
8        ListNode* curr = head;
9
10        while (curr != nullptr) {
11            
12            if (curr->next != nullptr && curr->val == curr->next->val) {
13                int dupVal = curr->val;
14
15            
16                while (curr != nullptr && curr->val == dupVal) {
17                    curr = curr->next;
18                }
19
20                prev->next = curr;  
21            } 
22            else {
23                prev = curr;  
24                curr = curr->next;
25            }
26        }
27        return dummy.next;
28    }
29};
30