// Last updated: 11/12/2025, 18:29:14
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
13   void solve(ListNode* &next , ListNode* &prev , ListNode* &curr){
14    if(curr == NULL){
15        return;
16    }
17    else{
18            next = curr -> next ;
19            curr -> next = prev ;
20            prev = curr;
21            curr = next;
22            solve(next , prev , curr);
23    }
24   }
25public:
26    ListNode* reverseList(ListNode* head) {
27        ListNode *prev = NULL;
28        ListNode *curr = head;
29        ListNode *next = NULL;
30         if (head == NULL){
31            return head;
32         }
33            solve(next , prev , curr);
34            return prev;
35    }
36};