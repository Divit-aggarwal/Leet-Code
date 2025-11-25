// Last updated: 25/11/2025, 11:08:28
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        vector<int> last(nums.end() - k, nums.end());
        nums.erase(nums.end() - k, nums.end());
        nums.insert(nums.begin(), last.begin(), last.end());
    }
};
