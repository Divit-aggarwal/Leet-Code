# Last updated: 28/08/2025, 12:13:59
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        d={}
        for i in range(0, len(nums)):
            if(target - nums[i] in d) and (d[target - nums[i]]!=i):
                return [i,d[target - nums[i]]]
            else:
                d[nums[i]]=i
            
