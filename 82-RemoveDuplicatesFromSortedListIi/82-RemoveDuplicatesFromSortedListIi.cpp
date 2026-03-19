// Last updated: 19/03/2026, 20:24:49
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* prev = &dummy;
        ListNode* curr = head;

        while (curr != nullptr) {
            
            if (curr->next != nullptr && curr->val == curr->next->val) {
                int dupVal = curr->val;

            
                while (curr != nullptr && curr->val == dupVal) {
                    curr = curr->next;
                }

                prev->next = curr;  
            } 
            else {
                prev = curr;  
                curr = curr->next;
            }
        }
        return dummy.next;
    }
};
