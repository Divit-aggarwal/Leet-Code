// Last updated: 03/12/2025, 20:43:15
1class Solution {
2public:
3    void rotate(vector<vector<int>>& matrix) {
4        int sRow = 0 ;
5        int eRow = matrix[0].size() - 1 ;
6        int sCol = 0 ;
7        int eCol = eRow ;
8        for (int i = 0 ; i < matrix.size() ; i++){
9            for (int j = i+1 ; j < matrix.size() ; j++){
10                swap(matrix[i][j],matrix[j][i]);
11            }
12        }
13        while(eCol> sCol && sCol < matrix.size() ){
14            for(int i = 0 ; i <= eRow ; i++){
15                swap(matrix[i][sCol] , matrix[i][eCol]);
16            }
17            sCol++;
18            eCol--;
19        }
20    }
21};