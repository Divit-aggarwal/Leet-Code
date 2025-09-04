# Last updated: 04/09/2025, 15:58:04
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def hasCycle(self, head):
        temp = head
        temp1 = head
        while temp1 and temp1.next:
            temp= temp.next
            temp1= temp1.next.next    
            if temp == temp1 :
                return True
