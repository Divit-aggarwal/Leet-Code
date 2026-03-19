// Last updated: 19/03/2026, 20:24:30
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int Hmax = 0;
        int Lmax = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                Lmax++;
            }

            if (nums[i] == 0) {
                if (Lmax > Hmax) {
                    Hmax = Lmax;
                }
                Lmax = 0;
            }
            if (Lmax > Hmax) {
                Hmax = Lmax;
            }
        }
        return Hmax;
    }
};