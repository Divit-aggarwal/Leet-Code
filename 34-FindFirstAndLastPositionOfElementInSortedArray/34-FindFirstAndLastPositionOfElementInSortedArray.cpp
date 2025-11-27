// Last updated: 27/11/2025, 16:56:55
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> pos ;
        int l = nums.size();
        if ( l == 0 ){
            return { -1 , -1 };
        }
        if(l == 1) {
            if(nums[0]==target) {
                return { 0 , 0 };
            }
            else{
                return { -1 , - 1};
            }
        }
        else{
            vector<int> pos ;
            int high = l - 1 , low = 0 ;
            int mid = (high + low) / 2;
            while ( high >= low){
                mid = (high + low )/2;
                if (nums[mid]==target){
                    int right = mid ;
                    int left = mid ;
                    while(left-1 >= 0 &&nums[left-1]==target){
                        left--;
                    }
                    while(right + 1 <= nums.size()-1 && nums[right+1]==target){
                        right++;
                    }
                pos.push_back(left);
                pos.push_back(right);
                return pos;
                }
                else if ( nums[mid]>target)
                high = mid - 1;
                else
                low = mid + 1 ;
            }
        }
        if (pos.size()<1){
        return {-1,-1} ;
        }
        return pos ;
        }
    };
// };