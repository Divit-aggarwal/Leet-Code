// Last updated: 14/12/2025, 21:45:46
1class Solution {
2public:
3    ListNode* rotateRight(ListNode* head, int k) {
4        if (!head || !head->next || k == 0) return head;
5
6        // 1. Find length and tail
7        int len = 1;
8        ListNode* tail = head;
9        while (tail->next) {
10            tail = tail->next;
11            len++;
12        }
13
14        // 2. Normalize k
15        k %= len;
16        if (k == 0) return head;
17
18        // 3. Make it circular
19        tail->next = head;
20
21        // 4. Find new tail (len - k - 1 steps)
22        ListNode* newTail = head;
23        for (int i = 0; i < len - k - 1; i++) {
24            newTail = newTail->next;
25        }
26
27        // 5. Break the circle
28        ListNode* newHead = newTail->next;
29        newTail->next = nullptr;
30
31        return newHead;
32    }
33};
34