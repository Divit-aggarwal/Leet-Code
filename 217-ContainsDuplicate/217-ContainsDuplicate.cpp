// Last updated: 18/03/2026, 00:49:32
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_map<int, int> d;
5        for (int i: nums){
6            if (d.count(i)!=0){
7                return true;
8            }
9            else{
10                d[i]++;
11            }
12        }
13        return false;
14    }
15};