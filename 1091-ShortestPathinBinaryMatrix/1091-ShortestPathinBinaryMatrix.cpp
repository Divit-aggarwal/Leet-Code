// Last updated: 26/02/2026, 15:18:34
1class Solution {
2public:
3   int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
4    int n = grid.size();
5
6    if (grid[0][0] == 1 || grid[n - 1][n - 1] == 1)
7        return -1;
8    queue<pair<int, pair<int, int>>> q;
9    vector<vector<int>> vis(n, vector<int>(n, 0));
10
11    vis[0][0] = 1;
12    q.push({1, {0, 0}});
13
14    int delrow[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
15    int delcol[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
16
17    while (!q.empty()) {
18        auto it = q.front();
19        q.pop();
20
21        int dis = it.first;
22        int row = it.second.first;
23        int col = it.second.second;
24
25        if (row == n - 1 && col == n - 1)
26            return dis;
27
28        for (int i = 0; i < 8; i++) {
29            int newr = row + delrow[i];
30            int newc = col + delcol[i];
31
32            if (newr >= 0 && newc >= 0 && newr < n && newc < n &&
33                grid[newr][newc] == 0 && vis[newr][newc] == 0) {
34
35                vis[newr][newc] = 1;
36                q.push({dis + 1, {newr, newc}});
37            }
38        }
39    }
40    return -1;
41}
42}
43;