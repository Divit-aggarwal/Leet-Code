// Last updated: 13/11/2025, 01:30:53
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        nums.insert(nums.end(), nums.begin(),nums.end());
        return nums;
    }
};