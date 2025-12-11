// Last updated: 11/12/2025, 18:34:42
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int sRow=0;
        int sCol = 0;
        int eRow = matrix.size() -1 ;
        int eCol = matrix[0].size()-1;
        if(target > matrix[eRow][eCol] || target < matrix[sRow][sCol]){
            return false;
        }
        int mid = matrix[sRow][eCol];
        while ( sRow <= eRow && sCol <= eCol){
            mid = matrix[sRow][eCol];
            if (target == mid){
                return true;
            }
            if(target > mid){
                sRow++;
            }
            else{
                eCol--;
            }
        }
        return false;
    }
};