// Last updated: 27/11/2025, 16:55:29
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int high = nums.size() -1 ;
5        int low = 0 ;
6        int mid = (high + low )/2;
7        while(high>low){    
8            if(nums[mid]>nums[high]){
9                low = mid + 1 ;
10            }
11            else{
12                high = mid ;
13            }
14            mid = (high + low )/2;
15        }
16       int p = low ;
17        low = 0;
18         high = nums.size() - 1 ;
19       if ( target == nums[p]){
20        return p;
21       }
22       else if(target >= nums[p] && target <= nums.back() ) {
23        low = p ;
24       }
25       else{
26        high = p -1 ;
27       }
28
29        while ( high >= low){
30            mid = (high + low)/2;
31            if(target == nums[mid]){
32                return mid ;
33            }
34            else if (target < nums[mid]){
35                high = mid -1;
36            }
37            else{
38                low = mid + 1;
39            }
40        }
41    
42      return -1;
43    }
44};