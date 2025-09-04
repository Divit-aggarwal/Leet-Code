# Last updated: 05/09/2025, 00:21:34
class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        nums_aux = set(nums)
        if len(nums_aux)<len(nums):
            return True
        else:
            return False
        