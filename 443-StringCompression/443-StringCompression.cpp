// Last updated: 02/12/2025, 21:21:42
1class Solution {
2public:
3    vector<int> spiralOrder(vector<vector<int>>& matrix) {
4        vector<int> m;
5        int row = matrix.size();
6        int col = matrix[0].size();
7        int total = row * col;
8        int sRow = 0;
9        int sCol = 0;
10        int eRow = row - 1;
11        int eCol = col - 1;
12        int count = 0;
13        while (total > count) {
14            for (int i = sCol; i <=eCol && total > count ;  i++) {
15                m.push_back(matrix[sRow][i]);
16                count++;
17            }
18            sRow++;
19            for (int i = sRow; i <= eRow && total > count; i++) {
20                m.push_back(matrix[i][eCol]);
21                count++;
22            }
23            eCol--;
24            for (int i = eCol; i >= sCol && total > count; i--) {
25                m.push_back(matrix[eRow][i]);
26                count++;
27            }
28            eRow--;
29            for (int i = eRow; i >= sRow && total > count; i--) {
30                m.push_back(matrix[i][sCol]);
31                count++;
32            }
33            sCol++;
34        }
35        return m;
36    }
37    };