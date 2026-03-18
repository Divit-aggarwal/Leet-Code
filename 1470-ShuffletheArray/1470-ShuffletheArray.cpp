// Last updated: 18/03/2026, 11:36:14
1class Solution {
2public:
3    vector<int> findErrorNums(vector<int>& nums) {
4        unordered_map<int, int> map;
5        vector<int> q;
6        int s = 0;
7        int e = nums.size();
8        int ne = e * (e + 1) / 2;
9
10        for (int i : nums) {
11            s = s + i;
12            if (map.count(i)) {
13                map[i]++;
14            } else {
15                map[i] = 1;
16            }
17        }
18        for (const auto& x : map) {
19            if (x.second > 1) {
20                q.push_back(x.first);
21                int f = s - ne - x.first;
22                q.push_back(abs(f));
23                break;
24            }
25        }
26        return q;
27    }
28};