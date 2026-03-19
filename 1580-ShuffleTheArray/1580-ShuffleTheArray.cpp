// Last updated: 19/03/2026, 20:24:23
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> x ; 
        for ( int i = 0 ; i<n; i+=1){
            x.push_back(nums[i]);
            x.push_back(nums[i + n]);
        }
        return x;
    }
};