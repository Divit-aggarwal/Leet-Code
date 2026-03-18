// Last updated: 18/03/2026, 10:53:23
1class Solution {
2public:
3    vector<int> shuffle(vector<int>& nums, int n) {
4        vector<int> x ; 
5        for ( int i = 0 ; i<n; i+=1){
6            x.push_back(nums[i]);
7            x.push_back(nums[i + n]);
8        }
9        return x;
10    }
11};