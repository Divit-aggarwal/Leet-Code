// Last updated: 27/11/2025, 16:56:42
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        nums.insert(nums.end(), nums.begin(),nums.end());
        return nums;
    }
};