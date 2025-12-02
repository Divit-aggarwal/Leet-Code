// Last updated: 02/12/2025, 19:46:15
1class Solution {
2public:
3    int compress(vector<char>& chars) {
4        int ans = 0;
5        int i = 0;
6        while (i < chars.size()) {
7            int j = i + 1;
8            while (j < chars.size() && chars[i] == chars[j]) {
9                j++;
10            }
11            chars[ans++] = chars[i];
12            int count = j - i;
13            if (count > 1) {
14                string x = to_string(count);
15                for (char c : x) {
16                    chars[ans++] = c;
17                }
18            }
19            i = j;
20        }
21        return ans;
22    }
23};