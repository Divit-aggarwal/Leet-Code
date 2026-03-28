// Last updated: 28/03/2026, 15:26:19
1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        vector<vector<int>> res;
6
7        for (int i = 0; i < nums.size(); i++) {
8            if (nums[i] > 0) break;
9            if (i > 0 && nums[i] == nums[i - 1]) continue;
10
11            int l = i + 1, r = nums.size() - 1;
12            while (l < r) {
13                int sum = nums[i] + nums[l] + nums[r];
14                if (sum > 0) {
15                    r--;
16                } else if (sum < 0) {
17                    l++;
18                } else {
19                    res.push_back({nums[i], nums[l], nums[r]});
20                    l++;
21                    r--;
22                    while (l < r && nums[l] == nums[l - 1]) {
23                        l++;
24                    }
25                }
26            }
27        }
28        return res;
29    }
30};