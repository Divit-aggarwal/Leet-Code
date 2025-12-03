// Last updated: 03/12/2025, 21:20:42
1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int target) {
4        int n = matrix.size();
5        int m = matrix[0].size();
6
7        int low = 0, high = n - 1;
8        int row = -1;
9
10        while (low <= high) {
11            int mid = (low + high) / 2;
12
13            if (target >= matrix[mid][0] && target <= matrix[mid][m - 1]) {
14                row = mid;
15                break;
16            } 
17            else if (target < matrix[mid][0])
18                high = mid - 1;
19            else
20                low = mid + 1;
21        }
22
23        if (row == -1) return false;
24
25        low = 0, high = m - 1;
26
27        while (low <= high) {
28            int mid = (low + high) / 2;
29
30            if (matrix[row][mid] == target) return true;
31
32            if (matrix[row][mid] < target)
33                low = mid + 1;
34            else
35                high = mid - 1;
36        }
37
38        return false;
39    }
40};
41