# Last updated: 02/09/2025, 13:04:31
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        carry = 0
        dummy = ListNode(0)
        curr = dummy
        
        while l1 or l2 or carry:
            v1 = l1.val if l1 else 0
            v2 = l2.val if l2 else 0
            
            total = v1 + v2 + carry
            carry = total // 10
            curr.next = ListNode(total % 10)
            
            curr = curr.next
            if l1: l1 = l1.next
            if l2: l2 = l2.next
        
        return dummy.next
