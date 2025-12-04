// Last updated: 04/12/2025, 14:05:43
1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int target) {
4        int sRow=0;
5        int sCol = 0;
6        int eRow = matrix.size() -1 ;
7        int eCol = matrix[0].size()-1;
8        if(target > matrix[eRow][eCol] || target < matrix[sRow][sCol]){
9            return false;
10        }
11        int mid = matrix[sRow][eCol];
12        while ( sRow <= eRow && sCol <= eCol){
13            mid = matrix[sRow][eCol];
14            if (target == mid){
15                return true;
16            }
17            if(target > mid){
18                sRow++;
19            }
20            else{
21                eCol--;
22            }
23        }
24        return false;
25    }
26};