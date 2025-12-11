# Last updated: 11/12/2025, 18:34:30
class Solution(object):
    def sortByReflection(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        return sorted(nums, key=lambda x: (
            int(bin(x)[2:][::-1], 2),
            x
        ))

        