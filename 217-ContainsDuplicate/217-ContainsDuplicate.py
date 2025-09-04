# Last updated: 05/09/2025, 00:20:26
class Solution(object):
    def containsDuplicate(self, nums):
        n= nums.sort()
        for i in range(len(nums)-1):
            if nums [i]==nums[i+1]:
                return True
        return False