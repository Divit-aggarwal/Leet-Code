# Last updated: 16/04/2026, 15:31:57
1from typing import List
2
3class Solution:
4    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
5        window_set = set()
6        
7        for i in range(len(nums)):
8            
9            if i > k:
10                window_set.remove(nums[i - k - 1])
11            
12          
13            if nums[i] in window_set:
14                return True
15            
16            window_set.add(nums[i])
17            
18        return False