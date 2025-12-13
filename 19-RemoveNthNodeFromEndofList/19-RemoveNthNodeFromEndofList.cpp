// Last updated: 13/12/2025, 14:13:38
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
13    ListNode* removeNthFromEnd(ListNode* head, int n) {
14
15        if(head->next == NULL){
16            return NULL;
17        }
18
19        int c = 0;
20        ListNode* temp = head;
21        while(temp != NULL){
22            c++;
23            temp = temp->next;
24        }
25
26        int del = c - n;
27
28        if(del == 0){
29            return head->next;
30        }
31
32        temp = head;
33        for(int i = 0; i < del - 1; i++){
34            temp = temp->next;
35        }
36
37        temp->next = temp->next->next;
38
39        return head;
40    }
41};
42