// Last updated: 18/10/2025, 00:45:01
class Solution {
public:
    int bitwiseComplement(int n) {
        int bin = 0 ;
        int y = ~n;
        int mask_max  = 0 ;
        int mask_min  = 0 ;
        int count = 0 ;
        int x = n ;
        while ( x != 0 ){
            x = x >> 1 ;
            count ++; 
        }
        mask_max = (1 << count) - 1 ;
        mask_min = -(1 << count)  ;
        if ( n > 0 )
        return y&mask_max;
        else if( n == 0 )
            return 1 ;
        else 
            return y&mask_min;
        }
};