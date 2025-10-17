// Last updated: 18/10/2025, 00:13:37
#include <iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
            int rem = 0 ;
            long int rev = 0 ;
            while ( x !=0 ){
                rem = x%10;
                rev = rev*10 + rem ;
                x=x/10;
            }
            if ((rev > INT_MAX) || (rev < INT_MIN)){
                            return 0;
            }
            else{
                return rev;
            }
       
        }
        
    
};
