// Last updated: 27/11/2025, 16:56:56
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int high = nums.size() -1 ;
        int low = 0 ;
        int mid = (high + low )/2;
        while(high>low){    
            if(nums[mid]>nums[high]){
                low = mid + 1 ;
            }
            else{
                high = mid ;
            }
            mid = (high + low )/2;
        }
       int p = low ;
        low = 0;
         high = nums.size() - 1 ;
       if ( target == nums[p]){
        return p;
       }
       else if(target >= nums[p] && target <= nums.back() ) {
        low = p ;
       }
       else{
        high = p -1 ;
       }

        while ( high >= low){
            mid = (high + low)/2;
            if(target == nums[mid]){
                return mid ;
            }
            else if (target < nums[mid]){
                high = mid -1;
            }
            else{
                low = mid + 1;
            }
        }
    
      return -1;
    }
};