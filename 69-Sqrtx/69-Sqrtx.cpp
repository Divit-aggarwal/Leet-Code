// Last updated: 11/12/2025, 18:34:54
class Solution {
public:
    int mySqrt(int x) {
        unsigned long long high = x;
        unsigned long long low = 0; 
        unsigned long long mid ;
        unsigned long long y = 0 ;
        unsigned long long an=0;
        while ( high >= low){
            mid = (high + low)/2;
             y = mid*mid;
            if ( y == x ){
                return mid;
            }
            if (y < x){
                 an = mid ;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }

        }
        return an;
    } 
};