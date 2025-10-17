// Last updated: 18/10/2025, 00:57:34
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if  (n <=0 ){
            return false;
        }
        else{
        while(n>1){
            if ( n % 2 == 0){
                n=n/2.0;
            }
            else{
                return false;

            }
}
return true;
    }
    }
};