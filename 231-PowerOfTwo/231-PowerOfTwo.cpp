// Last updated: 27/11/2025, 16:56:50
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