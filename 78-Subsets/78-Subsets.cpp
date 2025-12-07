// Last updated: 07/12/2025, 22:16:07
1class Solution {
2public:
3    vector<vector<int>> subsets(vector<int>& nums) {
4        int n = nums.size(), p = 1 << n;
5        vector<vector<int>> subs(p);
6        for (int i = 0; i < p; i++) {
7            for (int j = 0; j < n; j++) {
8                if ((i >> j) & 1) {
9                    subs[i].push_back(nums[j]);
10                }
11            }
12        }
13        return subs;
14    }
15};