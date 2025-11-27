// Last updated: 27/11/2025, 17:38:28
1class Solution {
2public:
3    int mySqrt(int x) {
4        unsigned long long high = x;
5        unsigned long long low = 0; 
6        unsigned long long mid ;
7        unsigned long long y = 0 ;
8        unsigned long long an=0;
9        while ( high >= low){
10            mid = (high + low)/2;
11             y = mid*mid;
12            if ( y == x ){
13                return mid;
14            }
15            if (y < x){
16                 an = mid ;
17                low = mid + 1;
18            }
19            else{
20                high = mid - 1;
21            }
22
23        }
24        return an;
25    } 
26};