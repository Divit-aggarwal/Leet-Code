// Last updated: 19/03/2026, 22:22:20
1class Solution {
2public:
3    int longestConsecutive(vector<int>& nums) {
4        unordered_set<int> num_set(nums.begin(), nums.end());
5        unordered_map<int, int> table;
6        int max_val = 0;
7
8        for (int num : num_set) {
9            // Check if neighbors exist in the table
10            int x = table.count(num - 1) ? table[num - 1] : 0;
11            int y = table.count(num + 1) ? table[num + 1] : 0;
12
13            // Calculate new length for the combined sequence
14            int val = x + y + 1;
15
16            // Update the boundaries of the sequence
17            // num - x -> start, num + y -> end
18            table[num] = val; 
19            table[num - x] = val;
20            table[num + y] = val;
21
22         
23            max_val = max(max_val, val);
24        }
25
26        return max_val;
27    }
28};