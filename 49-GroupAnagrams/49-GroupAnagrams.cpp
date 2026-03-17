// Last updated: 18/03/2026, 01:19:41
1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        unordered_map<string, vector<string>> res;
5        for (const auto& s : strs) {
6            string sortedS = s;
7            sort(sortedS.begin(), sortedS.end());
8            res[sortedS].push_back(s);
9        }
10        vector<vector<string>> result;
11        for (auto& pair : res) {
12            result.push_back(pair.second);
13        }
14        return result;
15    }
16};