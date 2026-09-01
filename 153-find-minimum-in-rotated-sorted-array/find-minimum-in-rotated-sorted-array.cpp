class Solution {
public:
    int findMin(vector<int>& nums) {
       int l,r,m;
       l = 0;
       r=nums.size() -1;
        m = (r+l)/2;
       while (r >+ l){
        if ( nums[m] > nums[r]){
            l = m + 1;
            m = (l + r )/2;
        }
        if ( nums[m] < nums[r]){
            r = m;
            m = (l+r)/2;
        }
       }
       return nums[l]; 
    }
};