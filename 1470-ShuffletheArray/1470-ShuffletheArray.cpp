// Last updated: 18/03/2026, 11:05:27
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int Hmax = 0;
5        int Lmax = 0;
6        for (int i = 0; i < nums.size(); i++) {
7            if (nums[i] == 1) {
8                Lmax++;
9            }
10
11            if (nums[i] == 0) {
12                if (Lmax > Hmax) {
13                    Hmax = Lmax;
14                }
15                Lmax = 0;
16            }
17            if (Lmax > Hmax) {
18                Hmax = Lmax;
19            }
20        }
21        return Hmax;
22    }
23};