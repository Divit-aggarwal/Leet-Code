class Solution {
public:
    int countPartitions(vector<int>& nums, int maxSum) {
        // counting the number of partitions
        int partitions = 1;
        int sum = 0;

        for(int val : nums) {
            if(sum + val <= maxSum) {
                sum += val;
            }
            else {
                sum = val;
                partitions += 1;
            }
        }
        return partitions;
    }
    int splitArray(vector<int>& nums, int k) {
        int l = *max_element(nums.begin(), nums.end());
        int h = accumulate(nums.begin(), nums.end(), 0);

        while(l <= h) {
            int mid = (l + h) / 2;
            int partitions = countPartitions(nums, mid);

            if(partitions > k) l = mid + 1;
            else             h = mid - 1;

        }
        return l;
    }
};