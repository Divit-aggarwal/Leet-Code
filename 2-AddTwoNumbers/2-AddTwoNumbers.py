# Last updated: 02/09/2025, 13:02:44
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        l3= ListNode()
        curr= l3
        remain = 0
        while l1 or l2 or remain:
            val0 = l1.val if l1 else 0 
            val1 = l2.val if l2 else 0 
            total= val0 + val1 + remain
            remain = total//10
            digit = total%10 
            curr.next= ListNode(digit)
            curr=curr.next
            if l1 : l1=l1.next
            if l2 : l2=l2.next
        return l3.next