// Last updated: 16/12/2025, 21:58:15
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
12private:
13    ListNode* find(ListNode* head) {
14        if (head == NULL || head->next == NULL) {
15            return head;
16        }
17        // ListNode* temp = head;
18        ListNode* slow = head;
19        ListNode* fast = head->next;
20        while (fast != nullptr && fast->next != nullptr) {
21            slow = slow->next;
22            fast = fast->next->next;
23        }
24        return slow;
25    }
26
27    ListNode* merge(ListNode* right, ListNode* left) {
28        if (left == nullptr) {
29            return right;
30        }
31        if (right == nullptr) {
32            return left;
33        }
34        ListNode* h1 = new ListNode(0);
35        ListNode* temp = h1;
36        while (left != nullptr && right != nullptr) {
37            if (left->val <= right->val) {
38                temp->next = left;
39                left = left->next;
40                temp = temp->next;
41            }
42            else if (left->val > right->val) {
43                temp->next = right;
44                right = right->next;
45                temp = temp->next;
46            }
47        }
48
49        while (right != nullptr) {
50            temp->next = right;
51            temp = temp->next;
52            right = right->next;
53        }
54        while (left != nullptr) {
55            temp->next = left;
56            temp = temp->next;
57            left = left->next;
58        }
59        return h1->next;
60    }
61
62public:
63    ListNode* sortList(ListNode* head) {
64        if (head == nullptr || head->next == nullptr) {
65            return head;
66        } else {
67            ListNode* left = head;
68            ListNode* mid = find(head);
69            ListNode* right = mid->next;
70            mid->next = nullptr;
71            left = sortList(left);
72            right = sortList(right);
73            ListNode* r = merge(right, left);
74            return r;
75        }
76    }
77};