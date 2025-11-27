// Last updated: 27/11/2025, 16:56:46
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int e = 0 ;
        if(arr.size()<4){
            return arr[1];
        }
        else{
            int low = 0 ;
            int high = arr.size() - 1 ;
            int mid = (high + low )/2;
            while(low<high){
                mid = (high + low )/2;
                if ( arr[mid] < arr[mid + 1]){
                    low = mid + 1 ;
                }
                else if (arr[mid] > arr[mid + 1]){
                    high = mid  ;
                }
            }
            return low;

        }
       return e ; 
    }
};