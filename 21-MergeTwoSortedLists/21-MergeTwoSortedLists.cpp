// Last updated: 12/12/2025, 15:30:43
1class Solution {
2public:
3    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
4        // Dummy node to simplify edge cases
5        ListNode dummy(-1);
6        ListNode* tail = &dummy;
7
8        // Merge while both lists have nodes
9        while (list1 && list2) {
10            if (list1->val <= list2->val) {
11                tail->next = list1;   // attach smaller node
12                list1 = list1->next; // advance that list
13            } else {
14                tail->next = list2;
15                list2 = list2->next;
16            }
17            tail = tail->next; // move tail forward
18        }
19
20        // Attach remaining nodes (only one list can be non-empty)
21        tail->next = list1 ? list1 : list2;
22
23        return dummy.next;
24    }
25};
26